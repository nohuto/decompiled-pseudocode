/*
 * XREFs of AlpcpCaptureViewAttributeInternal @ 0x1408969A0
 * Callers:
 *     AlpcpCaptureViewAttribute32 @ 0x140A43C48 (AlpcpCaptureViewAttribute32.c)
 * Callees:
 *     AlpcpLocateSectionView @ 0x14089630C (AlpcpLocateSectionView.c)
 *     AlpcReferenceBlobByHandle @ 0x140896580 (AlpcReferenceBlobByHandle.c)
 *     AlpcpPrepareViewForDelivery @ 0x140896848 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpUnlockBlob @ 0x1408980A0 (AlpcpUnlockBlob.c)
 *     AlpcpDeleteView @ 0x14089CE2C (AlpcpDeleteView.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14089ED30 (AlpcpLockForCachedReferenceBlob.c)
 */

__int64 __fastcall AlpcpCaptureViewAttributeInternal(signed __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  __int64 v11; // rdi
  signed __int64 v12; // rcx
  ULONG_PTR v13; // rax
  ULONG_PTR v14; // rbx
  int v15; // ebp
  char v16; // dl
  ULONG_PTR v17; // rdi
  int v18; // eax
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
    AlpcpUnlockBlob(*(_QWORD *)(v8 + 16));
    if ( (*(_DWORD *)a2 & 0x10000) != 0 || (v18 = *(_DWORD *)(a3 + 40), (v18 & 0x8000) != 0) && (v18 & 0x4000) == 0 )
      AlpcpDeleteView(v8);
    AlpcpDereferenceBlobEx(v8);
  }
  *(_DWORD *)(a3 + 40) &= 0xFFFF3FFF;
  v9 = *(_QWORD *)(a2 + 8);
  if ( !v9 )
    return 0LL;
  v11 = *(_QWORD *)(a2 + 16);
  if ( !v11 )
    return 3221225793LL;
  v12 = a1[2];
  if ( !v12 )
    return 3221225480LL;
  v13 = AlpcReferenceBlobByHandle((_QWORD *)(v12 + 40), v9, AlpcSectionType);
  v14 = v13;
  if ( !v13 )
    return 3221225480LL;
  v15 = AlpcpLocateSectionView(v13, a1, v11, &BugCheckParameter2);
  if ( v15 >= 0 )
  {
    v16 = (*(_DWORD *)a2 & 0x40000) != 0 && (*(_DWORD *)(v14 + 48) & 2) != 0;
    v17 = BugCheckParameter2;
    v15 = AlpcpPrepareViewForDelivery(BugCheckParameter2, v16, (*(_DWORD *)a2 & 0x20000) != 0);
    if ( v15 < 0 )
      AlpcpDereferenceBlobEx(v17);
    else
      *(_QWORD *)(a4 + 40) = v17;
  }
  AlpcpDereferenceBlobEx(v14);
  return (unsigned int)v15;
}
