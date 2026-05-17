/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarInitialize @ 0x1800B9974
 * Callers:
 *     RtlHpHeapManagerInitialize @ 0x1800B98A4 (RtlHpHeapManagerInitialize.c)
 * Callees:
 *     <none>
 */

char *RtlpHpCustomVaCallbacksRegistrarInitialize()
{
  char *result; // rax

  dword_1801D55E4 = 2048;
  qword_1801D55F0 = 0LL;
  RtlpHpHeapVaCallbacksRegistrar = 0;
  result = (char *)&RtlpHpHeapVaCallbacksRegistrar + 1;
  qword_1801D55E8 = (__int64)&unk_1801D55F8;
  memset64(&unk_1801D55F8, (unsigned __int64)&RtlpHpHeapVaCallbacksRegistrar + 1, 0x40uLL);
  return result;
}
