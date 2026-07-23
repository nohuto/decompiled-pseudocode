/*
 * XREFs of RtlpInitializeStackTraceLog @ 0x18011D61C
 * Callers:
 *     RtlpRegisterStackTrace @ 0x1800F2850 (RtlpRegisterStackTrace.c)
 * Callees:
 *     RtlCreateMemoryBlockLookaside @ 0x1800E1150 (RtlCreateMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180108670 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18016F010 (RtlAllocateMemoryBlockLookaside.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

int RtlpInitializeStackTraceLog()
{
  _UNKNOWN **v0; // rax
  PVOID v1; // rdi
  PVOID v2; // rcx
  _QWORD *v3; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  PVOID MemoryBlockLookaside; // [rsp+40h] [rbp+8h] BYREF
  PVOID Block; // [rsp+48h] [rbp+10h] BYREF

  v0 = &retaddr;
  if ( !RtlpHeapStackTraceLog )
  {
    MemoryBlockLookaside = 0LL;
    Block = 0LL;
    LODWORD(v0) = RtlCreateMemoryBlockLookaside(&MemoryBlockLookaside, 0, 0x10000u, 0x10u, 0x1920u);
    if ( (int)v0 >= 0 )
    {
      v1 = MemoryBlockLookaside;
      if ( RtlAllocateMemoryBlockLookaside(MemoryBlockLookaside, 0x1920u, &Block) < 0 )
      {
        v2 = v1;
LABEL_7:
        LODWORD(v0) = RtlDestroyMemoryBlockLookaside(v2);
        return (int)v0;
      }
      v3 = Block;
      memset_thunk_772440563353939046(Block, 0, 0x1920uLL);
      *v3 = v1;
      v0 = (_UNKNOWN **)_InterlockedCompareExchange64(&RtlpHeapStackTraceLog, (signed __int64)v3, 0LL);
      if ( v0 )
      {
        v2 = MemoryBlockLookaside;
        goto LABEL_7;
      }
    }
  }
  return (int)v0;
}
