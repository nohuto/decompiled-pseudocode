/*
 * XREFs of PsGetCurrentThreadTeb @ 0x14046A6F0
 * Callers:
 *     EtwTraceThread @ 0x1408A6918 (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x1408A6CAC (EtwpPsProvTraceThread.c)
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
