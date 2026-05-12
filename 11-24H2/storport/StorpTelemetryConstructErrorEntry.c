/*
 * XREFs of StorpTelemetryConstructErrorEntry @ 0x140022400
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x1400220F0 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     RiDeviceQueueQueuedCount @ 0x140022848 (RiDeviceQueueQueuedCount.c)
 *     RaidGetIoStartingLbaAndLength @ 0x140022870 (RaidGetIoStartingLbaAndLength.c)
 */

__int64 __fastcall StorpTelemetryConstructErrorEntry(
        __int64 a1,
        unsigned __int64 a2,
        union _LARGE_INTEGER a3,
        _BYTE *a4,
        union _LARGE_INTEGER PerformanceFrequency)
{
  union _LARGE_INTEGER v5; // rsi
  union _LARGE_INTEGER v6; // rbx
  _BYTE *v7; // r10
  union _LARGE_INTEGER v8; // r15
  unsigned __int64 v9; // r11
  unsigned int v11; // eax
  char v12; // di
  unsigned __int8 v13; // r12
  _BYTE *v14; // rbp
  int v15; // eax
  unsigned int *v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  __int64 v19; // rcx
  int v20; // eax
  unsigned __int64 v21; // rcx
  char *v22; // rcx
  char v23; // al
  char v24; // al
  __int64 v25; // rax
  int v26; // ebp
  unsigned __int64 v27; // rcx
  __int64 result; // rax
  __int64 v29; // rdi
  bool v30; // zf
  LARGE_INTEGER v31; // rax
  LARGE_INTEGER v32; // rcx
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdi
  __int64 v38; // r12
  ULONG64 UnbiasedInterruptTimePrecise; // rcx
  bool v40; // zf
  _BYTE *v41; // [rsp+20h] [rbp-48h]
  union _LARGE_INTEGER v42; // [rsp+70h] [rbp+8h] BYREF
  __int64 v43; // [rsp+80h] [rbp+18h] BYREF
  __int64 v44; // [rsp+88h] [rbp+20h]

