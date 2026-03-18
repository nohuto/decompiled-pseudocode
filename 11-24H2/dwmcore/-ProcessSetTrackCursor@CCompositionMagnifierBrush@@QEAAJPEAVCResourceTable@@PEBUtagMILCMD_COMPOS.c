/*
 * XREFs of ?ProcessSetTrackCursor@CCompositionMagnifierBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETTRACKCURSOR@@@Z @ 0x180297314
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UpdateCursorListenerRegistration@CCompositionMagnifierBrush@@AEAAXXZ @ 0x1802973A8 (-UpdateCursorListenerRegistration@CCompositionMagnifierBrush@@AEAAXXZ.c)
 */

__int64 __fastcall CCompositionMagnifierBrush::ProcessSetTrackCursor(
        CCompositionMagnifierBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETTRACKCURSOR *a3)
{
  char v3; // al

  v3 = *((_BYTE *)a3 + 8);
  if ( *((_BYTE *)this + 204) != v3 )
  {
    *((_BYTE *)this + 204) = v3;
    CCompositionMagnifierBrush::UpdateCursorListenerRegistration(this);
    CBrush::NotifyOnChanged((__int64)this, 6u, (__int64)this);
  }
  return 0LL;
}
