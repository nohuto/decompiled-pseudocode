/*
 * XREFs of FsRtlPostStackOverflow @ 0x14057E8C0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpPostStackOverflow @ 0x14057E9FC (FsRtlpPostStackOverflow.c)
 */

void __stdcall FsRtlPostStackOverflow(PVOID Context, PKEVENT Event, PFSRTL_STACK_OVERFLOW_ROUTINE StackOverflowRoutine)
{
  FsRtlpPostStackOverflow(Context, Event, StackOverflowRoutine, 0LL);
}
