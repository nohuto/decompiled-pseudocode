/*
 * XREFs of ExpRemoveCurrentThreadFromThreadHistory @ 0x14047335C
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x14032BA00 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 */

unsigned __int8 __fastcall ExpRemoveCurrentThreadFromThreadHistory(__int64 a1)
{
  unsigned __int8 result; // al
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v4; // rdi

  result = *(_DWORD *)(a1 + 408) & 7;
  if ( result != 4 )
  {
    CurrentThread = KeGetCurrentThread();
    for ( result = 0; result < 4u; ++result )
    {
      v4 = result;
      if ( *(struct _KTHREAD **)(a1 + 8LL * result + 72) == CurrentThread )
      {
        result = ObfDereferenceObjectWithTag(CurrentThread, 0x746C6644u);
        *(_QWORD *)(a1 + 8 * v4 + 72) = 0LL;
        return result;
      }
    }
  }
  return result;
}
