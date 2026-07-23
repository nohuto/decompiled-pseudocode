/*
 * XREFs of HalpLbrStartRecording @ 0x140702080
 * Callers:
 *     <none>
 * Callees:
 *     HalpLbrConfigurationWorker @ 0x140701F38 (HalpLbrConfigurationWorker.c)
 */

__int64 __fastcall HalpLbrStartRecording(int a1, int *a2)
{
  bool v4; // zf
  int v5; // eax

  if ( !HalpLbrStackSize )
    return 3221225659LL;
  if ( (a1 & 0xFFFFF800) != 0 || (a1 & 3) == 3 || (a1 & 0xFFFFFDFC) != 0 && (a1 & 0x200) != 0 )
    return 3221225485LL;
  if ( HalpLbrType == 2 )
  {
    if ( (a1 & 0xFFFFFFFC) != 0 && (HalpIntelArchLbrCapabilities & 1) == 0
      || (a1 & 0xFFFFFE03) != 0 && (HalpIntelArchLbrCapabilities & 2) == 0
      || (a1 & 0xFFFFFDFF) != 0 && (HalpIntelArchLbrCapabilities & 4) == 0 )
    {
      return 3221225485LL;
    }
  }
  else if ( HalpLbrType == 3 && (a1 & 0x200) != 0 )
  {
    return 3221225485LL;
  }
  if ( _InterlockedCompareExchange(&HalpLbrIsInUse, 1, 0) )
    return 3221227272LL;
  _interlockedbittestandset(&KiCpuTracingFlags, 1u);
  HalpLbrConfigurationWorker(a1, 1u);
  v4 = HalpLbrCurrentHandle == -1;
  v5 = ++HalpLbrCurrentHandle;
  if ( v4 )
  {
    v5 = 1;
    HalpLbrCurrentHandle = 1;
  }
  HalpLbrAreOperationsAllowed = 1;
  *a2 = v5;
  return 0LL;
}
