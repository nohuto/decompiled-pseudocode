/*
 * XREFs of MmUnmapLockedRestartPages @ 0x1407E8850
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiReleaseDriverPtes @ 0x140A611E4 (MiReleaseDriverPtes.c)
 */

__int64 __fastcall MmUnmapLockedRestartPages(__int64 a1)
{
  ULONG_PTR v2; // rdi
  ULONG_PTR v3; // rbx
  char *AnyMultiplexedVm; // rax
  __int64 PteAddress; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiUnmapMdlCommon(v2, (__int64)AnyMultiplexedVm, 0, a1, v3);
  *(_WORD *)(a1 + 10) &= 0xFFDEu;
  PteAddress = MiGetPteAddress(v2);
  return MiReleaseDriverPtes(PteAddress, v3);
}
