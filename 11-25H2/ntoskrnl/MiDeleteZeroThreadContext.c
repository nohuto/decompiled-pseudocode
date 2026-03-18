/*
 * XREFs of MiDeleteZeroThreadContext @ 0x140440768
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x1404407D0 (MiBackgroundZeroNodePages.c)
 *     MiInsertNewZeroThread @ 0x1406844D0 (MiInsertNewZeroThread.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x140440A30 (MiDereferenceAnyActiveHugeContext.c)
 *     MiSignalZeroingPassComplete @ 0x140684A20 (MiSignalZeroingPassComplete.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteZeroThreadContext(_QWORD *P, int a2)
{
  if ( P[73] )
    MiDereferenceAnyActiveHugeContext();
  else
    MiDeleteUltraThreadContext((__int64)(P + 56));
  if ( P[42] )
    MiSignalZeroingPassComplete();
  if ( !a2 )
    ExFreePoolWithTag(P, 0);
}
