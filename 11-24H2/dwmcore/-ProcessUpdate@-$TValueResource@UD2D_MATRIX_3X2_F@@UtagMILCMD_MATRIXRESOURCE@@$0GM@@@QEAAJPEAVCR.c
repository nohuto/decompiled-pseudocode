/*
 * XREFs of ?ProcessUpdate@?$TValueResource@UD2D_MATRIX_3X2_F@@UtagMILCMD_MATRIXRESOURCE@@$0GM@@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MATRIXRESOURCE@@@Z @ 0x180277F3C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TValueResource<D2D_MATRIX_3X2_F,tagMILCMD_MATRIXRESOURCE,108>::ProcessUpdate(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  void (__fastcall *v4)(__int64 *, _QWORD, _QWORD); // rax

  v3 = *a1;
  *(_OWORD *)(a1 + 9) = *(_OWORD *)(a3 + 8);
  v4 = *(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v3 + 80);
  a1[11] = *(_QWORD *)(a3 + 24);
  v4(a1, 0LL, 0LL);
  return 0LL;
}
