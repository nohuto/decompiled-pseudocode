/*
 * XREFs of ExpNodeInitialize @ 0x1407C00C0
 * Callers:
 *     ExpWorkerInitialization @ 0x140C45050 (ExpWorkerInitialization.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void (__fastcall *__fastcall ExpNodeInitialize(__int64 a1))(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v1; // rbx
  void (__fastcall *result)(unsigned __int16 *, __int64, __int64, __int64); // rax

  v1 = (_QWORD *)(a1 + 824);
  memset_0((void *)(a1 + 824), 0, 0x48uLL);
  v1[3] = 0LL;
  result = ExpNodeHotAddProcessorWorker;
  *v1 = 0LL;
  v1[2] = ExpNodeHotAddProcessorWorker;
  return result;
}
