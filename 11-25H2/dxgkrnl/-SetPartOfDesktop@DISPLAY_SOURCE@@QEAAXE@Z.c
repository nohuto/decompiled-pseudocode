/*
 * XREFs of ?SetPartOfDesktop@DISPLAY_SOURCE@@QEAAXE@Z @ 0x1403F5890
 * Callers:
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1403F5758 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DecrementDesktopVidPnCount@DXGSESSIONDATA@@QEAAXXZ @ 0x14005C314 (-DecrementDesktopVidPnCount@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

void __fastcall DISPLAY_SOURCE::SetPartOfDesktop(DISPLAY_SOURCE *this, char a2)
{
  DXGGLOBAL *Global; // rax
  volatile signed __int32 *SessionData; // rax

  if ( (*((_BYTE *)this + 762) != 0) != (a2 != 0) )
  {
    *((_BYTE *)this + 762) = a2;
    Global = DXGGLOBAL::GetGlobal();
    SessionData = (volatile signed __int32 *)DXGGLOBAL::GetSessionData(Global);
    if ( a2 )
      _InterlockedIncrement(SessionData + 4632);
    else
      DXGSESSIONDATA::DecrementDesktopVidPnCount((DXGSESSIONDATA *)SessionData);
  }
}
