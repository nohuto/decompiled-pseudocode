/*
 * XREFs of EtwTraceEvent @ 0x140325740
 * Callers:
 *     NtTraceEvent @ 0x1402CE8A0 (NtTraceEvent.c)
 *     IoWMIWriteEvent @ 0x1404206B0 (IoWMIWriteEvent.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReserveTraceBuffer @ 0x1402D0980 (EtwpReserveTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpCloseLogger @ 0x140326790 (EtwpCloseLogger.c)
 *     EtwpSendTraceEvent @ 0x1404A70B8 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1404A71B4 (EtwpInvokeEventCallback.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwTraceEvent(__int64 a1, unsigned __int16 *a2, unsigned int a3, int a4, unsigned __int8 a5)
{
  __int64 v5; // r15
  unsigned __int16 *v6; // r12
  int v7; // edi
  __int64 v8; // r13
  __int64 v9; // rsi
  unsigned __int8 v10; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r8
  signed __int64 *v13; // r9
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  __int64 v16; // r13
  int v17; // eax
  unsigned int v18; // esi
  char *v19; // rdx
  unsigned int v20; // ecx
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r15
  int v23; // edx
  unsigned int v24; // r8d
  unsigned int v25; // ecx
  _DWORD *v26; // r14
  char *v27; // r12
  char *v28; // rdx
  __int64 v29; // rcx
  size_t v30; // rsi
  unsigned __int8 v31; // di
  _OWORD *v32; // rcx
  unsigned __int64 v33; // rcx
  struct _KTHREAD *v34; // rcx
  signed __int64 *v35; // roff
  signed __int64 v36; // rax
  signed __int64 v37; // rtt
  int v39; // eax
  unsigned int v40; // [rsp+34h] [rbp-1C4h]
  unsigned int v41; // [rsp+40h] [rbp-1B8h]
  int v42; // [rsp+44h] [rbp-1B4h]
  int v43; // [rsp+48h] [rbp-1B0h]
  unsigned int v45; // [rsp+58h] [rbp-1A0h]
  __int64 v46; // [rsp+60h] [rbp-198h]
  signed __int64 v48; // [rsp+78h] [rbp-180h] BYREF
  __int128 v49; // [rsp+80h] [rbp-178h] BYREF
  __int64 v50; // [rsp+90h] [rbp-168h]
  char *v51; // [rsp+98h] [rbp-160h]
  __int64 v52; // [rsp+A0h] [rbp-158h]
  _DWORD *v53; // [rsp+A8h] [rbp-150h]
  void *v54[32]; // [rsp+B0h] [rbp-148h] BYREF

  v5 = a3;
  v6 = a2;
  v49 = 0LL;
  v50 = 0LL;
  v7 = 0;
  v42 = 0;
  v40 = 0;
  v48 = 0LL;
  v8 = (unsigned __int16)a1;
  v45 = (unsigned __int16)a1;
  if ( a5 )
    v9 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(a1, a2) + 832);
  else
    v9 = EtwpHostSiloState;
  v46 = v9;
  if ( (unsigned int)v8 >= *(_DWORD *)(v9 + 16) )
    return (unsigned int)-1073741816;
  v10 = 0;
  if ( a5 == 1 || KeGetEffectiveIrql(a1, (__int64)a2) < 2u )
  {
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = *(_QWORD *)(*(_QWORD *)(v9 + 704) + 8 * v8);
    v13 = (signed __int64 *)(*(_QWORD *)v12 + *(_DWORD *)(v12 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v12 + 20)));
    _m_prefetchw(v13);
    v14 = *v13;
    while ( (v14 & 1) == 0 )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange64(v13, v14 + 2, v14);
      if ( v15 == v14 )
      {
        v10 = 1;
        goto LABEL_10;
      }
    }
    KeLeaveCriticalRegionThread();
    return (unsigned int)-1073741816;
  }
LABEL_10:
  _mm_lfence();
  v16 = *(_QWORD *)(*(_QWORD *)(v9 + 712) + 8 * v8);
  if ( (v16 & 1) != 0 )
  {
    EtwpCloseLogger(v45, v9, v10);
    return (unsigned int)-1073741816;
  }
  v52 = v16;
  if ( !v16 )
    return (unsigned int)-1073741816;
  v17 = *(_DWORD *)(v16 + 12);
  if ( (v17 & 0x80u) != 0 )
  {
    v40 = -1073741790;
  }
  else
  {
    if ( a5 || (v17 & 0x1000000) == 0 )
    {
      if ( a5 && ((unsigned __int8)v6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v41 = *v6;
      if ( v41 < (unsigned int)v5 )
      {
        v40 = -1073741811;
        goto LABEL_69;
      }
      v43 = *((_DWORD *)v6 + 11);
      v18 = *v6;
      if ( (v43 & 0x100000) != 0 )
      {
        v19 = (char *)v6 + v5;
        v20 = v41 - v5;
        if ( v41 - (unsigned int)v5 > 0x100 )
        {
          v40 = -1073741684;
          v9 = v46;
          goto LABEL_69;
        }
        if ( v20 )
        {
          if ( a5 && ((unsigned __int8)v19 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v21 = v20;
          memmove(v54, v19, v20);
          v18 = a3;
          v41 = a3;
          v22 = v21 >> 4;
          v42 = v22;
          v23 = 0;
          v24 = a3;
          while ( 1 )
          {
            if ( v23 >= (int)v22 )
            {
              v6 = a2;
              goto LABEL_36;
            }
            v25 = (unsigned int)v54[2 * v23 + 1];
            v18 = v25 + v24;
            v24 = v18;
            v41 = v18;
            if ( v18 < v25 )
              break;
            ++v23;
          }
          v40 = -2147483643;
          v9 = v46;
          goto LABEL_69;
        }
      }
      LODWORD(v22) = 0;
LABEL_36:
      v26 = (_DWORD *)EtwpReserveTraceBuffer((unsigned int *)v16, v18, (unsigned __int64 *)&v49, &v48, 0);
      v53 = v26;
      if ( v26 )
      {
        if ( (v43 & 0x100000) != 0 )
        {
          v27 = (char *)v26 + a3;
          v51 = v27;
          memmove(v26, a2, a3);
          while ( v7 < (int)v22 )
          {
            v28 = (char *)v54[2 * v7];
            v29 = LODWORD(v54[2 * v7 + 1]);
            if ( v28 && (_DWORD)v29 )
            {
              if ( a5 && ((unsigned __int64)&v28[v29] > 0x7FFFFFFF0000LL || &v28[v29] < v28) )
                LODWORD(v22) = v42;
              v30 = LODWORD(v54[2 * v7 + 1]);
              memmove(v27, v28, v30);
              v27 += v30;
              v51 = v27;
            }
            ++v7;
          }
          v6 = a2;
          v31 = a5;
        }
        else
        {
          v31 = a5;
          if ( a5 && v18 )
          {
            if ( ((unsigned __int8)v6 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v33 = (unsigned __int64)v6 + v18;
            if ( v33 > 0x7FFFFFFF0000LL || v33 < (unsigned __int64)v6 )
              v18 = v41;
          }
          memmove(v26, v6, v18);
        }
        if ( (v43 & 0x80000) != 0 )
        {
          v32 = (_OWORD *)*((_QWORD *)v6 + 3);
          if ( v31 && ((unsigned __int8)v32 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_OWORD *)(v26 + 6) = *v32;
        }
        v9 = v46;
        v34 = KeGetCurrentThread();
        *v26 = a4 | v41;
        *((_QWORD *)v26 + 2) = v48;
        v26[10] = v34->SchedulerApc.SpareLong0;
        v26[11] = v34->UserTime;
        v26[2] = v34[1].CurrentRunTime;
        v26[3] = v34[1].CycleTime;
        if ( (*(_DWORD *)(v16 + 12) & 0x80000) != 0
          && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
        {
          EtwpSendTraceEvent(v16, &v49);
        }
        if ( *(_QWORD *)(v16 + 1552) )
          EtwpInvokeEventCallback(v16, &v49, v26 + 6, v31);
        v35 = (signed __int64 *)*((_QWORD *)&v49 + 1);
        _m_prefetchw(*((const void **)&v49 + 1));
        v36 = *v35;
        while ( (v36 ^ (unsigned __int64)v49) < 0xF )
        {
          v37 = v36;
          v36 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v49 + 1), v36 + 1, v36);
          if ( v37 == v36 )
            goto LABEL_69;
        }
        _InterlockedDecrement((volatile signed __int32 *)(v49 + 12));
      }
      else if ( v18 > 0xFFF8 )
      {
        v40 = -1073741675;
        v9 = v46;
      }
      else
      {
        v39 = -1073741801;
        if ( v18 > *(_DWORD *)(v16 + 8) )
          v39 = -2147483643;
        v40 = v39;
        v9 = v46;
      }
      goto LABEL_69;
    }
    v40 = -1073741637;
  }
LABEL_69:
  if ( v10 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v9 + 704) + 8LL * v45), 1u);
    KeLeaveCriticalRegionThread();
  }
  return v40;
}
