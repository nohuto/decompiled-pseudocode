/*
 * XREFs of HalpHvTimerArm @ 0x1403BC260
 * Callers:
 *     <none>
 * Callees:
 *     HalpHvCounterQueryCounter @ 0x1403BC300 (HalpHvCounterQueryCounter.c)
 */

__int64 __fastcall HalpHvTimerArm(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 Counter; // rax
  _BOOL8 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx

  if ( a2 == 3 )
  {
    Counter = HalpHvCounterQueryCounter(a1);
    a3 += Counter;
  }
  LODWORD(Counter) = KeGetPcr()->Prcb.Number;
  v7 = a2 == 2;
  v8 = 3 * Counter;
  if ( v7 != ((*(_QWORD *)(a1 + 8 * v8) >> 1) & 1LL) )
  {
    v9 = *(_QWORD *)(a1 + 8 * v8) & 0xFFFFFFFFFFFFFFFCuLL | (2 * v7);
    *(_QWORD *)(a1 + 8 * v8) = v9;
    __writemsr(0x400000B0u, v9);
  }
  __writemsr(0x400000B1u, a3);
  return 0LL;
}
