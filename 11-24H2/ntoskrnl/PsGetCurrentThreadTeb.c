/*
 * XREFs of PsGetCurrentThreadTeb @ 0x140462F90
 * Callers:
 *     EtwTraceThread @ 0x1408FCF28 (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x1409F4168 (EtwpPsProvTraceThread.c)
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
