/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarInitialize @ 0x1800905F4
 * Callers:
 *     RtlHpHeapManagerInitialize @ 0x180090524 (RtlHpHeapManagerInitialize.c)
 * Callees:
 *     <none>
 */

char *RtlpHpCustomVaCallbacksRegistrarInitialize()
{
  char *result; // rax

  dword_1801D3584 = 2048;
  qword_1801D3590 = 0LL;
  RtlpHpHeapVaCallbacksRegistrar = 0;
  result = (char *)&RtlpHpHeapVaCallbacksRegistrar + 1;
  qword_1801D3588 = (__int64)&unk_1801D3598;
  memset64(&unk_1801D3598, (unsigned __int64)&RtlpHpHeapVaCallbacksRegistrar + 1, 0x40uLL);
  return result;
}
