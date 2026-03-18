/*
 * XREFs of xxxDWP_DoNCActivate @ 0x1C00E1260
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C02133A0 (xxxEndMenuLoop.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00B4B3C (IsToplevelWindowDesktopComposed.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     DwmAsyncActivationChange @ 0x1C00E13EC (DwmAsyncActivationChange.c)
 *     IsModelessMenuNotificationWindow @ 0x1C00E14A8 (IsModelessMenuNotificationWindow.c)
 *     xxxDrawCaptionBar @ 0x1C00E2158 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C00E2338 (GetWindowBorders.c)
 *     xxxMenuBarDraw @ 0x1C0235598 (xxxMenuBarDraw.c)
 */

__int64 __fastcall xxxDWP_DoNCActivate(__int64 *a1, char a2, __int64 a3)
{
  int v5; // r15d
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // rax
  _BYTE *v11; // rdx
  char v12; // r8
  unsigned __int16 v13; // di
  __int64 v14; // rbp
  __int64 DCEx; // rsi
  __int64 v16; // rax
  unsigned int WindowBorders; // eax

  v5 = 4108;
  if ( (a2 & 1) != 0 || (a2 & 2) == 0 && (unsigned int)IsModelessMenuNotificationWindow() )
  {
    v6 = 1;
    v5 = 4109;
  }
  else
  {
    v6 = 0;
  }
  SetOrClrWF(v6, a1, 0x40u, 1);
  if ( a3 != -1 )
  {
    v11 = (_BYTE *)a1[5];
    v12 = v11[31];
    if ( (v12 & 0x10) != 0 && (v11[17] & 1) == 0 )
    {
      v13 = 0;
      if ( *(_DWORD *)(gpsi + 4576LL) != *(_DWORD *)(gpsi + 4580LL)
        || *(_DWORD *)(gpsi + 4604LL) != *(_DWORD *)(gpsi + 4644LL) )
      {
        v13 = 4108;
      }
      if ( (v12 & 0x20) == 0 && (v11[30] & 4) != 0 && *(_DWORD *)(gpsi + 4608LL) != *(_DWORD *)(gpsi + 4612LL) )
        v13 |= 0x8000u;
      if ( v13 )
      {
        v14 = UserValidateCopyRgn(a3);
        DCEx = _GetDCEx(a1, v14, 65537LL);
        if ( DCEx )
        {
          v16 = a1[5];
          if ( (*(_BYTE *)(v16 + 16) & 1) != 0 )
          {
            WindowBorders = GetWindowBorders(*(unsigned int *)(v16 + 28), *(unsigned int *)(v16 + 24));
            xxxMenuBarDraw(a1, DCEx, WindowBorders, WindowBorders);
          }
          xxxDrawCaptionBar(a1, DCEx, v5 | (unsigned int)v13);
          _ReleaseDC(DCEx);
        }
        else
        {
          GreDeleteObject(v14);
        }
      }
    }
  }
  result = IsToplevelWindowDesktopComposed((__int64)a1);
  if ( (_DWORD)result )
  {
    result = a1[5];
    if ( (*(_BYTE *)(result + 26) & 8) != 0 )
    {
      v10 = (void *)ReferenceDwmApiPort(v9, v8);
      return DwmAsyncActivationChange(v10);
    }
  }
  return result;
}
