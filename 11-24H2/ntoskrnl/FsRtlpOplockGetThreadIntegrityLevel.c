/*
 * XREFs of FsRtlpOplockGetThreadIntegrityLevel @ 0x1407095D4
 * Callers:
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140709FE4 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14070A1C4 (FsRtlpOplockTryStartBreakAckTimeout.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     PsReferenceImpersonationTokenEx @ 0x1409737D0 (PsReferenceImpersonationTokenEx.c)
 */

char __fastcall FsRtlpOplockGetThreadIntegrityLevel(__int64 a1, PVOID *a2)
{
  char v4; // di
  void *v5; // rbx
  __int64 v7; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+80h] [rbp+18h] BYREF
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (void *)PsReferenceImpersonationTokenEx(a1, 1LL, 1953261124LL, &v9, &v8, &v7, 0LL);
  if ( v5 || (v5 = (void *)PsReferencePrimaryTokenWithTag(*(_QWORD *)(a1 + 544), 0x746C6644u)) != 0LL )
  {
    if ( SeQueryInformationToken(v5, TokenIntegrityLevel, a2) < 0 || (v4 = 1, v5) )
      ObfDereferenceObject(v5);
  }
  return v4;
}
