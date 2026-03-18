/*
 * XREFs of MiDeleteMappedMdls @ 0x14040A9BC
 * Callers:
 *     MiMappedPageWriter @ 0x14040C760 (MiMappedPageWriter.c)
 * Callees:
 *     MiUnlockPartitionMappedWriter @ 0x14040AAF0 (MiUnlockPartitionMappedWriter.c)
 *     MiLockPartitionMappedWriter @ 0x14040AB54 (MiLockPartitionMappedWriter.c)
 *     MiFreeModWriterEntry @ 0x14040ABB0 (MiFreeModWriterEntry.c)
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
    MiFreeModWriterEntry(v4);
    MiLockPartitionMappedWriter(a1, CurrentThread);
  }
  return MiUnlockPartitionMappedWriter(a1, CurrentThread);
}
