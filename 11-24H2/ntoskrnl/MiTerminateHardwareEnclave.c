/*
 * XREFs of MiTerminateHardwareEnclave @ 0x140B65940
 * Callers:
 *     MiTerminateEnclave @ 0x1407F8028 (MiTerminateEnclave.c)
 *     MiDeleteEnclavePages @ 0x140B6FC18 (MiDeleteEnclavePages.c)
 * Callees:
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 */

char __fastcall MiTerminateHardwareEnclave(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 PteAddress; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  char result; // al

  MiGetPteAddress(((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF);
  PteAddress = MiGetPteAddress((*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) << 12);
  result = MiDecommitHardwareEnclavePages(v7, v5, PteAddress, v6, 1);
  *(_DWORD *)(a2 + 64) |= 8u;
  return result;
}
