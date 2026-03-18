/*
 * XREFs of AlpcpCreateSectionView @ 0x14093DC88
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x14093C1C0 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreateSectionView @ 0x14093DA50 (NtAlpcCreateSectionView.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcpCreateView @ 0x14089328C (AlpcpCreateView.c)
 *     AlpcpCreateRegion @ 0x14093ED50 (AlpcpCreateRegion.c)
 */

__int64 __fastcall AlpcpCreateSectionView(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int Region; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rbx
  int View; // esi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG_PTR v19[4]; // [rsp+28h] [rbp-20h] BYREF

  v19[0] = 0LL;
  *a5 = 0LL;
  AlpcpLockForCachedReferenceBlob(BugCheckParameter2);
  Region = AlpcpCreateRegion(BugCheckParameter2);
  AlpcpUnlockBlob(BugCheckParameter2, v8, v9, v10);
  if ( Region < 0 )
    return (unsigned int)Region;
  v11 = KeAbPreAcquire(a2 + 352, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a2 + 352), 0, v11, a2 + 352);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  AlpcpLockForCachedReferenceBlob(0LL);
  View = AlpcpCreateView(0LL, a2, v19);
  AlpcpUnlockBlob(0LL, v13, v14, v15);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 352), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 352));
  KeAbPostRelease(a2 + 352);
  AlpcpDereferenceBlobEx(0LL, 1, v16, v17);
  if ( View < 0 )
    return (unsigned int)View;
  *a5 = v19[0];
  return 0LL;
}
