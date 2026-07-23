/*
 * XREFs of HalpTimerInitializeProfiling @ 0x14054768C
 * Callers:
 *     HalpTimerInitSystem @ 0x1405387E0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpSetProfileSourceInterval @ 0x1404F80A0 (HalpSetProfileSourceInterval.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x140540738 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpTimerConfigureInterrupt @ 0x140544C40 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x140558090 (HalpInterruptSetIdtEntry.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpTimerInitializeProfiling()
{
  __int64 v0; // rbx
  int v1; // edi
  int v2; // r8d
  __int64 v3; // r9
  int v4; // ecx
  __int64 InternalData; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v10; // [rsp+40h] [rbp-28h] BYREF
  __int128 v11; // [rsp+48h] [rbp-20h] BYREF

  v0 = HalpProfileTimer;
  v1 = 0;
  v11 = 0LL;
  if ( HalpProfileData || (HalpProfileData = (__int64)HalpMmAllocatePerProcessorMemory(296)) != 0 )
  {
    v10 = 10000;
    HalpSetProfileSourceInterval(0LL, (__int64)&v10);
    if ( KeGetPcr()->Prcb.Number )
    {
      if ( v0 )
      {
        LOBYTE(v2) = 15;
        HalpInterruptSetIdtEntry(253, (unsigned int)HalpTimerProfileInterrupt, v2, v3, -3LL);
        if ( (*(_DWORD *)(v0 + 224) & 1) != 0 )
        {
          InternalData = HalpTimerGetInternalData(v0);
          v1 = guard_dispatch_icall_no_overrides(InternalData, v6);
          if ( v1 >= 0 )
          {
            v7 = HalpTimerGetInternalData(v0);
            guard_dispatch_icall_no_overrides(v7, v8);
          }
        }
      }
    }
    else if ( v0 )
    {
      v4 = *(_DWORD *)KiGlobalState;
      *((_QWORD *)&v11 + 1) = (unsigned __int16)(*(_DWORD *)KiGlobalState >> 6);
      *(_QWORD *)&v11 = 1LL << (v4 & 0x3F);
      return (unsigned int)HalpTimerConfigureInterrupt(
                             v0,
                             0xFDu,
                             15,
                             v3,
                             -3LL,
                             1u,
                             &v11,
                             (__int64)HalpTimerProfileInterrupt);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v1;
}
