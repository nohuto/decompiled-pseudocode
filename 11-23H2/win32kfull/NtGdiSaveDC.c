/*
 * XREFs of NtGdiSaveDC @ 0x1C006DA90
 * Callers:
 *     <none>
 * Callees:
 *     GreSaveDCInternal @ 0x1C006DAB0 (GreSaveDCInternal.c)
 */

__int64 __fastcall NtGdiSaveDC(__int64 a1)
{
  return GreSaveDCInternal(a1, 0LL);
}
