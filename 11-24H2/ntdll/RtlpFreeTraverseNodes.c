/*
 * XREFs of RtlpFreeTraverseNodes @ 0x1800345A0
 * Callers:
 *     LdrpMergeParentBaseLanguagesToList @ 0x180034340 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlpIsQualifiedLanguage @ 0x1800806B0 (RtlpIsQualifiedLanguage.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpFreeTraverseNodes(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  else
    return (unsigned int)-1073741811;
  return v1;
}
