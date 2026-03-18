/*
 * XREFs of ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140252698
 * Callers:
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x140249264 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     xxxSetModernAppWindow @ 0x14024CD58 (xxxSetModernAppWindow.c)
 *     EditionIsAppForeground @ 0x140277930 (EditionIsAppForeground.c)
 *     GetActiveTrackPwnd @ 0x14027F30C (GetActiveTrackPwnd.c)
 *     NtUserNavigateFocus @ 0x140299E00 (NtUserNavigateFocus.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400F6DEC (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall CoreWindowProp::CompositeAppHasForeground(const struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  const struct tagWND *TopLevelWindow; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  const struct tagWND *v12; // rsi
  struct tagWND *CompositeAppFrameWindowOrSelf; // rdi
  __int64 v14; // rdx
  struct tagWND *v15; // rax

  v5 = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944) )
    return 0LL;
  if ( !*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 18944) + 128LL) )
    return 0LL;
  TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)a1);
  UserSessionState = W32GetUserSessionState(v8, v7);
  v10 = GetTopLevelWindow(*(_QWORD *)(*(_QWORD *)(UserSessionState + 18944) + 128LL));
  v12 = (const struct tagWND *)v10;
  if ( !TopLevelWindow || !v10 )
    return 0LL;
  CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(TopLevelWindow, v11);
  v15 = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v12, v14);
  if ( CompositeAppFrameWindowOrSelf == v15 || *((struct tagWND **)CompositeAppFrameWindowOrSelf + 25) == v15 )
    return 1;
  return v5;
}
