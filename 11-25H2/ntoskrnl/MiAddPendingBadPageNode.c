/*
 * XREFs of MiAddPendingBadPageNode @ 0x140667A54
 * Callers:
 *     MiSetPfnRemovalRequested @ 0x140668B70 (MiSetPfnRemovalRequested.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402A8320 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiAddPendingBadPageNode(unsigned __int64 a1, _QWORD *a2)
{
  bool v2; // bl
  _QWORD *v5; // rdx
  _QWORD *v6; // rax

  v2 = 0;
  if ( a2 )
    a2[3] = a1;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2FC90);
  if ( !a2 )
  {
    ++qword_140E2FC98;
    goto LABEL_13;
  }
  v5 = (_QWORD *)qword_140E2FC80;
  if ( !qword_140E2FC80 )
    goto LABEL_11;
  while ( a1 < v5[3] )
  {
    v6 = (_QWORD *)*v5;
    if ( !*v5 )
      goto LABEL_11;
LABEL_9:
    v5 = v6;
  }
  v6 = (_QWORD *)v5[1];
  if ( v6 )
    goto LABEL_9;
  v2 = 1;
LABEL_11:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E2FC80, (unsigned __int64)v5, v2, a2);
LABEL_13:
  ++qword_140E2FC88;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2FC90);
}
