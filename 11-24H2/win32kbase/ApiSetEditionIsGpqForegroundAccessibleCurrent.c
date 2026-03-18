/*
 * XREFs of ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x140025314
 * Callers:
 *     NtUserGetKeyboardState @ 0x1400244A0 (NtUserGetKeyboardState.c)
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 *     NtUserGetAsyncKeyState @ 0x14016C610 (NtUserGetAsyncKeyState.c)
 *     NtUserGetKeyState @ 0x14016CDE0 (NtUserGetKeyState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionIsGpqForegroundAccessibleCurrent(unsigned int a1)
{
  unsigned int v2; // ebx
  int (*v3)(void); // rax
  unsigned int (__fastcall *v4)(_QWORD); // rax

  v2 = 0;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 5112LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v4 = *(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 5120LL);
      if ( v4 )
        return v4(a1);
    }
  }
  return v2;
}
