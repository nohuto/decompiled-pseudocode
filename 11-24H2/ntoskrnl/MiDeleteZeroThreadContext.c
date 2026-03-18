/*
 * XREFs of MiDeleteZeroThreadContext @ 0x1403C6608
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x1403C6F60 (MiBackgroundZeroNodePages.c)
 *     MiInsertNewZeroThread @ 0x14068F930 (MiInsertNewZeroThread.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14020C870 (MiDeleteUltraThreadContext.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x1403C7EE0 (MiDereferenceAnyActiveHugeContext.c)
 *     MiSignalZeroingPassComplete @ 0x14068FE80 (MiSignalZeroingPassComplete.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
