/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x1404562A0
 * Callers:
 *     CcMdlWriteComplete2 @ 0x1402D2A60 (CcMdlWriteComplete2.c)
 *     CcGetVacbMiss @ 0x1403B3D50 (CcGetVacbMiss.c)
 *     FsRtlCancelNotify @ 0x1403EE140 (FsRtlCancelNotify.c)
 *     CcCopyBytesToUserBuffer @ 0x140404FD0 (CcCopyBytesToUserBuffer.c)
 *     CcLockSystemCacheBuffer @ 0x1404051B8 (CcLockSystemCacheBuffer.c)
 *     FsRtlNormalizeNtstatus @ 0x140456270 (FsRtlNormalizeNtstatus.c)
 *     CcInitializeCacheMapInternal @ 0x14045E3B0 (CcInitializeCacheMapInternal.c)
 *     CcAsyncReadPrefetch @ 0x1404627C8 (CcAsyncReadPrefetch.c)
 *     CcSetFileSizesEx @ 0x1404A5BD0 (CcSetFileSizesEx.c)
 *     CcAcquireByteRangeForWrite @ 0x1404DCD80 (CcAcquireByteRangeForWrite.c)
 *     CcPerformReadAhead @ 0x1404DE7C0 (CcPerformReadAhead.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1406FE5D0 (FsRtlPrepareMdlWriteDev.c)
 *     RawDispatch @ 0x14099D320 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x140A02350 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A03080 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlCopyRead @ 0x140A1D340 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140A34DE0 (FsRtlCopyWrite.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsNtstatusExpected(NTSTATUS Exception)
{
  if ( Exception <= -1073741753 )
    return Exception != -1073741753
        && Exception != -2147483647
        && Exception != -2147483646
        && Exception != -2147483645
        && Exception != -1073741819
        && Exception != -1073741795
        && Exception != -1073741754;
  if ( Exception == -1073741684
    || Exception == -1073741676
    || Exception == -1073741674
    || Exception == -1073741654
    || Exception == -1073740791 )
  {
    return 0;
  }
  return Exception != -1073740768;
}
