/*
 * XREFs of ?ProcessClearFocusPoint@CCompositionMagnifierBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMAGNIFIERBRUSH_CLEARFOCUSPOINT@@@Z @ 0x180296DF8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CCompositionMagnifierBrush::ProcessClearFocusPoint(
        CCompositionMagnifierBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_CLEARFOCUSPOINT *a3)
{
  if ( *((_BYTE *)this + 200) )
  {
    *((_BYTE *)this + 200) = 0;
    CBrush::NotifyOnChanged((__int64)this, 6u, (__int64)this);
  }
  return 0LL;
}
