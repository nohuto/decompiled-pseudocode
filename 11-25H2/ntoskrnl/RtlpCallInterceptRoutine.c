/*
 * XREFs of RtlpCallInterceptRoutine @ 0x14046F820
 * Callers:
 *     RtlpHpAllocateHeapSlow @ 0x1403C9AF8 (RtlpHpAllocateHeapSlow.c)
 *     RtlpAllocateNTHeapInternal @ 0x1403CAA0C (RtlpAllocateNTHeapInternal.c)
 *     RtlpFreeNTHeapInternal @ 0x14047F1DC (RtlpFreeNTHeapInternal.c)
 *     RtlDestroyHeap @ 0x140A8C040 (RtlDestroyHeap.c)
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
