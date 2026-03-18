/*
 * XREFs of ?bInactive@DC@@QEBAHXZ @ 0x1400E61C0
 * Callers:
 *     NtGdiWidenPath @ 0x1400E4EA0 (NtGdiWidenPath.c)
 *     NtGdiGetPath @ 0x1400E5650 (NtGdiGetPath.c)
 *     NtGdiStrokePath @ 0x1400E5B80 (NtGdiStrokePath.c)
 *     NtGdiPathToRegion @ 0x1400E5CE0 (NtGdiPathToRegion.c)
 *     NtGdiFillPath @ 0x1400E5E20 (NtGdiFillPath.c)
 *     NtGdiSelectClipPath @ 0x1401F36D0 (NtGdiSelectClipPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1401F9420 (NtGdiStrokeAndFillPath.c)
 *     NtGdiFlattenPath @ 0x14021EAC0 (NtGdiFlattenPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bInactive(DC *this)
{
  unsigned int v1; // ecx
  int v2; // eax

  if ( !*((_QWORD *)this + 25) )
    return 0;
  v2 = *((_DWORD *)this + 62);
  v1 = 1;
  if ( (v2 & 1) != 0 )
    return 0;
  return v1;
}
