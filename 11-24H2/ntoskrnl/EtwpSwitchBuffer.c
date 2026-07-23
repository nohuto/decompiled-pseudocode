/*
 * XREFs of EtwpSwitchBuffer @ 0x14027D3B0
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x1402D0980 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     EtwpAllocateFreeBuffers @ 0x14027C8CC (EtwpAllocateFreeBuffers.c)
 *     EtwpIsSingleStreamLogger @ 0x14027D648 (EtwpIsSingleStreamLogger.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14027D658 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpRequestFlushTimer @ 0x14027D6C4 (EtwpRequestFlushTimer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x14027D7F0 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpBuffersFlushRequired @ 0x14027D9C4 (EtwpBuffersFlushRequired.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     EtwpGetLoggerTimeStamp @ 0x14036DDA0 (EtwpGetLoggerTimeStamp.c)
 *     EtwpDequeueFreeBuffer @ 0x1404EC950 (EtwpDequeueFreeBuffer.c)
 *     EtwpCompressionDpc @ 0x14064F860 (EtwpCompressionDpc.c)
 *     EtwpReenableCompression @ 0x14064FC9C (EtwpReenableCompression.c)
 */

__int64 __fastcall EtwpSwitchBuffer(ULONG_PTR a1, __int64 a2, signed __int64 *a3, __int16 a4, __int16 a5)
{
  int v6; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  signed __int64 i; // rbx
  signed __int64 v14; // rax
  unsigned __int64 v15; // rsi
  int v16; // eax
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx

  v6 = *(_DWORD *)(a1 + 12) & 0x400;
  while ( 1 )
  {
    v10 = EtwpDequeueFreeBuffer();
    if ( v10 )
      break;
    if ( (a5 & 0x200) != 0
      || (unsigned __int8)KeGetEffectiveIrql(v11, 0LL) > 2u
      || (*(_DWORD *)(a1 + 12) & 0x40000) != 0
      || (unsigned int)EtwpAllocateFreeBuffers(a1, 1u) != 1 )
    {
      if ( a2 )
        _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
      return 3221225495LL;
    }
  }
  if ( !(unsigned __int8)EtwpIsSingleStreamLogger(a1, v10) )
    *(_WORD *)(v12 + 40) = a4;
  _InterlockedAdd((volatile signed __int32 *)(v12 + 12), 0xFu);
  while ( 1 )
  {
    if ( !v6 )
      *(_QWORD *)(v12 + 32) = a2;
    _m_prefetchw(a3);
    for ( i = *a3; (a2 ^ (unsigned __int64)i) <= 0xF; i = v14 )
    {
      v14 = _InterlockedCompareExchange64(a3, v12 | 0xF, i);
      if ( i == v14 )
        break;
    }
    v15 = i & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == a2 )
    {
      if ( v15 )
      {
        v16 = *(_DWORD *)(a1 + 12);
        if ( (v16 & 0x400) != 0 )
        {
          v18 = i & 0xFFFFFFFFFFFFFFF0uLL;
          if ( (v16 & 0x4000000) != 0 )
          {
            EtwpEnqueueAvailableBuffer(a1, v18, 4LL);
            if ( !*(_DWORD *)(a1 + 1432) && *(_QWORD *)(a1 + 1528) >= 2LL * *(_QWORD *)(a1 + 1536) )
              EtwpReenableCompression(a1);
            if ( *(_DWORD *)(a1 + 1432) && !_InterlockedExchange((volatile __int32 *)(a1 + 1400), 2) )
            {
              if ( (unsigned __int8)KeGetEffectiveIrql(v22, v21) > 2u )
                KeInsertQueueDpc((PRKDPC)(a1 + 1456), 0LL, 0LL);
              else
                EtwpCompressionDpc(0LL, a1, 0LL, 0LL);
            }
          }
          else
          {
            EtwpEnqueueAvailableBuffer(a1, v18, 0LL);
          }
        }
        else
        {
          *(_DWORD *)((i & 0xFFFFFFFFFFFFFFF0uLL) + 0x2C) = 3;
          *(_QWORD *)((i & 0xFFFFFFFFFFFFFFF0uLL) + 0x10) = EtwpGetLoggerTimeStamp(a1);
        }
        _InterlockedAdd((volatile signed __int32 *)(v15 + 12), ~(i & 0xF));
        if ( !v6 && (unsigned __int8)EtwpBuffersFlushRequired(a1) )
        {
          if ( (a5 & 0x600) != 0 || (unsigned __int8)KeGetEffectiveIrql(v20, v19) > 2u )
          {
            if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 8u) )
              KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
          }
          else
          {
            KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
          }
        }
      }
      else if ( *(_DWORD *)(a1 + 208) )
      {
        LOBYTE(v12) = (a5 & 0x600) != 0;
        EtwpRequestFlushTimer(a1, v12);
      }
      return 0LL;
    }
    if ( v15 )
      break;
    if ( a2 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
    a2 = 0LL;
  }
  if ( a2 )
    _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
  _InterlockedAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFF1);
  if ( v6 )
    EtwpEnqueueOverflowBuffer(a1);
  else
    EtwpEnqueueAvailableBuffer(a1, v12, 0LL);
  return 0LL;
}
