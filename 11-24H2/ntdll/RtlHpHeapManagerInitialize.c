/*
 * XREFs of RtlHpHeapManagerInitialize @ 0x180090524
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x18009043C (RtlHpInitializeHeapManager.c)
 * Callees:
 *     RtlCSparseBitmapInitialize @ 0x1800905B4 (RtlCSparseBitmapInitialize.c)
 *     RtlpHpCustomVaCallbacksRegistrarInitialize @ 0x1800905F4 (RtlpHpCustomVaCallbacksRegistrarInitialize.c)
 *     RtlpHpVaMgrCtxInitialize @ 0x18009064C (RtlpHpVaMgrCtxInitialize.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

_QWORD *__fastcall RtlHpHeapManagerInitialize(__int64 a1, __int64 *a2)
{
  _QWORD *result; // rax
  __int64 v4; // rcx

  memset_thunk_772440563353939046(&qword_1801CE928, 0, 0x38D8uLL);
  RtlpHpHeapManager = (__int64)&RtlpHpHeapGlobals;
  memset_thunk_772440563353939046(&qword_1801CE928, 0, 0x50uLL);
  RtlCSparseBitmapInitialize(&unk_1801CE930, 72LL);
  RtlpHpVaMgrCtxInitialize(&unk_1801CE978);
  RtlpHpCustomVaCallbacksRegistrarInitialize();
  result = &unk_1801D21C0;
  qword_1801D21F8 = *a2;
  v4 = 4LL;
  do
  {
    *result = 0LL;
    result += 2;
    --v4;
  }
  while ( v4 );
  return result;
}
