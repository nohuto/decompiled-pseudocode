/*
 * XREFs of EtwpReserveTraceBuffer @ 0x1402D0980
 * Callers:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     EtwpTraceMessageVa @ 0x1402CF490 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x1402D0080 (EtwpLogSystemEventUnsafe.c)
 *     EtwpReserveWithPmcCounters @ 0x1402D0EE0 (EtwpReserveWithPmcCounters.c)
 *     EtwTraceEvent @ 0x140325740 (EtwTraceEvent.c)
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     EtwpLogContextSwapEvent @ 0x140415D90 (EtwpLogContextSwapEvent.c)
 *     EtwpReserveWithPebsIndex @ 0x1404C54FC (EtwpReserveWithPebsIndex.c)
 *     EtwTraceRaw @ 0x14064D8FC (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpSwitchBuffer @ 0x14027D3B0 (EtwpSwitchBuffer.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpGetLoggerTimeStamp @ 0x14036DDA0 (EtwpGetLoggerTimeStamp.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     EtwpLockBufferList @ 0x1403E1714 (EtwpLockBufferList.c)
 *     RtlGetMultiTimePrecise @ 0x140491A30 (RtlGetMultiTimePrecise.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall EtwpReserveTraceBuffer(
        unsigned int *a1,
        unsigned int a2,
        unsigned __int64 *a3,
        signed __int64 *a4,
        __int16 a5)
{
  signed __int64 *v5; // r14
  unsigned int v7; // ebp
  __int64 v8; // rcx
  __int64 *v9; // r9
  __int64 Number; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r12
  _QWORD *v14; // r12
  signed __int64 *v15; // r15
  signed __int64 v16; // rdi
  signed __int64 v17; // rax
  unsigned __int64 v18; // rdi
  int v19; // eax
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  signed __int64 *v22; // rbx
  unsigned __int64 v23; // rbx
  signed __int64 v24; // rax
  signed __int64 v25; // rdx
  signed __int64 v26; // rtt
  unsigned __int32 v27; // ebx
  bool v28; // zf
  __int64 v29; // rdx
  signed __int64 v30; // r11
  unsigned int v31; // r10d
  __int64 v32; // r14
  signed __int64 v33; // rbp
  unsigned __int32 v34; // eax
  __int64 LoggerTimeStamp; // rax
  unsigned int v36; // r8d
  unsigned __int32 v37; // eax
  __int64 v38; // rdx
  int v39; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v41; // r9
  signed __int64 v42; // r8
  signed __int64 v43; // rcx
  signed __int64 v44; // rax
  signed __int64 j; // rcx
  signed __int64 v46; // rtt
  unsigned __int64 *v47; // rax
  unsigned int v49; // [rsp+30h] [rbp-68h]
  unsigned int i; // [rsp+34h] [rbp-64h]
  int v51; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v52; // [rsp+3Ch] [rbp-5Ch]
  __int128 v53; // [rsp+48h] [rbp-50h] BYREF
  __int64 *v54; // [rsp+58h] [rbp-40h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int8 v56; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 *v57; // [rsp+B0h] [rbp+18h]
  signed __int64 *v58; // [rsp+B8h] [rbp+20h]

  v58 = a4;
  v57 = a3;
  v5 = a4;
  if ( (a1[4] & 0x80000000) != 0 || a2 > a1[2] )
  {
LABEL_85:
    _InterlockedIncrement((volatile signed __int32 *)a1 + 60);
    if ( (a1[204] & 8) != 0 )
      a1[112] = 1;
    return 0LL;
  }
  v7 = a1[1];
  v8 = *a1;
  v52 = (a2 + 7) & 0xFFFFFFF8;
  v49 = v7;
  for ( i = v8; ; v8 = i )
  {
    v9 = KiProcessorBlock;
    Number = KeGetCurrentPrcb()->Number;
    v11 = *((_QWORD *)a1 + 170);
    if ( v11 == EtwpHostSiloState )
    {
      if ( (unsigned int)Number >= (unsigned int)KeNumberProcessors_0 )
      {
        v12 = 0LL;
      }
      else
      {
        _mm_lfence();
        v12 = KiProcessorBlock[Number];
      }
      v13 = *(_QWORD *)(v12 + 35752);
      v8 = i;
      v14 = (_QWORD *)(v13 + 320);
    }
    else
    {
      v14 = (_QWORD *)(*(_QWORD *)(v11 + 4416) + (Number << 6));
    }
    if ( (a1[3] & 0x10000000) != 0 )
      v15 = (signed __int64 *)(a1 + 32);
    else
      v15 = (signed __int64 *)(*v14 + 8 * v8);
    v56 = 0;
    _m_prefetchw(v15);
    v16 = *v15;
    if ( (*v15 & 0xF) != 0 )
    {
      do
      {
        v17 = _InterlockedCompareExchange64(v15, v16 - 1, v16);
        if ( v16 == v17 )
          break;
        v16 = v17;
      }
      while ( (v17 & 0xF) != 0 );
    }
    if ( !v16 )
    {
      v18 = 0LL;
      goto LABEL_69;
    }
    v19 = v16 & 0xF;
    if ( (v16 & 0xF) != 0 )
    {
      v18 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v19 == 1 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v18 + 12), 0xFu);
        _m_prefetchw(v15);
        v20 = *v15;
        while ( (v20 & 0xF) == 0 )
        {
          if ( v18 != (v20 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v21 = v20;
          v20 = _InterlockedCompareExchange64(v15, v20 + 15, v20);
          if ( v21 == v20 )
            goto LABEL_41;
        }
        _InterlockedAdd((volatile signed __int32 *)(v18 + 12), 0xFFFFFFF1);
      }
    }
    else
    {
      EtwpLockBufferList(a1, &v56);
      v18 = *v15 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v18 )
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 12));
      v22 = (signed __int64 *)(a1 + 174);
      if ( a1[75] == 1 )
      {
        _m_prefetchw(v22);
        v24 = *v22;
        v25 = *v22 - 16;
        if ( (*v22 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v25 = 0LL;
        if ( (v24 & 2) != 0 || (v26 = *v22, v26 != _InterlockedCompareExchange64(v22, v25, v24)) )
          ExfReleasePushLock((_QWORD *)a1 + 87);
        KeAbPostRelease((ULONG_PTR)(a1 + 174));
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          _InterlockedAnd64(v22, 0LL);
        else
          KiReleaseSpinLockInstrumented((volatile signed __int64 *)a1 + 87, retaddr);
        v23 = v56;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v56);
        __writecr8(v23);
      }
    }
LABEL_41:
    if ( v18 )
    {
      _m_prefetchw((const void *)(v18 + 8));
      v27 = *(_DWORD *)(v18 + 8);
      if ( v27 <= v7 )
        break;
    }
LABEL_69:
    if ( (KiBugCheckActive & 3) != 0 )
    {
      if ( v18 )
        _InterlockedDecrement((volatile signed __int32 *)(v18 + 12));
      goto LABEL_85;
    }
    v39 = EtwpSwitchBuffer((ULONG_PTR)a1, v18, v15, Number, a5);
    if ( (a1[3] & 0x4000000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v41 = PerformanceCounter.QuadPart
          - _InterlockedExchange64((volatile __int64 *)a1 + 190, PerformanceCounter.QuadPart);
      do
      {
        v42 = *((_QWORD *)a1 + 191);
        if ( v42 )
          v43 = (v42 + v41 + 2 * v42) / 4;
        else
          v43 = v41;
      }
      while ( v42 != _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 191, v43, v42) );
    }
    if ( v39 < 0 )
      goto LABEL_85;
    v5 = v58;
  }
  while ( (a1[204] & 0x8000000) != 0 )
  {
    v51 = 0;
    v28 = a1[50] == 2;
    v29 = 7LL;
    v54 = 0LL;
    if ( !v28 )
      v29 = 3LL;
    v53 = 0LL;
    if ( (unsigned int)RtlGetMultiTimePrecise(&v53, v29, &v51, v9) || (v51 & 2) == 0 || (v51 & 1) == 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)a1 + 204, 0xF7FFFFFF);
      goto LABEL_64;
    }
    v9 = (__int64 *)v53;
    v30 = *((_QWORD *)&v53 + 1) - v53;
    if ( a1[50] == 2 )
      v9 = v54;
    v31 = i;
    v32 = 8LL * i;
    v33 = *(_QWORD *)(v32 + v14[2]);
    if ( v30 == v33 && v27 != 72 )
    {
      v5 = v58;
      v7 = v49;
      goto LABEL_62;
    }
    v34 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 8), v27 + 24, v27);
    if ( v27 == v34 )
    {
      if ( (unsigned __int64)v34 + 24 > v49 )
      {
        v7 = v49;
        *(_DWORD *)(v18 + 4) = v34;
        goto LABEL_69;
      }
      v28 = v33 == _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + v14[2]), v30, v33);
      *(_DWORD *)(v34 + v18 + 4) = 5308440;
      v7 = v49;
      v27 = v34;
      *(_QWORD *)(v34 + v18 + 8) = v9;
      if ( v28 )
      {
        *(_DWORD *)(v34 + v18) = -1072627710;
        *(_QWORD *)(v34 + v18 + 16) = v30;
      }
      else
      {
        *(_DWORD *)(v34 + v18) = -1072627711;
        *(_QWORD *)(v34 + v18 + 16) = 0LL;
      }
    }
    else
    {
      v7 = v49;
      v27 = v34;
    }
LABEL_64:
    if ( v27 > v7 )
      goto LABEL_69;
    v5 = v58;
  }
  LoggerTimeStamp = EtwpGetLoggerTimeStamp(a1);
  v31 = i;
  v9 = (__int64 *)LoggerTimeStamp;
LABEL_62:
  v36 = v52;
  *v5 = (signed __int64)v9;
  v37 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 8), v27 + v36, v27);
  v38 = v37;
  if ( v27 != v37 )
  {
    v27 = v37;
    goto LABEL_64;
  }
  if ( v37 + v36 > v7 )
  {
    *(_DWORD *)(v18 + 4) = v37;
    goto LABEL_69;
  }
  if ( (a1[3] & 0x400) != 0 )
  {
    v44 = *(_QWORD *)(v18 + 16);
    for ( j = *v5; *v5 > v44; j = *v5 )
    {
      v46 = v44;
      v44 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 16), j, v44);
      if ( v46 == v44 )
        break;
    }
  }
  ++*(_QWORD *)(v14[1] + 8LL * v31);
  v47 = v57;
  *v57 = v18;
  v47[1] = (unsigned __int64)v15;
  *((_DWORD *)v47 + 4) = v38;
  return v18 + v38;
}
