/*
 * XREFs of AlpcpCreateSectionView @ 0x1408B5A38
 * Callers:
 *     NtAlpcCreateSectionView @ 0x1408B5800 (NtAlpcCreateSectionView.c)
 *     AlpcpMapLegacyPortView @ 0x1408B62D4 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     AlpcpCreateRegion @ 0x1408ADF04 (AlpcpCreateRegion.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1408B2940 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1408B29D0 (AlpcpUnlockBlob.c)
 *     AlpcpCreateView @ 0x1408B3D94 (AlpcpCreateView.c)
 */

__int64 __fastcall AlpcpCreateSectionView(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5)
{
  int v9; // ebx
  __int64 *v10; // rbx
  ULONG_PTR v11; // rbx
  int View; // esi
  ULONG_PTR BugCheckParameter2a; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR v15[4]; // [rsp+28h] [rbp-20h] BYREF

  BugCheckParameter2a = 0LL;
  v15[0] = 0LL;
  *a5 = 0LL;
  AlpcpLockForCachedReferenceBlob(BugCheckParameter2);
  v9 = AlpcpCreateRegion(BugCheckParameter2, a3, a4, &BugCheckParameter2a);
  AlpcpUnlockBlob(BugCheckParameter2);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v10 = KeAbPreAcquire(a2 + 352, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a2 + 352), 0, v10, a2 + 352);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  v11 = BugCheckParameter2a;
  AlpcpLockForCachedReferenceBlob(BugCheckParameter2a);
  View = AlpcpCreateView(v11, a2, v15);
  AlpcpUnlockBlob(v11);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 352), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 352));
  KeAbPostRelease(a2 + 352);
  AlpcpDereferenceBlobEx(BugCheckParameter2a, 1);
  if ( View < 0 )
    return (unsigned int)View;
  *a5 = v15[0];
  return 0LL;
}
