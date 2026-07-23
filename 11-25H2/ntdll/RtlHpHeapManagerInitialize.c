/*
 * XREFs of RtlHpHeapManagerInitialize @ 0x1800B98A4
 * Callers:
 *     RtlHpInitializeHeapManager @ 0x1800B97BC (RtlHpInitializeHeapManager.c)
 * Callees:
 *     RtlCSparseBitmapInitialize @ 0x1800B9934 (RtlCSparseBitmapInitialize.c)
 *     RtlpHpCustomVaCallbacksRegistrarInitialize @ 0x1800B9974 (RtlpHpCustomVaCallbacksRegistrarInitialize.c)
 *     RtlpHpVaMgrCtxInitialize @ 0x1800B99CC (RtlpHpVaMgrCtxInitialize.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

_QWORD *__fastcall RtlHpHeapManagerInitialize(__int64 a1, __int64 *a2)
{
  _QWORD *result; // rax
  __int64 v4; // rcx

  memset_thunk_772440563353939046(&qword_1801D0978, 0, 0x38D8uLL);
  RtlpHpHeapManager = (__int64)&RtlpHpHeapGlobals;
  memset_thunk_772440563353939046(&qword_1801D0978, 0, 0x50uLL);
  RtlCSparseBitmapInitialize(&BaseAddress, 72LL);
  RtlpHpVaMgrCtxInitialize(&unk_1801D09C8);
  RtlpHpCustomVaCallbacksRegistrarInitialize();
  result = &unk_1801D4210;
  qword_1801D4248 = *a2;
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
