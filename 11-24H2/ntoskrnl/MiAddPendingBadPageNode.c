/*
 * XREFs of MiAddPendingBadPageNode @ 0x1406734B4
 * Callers:
 *     MiSetPfnRemovalRequested @ 0x1406745D0 (MiSetPfnRemovalRequested.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x14025FDD0 (RtlAvlInsertNodeEx.c)
 */

void __fastcall MiAddPendingBadPageNode(unsigned __int64 a1, _QWORD *a2)
{
  bool v2; // bl
  _QWORD *v5; // rdx
  _QWORD *v6; // rax

  v2 = 0;
  if ( a2 )
    a2[3] = a1;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2FED0);
  if ( !a2 )
  {
    ++qword_140E2FED8;
    goto LABEL_13;
  }
  v5 = (_QWORD *)qword_140E2FEC0;
  if ( !qword_140E2FEC0 )
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
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E2FEC0, (unsigned __int64)v5, v2, a2);
LABEL_13:
  ++qword_140E2FEC8;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2FED0);
}
