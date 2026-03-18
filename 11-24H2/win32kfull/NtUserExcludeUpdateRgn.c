/*
 * XREFs of NtUserExcludeUpdateRgn @ 0x1401FC4F0
 * Callers:
 *     <none>
 * Callees:
 *     _ExcludeUpdateRgn @ 0x140036ED8 (_ExcludeUpdateRgn.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserExcludeUpdateRgn(HDC a1, __int64 a2)
{
  struct tagWND *v4; // rax
  __int64 v5; // rcx
  unsigned int updated; // ebx

  EnterCrit(0LL, 0LL);
  v4 = (struct tagWND *)ValidateReceivingHwnd(a2, 1LL);
  updated = 0;
  if ( v4 && a1 )
    updated = ExcludeUpdateRgn(a1, v4);
  UserSessionSwitchLeaveCrit(v5);
  return updated;
}
