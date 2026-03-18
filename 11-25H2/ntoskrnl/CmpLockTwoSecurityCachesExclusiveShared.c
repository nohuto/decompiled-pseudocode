/*
 * XREFs of CmpLockTwoSecurityCachesExclusiveShared @ 0x140A31CF8
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1407CBE24 (CmpDoBuildVirtualStack.c)
 *     CmpSyncKeyValues @ 0x1407D31A4 (CmpSyncKeyValues.c)
 *     CmpCopyKeyPartial @ 0x14087EFC8 (CmpCopyKeyPartial.c)
 * Callees:
 *     CmLockHiveSecurityExclusive @ 0x14088709C (CmLockHiveSecurityExclusive.c)
 *     CmLockHiveSecurityShared @ 0x140BA9A5C (CmLockHiveSecurityShared.c)
 */

__int64 *__fastcall CmpLockTwoSecurityCachesExclusiveShared(unsigned __int64 a1, unsigned __int64 a2)
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
    return (__int64 *)CmLockHiveSecurityShared(a2);
  }
}
