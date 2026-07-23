/*
 * XREFs of HalpDmaGetTranslationEntries @ 0x1404899C4
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaCommitScatterMapBuffers @ 0x140489858 (HalpDmaCommitScatterMapBuffers.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14054CAF4 (HalpDmaCommitContiguousMapBuffers.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140489B60 (HalpDmaAllocateNewTranslationBuffer.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpDmaGetTranslationEntries(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // r13
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 *v10; // r15
  unsigned int v11; // ecx
  __int64 i; // rdx
  unsigned int v13; // ebp
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned int v17; // r14d
  __int64 v18; // rax
  __int64 NewTranslationBuffer; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF

  result = 0LL;
  v4 = a3;
  v6 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    v7 = 80LL;
  }
  else
  {
    v7 = 64LL;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  v8 = *(_QWORD *)(v7 + v6);
  v9 = v7 + v6;
  if ( v8 )
  {
    v10 = *(__int64 **)(v7 + v6);
    v11 = *(_DWORD *)(v8 + 8) - *(_DWORD *)(v9 + 8);
    for ( i = *(_QWORD *)v8; i; i = *(_QWORD *)i )
    {
      v11 += *(_DWORD *)(i + 8);
      v10 = (__int64 *)i;
    }
    if ( v11 >= (unsigned int)v4 )
      goto LABEL_7;
  }
  else
  {
    v11 = 0;
    v10 = 0LL;
  }
  NewTranslationBuffer = HalpDmaAllocateNewTranslationBuffer(v6, (unsigned int)v4 - v11);
  if ( !NewTranslationBuffer )
  {
LABEL_20:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  if ( v10 )
  {
    *v10 = NewTranslationBuffer;
  }
  else
  {
    v8 = NewTranslationBuffer;
    if ( a2 )
    {
      if ( a2 != 1 )
        goto LABEL_20;
      *(_QWORD *)(v6 + 56) = NewTranslationBuffer;
    }
    else
    {
      *(_QWORD *)(v6 + 48) = NewTranslationBuffer;
    }
  }
LABEL_7:
  v13 = *(_DWORD *)(v9 + 8);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( (_DWORD)v4 )
  {
    v17 = *(_DWORD *)(v8 + 8);
    do
    {
      if ( v13 >= v17 )
      {
        v8 = *(_QWORD *)v8;
        v13 = 0;
        v17 = *(_DWORD *)(v8 + 8);
      }
      v18 = *(_QWORD *)(v8 + 16);
      v16 = v18 + 72LL * v13;
      if ( v14 )
        *(_QWORD *)(v15 + 8) = v16;
      else
        v14 = v18 + 72LL * v13;
      memset_0((void *)(v18 + 72LL * v13++), 0, 0x48uLL);
      *(_QWORD *)(v16 + 56) = v16;
      v15 = v16;
      --v4;
    }
    while ( v4 );
    v6 = a1;
  }
  *(_QWORD *)(v7 + v6) = v8;
  *(_DWORD *)(v9 + 8) = v13;
  *(_QWORD *)(v16 + 8) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v14;
}
