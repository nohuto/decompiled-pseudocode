/*
 * XREFs of CmpUnlockTwoSecurityCaches @ 0x1408808B4
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1407DB5E4 (CmpDoBuildVirtualStack.c)
 *     CmpSyncKeyValues @ 0x1407E2A84 (CmpSyncKeyValues.c)
 *     CmpCopyKeyPartial @ 0x140880F10 (CmpCopyKeyPartial.c)
 * Callees:
 *     CmUnlockHiveSecurity @ 0x140BB99C8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpUnlockTwoSecurityCaches(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a2;
  if ( a1 == a2 )
    v2 = a1;
  else
    CmUnlockHiveSecurity(a1);
  return CmUnlockHiveSecurity(v2);
}
