/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x1408AF5B0
 * Callers:
 *     NtAlpcRevokeSecurityContext @ 0x140735B00 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140859580 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpLookupMessage @ 0x1408AAFC0 (AlpcpLookupMessage.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408AD540 (NtAlpcDeleteResourceReserve.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1408AF320 (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x1408AF4B0 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureViewAttribute @ 0x1408B01AC (AlpcpCaptureViewAttribute.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     NtAlpcCreateSectionView @ 0x1408B5800 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeletePortSection @ 0x140A0BDA0 (NtAlpcDeletePortSection.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14041D30C (ExfAcquireReleasePushLockExclusive.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall AlpcReferenceBlobByHandle(_QWORD *a1, int a2, _DWORD *a3)
{
  signed __int64 *v5; // rdi
  unsigned int v6; // ebp
  __int64 *v7; // rsi
  ULONG_PTR v8; // rbx
  __int64 BugCheckParameter4; // rax
  __int64 v11; // rdx
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( !a1 )
    return 0LL;
  v5 = a1 + 1;
  v6 = a2 - 16;
  v7 = KeAbPreAcquire((__int64)(a1 + 1), 0LL);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, 0, v7, (unsigned __int64)v5);
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
        goto LABEL_9;
      }
      v11 = BugCheckParameter4;
      BugCheckParameter4 = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)(v8 - 24),
                             BugCheckParameter4 + 1,
                             BugCheckParameter4);
    }
    while ( BugCheckParameter4 != v11 );
    if ( BugCheckParameter4 == -1 )
      goto LABEL_9;
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
LABEL_9:
    if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    return 0LL;
  }
}
