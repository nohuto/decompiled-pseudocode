/*
 * XREFs of PnprInitializeMappingReserve @ 0x14072DA04
 * Callers:
 *     PnprAllocateMappingReserves @ 0x14072D0A4 (PnprAllocateMappingReserves.c)
 * Callees:
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MmAllocateMappingAddressEx @ 0x140A531F0 (MmAllocateMappingAddressEx.c)
 *     MmFreeMappingAddress @ 0x140A55EC0 (MmFreeMappingAddress.c)
 */

__int64 __fastcall PnprInitializeMappingReserve(__int16 a1, __int64 a2)
{
  unsigned int v4; // esi
  void *MappingAddress; // rax
  void *v6; // rdi
  int v7; // edx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  PMDL Mdl; // rax

  v4 = 0;
  MappingAddress = (void *)MmAllocateMappingAddressEx(0x10000LL, 1366322768LL, 0LL);
  v6 = MappingAddress;
  if ( MappingAddress )
  {
    Mdl = IoAllocateMdl(MappingAddress, 0x10000u, 0, 0, 0LL);
    if ( Mdl )
    {
      *(_QWORD *)a2 = Mdl;
      *(_QWORD *)(a2 + 8) = v6;
      *(_WORD *)(a2 + 16) = a1;
      return v4;
    }
    MmFreeMappingAddress(v6, 0x51706E50u);
    v7 = 3938;
  }
  else
  {
    v7 = 3923;
  }
  v8 = PnprContext;
  v4 = -1073741670;
  v9 = *(_DWORD *)(PnprContext + 33288);
  if ( !v9 )
    v9 = v7;
  *(_DWORD *)(PnprContext + 33288) = v9;
  v10 = *(_DWORD *)(v8 + 33292);
  if ( !v10 )
    v10 = 10;
  *(_DWORD *)(v8 + 33292) = v10;
  return v4;
}
