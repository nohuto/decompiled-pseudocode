/*
 * XREFs of FsRtlpOplockPerfCleanupData @ 0x14070BB9C
 * Callers:
 *     FsRtlpOplockPerfPrepareToSendData @ 0x14070BD04 (FsRtlpOplockPerfPrepareToSendData.c)
 *     FsRtlpOplockPerfSendData @ 0x14070BDB4 (FsRtlpOplockPerfSendData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void FsRtlpOplockPerfCleanupData()
{
  void *v0; // rcx
  void *v1; // rcx

  byte_140E65B20 = 0;
  v0 = (void *)_InterlockedExchange64(&g_OplockPerfSummaryContext, 0LL);
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  g_OplockPerfSummaryContext = 0LL;
  xmmword_140E65B30 = 0LL;
  v1 = (void *)_InterlockedExchange64(&qword_140E65B28, 0LL);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  qword_140E65B28 = 0LL;
}
