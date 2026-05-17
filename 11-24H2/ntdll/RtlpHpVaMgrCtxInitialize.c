/*
 * XREFs of RtlpHpVaMgrCtxInitialize @ 0x18009064C
 * Callers:
 *     RtlHpHeapManagerInitialize @ 0x180090524 (RtlHpHeapManagerInitialize.c)
 * Callees:
 *     RtlCSparseBitmapInitialize @ 0x1800905B4 (RtlCSparseBitmapInitialize.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxInitialize(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 result; // rax

  memset_thunk_772440563353939046(a1, 0, 0x3840uLL);
  RtlCSparseBitmapInitialize((__int64)(a1 + 4), 0x840u);
  v2 = a1 + 271;
  result = 255LL;
  do
  {
    *(v2 - 1) = 0LL;
    v2[2] = 0LL;
    v2[3] = 0LL;
    v2[4] = 0LL;
    *v2 = 0LL;
    v2[1] = 0LL;
    v2 += 6;
    --result;
  }
  while ( result );
  return result;
}
