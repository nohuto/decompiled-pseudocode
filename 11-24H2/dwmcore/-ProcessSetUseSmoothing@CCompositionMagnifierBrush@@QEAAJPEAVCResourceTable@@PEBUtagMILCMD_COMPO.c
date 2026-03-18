/*
 * XREFs of ?ProcessSetUseSmoothing@CCompositionMagnifierBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETUSESMOOTHING@@@Z @ 0x180297354
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CCompositionMagnifierBrush::ProcessSetUseSmoothing(
        CCompositionMagnifierBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETUSESMOOTHING *a3)
{
  char v3; // al

  v3 = *((_BYTE *)a3 + 8);
  if ( *((_BYTE *)this + 108) != v3 )
  {
    *((_BYTE *)this + 108) = v3;
    CBrush::NotifyOnChanged((__int64)this, 6u, (__int64)this);
  }
  return 0LL;
}
