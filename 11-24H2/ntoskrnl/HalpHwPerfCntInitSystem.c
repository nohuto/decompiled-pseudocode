/*
 * XREFs of HalpHwPerfCntInitSystem @ 0x140B4C570
 * Callers:
 *     <none>
 * Callees:
 *     HalpInitializeUncoreProfiling @ 0x14055A7F0 (HalpInitializeUncoreProfiling.c)
 *     HalpPmuArbiterQueryRegistryQuantum @ 0x1406FE324 (HalpPmuArbiterQueryRegistryQuantum.c)
 *     HalpCompleteInitializeProfiling @ 0x140B4EA90 (HalpCompleteInitializeProfiling.c)
 *     HalpInitializeProfiling @ 0x140B4EAB8 (HalpInitializeProfiling.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140C0E7E4 (HalpInitializePmcCounterSetInfo.c)
 *     HalpInitializePmuArbiter @ 0x140C0E8C8 (HalpInitializePmuArbiter.c)
 */

__int64 __fastcall HalpHwPerfCntInitSystem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v5; // edi

  v4 = 0;
  v5 = a2;
  if ( (_DWORD)a1 != 13 )
  {
    if ( (_DWORD)a1 != 17 )
    {
      if ( (_DWORD)a1 != 19 )
      {
        if ( (_DWORD)a1 == 21 )
        {
          HalpInitializeUncoreProfiling(a1, a2, a3, a4);
        }
        else if ( (_DWORD)a1 == 27 )
        {
          HalpPmuArbiterQueryRegistryQuantum();
        }
        return (unsigned int)v4;
      }
      v4 = HalpInitializeProfiling((unsigned int)a2);
      if ( v4 < 0 )
        return (unsigned int)v4;
    }
    HalpCompleteInitializeProfiling();
    return (unsigned int)v4;
  }
  off_140E00A10[0] = (__int64 (__fastcall *)())HalpAllocatePmcCounterSet;
  off_140E00C80[0] = (__int64 (__fastcall *)())HalpAllocatePmcCounterSetEx;
  off_140E00A20[0] = (__int64 (__fastcall *)())HalpFreePmcCounterSet;
  off_140E00A18[0] = (__int64 (__fastcall *)())HalpCollectPmcCounters;
  off_140E00C88[0] = (__int64 (__fastcall *)())HalpStartProfileInterruptEx;
  off_140E00CC0[0] = HalpRequestPmuAccess;
  off_140E00CD0[0] = HalpReleasePmuAccessRequest;
  HalpInitializePmcCounterSetInfo();
  v4 = HalpInitializeProfiling(v5);
  if ( v4 >= 0 )
  {
    HalpPerfInterruptHandlerRegistrationLock = 0LL;
    HalpInitializePmuArbiter();
  }
  return (unsigned int)v4;
}
