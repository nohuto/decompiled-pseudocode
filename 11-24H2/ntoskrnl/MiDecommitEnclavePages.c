/*
 * XREFs of MiDecommitEnclavePages @ 0x1408DA7A8
 * Callers:
 *     MiFreeVirtualMemory @ 0x1408D9E68 (MiFreeVirtualMemory.c)
 * Callees:
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 */

__int64 __fastcall MiDecommitEnclavePages(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int64 PteAddress; // rax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r10

  if ( (*(_DWORD *)(a2 + 64) & 1) == 0 )
  {
    if ( (a5 & 0x10000000) != 0 )
      return 3221225494LL;
    return 3221225632LL;
  }
  if ( (*(_DWORD *)(a2 + 72) & 1) == 0 )
    return 3221225632LL;
  PteAddress = MiGetPteAddress(a3);
  MiDecommitHardwareEnclavePages(v9, v8, PteAddress, PteAddress + 8 * ((v7 >> 12) - 1 + ((v7 & 0xFFF) != 0)), 0);
  return 0LL;
}
