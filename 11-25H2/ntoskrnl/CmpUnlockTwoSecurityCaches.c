/*
 * XREFs of CmpUnlockTwoSecurityCaches @ 0x140A39520
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1407CBE24 (CmpDoBuildVirtualStack.c)
 *     CmpSyncKeyValues @ 0x1407D31A4 (CmpSyncKeyValues.c)
 *     CmpCopyKeyPartial @ 0x14087EFC8 (CmpCopyKeyPartial.c)
 * Callees:
 *     CmUnlockHiveSecurity @ 0x140BA9AB8 (CmUnlockHiveSecurity.c)
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
