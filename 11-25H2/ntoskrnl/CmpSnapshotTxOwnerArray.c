/*
 * XREFs of CmpSnapshotTxOwnerArray @ 0x14086AED4
 * Callers:
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 *     CmpSetKeySecurity @ 0x140977054 (CmpSetKeySecurity.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpSnapshotTxOwnerArray(__int64 a1, unsigned int *a2, void ***a3)
{
  __int64 v3; // rbx
  unsigned int v8; // edi
  __int64 v9; // rbp
  void **Pool2; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  void *v13; // rcx
  void **v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  void *v17; // rcx

  v3 = 0LL;
  if ( !*(_DWORD *)a1 )
    return 3221225485LL;
  v8 = *(_DWORD *)a1 & 0x7FFFFFFF;
  *a2 = 0;
  v9 = v8;
  Pool2 = (void **)ExAllocatePool2(0x100uLL);
  *a3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  if ( v8 == 1 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = *(_QWORD *)(v11 + 56);
    if ( (*(_DWORD *)(v12 + 48) & 0x80u) == 0 )
    {
      *Pool2 = *(void **)(v12 + 72);
      v13 = **a3;
    }
    else
    {
      *Pool2 = *(void **)(v12 + 56);
      v13 = (void *)(*(_QWORD *)(*(_QWORD *)(v11 + 56) + 56LL) & 0xFFFFFFFFFFFFFFFEuLL);
    }
    PsReferenceSiloContext(v13);
  }
  else if ( v8 )
  {
    do
    {
      v14 = *a3;
      v15 = *(_QWORD *)(v3 * 8 + *(_QWORD *)(a1 + 8));
      v16 = *(_QWORD *)(v15 + 56);
      if ( (*(_DWORD *)(v16 + 48) & 0x80u) == 0 )
      {
        v14[v3] = *(void **)(v16 + 72);
        v17 = (*a3)[v3];
      }
      else
      {
        v14[v3] = *(void **)(v16 + 56);
        v17 = (void *)(*(_QWORD *)(*(_QWORD *)(v15 + 56) + 56LL) & 0xFFFFFFFFFFFFFFFEuLL);
      }
      PsReferenceSiloContext(v17);
      ++v3;
      --v9;
    }
    while ( v9 );
  }
  *a2 = v8;
  return 0LL;
}
