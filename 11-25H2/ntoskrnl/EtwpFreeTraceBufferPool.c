/*
 * XREFs of EtwpFreeTraceBufferPool @ 0x14098EF58
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14098EB6C (EtwpFreeLoggerContext.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 * Callees:
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     EtwpQueryUsedProcessorCount @ 0x1403E4578 (EtwpQueryUsedProcessorCount.c)
 *     EtwpDequeueBuffer @ 0x1404589D0 (EtwpDequeueBuffer.c)
 *     EtwpFreeTraceBuffer @ 0x140482D30 (EtwpFreeTraceBuffer.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeTraceBufferPool(unsigned int *a1)
{
  __int64 v1; // r13
  int v2; // esi
  volatile signed __int32 *v4; // r14
  volatile signed __int32 *v5; // r15
  volatile signed __int32 *v6; // rbp
  volatile signed __int32 *v7; // rbx
  char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // r14d
  __int64 v15; // r8
  unsigned int UsedProcessorCount; // r12d
  __int64 v17; // r15
  volatile __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  _QWORD *v23; // rcx
  _QWORD **v24; // rbx
  _QWORD *v25; // rcx
  _QWORD *v26; // rax

  v1 = *a1;
  v2 = 0;
  if ( (a1[3] & 0x40000) == 0 )
  {
    v4 = (volatile signed __int32 *)(a1 + 58);
    v5 = (volatile signed __int32 *)(a1 + 57);
    v6 = (volatile signed __int32 *)(a1 + 58);
    v7 = (volatile signed __int32 *)(a1 + 57);
    while ( 1 )
    {
      v8 = (char *)EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 6);
      if ( !v8 )
        break;
      v6 = (volatile signed __int32 *)(a1 + 58);
      ++v2;
      _InterlockedDecrement((volatile signed __int32 *)a1 + 58);
      v7 = (volatile signed __int32 *)(a1 + 57);
      _InterlockedDecrement((volatile signed __int32 *)a1 + 57);
      EtwpFreeTraceBuffer(v9, v8, v10);
    }
    while ( 1 )
    {
      v11 = (char *)EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 8);
      if ( !v11 )
        break;
      _InterlockedDecrement(v6);
      ++v2;
      _InterlockedDecrement(v7);
      EtwpFreeTraceBuffer(v12, v11, v13);
      v6 = v4;
      v7 = v5;
    }
    v14 = 0;
    UsedProcessorCount = EtwpQueryUsedProcessorCount(v12);
    if ( UsedProcessorCount )
    {
      v17 = 0LL;
      do
      {
        if ( (a1[3] & 0x10000000) != 0 )
        {
          v18 = (volatile __int64 *)(a1 + 32);
        }
        else
        {
          v19 = *((_QWORD *)a1 + 170);
          if ( v19 == EtwpHostSiloState )
            v18 = (volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(KeGetPrcb(v14) + 35752) + 320LL) + 8 * v1);
          else
            v18 = (volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(v19 + 4144) + v17) + 8 * v1);
        }
        v20 = _InterlockedExchange64(v18, 0LL);
        v21 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (v20 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v21 + 12), -(v20 & 0xF));
          do
          {
            v22 = *(_QWORD *)(v21 + 32);
            _InterlockedDecrement(v6);
            ++v2;
            EtwpFreeTraceBuffer((__int64)a1, (char *)v21, v15);
            v21 = v22;
          }
          while ( v22 );
        }
        ++v14;
        v17 += 64LL;
      }
      while ( v14 < UsedProcessorCount );
    }
    if ( *((_QWORD *)a1 + 177) && (a1[3] & 0x400) != 0 )
    {
      _InterlockedDecrement(v6);
      ++v2;
      EtwpFreeTraceBuffer((__int64)a1, *((char **)a1 + 177), v15);
    }
    while ( 1 )
    {
      v23 = (_QWORD *)*((_QWORD *)a1 + 181);
      if ( !v23 )
        break;
      *((_QWORD *)a1 + 181) = *v23;
      ExFreePoolWithTag(v23 - 4, 0);
    }
    v24 = (_QWORD **)(a1 + 20);
    while ( 1 )
    {
      v25 = *v24;
      if ( *v24 == v24 )
        break;
      if ( (_QWORD **)v25[1] != v24 || (v26 = (_QWORD *)*v25, *(_QWORD **)(*v25 + 8LL) != v25) )
        __fastfail(3u);
      *v24 = v26;
      v26[1] = v24;
      ExFreePoolWithTag(v25, 0);
    }
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a1 + 170) + 4LL * (a1[75] & 1) + 4124), -(a1[1] * v2));
  }
  return 0LL;
}
