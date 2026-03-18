/*
 * XREFs of MiDecreaseUsedPtesInPfn @ 0x14039EEFC
 * Callers:
 *     MiDeleteNonPagedPoolTail @ 0x140235020 (MiDeleteNonPagedPoolTail.c)
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 *     MmFreeIndependentPages @ 0x14039EC60 (MmFreeIndependentPages.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     MiClearDriverTablePtes @ 0x1404F2870 (MiClearDriverTablePtes.c)
 *     MiClearStaleSecurePageMapping @ 0x140C50F58 (MiClearStaleSecurePageMapping.c)
 *     MiFreeEmptyBootPageTable @ 0x140C515F0 (MiFreeEmptyBootPageTable.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecreaseUsedPtesInPfn(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  __int64 v2; // r8
  unsigned int v3; // r8d
  unsigned int v4; // r8d

  if ( (*(_DWORD *)(BugCheckParameter2 + 36) & 0x4000000) != 0 )
    v2 = HIDWORD(*(_QWORD *)BugCheckParameter2);
  else
    v2 = *(_QWORD *)(BugCheckParameter2 + 16) >> 16;
  v3 = v2 & 0x3FF;
  if ( v3 < (unsigned int)BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x41790uLL, BugCheckParameter2, v3, (unsigned int)BugCheckParameter4);
  v4 = v3 - BugCheckParameter4;
  if ( (*(_DWORD *)(BugCheckParameter2 + 36) & 0x4000000) != 0 )
    *(_QWORD *)BugCheckParameter2 = ((unsigned __int64)v4 << 32) ^ (*(_QWORD *)BugCheckParameter2 ^ ((unsigned __int64)v4 << 32)) & 0xFFFFFC00FFFFFFFFuLL;
  else
    *(_QWORD *)(BugCheckParameter2 + 16) = ((unsigned __int64)v4 << 16) ^ (*(_QWORD *)(BugCheckParameter2 + 16) ^ ((unsigned __int64)v4 << 16)) & 0xFFFFFFFFFC00FFFFuLL;
  return v4;
}
