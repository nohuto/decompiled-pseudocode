/*
 * XREFs of ?ProcessUpdate@?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DO@@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FLOATRESOURCE@@@Z @ 0x180277F10
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TValueResource<float,tagMILCMD_FLOATRESOURCE,62>::ProcessUpdate(_DWORD *a1, __int64 a2, __int64 a3)
{
  a1[18] = *(_DWORD *)(a3 + 8);
  (*(void (__fastcall **)(_DWORD *, _QWORD, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, 0LL, 0LL);
  return 0LL;
}
