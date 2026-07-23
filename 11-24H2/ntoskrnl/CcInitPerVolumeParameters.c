/*
 * XREFs of CcInitPerVolumeParameters @ 0x14057AC08
 * Callers:
 *     CcInitializeCacheManager @ 0x140C17A88 (CcInitializeCacheManager.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 */

__int64 CcInitPerVolumeParameters()
{
  char v0; // al
  __int64 result; // rax

  CcEnablePerVolumeLazyWriter = 1;
  CcEnableAsyncLazywrite = 1;
  if ( CcEnablePerVolumeLazyWriterOverride )
  {
    v0 = 1;
    if ( CcEnablePerVolumeLazyWriterOverride == 1 )
      v0 = 1;
  }
  else
  {
    CcEnablePerVolumeLazyWriter = 0;
    v0 = 0;
  }
  if ( CcEnableAsyncLazywriteOverride )
  {
    if ( CcEnableAsyncLazywriteOverride == 1 && !v0 )
      DbgPrintEx(
        0x7Fu,
        2u,
        "CcInitPerVolumeParameters: Setting EnableAsyncLazywrite requires per-Volume Lazywriter is to be enabled!\n");
  }
  else
  {
    CcEnableAsyncLazywrite = 0;
  }
  if ( CcEnableAsyncLazywriteMultiOverride )
  {
    if ( CcEnableAsyncLazywriteMultiOverride == 1 )
    {
      if ( CcEnablePerVolumeLazyWriter && CcEnableAsyncLazywrite )
        CcEnableAsyncLazywriteMulti = 1;
      else
        DbgPrintEx(
          0x7Fu,
          2u,
          "CcInitPerVolumeParameters: Setting EnableAsyncLazywriteMulti requires per-Volume Lazywriter and (simple) Async"
          " Lazywriter to be enabled!\n");
    }
  }
  else
  {
    CcEnableAsyncLazywriteMulti = 0;
  }
  result = (unsigned int)(ExCriticalWorkerThreads - 1);
  CcAsyncWriteBehindWaitTimeout.QuadPart = -600000000LL;
  CcAsyncLazywriteQueueDepthPerThread = 16;
  if ( (unsigned int)result > 0x32 )
    result = 50LL;
  CcMaxAsyncLazywriteCompletionWorkers = 8;
  CcMaxAsyncLazywriteWorkers = result;
  return result;
}
