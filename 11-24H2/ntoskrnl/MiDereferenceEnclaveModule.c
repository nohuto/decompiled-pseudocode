/*
 * XREFs of MiDereferenceEnclaveModule @ 0x1407F7DC4
 * Callers:
 *     MiFreeEnclaveModules @ 0x1406F68F0 (MiFreeEnclaveModules.c)
 *     MmFreeVirtualMemory @ 0x1408D9AD0 (MmFreeVirtualMemory.c)
 *     NtLoadEnclaveData @ 0x140A29800 (NtLoadEnclaveData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceEnclaveModule(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 8, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
