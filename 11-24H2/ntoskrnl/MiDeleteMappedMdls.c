/*
 * XREFs of MiDeleteMappedMdls @ 0x140469D6C
 * Callers:
 *     MiMappedPageWriter @ 0x140369760 (MiMappedPageWriter.c)
 * Callees:
 *     MiFreeModWriterEntry @ 0x14043A49C (MiFreeModWriterEntry.c)
 *     MiUnlockPartitionMappedWriter @ 0x140469EA0 (MiUnlockPartitionMappedWriter.c)
 *     MiLockPartitionMappedWriter @ 0x140469F04 (MiLockPartitionMappedWriter.c)
 */

__int64 __fastcall MiDeleteMappedMdls(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rax

  CurrentThread = KeGetCurrentThread();
  MiLockPartitionMappedWriter(a1, CurrentThread);
  v3 = (_QWORD **)(a1 + 680);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    MiUnlockPartitionMappedWriter(a1, CurrentThread);
    MiFreeModWriterEntry(v4, 1u);
    MiLockPartitionMappedWriter(a1, CurrentThread);
  }
  return MiUnlockPartitionMappedWriter(a1, CurrentThread);
}
