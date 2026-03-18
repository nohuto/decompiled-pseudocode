/*
 * XREFs of MiUpdatePageFileList @ 0x14067A25C
 * Callers:
 *     MiIncreaseCommitLimits @ 0x14068620C (MiIncreaseCommitLimits.c)
 *     MiDeletePagefile @ 0x1407EEEF8 (MiDeletePagefile.c)
 *     MiInsertPageFileInList @ 0x1407EF2F0 (MiInsertPageFileInList.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x14025FDD0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

_UNKNOWN **__fastcall MiUpdatePageFileList(__int64 a1, char a2)
{
  _UNKNOWN **result; // rax
  bool v3; // bl
  _QWORD *v6; // r14
  KIRQL v7; // bp
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = 0;
  if ( !*(_QWORD *)(a1 + 24) )
    return result;
  v6 = (_QWORD *)(a1 + 224);
  if ( (a2 & 2) != 0 )
  {
    v7 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E37288);
  }
  else
  {
    v7 = ExAcquireSpinLockExclusive(&dword_140E37288);
  }
  if ( (a2 & 1) == 0 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140E37280, (__int64)v6);
    return (_UNKNOWN **)MiReleaseSpinLockExclusive(&dword_140E37288, v7);
  }
  v8 = *(_QWORD *)(a1 + 24);
  *(_WORD *)(a1 + 172) |= 0x100u;
  v9 = (_QWORD *)qword_140E37280;
  if ( !qword_140E37280 )
    goto LABEL_13;
  while ( v8 < *(v9 - 25) )
  {
    v10 = (_QWORD *)*v9;
    if ( !*v9 )
      goto LABEL_13;
LABEL_11:
    v9 = v10;
  }
  v10 = (_QWORD *)v9[1];
  if ( v10 )
    goto LABEL_11;
  v3 = 1;
LABEL_13:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E37280, (unsigned __int64)v9, v3, v6);
  return (_UNKNOWN **)MiReleaseSpinLockExclusive(&dword_140E37288, v7);
}
