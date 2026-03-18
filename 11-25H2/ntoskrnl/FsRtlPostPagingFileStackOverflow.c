/*
 * XREFs of FsRtlPostPagingFileStackOverflow @ 0x14057E8A0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpPostStackOverflow @ 0x14057E9FC (FsRtlpPostStackOverflow.c)
 */

void __stdcall FsRtlPostPagingFileStackOverflow(
        PVOID Context,
        PKEVENT Event,
        PFSRTL_STACK_OVERFLOW_ROUTINE StackOverflowRoutine)
{
  char v3; // r9

  v3 = 1;
  FsRtlpPostStackOverflow(Context, Event, StackOverflowRoutine, v3);
}
