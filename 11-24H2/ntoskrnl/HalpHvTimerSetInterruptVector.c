/*
 * XREFs of HalpHvTimerSetInterruptVector @ 0x14055CEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpHvTimerSetInterruptVector(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 result; // rax

  LODWORD(a3) = KeGetPcr()->Prcb.Number;
  v3 = __readmsr(0x40000083u);
  if ( (v3 & 1) == 0 )
    __writemsr(0x40000083u, v3 ^ (*(_QWORD *)(a1 + 24 * a3 + 16) ^ v3) & 0xFFFFFFFFFFFFF001uLL | 1);
  __writemsr(0x40000093u, a2);
  result = 196616LL;
  *(_QWORD *)(a1 + 24LL * (unsigned int)a3) = 196616LL;
  __writemsr(0x400000B0u, 0x30008uLL);
  return result;
}
