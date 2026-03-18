/*
 * XREFs of UserGetLastError @ 0x1C00164E8
 * Callers:
 *     NtUserSendInput @ 0x1C000A260 (NtUserSendInput.c)
 *     NtUserCloseClipboard @ 0x1C0010F00 (NtUserCloseClipboard.c)
 *     NtUserOpenClipboard @ 0x1C0010FE0 (NtUserOpenClipboard.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     xxxLoadHmodIndex @ 0x1C0122AD0 (xxxLoadHmodIndex.c)
 *     NtUserGetClipboardData @ 0x1C01CFAA0 (NtUserGetClipboardData.c)
 *     NtUserInjectTouchInput @ 0x1C01D4D00 (NtUserInjectTouchInput.c)
 *     NtUserSetClipboardData @ 0x1C01DA370 (NtUserSetClipboardData.c)
 *     NtUserSetCursorPos @ 0x1C01DAC50 (NtUserSetCursorPos.c)
 * Callees:
 *     <none>
 */

__int64 UserGetLastError()
{
  __int64 CurrentProcessWow64Process; // rax
  struct _NT_TIB *Self; // rcx

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
  Self = KeGetPcr()->NtTib.Self;
  if ( CurrentProcessWow64Process )
    return HIDWORD(Self[147].StackBase);
  else
    return LODWORD(Self[1].Self);
}
