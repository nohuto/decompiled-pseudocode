/*
 * XREFs of RtlpHpStackTraceHeapDisable @ 0x18014BF80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsProtectedHeap @ 0x180097164 (RtlpIsProtectedHeap.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x18014B774 (RtlpHpPerHeapStackTraceCleanup.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapDisable(__int64 a1)
{
  int IsProtectedHeap; // eax
  __int64 v2; // rcx
  __int64 v3; // r8

  if ( *(_DWORD *)(a1 + 16) == -571548178 && !(unsigned int)RtlpIsProtectedHeap(a1) )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 20), 0xFFFFFFBF);
  IsProtectedHeap = RtlpIsProtectedHeap(a1);
  RtlpHpPerHeapStackTraceCleanup((volatile signed __int64 *)(v3 + v2), IsProtectedHeap, 1);
  return 0LL;
}
