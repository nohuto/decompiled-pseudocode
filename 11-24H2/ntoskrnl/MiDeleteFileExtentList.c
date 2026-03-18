/*
 * XREFs of MiDeleteFileExtentList @ 0x1407F02DC
 * Callers:
 *     MiDeleteSegmentPages @ 0x1403707BC (MiDeleteSegmentPages.c)
 *     MiEnableImageDirectMap @ 0x14067A928 (MiEnableImageDirectMap.c)
 *     MiCreateImageFileMap @ 0x140944150 (MiCreateImageFileMap.c)
 *     MiDeleteFileExtents @ 0x140A204B8 (MiDeleteFileExtents.c)
 *     MiAllocateFileExtents @ 0x140AA5B84 (MiAllocateFileExtents.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     MiGetExtentTable @ 0x14067B2D8 (MiGetExtentTable.c)
 *     MiLockFileExtentsExclusive @ 0x1407F0608 (MiLockFileExtentsExclusive.c)
 *     MiUnlockFileExtentsExclusive @ 0x1407F0688 (MiUnlockFileExtentsExclusive.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteFileExtentList(_DWORD *P)
{
  __int64 v2; // rbx
  unsigned __int64 *i; // rsi
  char *v4; // rdx

  MiLockFileExtentsExclusive();
  v2 = 0LL;
  for ( i = (unsigned __int64 *)MiGetExtentTable(P[1]); (unsigned int)v2 < *P; v2 = (unsigned int)(v2 + 1) )
  {
    v4 = (char *)&P[12 * v2 + 2];
    if ( *((_QWORD *)v4 + 4) != 0x8000000000000000uLL )
      RtlAvlRemoveNode(i, (__int64)v4);
  }
  MiUnlockFileExtentsExclusive();
  ExFreePoolWithTag(P, 0);
}
