/*
 * XREFs of FsRtlpOplockPerfCleanupData @ 0x1406FFCBC
 * Callers:
 *     FsRtlpOplockPerfPrepareToSendData @ 0x1406FFE24 (FsRtlpOplockPerfPrepareToSendData.c)
 *     FsRtlpOplockPerfSendData @ 0x1406FFED4 (FsRtlpOplockPerfSendData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void FsRtlpOplockPerfCleanupData()
{
  void *v0; // rcx
  void *v1; // rcx

  byte_140E658E0 = 0;
  v0 = (void *)_InterlockedExchange64(&g_OplockPerfSummaryContext, 0LL);
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  g_OplockPerfSummaryContext = 0LL;
  xmmword_140E658F0 = 0LL;
  v1 = (void *)_InterlockedExchange64(&qword_140E658E8, 0LL);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  qword_140E658E8 = 0LL;
}
