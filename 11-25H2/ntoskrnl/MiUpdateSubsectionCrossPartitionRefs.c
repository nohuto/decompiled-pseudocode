/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x1404F77BC
 * Callers:
 *     MiReferenceActiveSubsection @ 0x1402140B0 (MiReferenceActiveSubsection.c)
 *     MiUnmapViewSubsections @ 0x14022EE90 (MiUnmapViewSubsections.c)
 *     MiAppendSubsectionChain @ 0x1402A6358 (MiAppendSubsectionChain.c)
 *     MiIncrementSubsectionViewCount @ 0x1402A7470 (MiIncrementSubsectionViewCount.c)
 *     MiReferenceSubsection @ 0x14031F460 (MiReferenceSubsection.c)
 *     MiTrimSection @ 0x140320A50 (MiTrimSection.c)
 *     MiRemoveViewsFromSection @ 0x140322A00 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x140322C00 (MiDecrementSubsections.c)
 *     MiInsertUnusedSubsection @ 0x140322E10 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x14033F740 (MiDecrementSubsectionViewCount.c)
 *     MiFlushRelease @ 0x14035A870 (MiFlushRelease.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14035AC94 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDeleteControlArea @ 0x14043A3F8 (MiDeleteControlArea.c)
 *     MiExtendSection @ 0x14093B140 (MiExtendSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateSubsectionCrossPartitionRefs(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = a2 ^ (a1[12] ^ a2) & 0xC0000000;
  a1[12] = result;
  if ( a2 == 0x3FFFFFFF )
  {
    result = *(_QWORD *)a1;
    *(_BYTE *)(*(_QWORD *)a1 + 62LL) |= 2u;
  }
  return result;
}
