/*
 * XREFs of PpmCheckSnapAllDeliveredPerformance @ 0x140351B20
 * Callers:
 *     PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x140494F20 (PpmCheckUpdateDeliveredPerformanceIfTracingEnabled.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140351020 (PpmPerfSnapDeliveredPerformance.c)
 *     HvlGetReferenceTime @ 0x1403527D4 (HvlGetReferenceTime.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x140445850 (HvlUpdatePerformanceStateCountersForLp.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char PpmCheckSnapAllDeliveredPerformance()
{
  __int64 v0; // rdx
  __int64 v1; // r14
  __int64 *v2; // rcx
  char v3; // r15
  __int64 i; // r13
  unsigned int v5; // ebx
  __int64 v6; // rsi
  unsigned __int16 v7; // cx
  unsigned __int16 Count; // bx
  __int64 v9; // rax
  unsigned __int64 j; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  int v18; // ecx
  unsigned __int64 *v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 Prcb; // rdx
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  __int64 k; // rbx
  __int64 v28; // rdi
  char v29; // al
  unsigned int m; // edi
  __int64 v31; // rcx
  __int64 v32; // [rsp+28h] [rbp-D8h]
  __int64 v33; // [rsp+28h] [rbp-D8h]
  unsigned __int16 v34; // [rsp+30h] [rbp-D0h]
  unsigned __int16 n; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v36; // [rsp+40h] [rbp-C0h]
  _QWORD v37[33]; // [rsp+48h] [rbp-B8h] BYREF

  memset_0(v37, 0, 0x100uLL);
  v1 = PpmPerfDomainHead;
  v2 = &PpmPerfDomainHead;
  v3 = 0;
  v34 = 0;
  for ( i = 0LL; (__int64 *)v1 != &PpmPerfDomainHead; v1 = *(_QWORD *)v1 )
  {
    v5 = 0;
    if ( *(_DWORD *)(v1 + 296) )
    {
      do
      {
        v6 = *(_QWORD *)(v1 + 312) + 1192LL * v5;
        if ( *(_DWORD *)(v6 + 16) == 1 )
        {
          if ( !i )
            i = HvlGetReferenceTime(v2, v0);
          v28 = *(_QWORD *)v6;
          v29 = PpmPerfSnapDeliveredPerformance(*(_QWORD *)v6, 0, i - 50000);
          LOBYTE(v0) = v29 == 0;
          *(_BYTE *)(v28 + 72) = v29 == 0;
          if ( !v29 )
          {
            HvlUpdatePerformanceStateCountersForLp(*(unsigned int *)(v6 + 20));
            v3 = 1;
          }
        }
        ++v5;
      }
      while ( v5 < *(_DWORD *)(v1 + 296) );
      v2 = &PpmPerfDomainHead;
    }
  }
  memset_0(v37, 0, 0x100uLL);
  v7 = 0;
  Count = PpmCheckRegistered.Count;
  if ( PpmCheckRegistered.Count > 0x20u )
    Count = 32;
  v36 = Count;
  if ( Count )
  {
    memmove(v37, &PpmCheckRegistered.8, 8LL * Count);
    v7 = Count;
  }
  for ( ; v7 < 0x20u; v37[v9] = 0LL )
    v9 = v7++;
  for ( j = v37[0]; ; j = v37[v34] )
  {
    while ( j )
    {
      _BitScanForward64(&v11, j);
      v32 = j & ~(1LL << v11);
      v12 = *((unsigned int *)qword_140F21E78 + 64 * v34 + (unsigned __int8)v11);
      v13 = (unsigned int)v12;
      if ( (unsigned int)v12 >= (unsigned int)KeNumberProcessors_0 )
        v14 = 0LL;
      else
        v14 = KiProcessorBlock[v12];
      if ( PpmPerfSnapDeliveredPerformance(v14 + 35248, 0, 0) )
      {
        v15 = *((_DWORD *)KiGlobalState + v13);
        v16 = v15 >> 6;
        if ( v36 <= (unsigned int)v16 )
        {
          j = v32;
        }
        else
        {
          v17 = &v37[v16];
          j = v32;
          *v17 &= ~(1LL << (v15 & 0x3F));
        }
      }
      else
      {
        j = v32;
      }
    }
    if ( ++v34 >= (unsigned int)v36 )
      break;
  }
  if ( v3 )
  {
    for ( k = PpmPerfDomainHead; (__int64 *)k != &PpmPerfDomainHead; k = *(_QWORD *)k )
    {
      for ( m = 0; m < *(_DWORD *)(k + 296); ++m )
      {
        v31 = *(_QWORD *)(k + 312) + 1192LL * m;
        if ( *(_DWORD *)(v31 + 16) == 1 && *(_BYTE *)(*(_QWORD *)v31 + 72LL) )
        {
          *(_BYTE *)(*(_QWORD *)v31 + 72LL) = 0;
          PpmPerfSnapDeliveredPerformance(*(_QWORD *)v31, 1, i);
        }
      }
    }
  }
  v18 = 0;
  if ( v36 )
  {
    v19 = v37;
    v20 = v36;
    do
    {
      v18 += __popcnt(*v19++);
      --v20;
    }
    while ( v20 );
  }
  PpmCheckCount = v18;
  if ( !v18 )
    return 1;
  v21 = v37[0];
  for ( n = 0; ; v21 = v37[n] )
  {
    while ( v21 )
    {
      _BitScanForward64(&v22, v21);
      v33 = v21 & ~(1LL << v22);
      Prcb = KeGetPrcb(*((unsigned int *)qword_140F21E78 + 64 * n + (unsigned __int8)v22));
      _m_prefetchw((const void *)(Prcb + 35224));
      v24 = *(_DWORD *)(Prcb + 35224);
      do
      {
        v25 = v24;
        v24 = _InterlockedCompareExchange((volatile signed __int32 *)(Prcb + 35224), v24 | 1, v24);
      }
      while ( v25 != v24 );
      if ( !v24 )
        KeInsertQueueDpc((PRKDPC)(Prcb + 35160), 0LL, 0LL);
      v21 = v33;
    }
    if ( ++n >= (unsigned int)v36 )
      break;
  }
  return 0;
}
