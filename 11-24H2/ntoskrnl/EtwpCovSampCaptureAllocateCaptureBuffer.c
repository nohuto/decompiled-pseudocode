/*
 * XREFs of EtwpCovSampCaptureAllocateCaptureBuffer @ 0x1407B22F0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

_QWORD *__fastcall EtwpCovSampCaptureAllocateCaptureBuffer(__int64 a1, __int64 a2)
{
  _QWORD *Pool2; // rax
  _QWORD *v5; // rbx

  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, (unsigned int)(8 * *(_DWORD *)(a1 + 1296) + 64), 0x56777445u);
  v5 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0x50uLL);
    v5[6] = a2;
    v5[2] = 3401298175LL;
    *((_WORD *)v5 + 30) = *(_WORD *)(a1 + 1296);
  }
  return v5;
}
