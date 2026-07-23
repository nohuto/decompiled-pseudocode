/*
 * XREFs of RtlHpHeapManagerInitialize @ 0x18009B0B0
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x18009AFC8 (RtlHpInitializeHeapManager.c)
 * Callees:
 *     RtlCSparseBitmapInitialize @ 0x18009B140 (RtlCSparseBitmapInitialize.c)
 *     RtlpHpCustomVaCallbacksRegistrarInitialize @ 0x18009B180 (RtlpHpCustomVaCallbacksRegistrarInitialize.c)
 *     RtlpHpVaMgrCtxInitialize @ 0x18009B1D8 (RtlpHpVaMgrCtxInitialize.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

_QWORD *__fastcall RtlHpHeapManagerInitialize(__int64 a1, __int64 *a2)
{
  _QWORD *result; // rax
  __int64 v4; // rcx

  memset_thunk_772440563353939046(&qword_1801CD918, 0, 0x38D8uLL);
  RtlpHpHeapManager = (__int64)&RtlpHpHeapGlobals;
  memset_thunk_772440563353939046(&qword_1801CD918, 0, 0x50uLL);
  RtlCSparseBitmapInitialize(&BaseAddress, 72LL);
  RtlpHpVaMgrCtxInitialize(&unk_1801CD968);
  RtlpHpCustomVaCallbacksRegistrarInitialize();
  result = &unk_1801D11B0;
  qword_1801D11E8 = *a2;
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
