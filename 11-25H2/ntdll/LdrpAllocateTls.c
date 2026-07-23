/*
 * XREFs of LdrpAllocateTls @ 0x180020710
 * Callers:
 *     LdrpInitializeThread @ 0x180073EB0 (LdrpInitializeThread.c)
 *     LdrpInitializeTls @ 0x1800B7E90 (LdrpInitializeTls.c)
 * Callees:
 *     LdrpGetNewTlsVector @ 0x18002099C (LdrpGetNewTlsVector.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrpGenericExceptionFilter @ 0x18011B640 (LdrpGenericExceptionFilter.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 LdrpAllocateTls()
{
  struct _TEB *v0; // rsi
  void **NewTlsVector; // rsi
  _UNKNOWN **v2; // r13
  _UNKNOWN **v3; // r14
  const void **v4; // rdi
  size_t v5; // r15
  char v6; // cl
  unsigned int v7; // r8d
  __int64 v8; // r12
  __int64 v9; // rbx
  PVOID Heap; // rax
  _QWORD *v11; // rcx
  _QWORD *p_ThreadLocalStoragePointer; // rax
  void **v14; // rbx
  __int64 v15; // rdi
  struct _TEB *v16; // [rsp+70h] [rbp-48h]
  unsigned int SizeOfBitMap; // [rsp+C8h] [rbp+10h]

  v0 = NtCurrentTeb();
  v16 = v0;
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  if ( LdrpTlsBitmap.SizeOfBitMap )
  {
    NewTlsVector = (void **)LdrpGetNewTlsVector(LdrpTlsBitmap.SizeOfBitMap);
    if ( NewTlsVector )
    {
      v2 = (_UNKNOWN **)LdrpTlsList;
      while ( 1 )
      {
        if ( v2 == &LdrpTlsList )
        {
          p_ThreadLocalStoragePointer = &v16->ThreadLocalStoragePointer;
          goto LABEL_12;
        }
        v3 = v2;
        v2 = (_UNKNOWN **)*v2;
        v4 = (const void **)(v3 + 2);
        v5 = v3[3] - v3[2];
        v6 = ((*((_DWORD *)v3 + 13) >> 20) & 0xF) - 1;
        if ( (*((_DWORD *)v3 + 13) & 0xF00000) == 0 )
          v6 = (*((_DWORD *)v3 + 13) >> 20) & 0xF;
        v7 = 1 << v6;
        if ( (unsigned int)(1 << v6) < 0x10 )
          v7 = 16;
        v8 = v7;
        v9 = v7 - 1;
        Heap = RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, v9 + v5 + 1);
        if ( !Heap )
          break;
        v11 = (_QWORD *)(~v9 & ((unsigned __int64)Heap + v8));
        *(v11 - 1) = Heap;
        NewTlsVector[*((unsigned int *)v3 + 16)] = v11;
        memmove(v11, *v4, v5);
        LdrpLogInternal(
          "minkernel\\ldr\\ldrtls.c",
          963LL,
          "LdrpAllocateTls",
          2LL,
          "TlsVector %p Index %d : %d bytes copied from %p to %p\n",
          NewTlsVector,
          *((_DWORD *)v3 + 16),
          *((_DWORD *)v3 + 6) - (unsigned int)*v4,
          *v4,
          NewTlsVector[*((unsigned int *)v3 + 16)]);
      }
      RtlReleaseSRWLockShared(&LdrpTlsLock);
      v14 = NewTlsVector;
      v15 = SizeOfBitMap;
      do
      {
        if ( *v14 )
          RtlFreeHeap(LdrpTlsHeap, 0, *((PVOID *)*v14 - 1));
        ++v14;
        --v15;
      }
      while ( v15 );
      RtlFreeHeap(LdrpTlsHeap, 0, NewTlsVector - 2);
      return 3221225495LL;
    }
    else
    {
      RtlReleaseSRWLockShared(&LdrpTlsLock);
      return 3221225495LL;
    }
  }
  else
  {
    NewTlsVector = &v0->ThreadLocalStoragePointer;
    p_ThreadLocalStoragePointer = NewTlsVector;
LABEL_12:
    *p_ThreadLocalStoragePointer = NewTlsVector;
    _InterlockedIncrement(&LdrpActiveThreadCount);
    RtlReleaseSRWLockShared(&LdrpTlsLock);
    return 0LL;
  }
}
