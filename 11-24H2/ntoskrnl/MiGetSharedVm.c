/*
 * XREFs of MiGetSharedVm @ 0x14040C800
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1408F8590 (MmInitializeProcessAddressSpace.c)
 *     MiRemoveVadCharges @ 0x1409B0374 (MiRemoveVadCharges.c)
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x140A070F0 (MiCleanEmbryonicProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140AE61C8 (MmCreateProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE6484 (MmDeleteProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x140AE66AC (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     <none>
 */

void *__fastcall MiGetSharedVm(__int64 a1)
{
  void *result; // rax

  result = (void *)(a1 + 192);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    return &unk_140E38740;
  return result;
}
