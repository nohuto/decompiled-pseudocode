/*
 * XREFs of RtlpFreeTraverseNodes @ 0x1800A9600
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x1800A9220 (RtlpIsQualifiedLanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800A93A0 (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpFreeTraverseNodes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a1 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1, a4);
  else
    return (unsigned int)-1073741811;
  return v4;
}
