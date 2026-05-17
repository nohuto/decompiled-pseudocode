/*
 * XREFs of LdrpAllocateTls @ 0x180012580
 * Callers:
 *     LdrpInitializeThread @ 0x180012810 (LdrpInitializeThread.c)
 *     LdrpInitializeTls @ 0x18008ECD0 (LdrpInitializeTls.c)
 * Callees:
 *     LdrpGetNewTlsVector @ 0x18000681C (LdrpGetNewTlsVector.c)
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     LdrpGenericExceptionFilter @ 0x1801185C0 (LdrpGenericExceptionFilter.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 LdrpAllocateTls()
{
  struct _TEB *v0; // rsi
  _DWORD *NewTlsVector; // rsi
  _UNKNOWN **v2; // r13
  _UNKNOWN **v3; // r14
  size_t v4; // r15
  char v5; // cl
  unsigned int v6; // r8d
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 Heap; // rax
  _QWORD *v10; // rcx
  void **p_ThreadLocalStoragePointer; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  struct _TEB *v15; // [rsp+70h] [rbp-48h]
  unsigned int v16; // [rsp+C8h] [rbp+10h]

  v0 = NtCurrentTeb();
  v15 = v0;
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  v16 = LdrpTlsBitmap;
  if ( LdrpTlsBitmap )
  {
    NewTlsVector = LdrpGetNewTlsVector(LdrpTlsBitmap);
    if ( NewTlsVector )
    {
      v2 = (_UNKNOWN **)LdrpTlsList;
      while ( 1 )
      {
        if ( v2 == &LdrpTlsList )
        {
          p_ThreadLocalStoragePointer = &v15->ThreadLocalStoragePointer;
          goto LABEL_12;
        }
        v3 = v2;
        v2 = (_UNKNOWN **)*v2;
        v4 = v3[3] - v3[2];
        v5 = ((*((_DWORD *)v3 + 13) >> 20) & 0xF) - 1;
        if ( (*((_DWORD *)v3 + 13) & 0xF00000) == 0 )
          v5 = (*((_DWORD *)v3 + 13) >> 20) & 0xF;
        v6 = 1 << v5;
        if ( (unsigned int)(1 << v5) < 0x10 )
          v6 = 16;
        v7 = v6;
        v8 = v6 - 1;
        Heap = RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, v8 + v4 + 1);
        if ( !Heap )
          break;
        v10 = (_QWORD *)(~v8 & (Heap + v7));
        *(v10 - 1) = Heap;
        *(_QWORD *)&NewTlsVector[2 * *((unsigned int *)v3 + 16)] = v10;
        memmove(v10, v3[2], v4);
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrtls.c",
          963,
          (int)"LdrpAllocateTls",
          2,
          "TlsVector %p Index %d : %d bytes copied from %p to %p\n",
          (char)NewTlsVector);
      }
      RtlReleaseSRWLockShared(&LdrpTlsLock);
      v13 = NewTlsVector;
      v14 = v16;
      do
      {
        if ( *v13 )
          RtlFreeHeap(LdrpTlsHeap, 0LL, *(_QWORD *)(*v13 - 8LL));
        ++v13;
        --v14;
      }
      while ( v14 );
      RtlFreeHeap(LdrpTlsHeap, 0LL, NewTlsVector - 4);
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
    p_ThreadLocalStoragePointer = (void **)NewTlsVector;
LABEL_12:
    *p_ThreadLocalStoragePointer = NewTlsVector;
    _InterlockedIncrement(&LdrpActiveThreadCount);
    RtlReleaseSRWLockShared(&LdrpTlsLock);
    return 0LL;
  }
}
