/*
 * XREFs of ExpWorkerFactoryFinishDeferredWork @ 0x1402D38E0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     AlpciDestroyDeferredMessageContext @ 0x1409D8720 (AlpciDestroyDeferredMessageContext.c)
 */

unsigned __int64 __fastcall ExpWorkerFactoryFinishDeferredWork(__int64 a1)
{
  _DWORD *v1; // rbx
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rcx

  v1 = (_DWORD *)(a1 + 36);
  result = *(unsigned int *)(a1 + 36);
  if ( (result & 1) != 0 )
  {
    AlpciDestroyDeferredMessageContext();
    *v1 &= ~1u;
    result = (unsigned int)*v1;
  }
  if ( (result & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) == 0 && CurrentThread->ApcStateIndex != 1 )
    {
      result = (unsigned __int64)CurrentThread->Teb;
      if ( result )
        *(_QWORD *)(result + 696) = 0LL;
    }
    *v1 &= ~2u;
  }
  return result;
}
