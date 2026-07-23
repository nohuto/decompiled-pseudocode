/*
 * XREFs of IopIsIosbInLockedRange @ 0x140A16BB8
 * Callers:
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 * Callees:
 *     IopQueueIrpToFileObject @ 0x1404DC180 (IopQueueIrpToFileObject.c)
 */

char __fastcall IopIsIosbInLockedRange(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rbx
  char result; // al
  unsigned __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 208);
  if ( v2 )
  {
    v5 = *(_QWORD *)(v2 + 24);
    if ( v5 )
    {
      while ( v5 )
      {
        v7 = *(_QWORD *)(a2 + 72);
        if ( v7 >= *(_QWORD *)v5
          && v7 + 16 <= *(_QWORD *)(v5 + 8)
          && *(_KPROCESS **)(v5 + 32) == KeGetCurrentThread()->ApcState.Process
          && IopQueueIrpToFileObject(a2, a1, 0) )
        {
          result = 1;
          *(_QWORD *)(a2 + 72) += *(_QWORD *)(v5 + 24) - *(_QWORD *)v5;
          return result;
        }
        v5 = *(_QWORD *)(v5 + 40);
      }
    }
  }
  return 0;
}
