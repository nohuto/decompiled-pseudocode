/*
 * XREFs of NtUserExcludeUpdateRgn @ 0x1C01CEF00
 * Callers:
 *     <none>
 * Callees:
 *     _ExcludeUpdateRgn @ 0x1C000674C (_ExcludeUpdateRgn.c)
 */

__int64 __fastcall NtUserExcludeUpdateRgn(HDC a1, __int64 a2)
{
  struct tagWND *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int updated; // ebx

  EnterCrit(0LL, 0LL);
  v4 = (struct tagWND *)ValidateHwnd(a2);
  updated = 0;
  if ( v4 && a1 )
    updated = ExcludeUpdateRgn(a1, v4);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return updated;
}
