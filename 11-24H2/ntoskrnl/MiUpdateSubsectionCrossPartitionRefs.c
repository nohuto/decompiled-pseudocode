/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x1404F781C
 * Callers:
 *     MiFlushRelease @ 0x1402594B0 (MiFlushRelease.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1402598C4 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiRemoveViewsFromSection @ 0x140259B70 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x140259D70 (MiDecrementSubsections.c)
 *     MiInsertUnusedSubsection @ 0x140259F70 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x14025A760 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x1402743B0 (MiIncrementSubsectionViewCount.c)
 *     MiReferenceActiveSubsection @ 0x1403374A0 (MiReferenceActiveSubsection.c)
 *     MiUnmapViewSubsections @ 0x140337FB0 (MiUnmapViewSubsections.c)
 *     MiReferenceSubsection @ 0x140338AB0 (MiReferenceSubsection.c)
 *     MiTrimSection @ 0x1403612B0 (MiTrimSection.c)
 *     MiDeleteControlArea @ 0x14043F354 (MiDeleteControlArea.c)
 *     MiAppendSubsectionChain @ 0x140470BE4 (MiAppendSubsectionChain.c)
 *     MiExtendSection @ 0x14098A4D8 (MiExtendSection.c)
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
