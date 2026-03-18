/*
 * XREFs of ValidateGestureCaller @ 0x1402B7FFC
 * Callers:
 *     NtUserInjectGesture @ 0x140298D20 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureCaller(__int64 a1, __int64 a2)
{
  const struct tagUIPI_INFO *v4; // r8
  const struct tagUIPI_INFO *v5; // rax

  v4 = *(const struct tagUIPI_INFO **)(W32GetUserSessionState(a1, a2) + 19200);
  v5 = *(const struct tagUIPI_INFO **)(a1 + 496);
  if ( v5 == v4 && v5 == *(const struct tagUIPI_INFO **)(a2 + 24) )
  {
    if ( UIPrivilegeIsolation::CheckAccess(
           (UIPrivilegeIsolation *)(*(_QWORD *)(a1 + 464) + 872LL),
           (const struct tagUIPI_INFO *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 464LL) + 872LL),
           v4) )
    {
      return 1LL;
    }
    UserSetLastError(5);
    EtwTraceUIPIMsgError(*(_QWORD *)(a1 + 464), *(_QWORD *)(*(_QWORD *)(a2 + 16) + 464LL), 281LL, 0LL, 0LL);
  }
  else
  {
    UserSetLastError(5);
  }
  return 0LL;
}
