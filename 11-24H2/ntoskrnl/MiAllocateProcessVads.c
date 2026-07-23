/*
 * XREFs of MiAllocateProcessVads @ 0x14091B168
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14091A9E8 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140AA3638 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiAllocateVad @ 0x1408DC6F8 (MiAllocateVad.c)
 *     MiReturnProcessVads @ 0x140AB7BB4 (MiReturnProcessVads.c)
 */

_QWORD *__fastcall MiAllocateProcessVads(__int64 a1, __int64 a2)
{
  void *Vad; // rbx
  _QWORD *v5; // rax
  _QWORD *v7; // rax

  Vad = (void *)MiAllocateVad(0x7FFE0000uLL, 0x7FFE0FFFuLL, 1);
  if ( !Vad )
    return 0LL;
  if ( !qword_140E2DBB8 )
    goto LABEL_5;
  v5 = (_QWORD *)MiAllocateVad(qword_140E2DBB8, qword_140E2DBB8 + 4095, 1);
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
