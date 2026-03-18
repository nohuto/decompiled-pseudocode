/*
 * XREFs of HalpTimerInitializeProfiling @ 0x1405474DC
 * Callers:
 *     HalpTimerInitSystem @ 0x1405387F0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     HalpSetProfileSourceInterval @ 0x1404F82E0 (HalpSetProfileSourceInterval.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1405405B8 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpTimerConfigureInterrupt @ 0x140544A90 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x140557B60 (HalpInterruptSetIdtEntry.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpTimerInitializeProfiling()
{
  __int64 v0; // rbx
  int v1; // edi
  int v2; // r8d
  __int64 v3; // r9
  int v4; // ecx
  __int64 InternalData; // rax
  __int64 v6; // rax
  int v8; // [rsp+40h] [rbp-28h] BYREF
  __int128 v9; // [rsp+48h] [rbp-20h] BYREF

  v0 = HalpProfileTimer;
  v1 = 0;
  v9 = 0LL;
  if ( HalpProfileData || (HalpProfileData = (__int64)HalpMmAllocatePerProcessorMemory(296)) != 0 )
  {
    v8 = 10000;
    HalpSetProfileSourceInterval(0LL, (__int64)&v8);
    if ( KeGetPcr()->Prcb.Number )
    {
      if ( v0 )
      {
        LOBYTE(v2) = 15;
        HalpInterruptSetIdtEntry(253, (unsigned int)HalpTimerProfileInterrupt, v2, v3, -3LL);
        if ( (*(_DWORD *)(v0 + 224) & 1) != 0 )
        {
          InternalData = HalpTimerGetInternalData(v0);
          v1 = guard_dispatch_icall_no_overrides(InternalData);
          if ( v1 >= 0 )
          {
            v6 = HalpTimerGetInternalData(v0);
            guard_dispatch_icall_no_overrides(v6);
          }
        }
      }
    }
    else if ( v0 )
    {
      v4 = *(_DWORD *)KiGlobalState;
      *((_QWORD *)&v9 + 1) = (unsigned __int16)(*(_DWORD *)KiGlobalState >> 6);
      *(_QWORD *)&v9 = 1LL << (v4 & 0x3F);
      return (unsigned int)HalpTimerConfigureInterrupt(
                             v0,
                             0xFDu,
                             15,
                             v3,
                             -3LL,
                             1u,
                             &v9,
                             (__int64)HalpTimerProfileInterrupt);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v1;
}
