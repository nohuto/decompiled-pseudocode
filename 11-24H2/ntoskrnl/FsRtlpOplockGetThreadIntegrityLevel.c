/*
 * XREFs of FsRtlpOplockGetThreadIntegrityLevel @ 0x14070BA40
 * Callers:
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x14070C450 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14070C630 (FsRtlpOplockTryStartBreakAckTimeout.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     SeQueryInformationToken @ 0x14090D870 (SeQueryInformationToken.c)
 *     PsReferenceImpersonationTokenEx @ 0x140989D20 (PsReferenceImpersonationTokenEx.c)
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
