/*
 * XREFs of AlpcpCreateSectionView @ 0x1408950B8
 * Callers:
 *     NtAlpcCreateSectionView @ 0x1408951F0 (NtAlpcCreateSectionView.c)
 *     AlpcpMapLegacyPortView @ 0x1409E98D0 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     AlpcpCreateRegion @ 0x140893390 (AlpcpCreateRegion.c)
 *     AlpcpCreateView @ 0x140897248 (AlpcpCreateView.c)
 *     AlpcpUnlockBlob @ 0x1408980A0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14089ED30 (AlpcpLockForCachedReferenceBlob.c)
 */

__int64 __fastcall AlpcpCreateSectionView(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5)
{
  int v9; // ebx
  char *v10; // rbx
  ULONG_PTR v11; // rbx
  int View; // esi
  ULONG_PTR BugCheckParameter2a; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]

  BugCheckParameter2a = 0LL;
  v15 = 0LL;
  *a5 = 0LL;
  AlpcpLockForCachedReferenceBlob(BugCheckParameter2);
  v9 = AlpcpCreateRegion(BugCheckParameter2, a3, a4, &BugCheckParameter2a);
  AlpcpUnlockBlob(BugCheckParameter2);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v10 = (char *)KeAbPreAcquire(a2 + 352, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a2 + 352), 0, v10, a2 + 352);
  if ( v10 )
    v10[10] = 1;
  v11 = BugCheckParameter2a;
  AlpcpLockForCachedReferenceBlob(BugCheckParameter2a);
  View = AlpcpCreateView(v11);
  AlpcpUnlockBlob(v11);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 352), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 352));
  KeAbPostRelease(a2 + 352);
  AlpcpDereferenceBlobEx(BugCheckParameter2a);
  if ( View < 0 )
    return (unsigned int)View;
  *a5 = v15;
  return 0LL;
}
