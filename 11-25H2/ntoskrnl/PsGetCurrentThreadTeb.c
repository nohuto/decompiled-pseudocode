/*
 * XREFs of PsGetCurrentThreadTeb @ 0x14046BA40
 * Callers:
 *     EtwTraceThread @ 0x1408F592C (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x1408F5CC0 (EtwpPsProvTraceThread.c)
 * Callees:
 *     <none>
 */

PVOID PsGetCurrentThreadTeb(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    return 0LL;
  else
    return CurrentThread->Teb;
}
