/*
 * XREFs of _ChildWindowFromPointEx @ 0x140067D2C
 * Callers:
 *     NtUserChildWindowFromPointEx @ 0x140067CB0 (NtUserChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1402DF7A8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140067F70 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     ?PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z @ 0x140068100 (-PtOutsideClipRgnOrMaxClip@tagWND@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x14019CE40 (-LayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 */

struct tagWND *__fastcall ChildWindowFromPointEx(tagWND **a1, struct tagPOINT a2, char a3)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  tagWND *v6; // rcx
  int x; // eax
  __int64 y; // r8
  tagWND *v9; // rcx
  struct tagPOINT v10; // rdx
  __int64 v11; // rcx
  tagWND *v12; // rcx
  tagWND *i; // rbx
  _DWORD *v14; // rax
  struct tagPOINT v16; // [rsp+40h] [rbp+20h] BYREF
  struct tagPOINT v17; // [rsp+48h] [rbp+28h] BYREF

  v17 = a2;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (unsigned __int8)ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext) )
    TransformPointBetweenCoordinateSpaces(&v17, &v17, a1, 0LL);
  if ( a1 == (tagWND **)GetDesktopWindow((__int64)a1) )
  {
    y = (unsigned int)v17.y;
    x = v17.x;
  }
  else
  {
    v6 = a1[5];
    if ( (*((_BYTE *)v6 + 26) & 0x40) != 0 )
      x = *((_DWORD *)v6 + 28) - v17.x;
    else
      x = *((_DWORD *)v6 + 26) + v17.x;
    v17.x = x;
    y = (unsigned int)(*((_DWORD *)v6 + 27) + v17.y);
    v17.y += *((_DWORD *)v6 + 27);
  }
  v9 = a1[5];
  v10 = v17;
  v16 = v17;
  if ( x < *((_DWORD *)v9 + 26)
    || x >= *((_DWORD *)v9 + 28)
    || v17.y < *((_DWORD *)v9 + 27)
    || v17.y >= *((_DWORD *)v9 + 29) )
  {
    return 0LL;
  }
  v11 = *((_QWORD *)v9 + 21);
  if ( v11 )
  {
    if ( !(unsigned int)GrePtInRegion(v11, (unsigned int)x, y) )
      return 0LL;
    v10 = v17;
  }
  v12 = a1[5];
  if ( (*((_BYTE *)v12 + 26) & 8) != 0 && (*((_DWORD *)v12 + 58) & 2) == 0 && !LayerHitTest((struct tagWND *)a1, v10) )
    return 0LL;
  for ( i = a1[14]; i; i = (tagWND *)*((_QWORD *)i + 11) )
  {
    TransformPointBetweenCoordinateSpaces(&v17, &v16, i, a1);
    if ( ((a3 & 1) == 0
       || (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0x10) != 0
       && (!(unsigned int)IsWindowDesktopComposed(i) || !IsWindowCloaked(i)))
      && ((a3 & 2) == 0 || (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 8) == 0)
      && ((a3 & 4) == 0 || (*(_BYTE *)(*((_QWORD *)i + 5) + 24LL) & 0x20) == 0) )
    {
      v14 = (_DWORD *)*((_QWORD *)i + 5);
      if ( v17.x >= v14[22]
        && v17.x < v14[24]
        && v17.y >= v14[23]
        && v17.y < v14[25]
        && !tagWND::PtOutsideClipRgnOrMaxClip(i, &v17)
        && ((*(_BYTE *)(*((_QWORD *)i + 5) + 26LL) & 8) == 0
         || (*((_DWORD *)a1[5] + 58) & 2) != 0
         || LayerHitTest(i, v17)) )
      {
        return i;
      }
    }
  }
  return (struct tagWND *)a1;
}
