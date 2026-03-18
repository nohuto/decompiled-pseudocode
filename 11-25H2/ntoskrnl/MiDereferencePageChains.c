/*
 * XREFs of MiDereferencePageChains @ 0x1402259E4
 * Callers:
 *     MiRevertProcessorMove @ 0x14022559C (MiRevertProcessorMove.c)
 *     MiProcessPageGroupInfo @ 0x14038D61C (MiProcessPageGroupInfo.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1404168F8 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiGroupZeroHugeRange @ 0x14067A224 (MiGroupZeroHugeRange.c)
 *     MiFindLargePageMemory @ 0x140A8E124 (MiFindLargePageMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageChains(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 28, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
