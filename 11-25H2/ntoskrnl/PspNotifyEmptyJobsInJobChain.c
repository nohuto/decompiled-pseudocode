/*
 * XREFs of PspNotifyEmptyJobsInJobChain @ 0x1408E03FC
 * Callers:
 *     PspRundownSingleProcess @ 0x1408E0448 (PspRundownSingleProcess.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x1408DFF78 (PspEvaluateAndNotifyEmptyJob.c)
 */

void __fastcall PspNotifyEmptyJobsInJobChain(__int64 a1)
{
  signed __int8 v1; // cf
  struct _KEVENT *Flink; // rbx
  char v3; // di

  v1 = _interlockedbittestandset((volatile signed __int32 *)(a1 + 496), 0xBu);
  Flink = *(struct _KEVENT **)(a1 + 672);
  v3 = !v1;
  while ( Flink )
  {
    PspEvaluateAndNotifyEmptyJob(Flink, v3, 1);
    Flink = (struct _KEVENT *)Flink[54].Header.WaitListHead.Flink;
  }
}
