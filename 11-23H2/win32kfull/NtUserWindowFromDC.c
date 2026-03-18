/*
 * XREFs of NtUserWindowFromDC @ 0x1C007B830
 * Callers:
 *     <none>
 * Callees:
 *     ?PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z @ 0x1C007B8B4 (-PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtUserWindowFromDC(HDC a1, __int64 a2, __int64 a3)
{
  const struct tagWND *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx

  EnterSharedCrit(a1, a2, a3);
  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
  v4 = PwndFromHDC(a1);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v9 = 0LL;
  if ( v4 )
    v9 = *(_QWORD *)v4;
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
