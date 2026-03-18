/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x1404F9F3C
 * Callers:
 *     MiReferenceActiveSubsection @ 0x14020E140 (MiReferenceActiveSubsection.c)
 *     MiUnmapViewSubsections @ 0x14020EC50 (MiUnmapViewSubsections.c)
 *     MiReferenceSubsection @ 0x14020F750 (MiReferenceSubsection.c)
 *     MiIncrementSubsectionViewCount @ 0x1402624F0 (MiIncrementSubsectionViewCount.c)
 *     MiTrimSection @ 0x1402B9B70 (MiTrimSection.c)
 *     MiDeleteControlArea @ 0x14036F6E8 (MiDeleteControlArea.c)
 *     MiFlushRelease @ 0x1403710F0 (MiFlushRelease.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140371504 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiRemoveViewsFromSection @ 0x1403717B0 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x1403719B0 (MiDecrementSubsections.c)
 *     MiInsertUnusedSubsection @ 0x140371BB0 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x140371EA0 (MiDecrementSubsectionViewCount.c)
 *     MiAppendSubsectionChain @ 0x140474DD4 (MiAppendSubsectionChain.c)
 *     MiExtendSection @ 0x1409463BC (MiExtendSection.c)
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
