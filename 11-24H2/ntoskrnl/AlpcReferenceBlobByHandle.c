/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x140896580
 * Callers:
 *     NtAlpcRevokeSecurityContext @ 0x14073FA50 (NtAlpcRevokeSecurityContext.c)
 *     AlpcpLookupMessage @ 0x140892E20 (AlpcpLookupMessage.c)
 *     NtAlpcCreateSectionView @ 0x1408951F0 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeleteResourceReserve @ 0x140895430 (NtAlpcDeleteResourceReserve.c)
 *     AlpcpCaptureViewAttribute @ 0x140895F40 (AlpcpCaptureViewAttribute.c)
 *     NtAlpcDeleteSecurityContext @ 0x140896480 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1408969A0 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14089F010 (NtAlpcImpersonateClientOfPort.c)
 *     NtAlpcDeletePortSection @ 0x140A0E420 (NtAlpcDeletePortSection.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14040880C (ExfAcquireReleasePushLockExclusive.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall AlpcReferenceBlobByHandle(_QWORD *a1, int a2, _DWORD *a3)
{
  signed __int64 *v5; // rbp
  unsigned int v6; // esi
  char *v7; // rdi
  ULONG_PTR v8; // rbx
  __int64 BugCheckParameter4; // rax
  __int64 v10; // rdx
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( !a1 )
    return 0LL;
  v5 = a1 + 1;
  v6 = a2 - 16;
  v7 = (char *)KeAbPreAcquire((__int64)(a1 + 1), 0LL);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, 0, v7, (__int64)v5);
  if ( v7 )
    v7[10] = 1;
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
