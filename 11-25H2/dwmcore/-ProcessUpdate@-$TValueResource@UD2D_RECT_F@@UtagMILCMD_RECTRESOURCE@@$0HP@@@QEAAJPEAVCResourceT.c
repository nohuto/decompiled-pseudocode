/*
 * XREFs of ?ProcessUpdate@?$TValueResource@UD2D_RECT_F@@UtagMILCMD_RECTRESOURCE@@$0HP@@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTRESOURCE@@@Z @ 0x18024FD00
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TValueResource<D2D_RECT_F,tagMILCMD_RECTRESOURCE,127>::ProcessUpdate(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = *a1;
  *(_OWORD *)(a1 + 9) = *(_OWORD *)(a3 + 8);
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v3 + 80))(a1, 0LL, 0LL);
  return 0LL;
}
