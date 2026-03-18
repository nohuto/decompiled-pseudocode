/*
 * XREFs of MiDereferenceEnclaveModule @ 0x1407E77C0
 * Callers:
 *     MiFreeEnclaveModules @ 0x1406ED06C (MiFreeEnclaveModules.c)
 *     MmFreeVirtualMemory @ 0x1408F6740 (MmFreeVirtualMemory.c)
 *     NtLoadEnclaveData @ 0x1409CAD50 (NtLoadEnclaveData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceEnclaveModule(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 8, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
