/*
 * XREFs of NtUserDisableProcessWindowFiltering @ 0x1C0097B10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 NtUserDisableProcessWindowFiltering()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 824LL) |= 0x800u;
  v2 = *(_QWORD *)(gptiCurrent + 480LL);
  if ( v2 )
    *(_QWORD *)(v2 + 224) |= 4uLL;
  UserSessionSwitchLeaveCrit(v2, gptiCurrent, v0, v1);
  return 1LL;
}
