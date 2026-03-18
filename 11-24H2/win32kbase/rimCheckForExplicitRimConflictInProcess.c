/*
 * XREFs of rimCheckForExplicitRimConflictInProcess @ 0x1400C9648
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1400C8E60 (RIMIDECreateHIDDesc.c)
 *     RIMCreateHidDesc @ 0x1401DBCC8 (RIMCreateHidDesc.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1400C970C (rimIsExplicitRimUsagesMatchingUsages.c)
 */

__int64 __fastcall rimCheckForExplicitRimConflictInProcess(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  __int64 UserSessionState; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  _QWORD **v9; // rbx
  _QWORD *v10; // r9
  __int64 v11; // rax
  __int64 v13; // rax

  UserSessionState = W32GetUserSessionState(a1);
  RIMLockExclusive(UserSessionState + 56);
  v9 = (_QWORD **)(W32GetUserSessionState(v7) + 120);
  v10 = *v9;
  while ( v10 != v9 )
  {
    v8 = v10 - 2;
    v10 = (_QWORD *)*v10;
    if ( !*((_BYTE *)v8 + 81)
      && !*((_BYTE *)v8 + 80)
      && v8[4] == a1
      && (unsigned int)rimIsExplicitRimUsagesMatchingUsages(v8, a2, a3) )
    {
      v11 = W32GetUserSessionState(v8);
      RIMUnlockExclusive(v11 + 56);
      return 1LL;
    }
  }
  v13 = W32GetUserSessionState(v8);
  RIMUnlockExclusive(v13 + 56);
  return 0LL;
}
