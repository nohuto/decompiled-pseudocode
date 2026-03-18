/*
 * XREFs of ?vDestroy@DC@@QEAAXXZ @ 0x1400E624C
 * Callers:
 *     NtGdiStrokePath @ 0x1400E5B80 (NtGdiStrokePath.c)
 *     NtGdiPathToRegion @ 0x1400E5CE0 (NtGdiPathToRegion.c)
 *     NtGdiFillPath @ 0x1400E5E20 (NtGdiFillPath.c)
 *     ?vRestorePath@@YAXAEAVXDCOBJ@@J@Z @ 0x1400E6220 (-vRestorePath@@YAXAEAVXDCOBJ@@J@Z.c)
 *     NtGdiBeginPath @ 0x1401BFC50 (NtGdiBeginPath.c)
 *     NtGdiSelectClipPath @ 0x1401F36D0 (NtGdiSelectClipPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1401F9420 (NtGdiStrokeAndFillPath.c)
 *     NtGdiAbortPath @ 0x140336A40 (NtGdiAbortPath.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vDestroy(DC *this)
{
  *((_DWORD *)this + 62) &= ~1u;
  DC::hpath(this, 0LL);
}
