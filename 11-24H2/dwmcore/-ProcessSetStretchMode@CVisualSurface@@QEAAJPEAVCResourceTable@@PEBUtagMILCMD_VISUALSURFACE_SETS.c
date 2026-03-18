/*
 * XREFs of ?ProcessSetStretchMode@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETSTRETCHMODE@@@Z @ 0x18022E21C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CVisualSurface::ProcessSetStretchMode(
        CVisualSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALSURFACE_SETSTRETCHMODE *a3)
{
  bool v3; // zf

  v3 = *((_BYTE *)this + 204) == 0;
  *((_DWORD *)this + 50) = *((_DWORD *)a3 + 2);
  if ( !v3 )
    CResource::NotifyOnChanged(this, 6LL, 0LL);
  return 0LL;
}
