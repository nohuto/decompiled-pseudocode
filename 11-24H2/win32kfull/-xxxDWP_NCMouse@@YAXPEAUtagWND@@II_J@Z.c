/*
 * XREFs of ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1401AF128
 * Callers:
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     IsToplevelWindowDesktopComposed @ 0x140073A04 (IsToplevelWindowDesktopComposed.c)
 *     xxxDCETrackCaptionButton @ 0x140109CAC (xxxDCETrackCaptionButton.c)
 *     xxxTrackCaptionButton @ 0x14010B9EC (xxxTrackCaptionButton.c)
 *     xxxHandleNCMouseGuys @ 0x1401AF278 (xxxHandleNCMouseGuys.c)
 *     _GetMenuState @ 0x1401B02A8 (_GetMenuState.c)
 *     xxxGetSysMenu @ 0x1401B0B74 (xxxGetSysMenu.c)
 */

void __fastcall xxxDWP_NCMouse(struct tagWND *a1, int a2, unsigned int a3, struct tagDRAWITEMSTRUCT *a4)
{
  __int64 v7; // rcx
  __int64 SysMenu; // rax
  unsigned int v9; // esi
  unsigned __int16 v10; // ax

  if ( a2 == 161 )
  {
    if ( a3 == 8 || a3 == 9 || a3 - 20 < 2 )
    {
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1)
        && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
      {
        v10 = xxxDCETrackCaptionButton(a1, a3);
      }
      else
      {
        v10 = xxxTrackCaptionButton(a1, a3);
      }
      v9 = v10;
    }
    else
    {
      if ( a3 - 10 > 7 )
      {
LABEL_6:
        xxxHandleNCMouseGuys(a1);
        return;
      }
      v9 = a3 + 61431;
    }
    if ( !v9 )
      goto LABEL_6;
    if ( v9 == 61824
      || (v7 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v7 + 30) & 8) == 0)
      || (*(_BYTE *)(v7 + 31) & 0xC0) == 0x40
      || (SysMenu = xxxGetSysMenu(a1, 1LL), (GetMenuState(SysMenu, (unsigned __int16)v9 & 0xFFF0) & 3) == 0) )
    {
      xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 274LL, v9, a4, 0, 0, 0LL, 1, 1);
    }
  }
  else if ( (unsigned int)(a2 - 162) <= 1 )
  {
    goto LABEL_6;
  }
}
