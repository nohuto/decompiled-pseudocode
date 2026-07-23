/*
 * XREFs of AlpcpCreateRegion @ 0x140893390
 * Callers:
 *     AlpcpCreateSectionView @ 0x1408950B8 (AlpcpCreateSectionView.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AlpcpAllocateBlob @ 0x140893EF0 (AlpcpAllocateBlob.c)
 *     AlpcpReferenceBlob @ 0x14089EB60 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpCreateRegion(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  _QWORD *v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  unsigned __int64 v15; // r9
  __int64 v16; // r8
  _QWORD *Blob; // rax
  _QWORD *v18; // rsi
  _QWORD *v19; // rax
  __int64 v21; // r10
  unsigned __int64 v22; // rax
  __int64 v23; // rbx

  CurrentThread = KeGetCurrentThread();
  *a4 = 0LL;
  if ( *(_KPROCESS **)(BugCheckParameter2 + 32) != CurrentThread->ApcState.Process )
    return 3221225506LL;
  v8 = ~((unsigned int)AlpcpViewGranularity - 1LL) & (a3 + (unsigned int)(AlpcpViewGranularity - 1));
  v9 = (unsigned int)(AlpcpRegionGranularity - 1);
  v10 = ~((unsigned int)AlpcpRegionGranularity - 1LL);
  v11 = v10 & (v9 + a3);
  if ( v8 < a3 || v11 < a3 )
    return 3221225485LL;
  v12 = (_QWORD *)(BugCheckParameter2 + 56);
  if ( a2 )
  {
    a2 = v10 & (v9 + a2);
  }
  else
  {
    v13 = (_QWORD *)*v12;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    while ( v13 != v12 )
    {
      v21 = v13[3];
      v22 = v21 - a2;
      if ( v21 - a2 == v11 )
      {
        v12 = v13;
        goto LABEL_9;
      }
      if ( v22 > v11 && (!v14 || v15 > v22) )
      {
        v14 = v13;
        v16 = a2;
        v15 = v13[3] - a2;
      }
      v23 = v13[4];
      v13 = (_QWORD *)*v13;
      a2 = v21 + v23;
    }
    if ( v14 )
    {
      v12 = v14;
      a2 = v16;
    }
    else if ( *(_QWORD *)(BugCheckParameter2 + 8) - a2 < v11 )
    {
      return 3221225626LL;
    }
  }
LABEL_9:
  Blob = (_QWORD *)AlpcpAllocateBlob(AlpcRegionType, 88LL, 0LL);
  v18 = Blob;
  if ( !Blob )
    return 3221225626LL;
  memset_0(Blob, 0, 0x58uLL);
  v18[8] = v18 + 7;
  v18[7] = v18 + 7;
  *((_DWORD *)v18 + 12) &= ~1u;
  v18[3] = a2;
  v18[4] = v11;
  v18[5] = v8;
  AlpcpReferenceBlob(BugCheckParameter2);
  v18[2] = BugCheckParameter2;
  v18[1] = v12[1];
  *v18 = v12;
  v19 = (_QWORD *)v12[1];
  *a4 = v18;
  *v19 = v18;
  v12[1] = v18;
  ++*(_DWORD *)(BugCheckParameter2 + 52);
  return 0LL;
}
