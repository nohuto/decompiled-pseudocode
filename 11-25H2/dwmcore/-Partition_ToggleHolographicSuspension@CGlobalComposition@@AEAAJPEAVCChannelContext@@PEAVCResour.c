/*
 * XREFs of ?Partition_ToggleHolographicSuspension@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_TOGGLEHOLOGRAPHICSUSPENSION@@@Z @ 0x18022A158
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalComposition::Partition_ToggleHolographicSuspension(
        CGlobalComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_TOGGLEHOLOGRAPHICSUSPENSION *a4)
{
  LOBYTE(a2) = *((_BYTE *)a4 + 4) != 0;
  (*(void (__fastcall **)(_QWORD, struct CChannelContext *, struct CResourceTable *))(**((_QWORD **)this + 83) + 24LL))(
    *((_QWORD *)this + 83),
    a2,
    a3);
  return 0LL;
}
