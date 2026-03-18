/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x1408938D0
 * Callers:
 *     NtAlpcRevokeSecurityContext @ 0x140741B20 (NtAlpcRevokeSecurityContext.c)
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 *     NtAlpcDeleteSecurityContext @ 0x1408937D0 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140893A30 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpCaptureViewAttribute @ 0x140894028 (AlpcpCaptureViewAttribute.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140896970 (NtAlpcImpersonateClientOfPort.c)
 *     NtAlpcCreateSectionView @ 0x14093DA50 (NtAlpcCreateSectionView.c)
 *     AlpcpLookupMessage @ 0x14093E7E0 (AlpcpLookupMessage.c)
 *     NtAlpcDeleteResourceReserve @ 0x140A14C20 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcDeletePortSection @ 0x140A15600 (NtAlpcDeletePortSection.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140418A5C (ExfAcquireReleasePushLockExclusive.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall AlpcReferenceBlobByHandle(_QWORD *a1, int a2, _DWORD *a3)
{
  signed __int64 *v5; // rbp
  unsigned int v6; // esi
  _QWORD *v7; // rdi
  ULONG_PTR v8; // rbx
  __int64 BugCheckParameter4; // rax
  __int64 v10; // rdx
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( !a1 )
    return 0LL;
  v5 = a1 + 1;
  v6 = a2 - 16;
  v7 = KeAbPreAcquire((__int64)(a1 + 1), 0LL);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, 0, v7, (__int64)v5);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  if ( (unsigned __int64)v6 < a1[2] && (v8 = *(_QWORD *)(*a1 + 8LL * v6)) != 0 && *(unsigned __int8 *)(v8 - 31) == *a3 )
  {
    _m_prefetchw((const void *)(v8 - 24));
    BugCheckParameter4 = *(_QWORD *)(v8 - 24);
    do
    {
      if ( BugCheckParameter4 <= 0 )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, v8, 0x20uLL, BugCheckParameter4);
        goto LABEL_23;
      }
      v10 = BugCheckParameter4;
      BugCheckParameter4 = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)(v8 - 24),
                             BugCheckParameter4 + 1,
                             BugCheckParameter4);
    }
    while ( BugCheckParameter4 != v10 );
    if ( BugCheckParameter4 == -1 )
      goto LABEL_23;
    if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    if ( (*(_BYTE *)(v8 - 32) & 4) != 0 )
    {
      _InterlockedOr(v12, 0);
      if ( (*(_QWORD *)(v8 - 16) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v8 - 16));
    }
    return v8;
  }
  else
  {
LABEL_23:
    if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    return 0LL;
  }
}
