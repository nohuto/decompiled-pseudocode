/*
 * XREFs of MiDeleteFileExtentList @ 0x1407F08AC
 * Callers:
 *     MiDeleteSegmentPages @ 0x140203D4C (MiDeleteSegmentPages.c)
 *     MiEnableImageDirectMap @ 0x14067BB08 (MiEnableImageDirectMap.c)
 *     MiCreateImageFileMap @ 0x14098DFC0 (MiCreateImageFileMap.c)
 *     MiDeleteFileExtents @ 0x140A155B8 (MiDeleteFileExtents.c)
 *     MiAllocateFileExtents @ 0x140AA0BF4 (MiAllocateFileExtents.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiGetExtentTable @ 0x14067C4B8 (MiGetExtentTable.c)
 *     MiLockFileExtentsExclusive @ 0x1407F0BD8 (MiLockFileExtentsExclusive.c)
 *     MiUnlockFileExtentsExclusive @ 0x1407F0C58 (MiUnlockFileExtentsExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
