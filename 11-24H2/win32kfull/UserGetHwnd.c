/*
 * XREFs of UserGetHwnd @ 0x140285ACC
 * Callers:
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140325BB8 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z @ 0x140326B28 (-LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z.c)
 *     NtGdiSetPixelFormat @ 0x14033CA10 (NtGdiSetPixelFormat.c)
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ?PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z @ 0x140154CD0 (-PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z.c)
 */

__int64 __fastcall UserGetHwnd(HDC a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v6; // edi
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  const struct tagWND *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax

  v6 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  GreLockVisRgnShared(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
  v9 = PwndFromHDC(a1, v8);
  v12 = (__int64)v9;
  if ( v9 )
  {
    v13 = *(_QWORD *)v9;
    *a2 = *(_QWORD *)v9;
    v14 = W32GetUserSessionState(v13, v10);
    v6 = 1;
    *a3 = GetProp(v12, *(unsigned __int16 *)(v14 + 41406), 1u);
  }
  v15 = W32GetUserSessionState(v11, v10);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v15 + 57008) + 48LL));
  return v6;
}
