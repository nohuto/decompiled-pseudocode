/*
 * XREFs of ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x140100E58
 * Callers:
 *     UmfdQueryTrueTypeOutline @ 0x1400FFCF0 (UmfdQueryTrueTypeOutline.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1400FFDC0 (UmfdTrueTypeFreeGlyphset.c)
 *     ??0QueryFontTreeRequest@@QEAA@PEAUDHPDEV__@@_KKKPEA_K@Z @ 0x140100178 (--0QueryFontTreeRequest@@QEAA@PEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ??0LoadFontFileRequest@@QEAA@KPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1401001F8 (--0LoadFontFileRequest@@QEAA@KPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     UmfdDestroyFont @ 0x1401003F0 (UmfdDestroyFont.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x1401004C0 (UmfdQueryGlyphMetricsPlusBits.c)
 *     ??0QueryFontRequest@@QEAA@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x140100EEC (--0QueryFontRequest@@QEAA@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ??0QueryFontFileRequest@@QEAA@_KKKPEAK@Z @ 0x140100F64 (--0QueryFontFileRequest@@QEAA@_KKKPEAK@Z.c)
 *     UmfdUnloadFontFileInternal @ 0x140100FD8 (UmfdUnloadFontFileInternal.c)
 *     UmfdDrvFreeInternal @ 0x140101948 (UmfdDrvFreeInternal.c)
 *     UmfdGetTrueTypeFile @ 0x1401019F0 (UmfdGetTrueTypeFile.c)
 *     ??0FontManagementRequest@@QEAA@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x140101BD4 (--0FontManagementRequest@@QEAA@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     UmfdEscape @ 0x14033EDD0 (UmfdEscape.c)
 *     UmfdQueryGlyphAttrs @ 0x14033EE70 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall FontDriverDdiRequest::FontDriverDdiRequest(__int64 a1, int a2)
{
  __int128 ThreadInformation; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &FontDriverDdiRequest::`vftable';
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  *(_BYTE *)(a1 + 32) = 0;
  ThreadInformation = 0LL;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    *(_QWORD *)(a1 + 24) = ThreadInformation;
    *(_BYTE *)(a1 + 32) = 1;
  }
  return a1;
}
