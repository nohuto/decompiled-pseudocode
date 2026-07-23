/*
 * XREFs of MiDeleteZeroThreadContext @ 0x140412560
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x140412BA0 (MiBackgroundZeroNodePages.c)
 *     MiInsertNewZeroThread @ 0x140690A00 (MiInsertNewZeroThread.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x140413B20 (MiDereferenceAnyActiveHugeContext.c)
 *     MiSignalZeroingPassComplete @ 0x140690F50 (MiSignalZeroingPassComplete.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
