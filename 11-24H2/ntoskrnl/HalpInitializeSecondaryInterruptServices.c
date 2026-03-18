/*
 * XREFs of HalpInitializeSecondaryInterruptServices @ 0x140C11140
 * Callers:
 *     HalpAddDevice @ 0x1406FE8E0 (HalpAddDevice.c)
 * Callees:
 *     HalpCheckSecondaryInterruptSupported @ 0x140700D00 (HalpCheckSecondaryInterruptSupported.c)
 *     HalpRecordSecondaryGsivRange @ 0x140700D78 (HalpRecordSecondaryGsivRange.c)
 *     HalpQueryMaximumGsiv @ 0x140701828 (HalpQueryMaximumGsiv.c)
 */

__int64 HalpInitializeSecondaryInterruptServices()
{
  int v0; // ebx
  int v1; // ecx
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  qword_140F8FBD8 = (__int64)&SecondaryIcList;
  SecondaryIcList = (__int64)&SecondaryIcList;
  SecondaryIcListSpinLock = 0LL;
  if ( HalpCheckSecondaryInterruptSupported() )
  {
    SecondarySignalDpc.TargetInfoAsUlong = 275;
    qword_140F8FC38 = (__int64)&SecondarySignalList;
    SecondarySignalList = (__int64)&SecondarySignalList;
    SecondarySignalDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)HalpProcessSecondarySignalList;
    SecondarySignalDpc.DeferredContext = 0LL;
    SecondarySignalDpc.DpcData = 0LL;
    SecondarySignalDpc.ProcessorHistory = 0LL;
    SecondarySignalListLock = 0LL;
    SecondarySignalDpcRunning = 0;
    v0 = HalpQueryMaximumGsiv(&v3);
    if ( v0 >= 0 )
    {
      if ( v3 + 513 >= v3 )
      {
        SecondaryGsivRangeSize = 512;
        v1 = 1024;
        SecondaryGsivAssignedCount = 0;
        if ( v3 + 1 > 0x400 )
          v1 = v3 + 1;
        SecondaryGsivRangeStart = v1;
        HalpRecordSecondaryGsivRange();
        SecondaryIcServicesEnabled = 1;
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v0;
}
