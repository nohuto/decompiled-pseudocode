/*
 * XREFs of ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x18001E480
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001E1D0 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x18001EA40 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 *     ??1CButton@@MEAA@XZ @ 0x180021BEC (--1CButton@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180049728 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180097FD4 (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

void __fastcall CButton::DeactivateTimeline(struct CVisual *this, CTimelineBase **a2)
{
  if ( *a2 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(this, &UdwmAnimation_Stop, 7LL, 0LL);
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    if ( *a2 )
    {
      CTimelineBase::Release(*a2);
      *a2 = 0LL;
    }
  }
}
