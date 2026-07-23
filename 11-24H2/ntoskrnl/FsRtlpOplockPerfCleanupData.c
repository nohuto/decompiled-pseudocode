/*
 * XREFs of FsRtlpOplockPerfCleanupData @ 0x140709730
 * Callers:
 *     FsRtlpOplockPerfPrepareToSendData @ 0x140709898 (FsRtlpOplockPerfPrepareToSendData.c)
 *     FsRtlpOplockPerfSendData @ 0x140709948 (FsRtlpOplockPerfSendData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void FsRtlpOplockPerfCleanupData()
{
  void *v0; // rcx
  void *v1; // rcx

  byte_140E65D80 = 0;
  v0 = (void *)_InterlockedExchange64(&g_OplockPerfSummaryContext, 0LL);
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  g_OplockPerfSummaryContext = 0LL;
  xmmword_140E65D90 = 0LL;
  v1 = (void *)_InterlockedExchange64(&qword_140E65D88, 0LL);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  qword_140E65D88 = 0LL;
}
