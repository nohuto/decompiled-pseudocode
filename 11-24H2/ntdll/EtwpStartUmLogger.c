/*
 * XREFs of EtwpStartUmLogger @ 0x18008CCDC
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x18008C670 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001C620 (RtlNtStatusToDosError.c)
 *     EtwpSendSessionNotification @ 0x18008C158 (EtwpSendSessionNotification.c)
 *     EtwpCreateEtwThread @ 0x18008C220 (EtwpCreateEtwThread.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x18008D154 (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpGetNextAvailableLoggerId @ 0x18008D230 (EtwpGetNextAvailableLoggerId.c)
 *     EtwpInitLoggerContext @ 0x18008D330 (EtwpInitLoggerContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x18008DEFC (EtwpAllocateTraceBufferPool.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x18008E19C (EtwpGetUmLoggerInfoFromContext.c)
 *     EtwpFreeLoggerContext @ 0x18008EA0C (EtwpFreeLoggerContext.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitializeCompression @ 0x180112360 (EtwpInitializeCompression.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtQuerySystemInformation @ 0x180162350 (NtQuerySystemInformation.c)
 *     NtTraceControl @ 0x180165740 (NtTraceControl.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

ULONG __fastcall EtwpStartUmLogger(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 v6; // r15
  unsigned int v7; // r12d
  int v8; // edx
  __int64 v9; // rcx
  int v10; // eax
  ULONG result; // eax
  unsigned int v12; // edx
  unsigned int NumberOfProcessors; // r8d
  __int64 v14; // r14
  __int64 v15; // rdi
  int v16; // eax
  unsigned int v17; // r9d
  __int64 v18; // r9
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  int v21; // ecx
  ULONG TraceBufferPool; // esi
  __int16 v23; // ax
  __int64 v24; // rdi
  __int64 v25; // r14
  __int64 EtwThread; // rax
  _DWORD *v27; // rcx
  void *v28; // rcx
  NTSTATUS v29; // eax
  __int16 v30; // [rsp+30h] [rbp-59h] BYREF
  __int16 v31; // [rsp+38h] [rbp-51h] BYREF
  __int64 inited; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-41h] BYREF
  __int64 v34; // [rsp+4Ch] [rbp-3Dh] BYREF
  int v35; // [rsp+54h] [rbp-35h]
  _DWORD *v36; // [rsp+58h] [rbp-31h]
  char SystemInformation[8]; // [rsp+60h] [rbp-29h] BYREF
  int v38; // [rsp+68h] [rbp-21h]

  v36 = a3;
  inited = 0LL;
  v33 = 0;
  v30 = 0;
  v6 = 0LL;
  v7 = 0;
  memset_thunk_772440563353939046(SystemInformation, 0, 0x40uLL);
  if ( *(_DWORD *)a4 < 0xB0u )
    return 87;
  v8 = *(_DWORD *)(a4 + 64);
  v9 = *(unsigned __int16 *)(a4 + 146) + 176LL;
  *(_QWORD *)(a4 + 152) = a4 + 176;
  *(_QWORD *)(a4 + 136) = a4 + v9;
  if ( (v8 & 0x40B) != 0 )
  {
    if ( (unsigned int)__popcnt(v8 & 0x40B) == 1 )
      goto LABEL_4;
    return 87;
  }
  v8 |= 1u;
  *(_DWORD *)(a4 + 64) = v8;
LABEL_4:
  if ( (v8 & 0x2000000) != 0
    || (v8 & 0x400) != 0 && (*(_WORD *)(a4 + 128) || *(_DWORD *)(a4 + 68) || *(_DWORD *)(a4 + 76)) )
  {
    return 87;
  }
  v10 = *(_DWORD *)(a4 + 76);
  if ( v10 )
  {
    if ( *(_DWORD *)(a4 + 68) || v10 < 0 )
      return 87;
  }
  if ( (v8 & 6) == 6
    || (v8 & 0xC000) == 0xC000
    || (v8 & 0x4000000) != 0 && ((v8 & 2) != 0 || (v8 & 4) != 0 || (v8 & 0x20) != 0 || (v8 & 0x400) != 0) )
  {
    return 87;
  }
  if ( !(unsigned int)EtwpGetPrivateLoggerContextByName(a4 + 144, &inited) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(inited + 20) + 8));
    return 183;
  }
  result = EtwpGetNextAvailableLoggerId(a4, &v33);
  if ( !result )
  {
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v12 = (*(unsigned __int16 *)(a4 + 146) + *(unsigned __int16 *)(a4 + 130) + 183) & 0xFFFFFFF8;
      v7 = *(_DWORD *)a4 - v12;
      v6 = a4 + v12;
      NumberOfProcessors = -1;
    }
    else if ( (*(_DWORD *)(a4 + 64) & 0x10000000) != 0 )
    {
      NumberOfProcessors = 1;
    }
    else
    {
      NumberOfProcessors = NtCurrentPeb()->NumberOfProcessors;
    }
    v14 = v33;
    inited = EtwpInitLoggerContext(a4, v33, NumberOfProcessors, v6, v7);
    v15 = inited;
    if ( !inited )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v14 + 8));
      return 8;
    }
    v16 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    if ( v16 < 0 )
      return RtlNtStatusToDosError(v16);
    *(_DWORD *)(v15 + 192) = ~(v38 - 1) & (*(_DWORD *)(v15 + 192) + v38 - 1);
    if ( (*(_DWORD *)(v15 + 308) & 0x4000000) != 0 )
    {
      v29 = EtwpInitializeCompression(v15);
      if ( v29 )
      {
        TraceBufferPool = RtlNtStatusToDosError(v29);
        if ( TraceBufferPool )
          goto LABEL_46;
      }
    }
    v17 = *(_DWORD *)(v15 + 308);
    if ( (v17 & 0x400) == 0 )
    {
      v18 = v17 >> 2;
      LOBYTE(v18) = v18 & 1;
      v19 = EtwpAddLogHeaderToLogFile(v15, v6, v7, v18);
      if ( v19 )
      {
        TraceBufferPool = RtlNtStatusToDosError(v19);
        if ( TraceBufferPool )
          goto LABEL_46;
      }
    }
    v20 = *(unsigned int *)(v15 + 192);
    v21 = 0xFFFF;
    if ( (unsigned __int64)(v20 - 72) < 0xFFFF )
      v21 = v20 - 72;
    *(_DWORD *)(v15 + 196) = v21 & 0xFFFFFFF8;
    TraceBufferPool = EtwpAllocateTraceBufferPool(v15);
    if ( TraceBufferPool )
      goto LABEL_46;
    if ( (*(_DWORD *)(v15 + 308) & 0x20000) == 0 )
    {
      v23 = *(_WORD *)(v15 + 20);
      v35 = 0;
      v34 = 0LL;
      v31 = v23;
      TraceBufferPool = NtTraceControl(39LL, &v31, 2LL, (char *)&v34 + 4, 8, &v34);
      if ( TraceBufferPool )
        goto LABEL_46;
      v30 = v35;
      *(_QWORD *)(v15 + 544) = HIDWORD(v34);
    }
    v24 = 2 * v14;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v14 + 8));
    v25 = inited;
    if ( (*(_DWORD *)(inited + 308) & 0x400) == 0 )
    {
      EtwThread = EtwpCreateEtwThread();
      if ( !EtwThread )
      {
        TraceBufferPool = NtCurrentTeb()->LastErrorValue;
LABEL_33:
        _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v24 + 8));
        if ( !TraceBufferPool )
        {
          v27 = v36;
          *a2 = *(_DWORD *)a4;
          *v27 = *(_DWORD *)a4;
          return TraceBufferPool;
        }
        v15 = inited;
LABEL_46:
        v28 = *(void **)(v15 + 128);
        if ( v28 )
        {
          NtClose(v28);
          *(_QWORD *)(v15 + 128) = 0LL;
        }
        EtwpFreeLoggerContext(v15);
        return TraceBufferPool;
      }
      *(_QWORD *)(v25 + 32) = EtwThread;
    }
    EtwpGetUmLoggerInfoFromContext(a4, v25, &v30);
    _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 8 * v24), v25);
    EtwpSendSessionNotification(inited, 5, 0);
    goto LABEL_33;
  }
  return result;
}
