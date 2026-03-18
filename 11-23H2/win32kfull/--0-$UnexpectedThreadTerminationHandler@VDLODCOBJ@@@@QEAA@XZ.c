/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013DC2C
 * Callers:
 *     GreGradientFill @ 0x1C0001610 (GreGradientFill.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0024FB0 (GreCreateCompatibleBitmapInternal.c)
 *     GreGetAppClipBox @ 0x1C00BAD80 (GreGetAppClipBox.c)
 *     GreRectVisible @ 0x1C00BD078 (GreRectVisible.c)
 *     NtGdiPatBlt @ 0x1C00BD720 (NtGdiPatBlt.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C00BEBE0 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     GreDrawStream @ 0x1C00FA480 (GreDrawStream.c)
 *     NtGdiAlphaBlend @ 0x1C00FBB30 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C0100110 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 *     GreGetDIBColorTable @ 0x1C0117950 (GreGetDIBColorTable.c)
 *     NtGdiGetDCObject @ 0x1C0119A20 (NtGdiGetDCObject.c)
 *     ?GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0119E44 (-GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C011B070 (GreExtSelectClipRgnInternal.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(
        _OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  PushThreadGuardedObject(
    a1,
    (unsigned __int64)(a1 - 1) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
    UnexpectedThreadTerminationHandler<DLODCOBJ>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
