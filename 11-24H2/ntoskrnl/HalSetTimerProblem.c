/*
 * XREFs of HalSetTimerProblem @ 0x1404F8640
 * Callers:
 *     HalpHpetArmTimer @ 0x14049D850 (HalpHpetArmTimer.c)
 *     HalpHpetSetMatchValue @ 0x14049D89C (HalpHpetSetMatchValue.c)
 *     HalpHpetAcknowledgeInterrupt @ 0x1404A99E0 (HalpHpetAcknowledgeInterrupt.c)
 * Callees:
 *     <none>
 */

void __fastcall HalSetTimerProblem(__int64 a1, int a2, int a3)
{
  ULONG_PTR *v4; // rax
  ULONG_PTR *v5; // r8

  if ( a1 )
  {
    v4 = (ULONG_PTR *)HalpRegisteredTimers;
    while ( v4 != &HalpRegisteredTimers )
    {
      v5 = v4;
      v4 = (ULONG_PTR *)*v4;
      if ( v5[9] == a1 )
      {
        *((_DWORD *)v5 + 69) = a2;
        *((_DWORD *)v5 + 70) = a3;
        return;
      }
    }
  }
}
