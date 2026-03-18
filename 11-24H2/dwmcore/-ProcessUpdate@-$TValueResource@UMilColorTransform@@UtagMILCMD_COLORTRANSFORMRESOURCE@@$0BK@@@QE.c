/*
 * XREFs of ?ProcessUpdate@?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BK@@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORTRANSFORMRESOURCE@@@Z @ 0x180277FA4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TValueResource<MilColorTransform,tagMILCMD_COLORTRANSFORMRESOURCE,26>::ProcessUpdate(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a3 + 8);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a3 + 24);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a3 + 40);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a3 + 56);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a3 + 72);
  *(_OWORD *)(a1 + 152) = *(_OWORD *)(a3 + 88);
  *(_DWORD *)(a1 + 168) = *(_DWORD *)(a3 + 104);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, 0LL, 0LL);
  return 0LL;
}
