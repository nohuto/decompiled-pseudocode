/*
 * XREFs of HalInitializeDmaTransferContext @ 0x140476EE0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall HalInitializeDmaTransferContext(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  memset_0(a2 + 1, 0, 0x7CuLL);
  a2[9] |= 2u;
  result = 0LL;
  *a2 = 1;
  return result;
}
