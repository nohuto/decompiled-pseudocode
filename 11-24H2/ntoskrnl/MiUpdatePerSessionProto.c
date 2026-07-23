/*
 * XREFs of MiUpdatePerSessionProto @ 0x14049E78C
 * Callers:
 *     MiDereferenceSubsectionProtos @ 0x140A18924 (MiDereferenceSubsectionProtos.c)
 *     MiCreatePerSessionProtos @ 0x140A46C20 (MiCreatePerSessionProtos.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiUpdatePerSessionProto(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _DWORD *v4; // rbp
  KIRQL v8; // al
  bool v9; // r8
  unsigned __int64 *v10; // rcx
  unsigned __int8 v11; // r14
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax

  v4 = (_DWORD *)(a1 + 72);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v9 = 0;
  v10 = (unsigned __int64 *)(a2 + 24);
  v11 = v8;
  if ( !a4 )
  {
    RtlAvlRemoveNode(v10, a3);
    return MiReleaseSpinLockExclusive(v4, v11);
  }
  v13 = *v10;
  if ( !*v10 )
    goto LABEL_10;
  while ( *(_DWORD *)(a3 + 64) < *(_DWORD *)(v13 + 64) )
  {
    v14 = *(_QWORD *)v13;
    if ( !*(_QWORD *)v13 )
      goto LABEL_10;
LABEL_7:
    v13 = v14;
  }
  v14 = *(_QWORD *)(v13 + 8);
  if ( v14 )
    goto LABEL_7;
  v9 = 1;
LABEL_10:
  RtlAvlInsertNodeEx(v10, v13, v9, (_QWORD *)a3);
  return MiReleaseSpinLockExclusive(v4, v11);
}
