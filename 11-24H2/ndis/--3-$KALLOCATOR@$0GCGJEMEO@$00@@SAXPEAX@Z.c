/*
 * XREFs of ??3?$KALLOCATOR@$0GCGJEMEO@$00@@SAXPEAX@Z @ 0x14014AC7C
 * Callers:
 *     ??_GKModule@@QEAAPEAXI@Z @ 0x1400DCC84 (--_GKModule@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall KALLOCATOR<1651067982,1>::operator delete(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x62694C4Eu);
}
