/*
 * XREFs of ?ProcessUpdate@?$TValueResource@UD2D_SIZE_F@@UtagMILCMD_SIZERESOURCE@@$0KA@@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SIZERESOURCE@@@Z @ 0x180277F74
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TValueResource<D2D_SIZE_F,tagMILCMD_SIZERESOURCE,160>::ProcessUpdate(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = *a1;
  a1[9] = *(_QWORD *)(a3 + 8);
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v3 + 80))(a1, 0LL, 0LL);
  return 0LL;
}
