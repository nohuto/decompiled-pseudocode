/*
 * XREFs of HalpTimerInitializeProfiling @ 0x140549DCC
 * Callers:
 *     HalpTimerInitSystem @ 0x14053AFA0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpSetProfileSourceInterval @ 0x1404FA7C0 (HalpSetProfileSourceInterval.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x140542DE8 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpTimerConfigureInterrupt @ 0x140547380 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x14055A460 (HalpInterruptSetIdtEntry.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerInitializeProfiling(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v5; // edi
  int v6; // r8d
  __int64 v7; // r9
  int v8; // ecx
  __int64 InternalData; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // [rsp+40h] [rbp-28h] BYREF
  __int128 v19; // [rsp+48h] [rbp-20h] BYREF

  v4 = HalpProfileTimer;
  v5 = 0;
  v19 = 0LL;
  if ( HalpProfileData || (HalpProfileData = (__int64)HalpMmAllocatePerProcessorMemory(296)) != 0 )
  {
    v18 = 10000;
    HalpSetProfileSourceInterval(0LL, (__int64)&v18, a3, a4);
    if ( KeGetPcr()->Prcb.Number )
    {
      if ( v4 )
      {
        LOBYTE(v6) = 15;
        HalpInterruptSetIdtEntry(253, (unsigned int)HalpTimerProfileInterrupt, v6, v7, -3LL);
        if ( (*(_DWORD *)(v4 + 224) & 1) != 0 )
        {
          InternalData = HalpTimerGetInternalData(v4);
          v5 = guard_dispatch_icall_no_overrides(InternalData, v10, v11, v12);
          if ( v5 >= 0 )
          {
            v13 = HalpTimerGetInternalData(v4);
            guard_dispatch_icall_no_overrides(v13, v14, v15, v16);
          }
        }
      }
    }
    else if ( v4 )
    {
      v8 = *(_DWORD *)KiGlobalState;
      *((_QWORD *)&v19 + 1) = (unsigned __int16)(*(_DWORD *)KiGlobalState >> 6);
      *(_QWORD *)&v19 = 1LL << (v8 & 0x3F);
      return (unsigned int)HalpTimerConfigureInterrupt(
                             v4,
                             0xFDu,
                             15,
                             v7,
                             -3LL,
                             1u,
                             &v19,
                             (__int64)HalpTimerProfileInterrupt);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v5;
}
