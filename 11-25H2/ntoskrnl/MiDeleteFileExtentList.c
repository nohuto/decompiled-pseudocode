/*
 * XREFs of MiDeleteFileExtentList @ 0x1407E043C
 * Callers:
 *     MiDeleteSegmentPages @ 0x14044A758 (MiDeleteSegmentPages.c)
 *     MiEnableImageDirectMap @ 0x14066F168 (MiEnableImageDirectMap.c)
 *     MiCreateImageFileMap @ 0x14093F578 (MiCreateImageFileMap.c)
 *     MiDeleteFileExtents @ 0x140A15960 (MiDeleteFileExtents.c)
 *     MiAllocateFileExtents @ 0x140AA0C34 (MiAllocateFileExtents.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     MiGetExtentTable @ 0x14066FB18 (MiGetExtentTable.c)
 *     MiLockFileExtentsExclusive @ 0x1407E0768 (MiLockFileExtentsExclusive.c)
 *     MiUnlockFileExtentsExclusive @ 0x1407E07E8 (MiUnlockFileExtentsExclusive.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
