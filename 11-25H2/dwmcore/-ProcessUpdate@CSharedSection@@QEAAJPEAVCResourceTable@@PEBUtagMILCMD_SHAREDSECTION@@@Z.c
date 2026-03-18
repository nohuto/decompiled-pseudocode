/*
 * XREFs of ?ProcessUpdate@CSharedSection@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAREDSECTION@@@Z @ 0x1802236E4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSharedSection::ProcessUpdate(
        CSharedSection *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHAREDSECTION *a3)
{
  *((_QWORD *)this + 9) = *((_QWORD *)a3 + 1);
  *((_DWORD *)this + 20) = *((_DWORD *)a3 + 4);
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
