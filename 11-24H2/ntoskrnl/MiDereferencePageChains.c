/*
 * XREFs of MiDereferencePageChains @ 0x140270AC0
 * Callers:
 *     MiProcessPageGroupInfo @ 0x1402709E8 (MiProcessPageGroupInfo.c)
 *     MiRevertProcessorMove @ 0x1403149DC (MiRevertProcessorMove.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140393A14 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiGroupZeroHugeRange @ 0x140686BE4 (MiGroupZeroHugeRange.c)
 *     MiFindLargePageMemory @ 0x140A8F22C (MiFindLargePageMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageChains(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 28, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
