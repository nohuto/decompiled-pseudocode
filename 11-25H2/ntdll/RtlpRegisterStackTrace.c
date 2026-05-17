/*
 * XREFs of RtlpRegisterStackTrace @ 0x1800F9870
 * Callers:
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1800F97C0 (RtlpStackTraceDatabaseLogPrefix.c)
 * Callees:
 *     RtlExtendMemoryZone @ 0x1800F9A70 (RtlExtendMemoryZone.c)
 *     RtlpInitializeStackTraceLog @ 0x180120CBC (RtlpInitializeStackTraceLog.c)
 *     RtlpInterlockedPushEntrySList @ 0x180166FD0 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x1801674A0 (RtlCompareMemory.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x180172010 (RtlAllocateMemoryBlockLookaside.c)
 */

_DWORD *__fastcall RtlpRegisterStackTrace(unsigned int a1, const void *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // rdi
  signed __int64 *v7; // r14
  _DWORD *v8; // rsi
  signed __int64 v10; // rbp
  _QWORD *v11; // rsi
  _QWORD *v12; // rcx
  _QWORD *v13; // r8
  _QWORD *v14; // r12
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  signed __int64 v17; // rbx
  _QWORD *v18; // [rsp+68h] [rbp+20h] BYREF

  v3 = RtlpHeapStackTraceLog;
  v5 = a1;
  if ( RtlpHeapStackTraceLog || (RtlpInitializeStackTraceLog(), (v3 = RtlpHeapStackTraceLog) != 0) )
  {
    if ( (_DWORD)v5 )
    {
      v7 = (signed __int64 *)(v3 + 16 * (a3 % 0x191 + 1LL));
      v8 = (_DWORD *)v7[1];
      if ( v8 && v8[2] == a3 && v8[3] == (_DWORD)v5 && RtlCompareMemory(a2, v8 + 4, 8 * v5) == 8 * v5 )
        return v8;
      while ( 1 )
      {
        v10 = *v7;
        v11 = (_QWORD *)v10;
        v18 = (_QWORD *)*v7;
        v12 = (_QWORD *)v10;
        v13 = (_QWORD *)v10;
        v14 = (_QWORD *)v10;
        v15 = (_QWORD *)v10;
        v16 = (_QWORD *)v10;
        while ( v12 )
        {
          if ( *((_DWORD *)v15 + 2) == a3
            && *((_DWORD *)v16 + 3) == (_DWORD)v5
            && RtlCompareMemory(a2, v13 + 2, 8 * v5) == 8 * v5 )
          {
            v7[1] = (signed __int64)v11;
            return v14;
          }
          v11 = (_QWORD *)*v11;
          v15 = v11;
          v18 = v11;
          v12 = v11;
          v13 = v11;
          v14 = v11;
          v16 = v11;
        }
        if ( (int)RtlAllocateMemoryBlockLookaside(*(_QWORD *)RtlpHeapStackTraceLog, 8 * v5 + 16, &v18) < 0
          && ((int)RtlExtendMemoryZone(*(_QWORD *)(*(_QWORD *)RtlpHeapStackTraceLog + 16LL), 0x10000LL) < 0
           || (int)RtlAllocateMemoryBlockLookaside(*(_QWORD *)RtlpHeapStackTraceLog, 8 * v5 + 16, &v18) < 0) )
        {
          break;
        }
        v17 = (signed __int64)v18;
        *((_DWORD *)v18 + 2) = a3;
        *(_DWORD *)(v17 + 12) = v5;
        *(_QWORD *)v17 = v10;
        memmove((void *)(v17 + 16), a2, 8 * v5);
        if ( v10 == _InterlockedCompareExchange64(v7, v17, v10) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(RtlpHeapStackTraceLog + 8));
          return v18;
        }
        RtlpInterlockedPushEntrySList(*(v18 - 2), v18 - 6);
      }
    }
  }
  return 0LL;
}
