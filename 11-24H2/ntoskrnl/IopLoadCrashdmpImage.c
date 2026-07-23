/*
 * XREFs of IopLoadCrashdmpImage @ 0x140ABBFC0
 * Callers:
 *     <none>
 * Callees:
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 */

__int64 __fastcall IopLoadCrashdmpImage(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5, PVOID *a6)
{
  return MmLoadSystemImageEx(a1, a2, a3, 0, a4 | 0x20u, a5, a6);
}
