/*
 * XREFs of MiDereferencePageChains @ 0x140491294
 * Callers:
 *     MiRevertProcessorMove @ 0x14030AAFC (MiRevertProcessorMove.c)
 *     MiProcessPageGroupInfo @ 0x1403A2E30 (MiProcessPageGroupInfo.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1404133A0 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiGroupZeroHugeRange @ 0x140685AB4 (MiGroupZeroHugeRange.c)
 *     MiFindLargePageMemory @ 0x140A92A7C (MiFindLargePageMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageChains(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 28, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
