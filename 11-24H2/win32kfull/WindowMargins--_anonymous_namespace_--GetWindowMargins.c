/*
 * XREFs of WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x14014C28C
 * Callers:
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014AC60 (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x14014AE04 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     ?OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z @ 0x14014C0EC (-OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014C21C (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x14014C388 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 */

__int64 __fastcall WindowMargins::_anonymous_namespace_::GetWindowMargins(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 Prop; // r10
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 WindowDpiLastNotify; // r9
  int v12; // ecx
  __int64 v13; // rax
  char v14; // [rsp+50h] [rbp+18h] BYREF

  if ( !IsTopLevelWindow(a1) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v5, v4);
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 42312), 1u);
  if ( !Prop )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 40);
  v10 = *(_DWORD *)(v9 + 288);
  WindowDpiLastNotify = (v10 >> 8) & 0x1FF;
  if ( ((v10 >> 8) & 0x1FF) == 0 )
  {
    if ( (*(_BYTE *)(v9 + 233) & 4) == 0 )
      goto LABEL_11;
    if ( a2 )
    {
      WindowDpiLastNotify = a2;
      return *(_QWORD *)WindowMargins::CWindowMarginProp::CalculateWindowMargins(Prop, &v14, a1, WindowDpiLastNotify);
    }
    v12 = v10 & 0xF;
    if ( v12 != 3 )
    {
      if ( (*(_DWORD *)(v9 + 232) & 0x400) != 0 )
      {
        WindowDpiLastNotify = (unsigned int)GetWindowDpiLastNotify(a1);
        return *(_QWORD *)WindowMargins::CWindowMarginProp::CalculateWindowMargins(Prop, &v14, a1, WindowDpiLastNotify);
      }
      if ( !v12 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 496LL);
        if ( v13 )
        {
          if ( (*(_DWORD *)(**(_QWORD **)(v13 + 8) + 64LL) & 1) != 0 )
          {
            WindowDpiLastNotify = 96LL;
            return *(_QWORD *)WindowMargins::CWindowMarginProp::CalculateWindowMargins(
                                Prop,
                                &v14,
                                a1,
                                WindowDpiLastNotify);
          }
        }
      }
LABEL_11:
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) + 272LL);
    }
  }
  return *(_QWORD *)WindowMargins::CWindowMarginProp::CalculateWindowMargins(Prop, &v14, a1, WindowDpiLastNotify);
}
