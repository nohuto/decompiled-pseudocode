/*
 * XREFs of ?ndisVerifierInitialization@@YAEXZ @ 0x14008C580
 * Callers:
 *     ndisQueryStatisticsOids @ 0x140086E40 (ndisQueryStatisticsOids.c)
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     <none>
 */

unsigned __int8 ndisVerifierInitialization(void)
{
  if ( (int)DifRegisterClassDriverPlugin(21LL, &off_1400F30C0, 400LL) < 0 )
    return 0;
  ndisVerifierWdmDispatch = (struct _VF_WDM_DISPATCH_TABLE *)VfQueryDispatchTable(0LL, 80LL);
  if ( !ndisVerifierWdmDispatch )
    return 0;
  ndisVerifierNdisDispatch = (struct _VF_NDIS_DISPATCH_TABLE *)VfQueryDispatchTable(2LL, 168LL);
  if ( !ndisVerifierNdisDispatch )
    return 0;
  ndisVerifierLevel = 0x200000;
  if ( (ndisFlags & 4) != 0 )
    ndisVerifierLevel = 2097156;
  qword_14011C5E8 = (__int64)&ndisMiniportTrackAllocList;
  ndisMiniportTrackAllocList.Flink = &ndisMiniportTrackAllocList;
  qword_14011C5D8 = (__int64)&ndisDriverTrackAllocList;
  ndisDriverTrackAllocList.Flink = &ndisDriverTrackAllocList;
  KeInitializeSpinLock(&ndisTrackMemLock);
  return 1;
}
