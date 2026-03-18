/*
 * XREFs of AlpcpCaptureViewAttribute @ 0x1408B01AC
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1408B1B80 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpPrepareViewForDelivery @ 0x1408AF1C8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcReferenceBlobByHandle @ 0x1408AF5B0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDeleteView @ 0x1408AF704 (AlpcpDeleteView.c)
 *     AlpcpLocateSectionView @ 0x1408AF88C (AlpcpLocateSectionView.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1408B2940 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1408B29D0 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpCaptureViewAttribute(signed __int64 *a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int128 *v6; // rdi
  unsigned int v8; // ebx
  ULONG_PTR v9; // rsi
  __int64 v10; // rdx
  __int64 v12; // r15
  ULONG_PTR v13; // rsi
  signed __int64 v14; // rcx
  int v15; // r15d
  int v16; // r8d
  char v17; // dl
  ULONG_PTR v18; // rdi
  int v19; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-48h] BYREF
  __int128 v21; // [rsp+28h] [rbp-40h] BYREF
  __int128 v22; // [rsp+38h] [rbp-30h]

  v6 = a2;
  v21 = 0LL;
  *(_QWORD *)&v22 = 0LL;
  DWORD2(v22) = 0;
  v8 = 0;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v21 = *a2;
    v22 = a2[1];
    v6 = &v21;
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
      if ( (*(_DWORD *)v6 & 0x10000) != 0 || (v19 = *(_DWORD *)(a3 + 40), (v19 & 0x8000) != 0) && (v19 & 0x4000) == 0 )
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
        v14 = a1[2];
        if ( v14 )
          v13 = AlpcReferenceBlobByHandle((_QWORD *)(v14 + 40), v10, AlpcSectionType);
        if ( v13 )
        {
          v15 = AlpcpLocateSectionView(v13, a1, v12, &BugCheckParameter2);
          if ( v15 >= 0 )
          {
            v16 = *(_DWORD *)v6;
            v17 = (*(_DWORD *)v6 & 0x40000) != 0 && (*(_DWORD *)(v13 + 48) & 2) != 0;
            v18 = BugCheckParameter2;
            v15 = AlpcpPrepareViewForDelivery(BugCheckParameter2, v17, (v16 & 0x20000) != 0);
            if ( v15 < 0 )
              AlpcpDereferenceBlobEx(v18);
            else
              *(_QWORD *)(a4 + 40) = v18;
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
