/*
 * XREFs of CmpNotifyTriggerCheck @ 0x14086CF78
 * Callers:
 *     CmpReportNotifyHelper @ 0x14086CB10 (CmpReportNotifyHelper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14086D420 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

BOOLEAN __fastcall CmpNotifyTriggerCheck(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  __int64 SecurityCacheEntryForKcbStack; // rax
  NTSTATUS AccessStatus; // [rsp+60h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+78h] [rbp+20h] BYREF

  ExAcquireFastMutexUnsafe(&CmpPostLock);
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 != a1 + 16 && (unsigned __int16)*(_DWORD *)(v6 + 56) == 3 )
  {
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    return 1;
  }
  else
  {
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    AccessStatus = 0;
    GrantedAccess = 0;
    SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a2, a3, 0LL);
    return SeAccessCheck(
             (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
             (PSECURITY_SUBJECT_CONTEXT)(a1 + 56),
             0,
             0x10u,
             0,
             0LL,
             (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
             1,
             &GrantedAccess,
             &AccessStatus);
  }
}
