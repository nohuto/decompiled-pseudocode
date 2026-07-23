/*
 * XREFs of AlpcpCaptureViewAttribute @ 0x140895F40
 * Callers:
 *     AlpcpCaptureAttributes @ 0x140899420 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpLocateSectionView @ 0x14089630C (AlpcpLocateSectionView.c)
 *     AlpcReferenceBlobByHandle @ 0x140896580 (AlpcReferenceBlobByHandle.c)
 *     AlpcpPrepareViewForDelivery @ 0x140896848 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpUnlockBlob @ 0x1408980A0 (AlpcpUnlockBlob.c)
 *     AlpcpDeleteView @ 0x14089CE2C (AlpcpDeleteView.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14089ED30 (AlpcpLockForCachedReferenceBlob.c)
 */

__int64 __fastcall AlpcpCaptureViewAttribute(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int128 *v6; // rdi
  unsigned int v8; // ebx
  ULONG_PTR v9; // rsi
  __int64 v10; // rdx
  __int64 v12; // r15
  ULONG_PTR v13; // rsi
  __int64 v14; // rcx
  int v15; // r15d
  ULONG_PTR v16; // rdi
  int v17; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-48h] BYREF
  __int128 v19; // [rsp+28h] [rbp-40h] BYREF
  __int128 v20; // [rsp+38h] [rbp-30h]

  v6 = a2;
  v19 = 0LL;
  *(_QWORD *)&v20 = 0LL;
  DWORD2(v20) = 0;
  v8 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v19 = *a2;
    v20 = a2[1];
    v6 = &v19;
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
      AlpcpUnlockBlob(*(_QWORD *)(v9 + 16));
      if ( (*(_DWORD *)v6 & 0x10000) != 0 || (v17 = *(_DWORD *)(a3 + 40), (v17 & 0x8000) != 0) && (v17 & 0x4000) == 0 )
        AlpcpDeleteView(v9);
      AlpcpDereferenceBlobEx(v9);
    }
    *(_DWORD *)(a3 + 40) &= 0xFFFF3FFF;
    v10 = *((_QWORD *)v6 + 1);
    if ( v10 )
    {
      v12 = *((_QWORD *)v6 + 2);
      if ( v12 )
      {
        v13 = 0LL;
        v14 = *(_QWORD *)(a1 + 16);
        if ( v14 )
          v13 = AlpcReferenceBlobByHandle(v14 + 40, v10, AlpcSectionType);
        if ( v13 )
        {
          v15 = AlpcpLocateSectionView(v13, a1, v12, &BugCheckParameter2);
          if ( v15 >= 0 )
          {
            v16 = BugCheckParameter2;
            v15 = AlpcpPrepareViewForDelivery(BugCheckParameter2);
            if ( v15 < 0 )
              AlpcpDereferenceBlobEx(v16);
            else
              *(_QWORD *)(a4 + 40) = v16;
          }
          AlpcpDereferenceBlobEx(v13);
          return (unsigned int)v15;
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
