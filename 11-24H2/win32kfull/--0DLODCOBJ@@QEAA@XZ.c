/*
 * XREFs of ??0DLODCOBJ@@QEAA@XZ @ 0x14001D1D8
 * Callers:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140014E94 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z @ 0x140016AF8 (-GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z.c)
 *     NtGdiExtSelectClipRgn @ 0x140018FD0 (NtGdiExtSelectClipRgn.c)
 *     GreGetDCObject @ 0x1400191F4 (GreGetDCObject.c)
 *     NtGdiGetDCObject @ 0x1400194F0 (NtGdiGetDCObject.c)
 *     NtGdiSetPixel @ 0x140019850 (NtGdiSetPixel.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x14001A5E0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001D0CC (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GrepSetICMMode@@YAHAEAVXDCOBJ@@KK@Z @ 0x140021C54 (-GrepSetICMMode@@YAHAEAVXDCOBJ@@KK@Z.c)
 *     ?GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400C3D24 (-GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     GrePatBlt @ 0x1400C4060 (GrePatBlt.c)
 *     ?GreExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@PEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400C4500 (-GreExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@PEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x1400C4DA4 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 *     NtGdiGetPixel @ 0x1400C51B0 (NtGdiGetPixel.c)
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400C5BA4 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 *     ?GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400CCB64 (-GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z @ 0x1400D2E9C (-GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400D3F84 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?GrepExtTextOutW@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x140172E10 (-GrepExtTextOutW@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXKW4EntryP.c)
 * Callees:
 *     ??0XDCOBJ@@QEAA@XZ @ 0x1401542B0 (--0XDCOBJ@@QEAA@XZ.c)
 */

DLODCOBJ *__fastcall DLODCOBJ::DLODCOBJ(DLODCOBJ *this)
{
  DLODCOBJ *result; // rax

  XDCOBJ::XDCOBJ(this);
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  PushThreadGuardedObject(
    (char *)this + 40,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 40) >> 64),
    UnexpectedThreadTerminationHandler<DLODCOBJ>::OnUnexpectedThreadTerminationStatic);
  result = this;
  *((_WORD *)this + 36) = 256;
  return result;
}
