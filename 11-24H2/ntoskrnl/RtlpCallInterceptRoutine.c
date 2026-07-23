/*
 * XREFs of RtlpCallInterceptRoutine @ 0x1404688C8
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x14036876C (RtlpAllocateNTHeapInternal.c)
 *     RtlpFreeNTHeapInternal @ 0x14047917C (RtlpFreeNTHeapInternal.c)
 *     RtlpHpAllocateHeapSlow @ 0x1404D2B7C (RtlpHpAllocateHeapSlow.c)
 *     RtlDestroyHeap @ 0x140A8D840 (RtlDestroyHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCallInterceptRoutine(int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  if ( a1 && (_WORD)a1 == 1 )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))CLFS_LSN_NULL_EXT)(a2, a3, a4, a5);
  else
    return 3221225473LL;
}
