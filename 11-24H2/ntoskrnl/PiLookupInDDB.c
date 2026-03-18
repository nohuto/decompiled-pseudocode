/*
 * XREFs of PiLookupInDDB @ 0x1409C7A08
 * Callers:
 *     PpCheckInDriverDatabase @ 0x1409C7E2C (PpCheckInDriverDatabase.c)
 * Callees:
 *     PiIsDriverBlocked @ 0x1409C6E6C (PiIsDriverBlocked.c)
 *     PiInitializeDDB @ 0x1409C7B30 (PiInitializeDDB.c)
 *     PiReleaseDDB @ 0x140A9687C (PiReleaseDDB.c)
 */

__int64 __fastcall PiLookupInDDB(__int64 a1, __int64 a2, unsigned int a3, __int128 *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  int IsDriverBlocked; // ebx
  _OWORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v13[2]; // [rsp+50h] [rbp-20h] BYREF

  v4 = PpDDBPatchHandle;
  v6 = PpDDBHandle;
  memset(v12, 0, sizeof(v12));
  memset(v13, 0, sizeof(v13));
  if ( !PpDDBHandle )
  {
    IsDriverBlocked = PiInitializeDDB(L"\\SystemRoot\\AppPatch\\drvmain.sdb");
    if ( IsDriverBlocked < 0 )
      goto LABEL_3;
    v6 = *(_QWORD *)&v12[0];
  }
  IsDriverBlocked = PiIsDriverBlocked(v6, a1, a2, a3, a4);
  if ( IsDriverBlocked >= 0 )
  {
    if ( !PpDDBHandle )
    {
      IsDriverBlocked = PiInitializeDDB(L"\\SystemRoot\\AppPatch\\drvpatch.sdb");
      if ( IsDriverBlocked < 0 )
      {
        IsDriverBlocked = 0;
        goto LABEL_3;
      }
      v4 = *(_QWORD *)&v13[0];
    }
    if ( v4 )
      IsDriverBlocked = PiIsDriverBlocked(v4, a1, a2, a3, a4);
  }
LABEL_3:
  if ( *(_QWORD *)&v12[0] )
    PiReleaseDDB(v12);
  if ( *(_QWORD *)&v13[0] )
    PiReleaseDDB(v13);
  return (unsigned int)IsDriverBlocked;
}
