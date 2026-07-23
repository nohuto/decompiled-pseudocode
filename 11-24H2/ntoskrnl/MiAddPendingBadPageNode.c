/*
 * XREFs of MiAddPendingBadPageNode @ 0x140674684
 * Callers:
 *     MiSetPfnRemovalRequested @ 0x1406757A0 (MiSetPfnRemovalRequested.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiAddPendingBadPageNode(unsigned __int64 a1, _QWORD *a2)
{
  bool v2; // bl
  _QWORD *v5; // rdx
  _QWORD *v6; // rax

  v2 = 0;
  if ( a2 )
    a2[3] = a1;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E30010);
  if ( !a2 )
  {
    ++qword_140E30018;
    goto LABEL_13;
  }
  v5 = (_QWORD *)qword_140E30000;
  if ( !qword_140E30000 )
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
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E30000, (unsigned __int64)v5, v2, a2);
LABEL_13:
  ++qword_140E30008;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E30010);
}
