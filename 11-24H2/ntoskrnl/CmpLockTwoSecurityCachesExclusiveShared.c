/*
 * XREFs of CmpLockTwoSecurityCachesExclusiveShared @ 0x1408808E4
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1407DB5E4 (CmpDoBuildVirtualStack.c)
 *     CmpSyncKeyValues @ 0x1407E2A84 (CmpSyncKeyValues.c)
 *     CmpCopyKeyPartial @ 0x140880F10 (CmpCopyKeyPartial.c)
 * Callees:
 *     CmLockHiveSecurityExclusive @ 0x1408803CC (CmLockHiveSecurityExclusive.c)
 *     CmLockHiveSecurityShared @ 0x140BB996C (CmLockHiveSecurityShared.c)
 */

__int64 __fastcall CmpLockTwoSecurityCachesExclusiveShared(unsigned __int64 a1, unsigned __int64 a2)
{
  bool v4; // cc
  __int64 v6; // rcx

  v4 = a1 <= a2;
  if ( a1 >= a2 )
  {
    v6 = a2;
    if ( !v4 )
    {
      CmLockHiveSecurityShared(a2);
      v6 = a1;
    }
    return CmLockHiveSecurityExclusive(v6);
  }
  else
  {
    CmLockHiveSecurityExclusive(a1);
    return CmLockHiveSecurityShared(a2);
  }
}
