/*
 * XREFs of EtwpSwitchBuffer @ 0x1403E45C0
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x14030C840 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     EtwpGetLoggerTimeStamp @ 0x14031B820 (EtwpGetLoggerTimeStamp.c)
 *     EtwpIsSingleStreamLogger @ 0x1403E4814 (EtwpIsSingleStreamLogger.c)
 *     EtwpEnqueueOverflowBuffer @ 0x1403E4824 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpRequestFlushTimer @ 0x1403E4890 (EtwpRequestFlushTimer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1403E49BC (EtwpEnqueueAvailableBuffer.c)
 *     EtwpBuffersFlushRequired @ 0x1403E4B90 (EtwpBuffersFlushRequired.c)
 *     EtwpAllocateFreeBuffers @ 0x1403E4BD0 (EtwpAllocateFreeBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x1403E4D34 (EtwpDequeueFreeBuffer.c)
 *     EtwpCompressionDpc @ 0x140645160 (EtwpCompressionDpc.c)
 *     EtwpReenableCompression @ 0x14064559C (EtwpReenableCompression.c)
 */

__int64 __fastcall EtwpSwitchBuffer(ULONG_PTR a1, __int64 a2, signed __int64 *a3, __int16 a4, __int16 a5)
{
  int v6; // r15d
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  signed __int64 i; // rbx
  signed __int64 v15; // rax
  unsigned __int64 v16; // rsi
  int v17; // eax
  unsigned __int64 v19; // rdx

  v6 = *(_DWORD *)(a1 + 12) & 0x400;
  while ( 1 )
  {
    v10 = EtwpDequeueFreeBuffer();
    if ( v10 )
      break;
    if ( (a5 & 0x200) != 0
      || ObGetCurrentIrql() > 2u
      || (*(_DWORD *)(a1 + 12) & 0x40000) != 0
      || (unsigned int)EtwpAllocateFreeBuffers(a1) != 1 )
    {
      if ( a2 )
        _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
      return 3221225495LL;
    }
  }
  if ( !(unsigned __int8)EtwpIsSingleStreamLogger(a1, v10) )
    *(_WORD *)(v11 + 40) = a4;
  _InterlockedAdd((volatile signed __int32 *)(v11 + 12), 0xFu);
  while ( 1 )
  {
    if ( !v6 )
      *(_QWORD *)(v11 + 32) = a2;
    _m_prefetchw(a3);
    for ( i = *a3; (a2 ^ (unsigned __int64)i) <= 0xF; i = v15 )
    {
      v15 = _InterlockedCompareExchange64(a3, v11 | 0xF, i);
      if ( i == v15 )
        break;
    }
    v16 = i & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == a2 )
    {
      if ( v16 )
      {
        v17 = *(_DWORD *)(a1 + 12);
        if ( (v17 & 0x400) != 0 )
        {
          v19 = i & 0xFFFFFFFFFFFFFFF0uLL;
          if ( (v17 & 0x4000000) != 0 )
          {
            EtwpEnqueueAvailableBuffer(a1, v19, 4LL);
            if ( !*(_DWORD *)(a1 + 1432) && *(_QWORD *)(a1 + 1528) >= 2LL * *(_QWORD *)(a1 + 1536) )
              EtwpReenableCompression(a1);
            if ( *(_DWORD *)(a1 + 1432) && !_InterlockedExchange((volatile __int32 *)(a1 + 1400), 2) )
            {
              if ( ObGetCurrentIrql() > 2u )
                KeInsertQueueDpc((PRKDPC)(a1 + 1456), 0LL, 0LL);
              else
                EtwpCompressionDpc(0LL, a1, 0LL, 0LL);
            }
          }
          else
          {
            EtwpEnqueueAvailableBuffer(a1, v19, 0LL);
          }
        }
        else
        {
          *(_DWORD *)((i & 0xFFFFFFFFFFFFFFF0uLL) + 0x2C) = 3;
          *(LARGE_INTEGER *)((i & 0xFFFFFFFFFFFFFFF0uLL) + 0x10) = EtwpGetLoggerTimeStamp(a1);
        }
        _InterlockedAdd((volatile signed __int32 *)(v16 + 12), ~(i & 0xF));
        if ( !v6 && (unsigned __int8)EtwpBuffersFlushRequired(a1) )
        {
          if ( (a5 & 0x600) != 0 || ObGetCurrentIrql() > 2u )
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
        LOBYTE(v11) = (a5 & 0x600) != 0;
        EtwpRequestFlushTimer(a1, v11, v12, v13);
      }
      return 0LL;
    }
    if ( v16 )
      break;
    if ( a2 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
    a2 = 0LL;
  }
  if ( a2 )
    _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
  _InterlockedAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFF1);
  if ( v6 )
    EtwpEnqueueOverflowBuffer(a1);
  else
    EtwpEnqueueAvailableBuffer(a1, v11, 0LL);
  return 0LL;
}
