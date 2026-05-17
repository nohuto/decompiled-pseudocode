/*
 * XREFs of EtwpAddBinaryInfoEvents @ 0x180083460
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAddProviderTrackingInfo @ 0x180092B6C (EtwpAddProviderTrackingInfo.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall EtwpAddBinaryInfoEvents(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rbx
  unsigned int v4; // r12d
  __int64 *v5; // rax
  unsigned int v6; // r15d
  unsigned int v8; // r9d
  int v9; // edx
  int v10; // r8d
  unsigned int v11; // r8d
  _DWORD *Heap; // rdi
  __int64 v13; // r9
  __int64 *v14; // rsi
  unsigned int v15; // r14d
  __int64 *i; // rcx
  __int64 v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // ebp
  __int64 v20; // rcx
  unsigned int v21; // eax

  v3 = (__int64 *)(a1 + 464);
  v4 = 0;
  v5 = *(__int64 **)(a1 + 464);
  v6 = a3 - *(_DWORD *)(a2 + 48);
  v8 = 0;
  if ( v5 != (__int64 *)(a1 + 464) )
  {
    do
    {
      v9 = *((_DWORD *)v5 + 4);
      v10 = *((_DWORD *)v5 + 10);
      v5 = (__int64 *)*v5;
      v11 = 16 * v9 + v10 + 4;
      if ( v8 > v11 )
        v11 = v8;
      v8 = v11;
    }
    while ( v5 != v3 );
  }
  Heap = (_DWORD *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v8);
  if ( !Heap )
    return 3221225495LL;
  v14 = (__int64 *)*v3;
  if ( (__int64 *)*v3 != v3 )
  {
    while ( 1 )
    {
      *Heap = *((_DWORD *)v14 + 4);
      v15 = 1;
      for ( i = (__int64 *)v14[3]; i != v14 + 3; i = (__int64 *)*i )
      {
        v17 = v15 * 4;
        v15 += 4;
        *(_OWORD *)((char *)Heap + v17) = *((_OWORD *)i + 1);
      }
      memmove(&Heap[v15], (char *)v14 + 44, *((unsigned int *)v14 + 10));
      v18 = v15 * 4 + *((_DWORD *)v14 + 10);
      v19 = v18 + 16;
      if ( v6 < v18 + 16 )
        break;
      v20 = a2 + *(unsigned int *)(a2 + 48);
      *(_WORD *)(v20 + 4) = v19;
      *(_DWORD *)v20 = -1072627710;
      *(_WORD *)(v20 + 6) = 67;
      *(_QWORD *)(v20 + 8) = *(_QWORD *)(a2 + 88);
      memmove((void *)(v20 + 16), Heap, v18);
      v21 = (v19 + 7) & 0xFFFFFFF8;
      *(_DWORD *)(a2 + 48) += v21;
      v6 -= v21;
      v14 = (__int64 *)*v14;
      if ( v14 == v3 )
        goto LABEL_11;
    }
    v4 = -1073741789;
  }
LABEL_11:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, v13);
  return v4;
}
