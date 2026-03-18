/*
 * XREFs of ?ProcessSetMagnification@CCompositionMagnifierBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETMAGNIFICATION@@@Z @ 0x18029729C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CCompositionMagnifierBrush::ProcessSetMagnification(
        CCompositionMagnifierBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETMAGNIFICATION *a3)
{
  float v3; // xmm1_4

  v3 = *((float *)a3 + 2);
  if ( *((float *)this + 26) != v3 )
  {
    *((float *)this + 26) = v3;
    CBrush::NotifyOnChanged((__int64)this, 6u, (__int64)this);
  }
  return 0LL;
}
