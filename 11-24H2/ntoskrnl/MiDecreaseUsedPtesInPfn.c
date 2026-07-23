/*
 * XREFs of MiDecreaseUsedPtesInPfn @ 0x14021D39C
 * Callers:
 *     MiDeleteNonPagedPoolTail @ 0x14020EFE0 (MiDeleteNonPagedPoolTail.c)
 *     MmFreeIndependentPages @ 0x14021D100 (MmFreeIndependentPages.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     MiClearDriverTablePtes @ 0x1404F0310 (MiClearDriverTablePtes.c)
 *     MiClearStaleSecurePageMapping @ 0x140C530E8 (MiClearStaleSecurePageMapping.c)
 *     MiFreeEmptyBootPageTable @ 0x140C53780 (MiFreeEmptyBootPageTable.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
