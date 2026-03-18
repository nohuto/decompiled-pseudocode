/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x140456400
 * Callers:
 *     CcGetVacbMiss @ 0x1402D5510 (CcGetVacbMiss.c)
 *     FsRtlCancelNotify @ 0x1403DB210 (FsRtlCancelNotify.c)
 *     CcCopyBytesToUserBuffer @ 0x14040C970 (CcCopyBytesToUserBuffer.c)
 *     CcLockSystemCacheBuffer @ 0x14040CB58 (CcLockSystemCacheBuffer.c)
 *     FsRtlNormalizeNtstatus @ 0x1404563D0 (FsRtlNormalizeNtstatus.c)
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 *     CcMdlWriteComplete2 @ 0x140461194 (CcMdlWriteComplete2.c)
 *     CcAsyncReadPrefetch @ 0x140461E40 (CcAsyncReadPrefetch.c)
 *     CcSetFileSizesEx @ 0x1404A6800 (CcSetFileSizesEx.c)
 *     CcAcquireByteRangeForWrite @ 0x1404DC470 (CcAcquireByteRangeForWrite.c)
 *     CcPerformReadAhead @ 0x1404DDEB0 (CcPerformReadAhead.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14070A4B0 (FsRtlPrepareMdlWriteDev.c)
 *     RawDispatch @ 0x1409A2210 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x140A007F0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A01520 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlCopyRead @ 0x140A265F0 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140A3A470 (FsRtlCopyWrite.c)
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
