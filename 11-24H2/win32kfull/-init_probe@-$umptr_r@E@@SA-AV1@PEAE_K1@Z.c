/*
 * XREFs of ?init_probe@?$umptr_r@E@@SA?AV1@PEAE_K1@Z @ 0x14002851C
 * Callers:
 *     NtGdiCreateBitmap @ 0x1400279E0 (NtGdiCreateBitmap.c)
 *     NtGdiSetBitmapBits @ 0x1400284C0 (NtGdiSetBitmapBits.c)
 *     NtGdiPolyDraw @ 0x140176E00 (NtGdiPolyDraw.c)
 *     NtGdiSetDIBitsToDeviceInternal @ 0x140177AC0 (NtGdiSetDIBitsToDeviceInternal.c)
 *     NtGdiCreateDIBitmapInternal @ 0x14017AF20 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiStretchDIBitsInternal @ 0x1401858D0 (NtGdiStretchDIBitsInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall umptr_r<unsigned char>::init_probe(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 24) = 0;
  if ( is_mul_ok(a3, 1uLL) )
  {
    if ( (_DWORD)a3 && ((a4 - 1) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = a3;
  }
  return a1;
}
