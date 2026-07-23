/*
 * XREFs of EtwpCovSampCaptureAllocateApc @ 0x1407B2290
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

_QWORD *__fastcall EtwpCovSampCaptureAllocateApc(__int64 a1, __int64 a2)
{
  _QWORD *Pool2; // rax
  _QWORD *v4; // rbx

  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0xA0uLL, 0x56777445u);
  v4 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0xA0uLL);
    v4[6] = a2;
    v4[2] = 2882190508LL;
  }
  return v4;
}
