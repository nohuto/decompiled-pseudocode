/*
 * XREFs of MiAllocateProcessVads @ 0x140905300
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140904AC8 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140AA4AB4 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiAllocateVad @ 0x1408F92F8 (MiAllocateVad.c)
 *     MiReturnProcessVads @ 0x140ABC98C (MiReturnProcessVads.c)
 */

_QWORD *__fastcall MiAllocateProcessVads(__int64 a1, __int64 a2)
{
  void *Vad; // rbx
  _QWORD *v5; // rax
  _QWORD *v7; // rax

  Vad = (void *)MiAllocateVad(0x7FFE0000uLL, 0x7FFE0FFFuLL, 1);
  if ( !Vad )
    return 0LL;
  if ( !qword_140E2D838 )
    goto LABEL_5;
  v5 = (_QWORD *)MiAllocateVad(qword_140E2D838, qword_140E2D838 + 4095, 1);
  if ( v5 )
  {
    *v5 = Vad;
    Vad = v5;
LABEL_5:
    if ( !a2 )
      return Vad;
    v7 = (_QWORD *)MiAllocateVad(*(_QWORD *)(a1 + 872), a2 - 1, 0);
    if ( v7 )
    {
      *v7 = Vad;
      return v7;
    }
  }
  MiReturnProcessVads(Vad);
  return 0LL;
}
