/*
 * XREFs of ?bInactive@DC@@QEBAHXZ @ 0x1C02C0268
 * Callers:
 *     NtGdiFillPath @ 0x1C02C06C0 (NtGdiFillPath.c)
 *     NtGdiFlattenPath @ 0x1C02C0850 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02C0960 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02C0C10 (NtGdiPathToRegion.c)
 *     NtGdiSelectClipPath @ 0x1C02C0D70 (NtGdiSelectClipPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02C0F20 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02C10F0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02C1260 (NtGdiWidenPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bInactive(DC *this)
{
  int v1; // eax
  unsigned int v2; // ecx

  if ( !*((_QWORD *)this + 25) )
    return 0;
  v1 = *((_DWORD *)this + 62);
  v2 = 1;
  if ( (v1 & 1) != 0 )
    return 0;
  return v2;
}
