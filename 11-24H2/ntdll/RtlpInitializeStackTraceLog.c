/*
 * XREFs of RtlpInitializeStackTraceLog @ 0x18011F3EC
 * Callers:
 *     RtlpRegisterStackTrace @ 0x1800F7CE0 (RtlpRegisterStackTrace.c)
 * Callees:
 *     RtlCreateMemoryBlockLookaside @ 0x1800E5CA0 (RtlCreateMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x18010D790 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x180170010 (RtlAllocateMemoryBlockLookaside.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

_UNKNOWN **RtlpInitializeStackTraceLog()
{
  _UNKNOWN **result; // rax
  union _SLIST_HEADER *v1; // rdi
  volatile signed __int32 **v2; // rdx
  unsigned __int64 v3; // r8
  union _SLIST_HEADER *v4; // rcx
  _QWORD *v5; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  union _SLIST_HEADER *v7; // [rsp+40h] [rbp+8h] BYREF
  void *v8; // [rsp+48h] [rbp+10h] BYREF

  result = &retaddr;
  if ( !RtlpHeapStackTraceLog )
  {
    v7 = 0LL;
    v8 = 0LL;
    result = (_UNKNOWN **)RtlCreateMemoryBlockLookaside(&v7, 0, 0x10000uLL, 0x10uLL, 0x1920uLL);
    if ( (int)result >= 0 )
    {
      v1 = v7;
      if ( (int)RtlAllocateMemoryBlockLookaside(v7, 6432LL, &v8) >= 0 )
      {
        v5 = v8;
        memset_thunk_772440563353939046(v8, 0, 0x1920uLL);
        *v5 = v1;
        result = (_UNKNOWN **)_InterlockedCompareExchange64(&RtlpHeapStackTraceLog, (signed __int64)v5, 0LL);
        if ( !result )
          return result;
        v4 = v7;
      }
      else
      {
        v4 = v1;
      }
      return (_UNKNOWN **)RtlDestroyMemoryBlockLookaside((__int64)v4, v2, v3);
    }
  }
  return result;
}
