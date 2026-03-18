/*
 * XREFs of ApiSetEditionIsGetKeyStateBlocked @ 0x140024704
 * Callers:
 *     NtUserGetKeyboardState @ 0x1400244A0 (NtUserGetKeyboardState.c)
 *     AllocQueue @ 0x140052060 (AllocQueue.c)
 *     NtUserGetKeyState @ 0x14016CDE0 (NtUserGetKeyState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 ApiSetEditionIsGetKeyStateBlocked()
{
  unsigned int v0; // ebx
  int (*v1)(void); // rax
  unsigned int (*v2)(void); // rax

  v0 = 0;
  v1 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 728LL);
  if ( v1 )
  {
    if ( v1() >= 0 )
    {
      v2 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 736LL);
      if ( v2 )
        return v2();
    }
  }
  return v0;
}
