/*
 * XREFs of RtlpCallInterceptRoutine @ 0x14046E0EC
 * Callers:
 *     RtlpHpAllocateHeapSlow @ 0x1402B819C (RtlpHpAllocateHeapSlow.c)
 *     RtlpAllocateNTHeapInternal @ 0x14047A23C (RtlpAllocateNTHeapInternal.c)
 *     RtlpFreeNTHeapInternal @ 0x14047DEEC (RtlpFreeNTHeapInternal.c)
 *     RtlDestroyHeap @ 0x140A91140 (RtlDestroyHeap.c)
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
