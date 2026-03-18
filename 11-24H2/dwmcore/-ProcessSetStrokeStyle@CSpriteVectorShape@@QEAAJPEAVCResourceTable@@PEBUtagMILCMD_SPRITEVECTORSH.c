/*
 * XREFs of ?ProcessSetStrokeStyle@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKESTYLE@@@Z @ 0x18014FCC0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeStyle(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKESTYLE *a3)
{
  if ( *((_QWORD *)this + 23) != *((_QWORD *)a3 + 1)
    || *((_DWORD *)this + 48) != *((_DWORD *)a3 + 4)
    || *((_DWORD *)this + 49) != *((_DWORD *)a3 + 5) )
  {
    *((_DWORD *)this + 46) = *((_DWORD *)a3 + 2);
    *((_DWORD *)this + 47) = *((_DWORD *)a3 + 3);
    *((_DWORD *)this + 48) = *((_DWORD *)a3 + 4);
    *((_DWORD *)this + 49) = *((_DWORD *)a3 + 5);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
  return 0LL;
}
