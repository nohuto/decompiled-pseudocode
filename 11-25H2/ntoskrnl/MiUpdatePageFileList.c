/*
 * XREFs of MiUpdatePageFileList @ 0x14066E9BC
 * Callers:
 *     MiIncreaseCommitLimits @ 0x14067A97C (MiIncreaseCommitLimits.c)
 *     MiDeletePagefile @ 0x1407DF058 (MiDeletePagefile.c)
 *     MiInsertPageFileInList @ 0x1407DF450 (MiInsertPageFileInList.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402A8320 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
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
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E37048);
  }
  else
  {
    v7 = ExAcquireSpinLockExclusive(&dword_140E37048);
  }
  if ( (a2 & 1) == 0 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140E37040, (__int64)v6);
    return (_UNKNOWN **)MiReleaseSpinLockExclusive(&dword_140E37048, v7);
  }
  v8 = *(_QWORD *)(a1 + 24);
  *(_WORD *)(a1 + 172) |= 0x100u;
  v9 = (_QWORD *)qword_140E37040;
  if ( !qword_140E37040 )
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
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E37040, (unsigned __int64)v9, v3, v6);
  return (_UNKNOWN **)MiReleaseSpinLockExclusive(&dword_140E37048, v7);
}
