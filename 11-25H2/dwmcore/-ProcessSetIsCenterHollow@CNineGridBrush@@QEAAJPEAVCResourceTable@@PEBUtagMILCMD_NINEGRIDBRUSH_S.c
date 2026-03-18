/*
 * XREFs of ?ProcessSetIsCenterHollow@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW@@@Z @ 0x180206890
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021400 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNineGridBrush::ProcessSetIsCenterHollow(
        CNineGridBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW *a3)
{
  char v3; // al
  void (__fastcall *v4)(__int64, unsigned int, __int64); // rax

  v3 = *((_BYTE *)a3 + 8) != 0;
  if ( *((_BYTE *)this + 168) != v3 )
  {
    *((_BYTE *)this + 168) = v3;
    v4 = *(void (__fastcall **)(__int64, unsigned int, __int64))(*(_QWORD *)this + 80LL);
    if ( v4 == CBrush::NotifyOnChanged )
      CBrush::NotifyOnChanged((__int64)this, 6u, (__int64)this);
    else
      v4((__int64)this, 6u, (__int64)this);
  }
  return 0LL;
}
