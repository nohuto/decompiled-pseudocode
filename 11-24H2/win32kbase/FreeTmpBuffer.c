/*
 * XREFs of FreeTmpBuffer @ 0x14001A2D0
 * Callers:
 *     NtGdiGetRegionData @ 0x140018290 (NtGdiGetRegionData.c)
 *     NtGdiExtCreateRegion @ 0x140066C50 (NtGdiExtCreateRegion.c)
 *     NtGdiOpenDCW @ 0x1400675B0 (NtGdiOpenDCW.c)
 *     NtGdiPolyPolyDraw @ 0x140067C00 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     FreeThreadBufferWithTag @ 0x14001BCC0 (FreeThreadBufferWithTag.c)
 */

_QWORD *__fastcall FreeTmpBuffer(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *result; // rax

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 88);
  if ( a1 != *(_QWORD *)(v3 + 2208) )
    return (_QWORD *)FreeThreadBufferWithTag(a1);
  result = *(_QWORD **)(v3 + 2200);
  *result = a1;
  return result;
}
