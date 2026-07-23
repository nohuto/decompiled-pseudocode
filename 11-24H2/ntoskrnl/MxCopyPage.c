/*
 * XREFs of MxCopyPage @ 0x140C54604
 * Callers:
 *     MiInitializeSystemPageTable @ 0x14038F158 (MiInitializeSystemPageTable.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiCopyPtes @ 0x14038D998 (MiCopyPtes.c)
 *     MxGetPhase0Mapping @ 0x140BE09E0 (MxGetPhase0Mapping.c)
 */

void __fastcall MxCopyPage(__int64 a1, __int64 a2)
{
  unsigned __int64 Phase0Mapping; // rsi
  ULONG_PTR *v5; // rdi
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v7; // rbx

  Phase0Mapping = MxGetPhase0Mapping();
  v5 = (ULONG_PTR *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  ValidPte = MiMakeValidPte((unsigned __int64)v5, a1, -1610612732);
  v7 = ValidPte;
  if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v5 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v5, ValidPte, 128LL);
  *v5 = v7;
  MiCopyPtes((_QWORD *)Phase0Mapping, a2, 512LL);
  *v5 = CLFS_LSN_NULL_EXT;
  MiFlushSingleTbEntry(Phase0Mapping, 2, 1);
}
