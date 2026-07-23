/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x14044B3D0
 * Callers:
 *     CcGetVacbMiss @ 0x140356790 (CcGetVacbMiss.c)
 *     FsRtlCancelNotify @ 0x1403CC4E0 (FsRtlCancelNotify.c)
 *     CcCopyBytesToUserBuffer @ 0x140405000 (CcCopyBytesToUserBuffer.c)
 *     CcLockSystemCacheBuffer @ 0x1404051E8 (CcLockSystemCacheBuffer.c)
 *     FsRtlNormalizeNtstatus @ 0x14044B3A0 (FsRtlNormalizeNtstatus.c)
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 *     CcMdlWriteComplete2 @ 0x1404567A4 (CcMdlWriteComplete2.c)
 *     CcAsyncReadPrefetch @ 0x140457450 (CcAsyncReadPrefetch.c)
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 *     CcAcquireByteRangeForWrite @ 0x1404D5E90 (CcAcquireByteRangeForWrite.c)
 *     CcPerformReadAhead @ 0x1404D78D0 (CcPerformReadAhead.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140708070 (FsRtlPrepareMdlWriteDev.c)
 *     RawDispatch @ 0x1408AD4A0 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x1409FD7C0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1409FE4F0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlCopyRead @ 0x140A1B070 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x140A2FA90 (FsRtlCopyWrite.c)
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
