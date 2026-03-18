/*
 * XREFs of MiInitializeDriverPatchState @ 0x140A946A8
 * Callers:
 *     MiLockPatchIatForDV @ 0x140670740 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140670958 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MmWriteSystemImageTracepoint @ 0x1406723E0 (MmWriteSystemImageTracepoint.c)
 *     MmReapplyBootPatchImports @ 0x140C45828 (MmReapplyBootPatchImports.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiInitializeDriverPatchState(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  memset_0((void *)(a2 + 8), 0, 0x60uLL);
  *(_QWORD *)a2 = a1;
  result = (*(_DWORD *)(a1 + 64) >> 12) + (unsigned int)((*(_DWORD *)(a1 + 64) & 0xFFF) != 0);
  *(_DWORD *)(a2 + 24) = result;
  return result;
}
