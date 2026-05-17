/*
 * XREFs of RtlpInitializeStackTraceLog @ 0x180120CBC
 * Callers:
 *     RtlpRegisterStackTrace @ 0x1800F9870 (RtlpRegisterStackTrace.c)
 * Callees:
 *     RtlCreateMemoryBlockLookaside @ 0x1800E4C70 (RtlCreateMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180110210 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x180172010 (RtlAllocateMemoryBlockLookaside.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

_UNKNOWN **RtlpInitializeStackTraceLog()
{
  _UNKNOWN **result; // rax
  union _SLIST_HEADER *v1; // rdi
  union _SLIST_HEADER *v2; // rcx
  _QWORD *v3; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  union _SLIST_HEADER *v5; // [rsp+40h] [rbp+8h] BYREF
  void *v6; // [rsp+48h] [rbp+10h] BYREF

  result = &retaddr;
  if ( !RtlpHeapStackTraceLog )
  {
    v5 = 0LL;
    v6 = 0LL;
    result = (_UNKNOWN **)RtlCreateMemoryBlockLookaside(&v5, 0, 0x10000uLL, 0x10uLL, 0x1920uLL);
    if ( (int)result >= 0 )
    {
      v1 = v5;
      if ( (int)RtlAllocateMemoryBlockLookaside(v5, 6432LL, &v6) >= 0 )
      {
        v3 = v6;
        memset_thunk_772440563353939046(v6, 0, 0x1920uLL);
        *v3 = v1;
        result = (_UNKNOWN **)_InterlockedCompareExchange64(&RtlpHeapStackTraceLog, (signed __int64)v3, 0LL);
        if ( !result )
          return result;
        v2 = v5;
      }
      else
      {
        v2 = v1;
      }
      return (_UNKNOWN **)RtlDestroyMemoryBlockLookaside((__int64)v2);
    }
  }
  return result;
}
