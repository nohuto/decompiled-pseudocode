/*
 * XREFs of MiUnlockEntireDriver @ 0x1407E0C50
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140670958 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiUnlockDriverPages @ 0x140A3A2AC (MiUnlockDriverPages.c)
 */

__int64 __fastcall MiUnlockEntireDriver(__int64 a1, __int64 a2)
{
  unsigned __int64 *PteAddress; // rax
  unsigned int v5; // r8d

  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
    {
      PteAddress = (unsigned __int64 *)MiGetPteAddress(*(_QWORD *)(a2 + 24));
      MiReleasePtes((__int64)&qword_140E37328, PteAddress, v5);
      *(_WORD *)(a2 + 10) &= ~1u;
    }
    IoFreeMdl((PMDL)a2);
  }
  return MiUnlockDriverPages(a1);
}
