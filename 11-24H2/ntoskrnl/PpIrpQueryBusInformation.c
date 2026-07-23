/*
 * XREFs of PpIrpQueryBusInformation @ 0x140A6CFA0
 * Callers:
 *     PnpQueryBusInformation @ 0x140A6CF10 (PnpQueryBusInformation.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopSynchronousCall @ 0x1408B9564 (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryBusInformation(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  _WORD v5[44]; // [rsp+30h] [rbp-58h] BYREF

  *a2 = 0LL;
  memset_0(v5, 0, 0x48uLL);
  v5[0] = 5403;
  result = IopSynchronousCall(a1, (__int64)v5, -1073741637, 0LL, a2);
  if ( (int)result < 0 )
    *a2 = 0LL;
  return result;
}
