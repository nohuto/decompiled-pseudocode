/*
 * XREFs of CmpGlobalLockKeyForWrite @ 0x140A5FA10
 * Callers:
 *     CmLockKeyForWrite @ 0x1409DBB68 (CmLockKeyForWrite.c)
 * Callees:
 *     CmpLockGlobalKeyLockTrackerShared @ 0x1406F31B8 (CmpLockGlobalKeyLockTrackerShared.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407DE2E8 (CmpCreateGlobalKeyLockEntry.c)
 *     CmpLockGlobalKeyLockTrackerExclusive @ 0x1407DE4D8 (CmpLockGlobalKeyLockTrackerExclusive.c)
 *     CmpUnlockGlobalKeyLockTracker @ 0x1407DE53C (CmpUnlockGlobalKeyLockTracker.c)
 */

__int64 __fastcall CmpGlobalLockKeyForWrite(ULONG_PTR a1, __int64 *a2)
{
  __int64 *v4; // rax
  unsigned int v5; // edi
  __int64 GlobalKeyLockEntry; // rbx
  __int64 *v8; // rax

  CmpLockGlobalKeyLockTrackerShared();
  v4 = (__int64 *)qword_140EF56C8;
  v5 = 0;
  GlobalKeyLockEntry = 0LL;
  while ( v4 != &qword_140EF56C8 )
  {
    if ( v4[3] == a1 )
    {
      GlobalKeyLockEntry = (__int64)v4;
      break;
    }
    v4 = (__int64 *)*v4;
  }
  if ( GlobalKeyLockEntry )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(GlobalKeyLockEntry + 16)) <= 1 )
      __fastfail(0xEu);
  }
  else
  {
    CmpUnlockGlobalKeyLockTracker();
    GlobalKeyLockEntry = CmpCreateGlobalKeyLockEntry(a1);
    if ( !GlobalKeyLockEntry )
      return (unsigned int)-1073741670;
    *(_WORD *)(a1 + 8) |= 0x80u;
    CmpLockGlobalKeyLockTrackerExclusive();
    v8 = (__int64 *)qword_140EF56D0;
    if ( *(__int64 **)qword_140EF56D0 != &qword_140EF56C8 )
      __fastfail(3u);
    *(_QWORD *)GlobalKeyLockEntry = &qword_140EF56C8;
    *(_QWORD *)(GlobalKeyLockEntry + 8) = v8;
    *v8 = GlobalKeyLockEntry;
    qword_140EF56D0 = GlobalKeyLockEntry;
  }
  *a2 = GlobalKeyLockEntry;
  CmpUnlockGlobalKeyLockTracker();
  return v5;
}
