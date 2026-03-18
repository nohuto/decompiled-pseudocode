/*
 * XREFs of UserGetLastError @ 0x1400841A4
 * Callers:
 *     NtUserCloseClipboard @ 0x14003D6F0 (NtUserCloseClipboard.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxLoadHmodIndex @ 0x140082390 (xxxLoadHmodIndex.c)
 *     NtUserSetCursorPos @ 0x140092730 (NtUserSetCursorPos.c)
 *     NtUserOpenClipboard @ 0x140104A10 (NtUserOpenClipboard.c)
 *     NtUserGetClipboardData @ 0x1402418A0 (NtUserGetClipboardData.c)
 *     NtUserInjectTouchInput @ 0x140243180 (NtUserInjectTouchInput.c)
 *     NtUserSendInput @ 0x1402453F0 (NtUserSendInput.c)
 *     NtUserSetClipboardData @ 0x1402459F0 (NtUserSetClipboardData.c)
 * Callees:
 *     <none>
 */

__int64 UserGetLastError()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 CurrentProcessWow64Process; // rax
  struct _NT_TIB *Self; // rcx

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v1, v0, v2);
  Self = KeGetPcr()->NtTib.Self;
  if ( CurrentProcessWow64Process )
    return HIDWORD(Self[147].StackBase);
  else
    return LODWORD(Self[1].Self);
}
