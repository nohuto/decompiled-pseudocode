/*
 * XREFs of RtlpAllocateNTHeapInternal @ 0x14036876C
 * Callers:
 *     RtlAllocateHeap @ 0x1403686E0 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpHpVsContextAllocate @ 0x14036781C (RtlpHpVsContextAllocate.c)
 *     RtlpCallInterceptRoutine @ 0x1404688C8 (RtlpCallInterceptRoutine.c)
 *     RtlFreeHeap @ 0x140479100 (RtlFreeHeap.c)
 *     RtlpAllocateHeap @ 0x1405E7EFC (RtlpAllocateHeap.c)
 *     RtlpAllocateHeapRaiseException @ 0x1405E8884 (RtlpAllocateHeapRaiseException.c)
 *     RtlpSetupExtendedBlock @ 0x1405EAD40 (RtlpSetupExtendedBlock.c)
 */

void *__fastcall RtlpAllocateNTHeapInternal(_DWORD *HeapHandle, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int16 v4; // bp
  unsigned __int64 v5; // rsi
  char v7; // r12
  unsigned int v9; // edx
  char v10; // r8
  char v11; // cl
  int v12; // ebp
  unsigned __int64 v13; // rbx
  int v14; // r13d
  __int64 v15; // r15
  unsigned __int64 v16; // rcx
  __int64 Heap; // rax
  int v18; // r9d
  void *v19; // r15
  __int64 v20; // rbx
  __int64 v21; // [rsp+20h] [rbp-58h]
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  int v23; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a3;
  v5 = a2;
  if ( HeapHandle[4] != -857879331 )
  {
    v12 = HeapHandle[29] | a3;
    v23 = 0;
    v13 = 0LL;
    v24 = 0LL;
    if ( a2 <= 0x7FFFFFFFFFFFFFFFLL )
    {
      v14 = HeapHandle[36];
      v15 = 1LL;
      if ( v14 )
      {
        if ( (v12 & 0x3C000102) != 0 )
        {
          v14 = 0;
        }
        else
        {
          if ( (int)RtlpCallInterceptRoutine(v14, (_DWORD)HeapHandle, 0, 1, (__int64)&v24) < 0 )
            goto LABEL_30;
          v16 = (v24 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
          v5 += v16 + 16;
          v24 = v16 + 16;
        }
      }
      if ( v5 )
        v15 = v5;
      v13 = (v15 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
      v22 = v13;
      Heap = RtlpAllocateHeap((_DWORD)HeapHandle, v21, (__int64)&v23);
      v19 = (void *)Heap;
      if ( !Heap )
        goto LABEL_31;
      if ( !v14 )
        return v19;
      v5 -= v24;
      v20 = Heap;
      v19 = (void *)RtlpSetupExtendedBlock((_DWORD)HeapHandle, v12, Heap, v18, v24, v14);
      if ( (int)RtlpCallInterceptRoutine(v14, (_DWORD)HeapHandle, (_DWORD)v19, 2, v20) >= 0 )
        return v19;
      RtlFreeHeap(HeapHandle, 0, v19);
      v13 = v22;
    }
LABEL_30:
    v19 = 0LL;
LABEL_31:
    if ( (v12 & 4) != 0 )
    {
      if ( v13 )
        v5 = v13;
      RtlpAllocateHeapRaiseException(v5);
    }
    return v19;
  }
  if ( a3 )
  {
    if ( a3 == 8 )
    {
      v7 = 2;
    }
    else
    {
      v9 = (a3 >> 2) & 2 | 0x80000000;
      if ( (a3 & 4) == 0 )
        v9 = (a3 >> 2) & 2;
      v10 = v9;
      if ( (v4 & 0x100) == 0 )
        v10 = v9;
      v11 = v10;
      if ( (v4 & 0xE00) == 0 )
        v11 = v10;
      v7 = v11;
      if ( (v4 & 0x10) == 0 )
        v7 = v11;
    }
  }
  else
  {
    v7 = 0;
  }
  if ( v5 <= 0x20000 )
    return (void *)RtlpHpVsContextAllocate((_BYTE *)HeapHandle + 64, v5, v5, *((_BYTE *)HeapHandle + 20) | v7);
  return (void *)v3;
}
