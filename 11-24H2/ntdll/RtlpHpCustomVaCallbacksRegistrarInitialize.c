/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarInitialize @ 0x18009B180
 * Callers:
 *     RtlHpHeapManagerInitialize @ 0x18009B0B0 (RtlHpHeapManagerInitialize.c)
 * Callees:
 *     <none>
 */

char *RtlpHpCustomVaCallbacksRegistrarInitialize()
{
  char *result; // rax

  dword_1801D2584 = 2048;
  qword_1801D2590 = 0LL;
  RtlpHpHeapVaCallbacksRegistrar = 0;
  result = (char *)&RtlpHpHeapVaCallbacksRegistrar + 1;
  qword_1801D2588 = (__int64)&unk_1801D2598;
  memset64(&unk_1801D2598, (unsigned __int64)&RtlpHpHeapVaCallbacksRegistrar + 1, 0x40uLL);
  return result;
}
