/*
 * XREFs of RtlpRegisterStackTrace @ 0x1800F2850
 * Callers:
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1800F27A0 (RtlpStackTraceDatabaseLogPrefix.c)
 * Callees:
 *     RtlExtendMemoryZone @ 0x1800F2A50 (RtlExtendMemoryZone.c)
 *     RtlpInitializeStackTraceLog @ 0x18011D61C (RtlpInitializeStackTraceLog.c)
 *     RtlpInterlockedPushEntrySList @ 0x180163E00 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x1801642D0 (RtlCompareMemory.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18016F010 (RtlAllocateMemoryBlockLookaside.c)
 */

_DWORD *__fastcall RtlpRegisterStackTrace(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // rdi
  __int64 v7; // r14
  _DWORD *v8; // rsi
  _QWORD *v10; // rbp
  _QWORD *v11; // rsi
  _QWORD *v12; // rcx
  _QWORD *v13; // r8
  _QWORD *v14; // r12
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _DWORD *v17; // rbx
  PVOID Block; // [rsp+68h] [rbp+20h] BYREF

  v3 = RtlpHeapStackTraceLog;
  v5 = a1;
  if ( RtlpHeapStackTraceLog || (RtlpInitializeStackTraceLog(), (v3 = RtlpHeapStackTraceLog) != 0) )
  {
    if ( (_DWORD)v5 )
    {
      v7 = v3 + 16 * (a3 % 0x191 + 1LL);
      v8 = *(_DWORD **)(v7 + 8);
      if ( v8 && v8[2] == a3 && v8[3] == (_DWORD)v5 && RtlCompareMemory(a2, v8 + 4, 8 * v5) == 8 * v5 )
        return v8;
      while ( 1 )
      {
        v10 = *(_QWORD **)v7;
        v11 = v10;
        Block = *(PVOID *)v7;
        v12 = v10;
        v13 = v10;
        v14 = v10;
        v15 = v10;
        v16 = v10;
        while ( v12 )
        {
          if ( *((_DWORD *)v15 + 2) == a3
            && *((_DWORD *)v16 + 3) == (_DWORD)v5
            && RtlCompareMemory(a2, v13 + 2, 8 * v5) == 8 * v5 )
          {
            *(_QWORD *)(v7 + 8) = v11;
            return v14;
          }
          v11 = (_QWORD *)*v11;
          v15 = v11;
          Block = v11;
          v12 = v11;
          v13 = v11;
          v14 = v11;
          v16 = v11;
        }
        if ( RtlAllocateMemoryBlockLookaside(*(PVOID *)RtlpHeapStackTraceLog, 8 * v5 + 16, &Block) < 0
          && ((int)RtlExtendMemoryZone(*(_QWORD *)(*(_QWORD *)RtlpHeapStackTraceLog + 16LL), 0x10000LL) < 0
           || RtlAllocateMemoryBlockLookaside(*(PVOID *)RtlpHeapStackTraceLog, 8 * v5 + 16, &Block) < 0) )
        {
          break;
        }
        v17 = Block;
        *((_DWORD *)Block + 2) = a3;
        v17[3] = v5;
        *(_QWORD *)v17 = v10;
        memmove(v17 + 4, a2, 8 * v5);
        if ( v10 == (_QWORD *)_InterlockedCompareExchange64(
                                (volatile signed __int64 *)v7,
                                (signed __int64)v17,
                                (signed __int64)v10) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(RtlpHeapStackTraceLog + 8));
          return Block;
        }
        RtlpInterlockedPushEntrySList(*((_QWORD *)Block - 2), (char *)Block - 48);
      }
    }
  }
  return 0LL;
}
