/*
 * XREFs of MiGetSharedVm @ 0x140404E90
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14091A9E8 (MmInitializeProcessAddressSpace.c)
 *     MiRemoveVadCharges @ 0x14099A074 (MiRemoveVadCharges.c)
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x140A03620 (MiCleanEmbryonicProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140AE7F8C (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     <none>
 */

void *__fastcall MiGetSharedVm(__int64 a1)
{
  void *result; // rax

  result = (void *)(a1 + 192);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    return &unk_140E38880;
  return result;
}
