/*
 * XREFs of AlpcpCaptureViewAttributeInternal @ 0x140893A30
 * Callers:
 *     AlpcpCaptureViewAttribute32 @ 0x140A4D0B8 (AlpcpCaptureViewAttribute32.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcpDeleteView @ 0x14089310C (AlpcpDeleteView.c)
 *     AlpcReferenceBlobByHandle @ 0x1408938D0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpLocateSectionView @ 0x140893C6C (AlpcpLocateSectionView.c)
 *     AlpcpPrepareViewForDelivery @ 0x140894200 (AlpcpPrepareViewForDelivery.c)
 */

__int64 __fastcall AlpcpCaptureViewAttributeInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  ULONG_PTR v18; // rax
  ULONG_PTR v19; // rbx
  int v20; // ebp
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG_PTR v23; // rdi
  int v24; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_DWORD *)a2 & 0xFFF8FFFF) != 0 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a3 + 144);
  BugCheckParameter2 = v8;
  if ( v8 )
  {
    *(_QWORD *)(a3 + 144) = 0LL;
    AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v8 + 16));
    --*(_DWORD *)(v8 + 76);
    AlpcpUnlockBlob(*(_QWORD *)(v8 + 16), v9, v10, v11);
    if ( (*(_DWORD *)a2 & 0x10000) != 0 || (v24 = *(_DWORD *)(a3 + 40), (v24 & 0x8000) != 0) && (v24 & 0x4000) == 0 )
      AlpcpDeleteView(v8);
    AlpcpDereferenceBlobEx(v8, 1, v12, v13);
  }
  *(_DWORD *)(a3 + 40) &= 0xFFFF3FFF;
  v14 = *(_QWORD *)(a2 + 8);
  if ( !v14 )
    return 0LL;
  v16 = *(_QWORD *)(a2 + 16);
  if ( !v16 )
    return 3221225793LL;
  v17 = *(_QWORD *)(a1 + 16);
  if ( !v17 )
    return 3221225480LL;
  v18 = AlpcReferenceBlobByHandle((_QWORD *)(v17 + 40), v14, AlpcSectionType);
  v19 = v18;
  if ( !v18 )
    return 3221225480LL;
  v20 = AlpcpLocateSectionView(v18, a1, v16, &BugCheckParameter2);
  if ( v20 >= 0 )
  {
    v23 = BugCheckParameter2;
    v20 = AlpcpPrepareViewForDelivery(BugCheckParameter2);
    if ( v20 < 0 )
      AlpcpDereferenceBlobEx(v23, 1, v21, v22);
    else
      *(_QWORD *)(a4 + 40) = v23;
  }
  AlpcpDereferenceBlobEx(v19, 1, v21, v22);
  return (unsigned int)v20;
}
