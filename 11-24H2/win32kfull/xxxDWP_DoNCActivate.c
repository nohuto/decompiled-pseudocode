/*
 * XREFs of xxxDWP_DoNCActivate @ 0x14006CB5C
 * Callers:
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxEndMenuLoop @ 0x1402517D0 (xxxEndMenuLoop.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     DwmAsyncActivationChange @ 0x14006CCE0 (DwmAsyncActivationChange.c)
 *     IsModelessMenuNotificationWindow @ 0x14006CD9C (IsModelessMenuNotificationWindow.c)
 *     ?AreNonClientAreasToBePainted@@YAIPEAUtagWND@@@Z @ 0x14006CDF4 (-AreNonClientAreasToBePainted@@YAIPEAUtagWND@@@Z.c)
 *     GetWindowBorders @ 0x14006E4E8 (GetWindowBorders.c)
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     IsToplevelWindowDesktopComposed @ 0x140073A04 (IsToplevelWindowDesktopComposed.c)
 *     xxxMenuBarDraw @ 0x1401FBF4C (xxxMenuBarDraw.c)
 */

__int64 __fastcall xxxDWP_DoNCActivate(struct tagWND *a1, char a2, __int64 a3)
{
  BOOL v5; // ecx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  HDC DCEx; // rdi
  __int64 v13; // rax
  unsigned int WindowBorders; // eax

  v5 = (a2 & 1) != 0 || (a2 & 2) == 0 && (unsigned int)IsModelessMenuNotificationWindow();
  SetOrClrWF(v5, a1, 0x40u, 1);
  if ( a3 != -1 )
  {
    v10 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v10 + 31) & 0x10) != 0
      && (*(_BYTE *)(v10 + 17) & 1) == 0
      && (unsigned __int16)AreNonClientAreasToBePainted(a1) )
    {
      v11 = UserValidateCopyRgn(a3);
      DCEx = (HDC)_GetDCEx(a1, v11, 65537LL);
      if ( DCEx )
      {
        v13 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v13 + 16) & 1) != 0 )
        {
          WindowBorders = GetWindowBorders(*(unsigned int *)(v13 + 28), *(unsigned int *)(v13 + 24));
          xxxMenuBarDraw(a1, DCEx, WindowBorders, WindowBorders);
        }
        xxxDrawCaptionBar(a1, DCEx);
        _ReleaseDC(DCEx);
      }
      else
      {
        GreDeleteObject(v11);
      }
    }
  }
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
  {
    result = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(result + 26) & 8) != 0 )
    {
      v9 = (void *)ReferenceDwmApiPort(v8, v7);
      return DwmAsyncActivationChange(v9);
    }
  }
  return result;
}
