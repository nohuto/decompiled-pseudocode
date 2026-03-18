/*
 * XREFs of AlpcpCaptureViewAttribute @ 0x140894028
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14088F7F0 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcpDeleteView @ 0x14089310C (AlpcpDeleteView.c)
 *     AlpcReferenceBlobByHandle @ 0x1408938D0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpLocateSectionView @ 0x140893C6C (AlpcpLocateSectionView.c)
 *     AlpcpPrepareViewForDelivery @ 0x140894200 (AlpcpPrepareViewForDelivery.c)
 */

__int64 __fastcall AlpcpCaptureViewAttribute(signed __int64 *a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int128 *v6; // rdi
  unsigned int v8; // ebx
  ULONG_PTR v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v17; // r15
  ULONG_PTR v18; // rsi
  signed __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r15d
  ULONG_PTR v23; // rdi
  int v24; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-48h] BYREF
  __int128 v26; // [rsp+28h] [rbp-40h] BYREF
  __int128 v27; // [rsp+38h] [rbp-30h]

  v6 = a2;
  v26 = 0LL;
  *(_QWORD *)&v27 = 0LL;
  DWORD2(v27) = 0;
  v8 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v26 = *a2;
    v27 = a2[1];
    v6 = &v26;
  }
  if ( (*(_DWORD *)v6 & 0xFFF8FFFF) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 144);
    BugCheckParameter2 = v9;
    if ( v9 )
    {
      *(_QWORD *)(a3 + 144) = 0LL;
      AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v9 + 16));
      --*(_DWORD *)(v9 + 76);
      AlpcpUnlockBlob(*(_QWORD *)(v9 + 16), v10, v11, v12);
      if ( (*(_DWORD *)v6 & 0x10000) != 0 || (v24 = *(_DWORD *)(a3 + 40), (v24 & 0x8000) != 0) && (v24 & 0x4000) == 0 )
        AlpcpDeleteView(v9);
      AlpcpDereferenceBlobEx(v9, 1, v13, v14);
    }
    *(_DWORD *)(a3 + 40) &= 0xFFFF3FFF;
    v15 = *((_QWORD *)v6 + 1);
    if ( v15 )
    {
      v17 = *((_QWORD *)v6 + 2);
      if ( v17 )
      {
        v18 = 0LL;
        v19 = a1[2];
        if ( v19 )
          v18 = AlpcReferenceBlobByHandle((_QWORD *)(v19 + 40), v15, AlpcSectionType);
        if ( v18 )
        {
          v22 = AlpcpLocateSectionView(v18, a1, v17, &BugCheckParameter2);
          if ( v22 >= 0 )
          {
            v23 = BugCheckParameter2;
            v22 = AlpcpPrepareViewForDelivery(BugCheckParameter2);
            if ( v22 < 0 )
              AlpcpDereferenceBlobEx(v23, 1, v20, v21);
            else
              *(_QWORD *)(a4 + 40) = v23;
          }
          AlpcpDereferenceBlobEx(v18, 1, v20, v21);
          return (unsigned int)v22;
        }
        else
        {
          return (unsigned int)-1073741816;
        }
      }
      else
      {
        return (unsigned int)-1073741503;
      }
    }
  }
  return v8;
}