  v5 = PerformanceFrequency;
  v6.QuadPart = 0LL;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  *(_OWORD *)PerformanceFrequency.QuadPart = 0LL;
  *(_OWORD *)(v5.QuadPart + 16) = 0LL;
  *(_QWORD *)(v5.QuadPart + 32) = 0LL;
  if ( a4 )
  {
    v11 = (unsigned __int8)a4[2];
    LOBYTE(a3.LowPart) = 0;
    v12 = a4[3];
    v13 = 0;
    a4 = 0LL;
    v14 = 0LL;
    if ( (_BYTE)v11 == 40 )
    {
      a2 = *((unsigned int *)v7 + 5);
      if ( (_DWORD)a2 )
        goto LABEL_19;
      v15 = *((_DWORD *)v7 + 14);
      PerformanceFrequency.LowPart = 0;
      LODWORD(v43) = v15;
      if ( !v15 )
        goto LABEL_19;
      v16 = (unsigned int *)(v7 + 120);
      v41 = v7 + 120;
      while ( 1 )
      {
        v17 = *v16;
        if ( (unsigned int)v17 < 0x80 )
          goto LABEL_11;
        v18 = *((unsigned int *)v7 + 4);
        if ( (unsigned int)v17 >= (unsigned int)v18 )
          goto LABEL_11;
        v19 = (unsigned int)v17;
        v44 = v17;
        v20 = *(_DWORD *)&v7[v17];
        if ( v20 == 64 )
          break;
        v36 = v20 - 65;
        if ( !v36 )
        {
          v21 = v19 + 56;
LABEL_10:
          if ( v21 <= v18 )
          {
            if ( v7[v44 + 10] )
              a4 = &v7[v44 + 24];
            a3.QuadPart = (unsigned __int8)v7[v44 + 8];
            v14 = *(_BYTE **)&v7[v44 + 16];
            v13 = v7[v44 + 9];
            goto LABEL_19;
          }
          goto LABEL_11;
        }
        if ( v36 == 1 && v19 + 40 <= v18 )
        {
          if ( *(_DWORD *)&v7[v44 + 12] )
            a4 = &v7[v44 + 32];
          a3.QuadPart = (unsigned __int8)v7[v44 + 8];
          v14 = *(_BYTE **)&v7[v44 + 24];
          v13 = v7[v44 + 9];
          goto LABEL_19;
        }
LABEL_11:
        v16 = (unsigned int *)(v41 + 4);
        ++PerformanceFrequency.LowPart;
        v41 += 4;
        if ( PerformanceFrequency.LowPart >= (unsigned int)v43 )
          goto LABEL_19;
      }
      v21 = v19 + 40;
      goto LABEL_10;
    }
    a2 = v11;
    if ( !(_BYTE)v11 )
    {
      a4 = v7 + 72;
      a3.QuadPart = (unsigned __int8)v7[4];
      v14 = (_BYTE *)*((_QWORD *)v7 + 4);
      if ( !v7[10] )
        a4 = 0LL;
      v13 = v7[11];
    }
LABEL_19:
    *(_BYTE *)(v5.QuadPart + 1) = a3.LowPart;
    *(_BYTE *)(v5.QuadPart + 5) = -1;
    *(_BYTE *)v5.QuadPart = v12 & 0x3F;
    if ( a4 )
    {
      v24 = *a4;
      *(_BYTE *)(v5.QuadPart + 5) = *a4;
      if ( !(_DWORD)a2 && ((v24 - 8) & 0x5D) == 0 )
      {
        RaidGetIoStartingLbaAndLength(a4, v5.QuadPart + 24, 0LL);
        if ( v9 )
        {
          v25 = *(_QWORD *)(v9 + 8);
          if ( v25 )
            *(_DWORD *)(v5.QuadPart + 8) = *(_DWORD *)(v25 + 40);
        }
      }
    }
    if ( v12 < 0 && v14 && v13 >= 0x12u && (unsigned __int8)((*v14 & 0x7F) - 112) <= 1u )
    {
      *(_BYTE *)(v5.QuadPart + 2) = v14[2] & 0xF;
      *(_BYTE *)(v5.QuadPart + 3) = v14[12];
      *(_BYTE *)(v5.QuadPart + 4) = v14[13];
    }
  }
  else
  {
    *(_BYTE *)v5.QuadPart = 4;
    *(_BYTE *)(v5.QuadPart + 5) = -1;
    v22 = *(char **)(a2 + 184);
    v23 = *v22;
    if ( *v22 == 3 )
    {
      *(_BYTE *)(v5.QuadPart + 5) = 40;
      *(_QWORD *)(v5.QuadPart + 24) = *((_QWORD *)v22 + 3);
      *(_DWORD *)(v5.QuadPart + 8) = *((_DWORD *)v22 + 2);
    }
    else if ( v23 == 4 )
    {
      *(_BYTE *)(v5.QuadPart + 5) = 42;
      *(_QWORD *)(v5.QuadPart + 24) = *((_QWORD *)v22 + 3);
      *(_DWORD *)(v5.QuadPart + 8) = *((_DWORD *)v22 + 2);
    }
    else if ( v23 == 9 )
    {
      *(_BYTE *)(v5.QuadPart + 5) = 53;
    }
  }
  v26 = -1;
  if ( *(_DWORD *)(a1 + 2372) == 1 )
  {
    if ( v8.QuadPart )
    {
      v29 = *(_QWORD *)(v8.QuadPart + 696);
      PerformanceFrequency.QuadPart = 0LL;
      if ( StorEtwLoggingEnabled )
      {
        v30 = UseQPCTime == 0;
      }
      else
      {
        if ( !g_StorpTraceLoggingPerformanceEnabled )
        {
          v32.QuadPart = 0LL;
LABEL_53:
          v34 = v32.QuadPart - v29;
          if ( StorEtwLoggingEnabled )
          {
            if ( !UseQPCTime )
              goto LABEL_61;
            if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
            {
              if ( !v6.QuadPart )
                goto LABEL_28;
              v34 = 10000000 * v34 / v6.QuadPart;
            }
          }
          if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
          {
            if ( !v6.QuadPart )
              goto LABEL_28;
            v35 = 10000000 * v34 / v6.QuadPart;
LABEL_60:
            v34 = v35;
            goto LABEL_61;
          }
          goto LABEL_61;
        }
        if ( !UseQPCTime )
        {
LABEL_52:
          UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
          v6 = PerformanceFrequency;
          v32.QuadPart = UnbiasedInterruptTime;
          goto LABEL_53;
        }
        v30 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
      }
      if ( !v30 )
      {
        v31 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v6 = PerformanceFrequency;
        v32 = v31;
        goto LABEL_53;
      }
      goto LABEL_52;
    }
    if ( v7 )
      goto LABEL_35;
    v37 = *(unsigned int *)(v9 + 168);
    v38 = *(unsigned int *)(v9 + 172);
    v42.QuadPart = 0LL;
    PerformanceFrequency.QuadPart = 0LL;
    v43 = 0LL;
    if ( (int)IoGetIoAttributionHandle(v9, &v43) >= 0 )
    {
      UnbiasedInterruptTimePrecise = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&PerformanceFrequency.QuadPart);
      a3.QuadPart = 10000000LL;
LABEL_95:
      a2 = v37 | (v38 << 32);
      v34 = UnbiasedInterruptTimePrecise - a2;
      if ( StorEtwLoggingEnabled )
      {
        if ( !UseQPCTime )
          goto LABEL_61;
        if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
        {
          if ( !a3.QuadPart )
            goto LABEL_35;
          a2 = 10000000 * v34 % a3.QuadPart;
          v34 = 10000000 * v34 / a3.QuadPart;
        }
      }
      if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
      {
        if ( !a3.QuadPart )
          goto LABEL_35;
        v35 = 10000000 * v34 / a3.QuadPart;
        goto LABEL_60;
      }
LABEL_61:
      a2 = v34 / 10000;
      if ( (unsigned __int64)(v34 / 10000) > 0xFFFFFFFF )
      {
        *(_DWORD *)(v5.QuadPart + 12) = -1;
      }
      else if ( a2 || !v34 )
      {
        *(_DWORD *)(v5.QuadPart + 12) = a2;
      }
      else
      {
        *(_DWORD *)(v5.QuadPart + 12) = 1;
      }
      goto LABEL_27;
    }
    if ( StorEtwLoggingEnabled )
    {
      v40 = UseQPCTime == 0;
    }
    else
    {
      if ( !g_StorpTraceLoggingPerformanceEnabled )
      {
        UnbiasedInterruptTimePrecise = 0LL;
        goto LABEL_94;
      }
      if ( !UseQPCTime )
        goto LABEL_92;
      v40 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
    }
    if ( !v40 )
    {
      UnbiasedInterruptTimePrecise = KeQueryPerformanceCounter(&v42).QuadPart;
LABEL_94:
      a3 = v42;
      goto LABEL_95;
    }
LABEL_92:
    UnbiasedInterruptTimePrecise = KeQueryUnbiasedInterruptTime();
    goto LABEL_94;
  }
LABEL_27:
  if ( v8.QuadPart )
  {
LABEL_28:
    v27 = *(_QWORD *)(v8.QuadPart + 688);
    a2 = v27 / 0x2710;
    if ( v27 / 0x2710 <= 0xFFFFFFFF )
    {
      if ( a2 || !v27 )
        v26 = v27 / 0x2710;
      else
        v26 = 1;
    }
    *(_DWORD *)(v5.QuadPart + 16) = v26;
    goto LABEL_34;
  }
LABEL_35:
  if ( *(_BYTE *)(a1 + 3368) == 1 && *(_BYTE *)v5.QuadPart == 9 )
  {
    a2 = (unsigned int)(5000000 * *(_DWORD *)(a1 + 3392)) / 0x2710uLL;
    *(_DWORD *)(v5.QuadPart + 16) = a2;
  }
LABEL_34:
  *(_DWORD *)(v5.QuadPart + 20) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RiDeviceQueueQueuedCount)(
                                    a1 + 720,
                                    a2,
                                    (union _LARGE_INTEGER)a3.QuadPart,
                                    a4);
  result = *(unsigned int *)(a1 + 2480);
  *(_DWORD *)(v5.QuadPart + 32) = result;
  return result;
}
