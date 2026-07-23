/*
 * XREFs of CmpLockTwoSecurityCachesExclusiveShared @ 0x140884794
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1407DBB34 (CmpDoBuildVirtualStack.c)
 *     CmpSyncKeyValues @ 0x1407E2FD4 (CmpSyncKeyValues.c)
 *     CmpCopyKeyPartial @ 0x140884DC0 (CmpCopyKeyPartial.c)
 * Callees:
 *     CmLockHiveSecurityExclusive @ 0x14088427C (CmLockHiveSecurityExclusive.c)
 *     CmLockHiveSecurityShared @ 0x140BBB96C (CmLockHiveSecurityShared.c)
 */

char *__fastcall CmpLockTwoSecurityCachesExclusiveShared(unsigned __int64 a1, unsigned __int64 a2)
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
    return (char *)CmLockHiveSecurityShared(a2);
  }
}
