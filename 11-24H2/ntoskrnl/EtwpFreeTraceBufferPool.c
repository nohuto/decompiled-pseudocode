/*
 * XREFs of EtwpFreeTraceBufferPool @ 0x140A4927C
 * Callers:
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x140A48E90 (EtwpFreeLoggerContext.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14027D604 (EtwpQueryUsedProcessorCount.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     EtwpDequeueBuffer @ 0x14044E2B0 (EtwpDequeueBuffer.c)
 *     EtwpFreeTraceBuffer @ 0x14047E9DC (EtwpFreeTraceBuffer.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // r14d
  __int64 v16; // r8
  unsigned int UsedProcessorCount; // r12d
  __int64 v18; // r15
  volatile __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  _QWORD *v24; // rcx
  _QWORD **v25; // rbx
  _QWORD *v26; // rcx
  _QWORD *v27; // rax

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
      EtwpFreeTraceBuffer(v13, v11, v14);
      v6 = v4;
      v7 = v5;
    }
    v15 = 0;
    UsedProcessorCount = EtwpQueryUsedProcessorCount(v13, v12);
    if ( UsedProcessorCount )
    {
      v18 = 0LL;
      do
      {
        if ( (a1[3] & 0x10000000) != 0 )
        {
          v19 = (volatile __int64 *)(a1 + 32);
        }
        else
        {
          v20 = *((_QWORD *)a1 + 170);
          if ( v20 == EtwpHostSiloState )
            v19 = (volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(KeGetPrcb(v15) + 35752) + 320LL) + 8 * v1);
          else
            v19 = (volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(v20 + 4416) + v18) + 8 * v1);
        }
        v21 = _InterlockedExchange64(v19, 0LL);
        v22 = v21 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (v21 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v22 + 12), -(v21 & 0xF));
          do
          {
            v23 = *(_QWORD *)(v22 + 32);
            _InterlockedDecrement(v6);
            ++v2;
            EtwpFreeTraceBuffer((__int64)a1, (char *)v22, v16);
            v22 = v23;
          }
          while ( v23 );
        }
        ++v15;
        v18 += 64LL;
      }
      while ( v15 < UsedProcessorCount );
    }
    if ( *((_QWORD *)a1 + 177) && (a1[3] & 0x400) != 0 )
    {
      _InterlockedDecrement(v6);
      ++v2;
      EtwpFreeTraceBuffer((__int64)a1, *((char **)a1 + 177), v16);
    }
    while ( 1 )
    {
      v24 = (_QWORD *)*((_QWORD *)a1 + 181);
      if ( !v24 )
        break;
      *((_QWORD *)a1 + 181) = *v24;
      ExFreePoolWithTag(v24 - 4, 0);
    }
    v25 = (_QWORD **)(a1 + 20);
    while ( 1 )
    {
      v26 = *v25;
      if ( *v25 == v25 )
        break;
      if ( (_QWORD **)v26[1] != v25 || (v27 = (_QWORD *)*v26, *(_QWORD **)(*v26 + 8LL) != v26) )
        __fastfail(3u);
      *v25 = v27;
      v27[1] = v25;
      ExFreePoolWithTag(v26, 0);
    }
    _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a1 + 170) + 4LL * (a1[75] & 1) + 4396), -(a1[1] * v2));
  }
  return 0LL;
}
