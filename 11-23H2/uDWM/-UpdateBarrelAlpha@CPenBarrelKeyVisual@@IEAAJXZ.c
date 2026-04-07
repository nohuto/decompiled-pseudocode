/*
 * XREFs of ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18006D254
 * Callers:
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18006C00C (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18006C304 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x1800B2250 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x1800CCD90 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 * Callees:
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18000DB8C (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x18001FE8C (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x180020664 (-Unhide@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::UpdateBarrelAlpha(CPenBarrelKeyVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *((_BYTE *)this + 348) && (*((_DWORD *)this + 79) & 0x20) != 0 )
  {
    if ( *((_BYTE *)this + 349) )
    {
      CVisual::Unhide(*((CVisual **)this + 41));
      *((_BYTE *)this + 349) = 0;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0q_EtwEventWriteTransfer(v2, (int)&UdwmPenBarrel_Start, *((_DWORD *)this + 76));
      *((_BYTE *)this + 350) = 1;
    }
  }
  else if ( !*((_BYTE *)this + 349) )
  {
    CVisual::Hide(*((CVisual **)this + 41));
    *((_BYTE *)this + 349) = 1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0q_EtwEventWriteTransfer(v3, (int)&UdwmPenBarrel_Stop, *((_DWORD *)this + 76));
    *((_BYTE *)this + 350) = 0;
  }
  return 0LL;
}
