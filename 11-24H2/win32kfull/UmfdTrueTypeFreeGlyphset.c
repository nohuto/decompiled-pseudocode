/*
 * XREFs of UmfdTrueTypeFreeGlyphset @ 0x1400FFDC0
 * Callers:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1400FF8C8 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1400FFFB0 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x14010090C (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x140100E58 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall UmfdTrueTypeFreeGlyphset(__int64 a1, int a2, void *a3)
{
  _QWORD v6[6]; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+50h] [rbp-18h]

  FontDriverDdiRequest::FontDriverDdiRequest(v6, 15LL);
  v6[5] = a1;
  v6[0] = &TrueTypeFreeGlyphsetRequest::`vftable';
  v7 = a2;
  UmfdClientSendAndWaitForCompletion(0LL, v6);
  UmfdAllocation::ReleaseKernelmodeAllocation(a3);
}
