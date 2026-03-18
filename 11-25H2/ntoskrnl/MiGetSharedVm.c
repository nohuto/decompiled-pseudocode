/*
 * XREFs of MiGetSharedVm @ 0x14040A910
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1408D7B40 (MmDeleteProcessAddressSpace.c)
 *     MiRemoveVadCharges @ 0x140901C48 (MiRemoveVadCharges.c)
 *     MmInitializeProcessAddressSpace @ 0x140904AC8 (MmInitializeProcessAddressSpace.c)
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x140A04FF4 (MiCleanEmbryonicProcess.c)
 *     MmInitializeHandBuiltProcess @ 0x140A47A3C (MmInitializeHandBuiltProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140A47B88 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

void *__fastcall MiGetSharedVm(__int64 a1)
{
  void *result; // rax

  result = (void *)(a1 + 192);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    return &unk_140E38500;
  return result;
}
