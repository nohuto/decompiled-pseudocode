/*
 * XREFs of HalpHwPerfCntInitSystem @ 0x140B3C570
 * Callers:
 *     <none>
 * Callees:
 *     HalpInitializeUncoreProfiling @ 0x140557EF0 (HalpInitializeUncoreProfiling.c)
 *     HalpPmuArbiterQueryRegistryQuantum @ 0x1406F2534 (HalpPmuArbiterQueryRegistryQuantum.c)
 *     HalpCompleteInitializeProfiling @ 0x140B3EA90 (HalpCompleteInitializeProfiling.c)
 *     HalpInitializeProfiling @ 0x140B3EAB8 (HalpInitializeProfiling.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140BFD7E4 (HalpInitializePmcCounterSetInfo.c)
 *     HalpInitializePmuArbiter @ 0x140BFD8C8 (HalpInitializePmuArbiter.c)
 */

__int64 __fastcall HalpHwPerfCntInitSystem(__int64 a1, unsigned int a2)
{
  int v2; // ebx

  v2 = 0;
  if ( (_DWORD)a1 != 13 )
  {
    if ( (_DWORD)a1 != 17 )
    {
      if ( (_DWORD)a1 != 19 )
      {
        if ( (_DWORD)a1 == 21 )
        {
          HalpInitializeUncoreProfiling(a1);
        }
        else if ( (_DWORD)a1 == 27 )
        {
          HalpPmuArbiterQueryRegistryQuantum();
        }
        return (unsigned int)v2;
      }
      v2 = HalpInitializeProfiling(a2);
      if ( v2 < 0 )
        return (unsigned int)v2;
    }
    HalpCompleteInitializeProfiling();
    return (unsigned int)v2;
  }
  off_140E00A10[0] = (__int64 (__fastcall *)())HalpAllocatePmcCounterSet;
  off_140E00C80[0] = (__int64 (__fastcall *)())HalpAllocatePmcCounterSetEx;
  off_140E00A20[0] = (__int64 (__fastcall *)())HalpFreePmcCounterSet;
  off_140E00A18[0] = (__int64 (__fastcall *)())HalpCollectPmcCounters;
  off_140E00C88[0] = (__int64 (__fastcall *)())HalpStartProfileInterruptEx;
  off_140E00CC0[0] = HalpRequestPmuAccess;
  off_140E00CD0[0] = HalpReleasePmuAccessRequest;
  HalpInitializePmcCounterSetInfo();
  v2 = HalpInitializeProfiling(a2);
  if ( v2 >= 0 )
  {
    HalpPerfInterruptHandlerRegistrationLock = 0LL;
    HalpInitializePmuArbiter();
  }
  return (unsigned int)v2;
}
