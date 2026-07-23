/*
 * XREFs of PpmCheckSnapAllDeliveredPerformance @ 0x1402AF8B0
 * Callers:
 *     PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x14048F7E0 (PpmCheckUpdateDeliveredPerformanceIfTracingEnabled.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x1402AFD50 (PpmPerfSnapDeliveredPerformance.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     HvlGetReferenceTime @ 0x14036FFB8 (HvlGetReferenceTime.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14043DA00 (HvlUpdatePerformanceStateCountersForLp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  int v19; // ecx
  unsigned __int64 *v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 Prcb; // rdx
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  __int64 j; // rbx
  __int64 v29; // rdi
  char v30; // al
  unsigned int k; // edi
  _DWORD *v32; // rcx
  __int64 v33; // [rsp+28h] [rbp-D8h]
  __int64 v34; // [rsp+28h] [rbp-D8h]
  unsigned __int16 v35; // [rsp+30h] [rbp-D0h]
  unsigned __int16 m; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v37; // [rsp+40h] [rbp-C0h]
  _QWORD v38[33]; // [rsp+48h] [rbp-B8h] BYREF

  memset_0(v38, 0, 0x100uLL);
  v1 = PpmPerfDomainHead;
  v2 = &PpmPerfDomainHead;
  v3 = 0;
  v35 = 0;
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
          v29 = *(_QWORD *)v6;
          v30 = PpmPerfSnapDeliveredPerformance(*(_QWORD *)v6, 0LL, i - 50000);
          LOBYTE(v0) = v30 == 0;
          *(_BYTE *)(v29 + 72) = v30 == 0;
          if ( !v30 )
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
  memset_0(v38, 0, 0x100uLL);
  v7 = 0;
  Count = PpmCheckRegistered.Count;
  if ( PpmCheckRegistered.Count > 0x20u )
    Count = 32;
  v37 = Count;
  if ( Count )
  {
    memmove(v38, &PpmCheckRegistered.8, 8LL * Count);
    v7 = Count;
  }
  for ( ; v7 < 0x20u; v38[v9] = 0LL )
    v9 = v7++;
  v10 = v38[0];
LABEL_14:
  v11 = v37;
  while ( 1 )
  {
    if ( v10 )
    {
      _BitScanForward64(&v12, v10);
      v33 = v10 & ~(1LL << v12);
      v13 = *((unsigned int *)qword_140F22998 + 64 * v35 + (unsigned __int8)v12);
      v14 = (unsigned int)v13;
      if ( (unsigned int)v13 >= (unsigned int)KeNumberProcessors_0 )
        v15 = 0LL;
      else
        v15 = KiProcessorBlock[v13];
      if ( (unsigned __int8)PpmPerfSnapDeliveredPerformance(v15 + 35248, 0LL, 0LL) )
      {
        v16 = *((_DWORD *)KiGlobalState + v14);
        v17 = v16 >> 6;
        if ( v37 <= (unsigned int)v17 )
        {
          v10 = v33;
        }
        else
        {
          v18 = &v38[v17];
          v10 = v33;
          *v18 &= ~(1LL << (v16 & 0x3F));
        }
      }
      else
      {
        v10 = v33;
      }
      goto LABEL_14;
    }
    if ( ++v35 >= (unsigned int)v37 )
      break;
    v10 = v38[v35];
  }
  if ( v3 )
  {
    for ( j = PpmPerfDomainHead; (__int64 *)j != &PpmPerfDomainHead; j = *(_QWORD *)j )
    {
      for ( k = 0; k < *(_DWORD *)(j + 296); ++k )
      {
        v32 = (_DWORD *)(*(_QWORD *)(j + 312) + 1192LL * k);
        if ( v32[4] == 1 && *(_BYTE *)(*(_QWORD *)v32 + 72LL) )
        {
          *(_BYTE *)(*(_QWORD *)v32 + 72LL) = 0;
          LOBYTE(v11) = 1;
          PpmPerfSnapDeliveredPerformance(*(_QWORD *)v32, v11, i);
        }
      }
    }
  }
  v19 = 0;
  if ( v37 )
  {
    v20 = v38;
    v21 = v37;
    do
    {
      v19 += __popcnt(*v20++);
      --v21;
    }
    while ( v21 );
  }
  PpmCheckCount = v19;
  if ( !v19 )
    return 1;
  v22 = v38[0];
  for ( m = 0; ; v22 = v38[m] )
  {
    while ( v22 )
    {
      _BitScanForward64(&v23, v22);
      v34 = v22 & ~(1LL << v23);
      Prcb = KeGetPrcb(*((unsigned int *)qword_140F22998 + 64 * m + (unsigned __int8)v23));
      _m_prefetchw((const void *)(Prcb + 35224));
      v25 = *(_DWORD *)(Prcb + 35224);
      do
      {
        v26 = v25;
        v25 = _InterlockedCompareExchange((volatile signed __int32 *)(Prcb + 35224), v25 | 1, v25);
      }
      while ( v26 != v25 );
      if ( !v25 )
        KeInsertQueueDpc((PRKDPC)(Prcb + 35160), 0LL, 0LL);
      v22 = v34;
    }
    if ( ++m >= (unsigned int)v37 )
      break;
  }
  return 0;
}
