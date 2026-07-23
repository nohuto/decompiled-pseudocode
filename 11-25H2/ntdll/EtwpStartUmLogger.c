/*
 * XREFs of EtwpStartUmLogger @ 0x1800B598C
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x1800B5320 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpSendSessionNotification @ 0x1800B4E14 (EtwpSendSessionNotification.c)
 *     EtwpCreateEtwThread @ 0x1800B4ED0 (EtwpCreateEtwThread.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x1800B5E04 (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpGetNextAvailableLoggerId @ 0x1800B5EE0 (EtwpGetNextAvailableLoggerId.c)
 *     EtwpInitLoggerContext @ 0x1800B5FE0 (EtwpInitLoggerContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x1800B6D9C (EtwpAllocateTraceBufferPool.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x1800B703C (EtwpGetUmLoggerInfoFromContext.c)
 *     EtwpFreeLoggerContext @ 0x1800B78AC (EtwpFreeLoggerContext.c)
 *     EtwpInitializeCompression @ 0x180115460 (EtwpInitializeCompression.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtQuerySystemInformation @ 0x1801638E0 (NtQuerySystemInformation.c)
 *     NtTraceControl @ 0x180166CD0 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

ULONG __fastcall EtwpStartUmLogger(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  void *v6; // r15
  unsigned int v7; // r12d
  int v8; // edx
  __int64 v9; // rcx
  int v10; // eax
  ULONG result; // eax
  unsigned int v12; // edx
  unsigned int NumberOfProcessors; // r8d
  __int64 v14; // r14
  _DWORD *v15; // rdi
  int v16; // eax
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  int v19; // ecx
  unsigned __int32 TraceBufferPool; // esi
  __int16 v21; // ax
  __int64 v22; // rdi
  _QWORD *v23; // r14
  HANDLE EtwThread; // rax
  _DWORD *v25; // rcx
  void *v26; // rcx
  NTSTATUS v27; // eax
  __int16 v28; // [rsp+30h] [rbp-59h] BYREF
  __int16 InputBuffer; // [rsp+38h] [rbp-51h] BYREF
  _DWORD *inited; // [rsp+40h] [rbp-49h]
  unsigned int v31; // [rsp+48h] [rbp-41h] BYREF
  __int64 ReturnLength; // [rsp+4Ch] [rbp-3Dh] BYREF
  int OutputBuffer_4; // [rsp+54h] [rbp-35h]
  _DWORD *v34; // [rsp+58h] [rbp-31h]
  char SystemInformation[8]; // [rsp+60h] [rbp-29h] BYREF
  int v36; // [rsp+68h] [rbp-21h]

  v34 = a3;
  inited = 0LL;
  v31 = 0;
  v28 = 0;
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
  if ( !(unsigned int)EtwpGetPrivateLoggerContextByName((PUNICODE_STRING)(a4 + 144)) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * (unsigned int)inited[5] + 8));
    return 183;
  }
  result = EtwpGetNextAvailableLoggerId(a4, &v31);
  if ( !result )
  {
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v12 = (*(unsigned __int16 *)(a4 + 146) + *(unsigned __int16 *)(a4 + 130) + 183) & 0xFFFFFFF8;
      v7 = *(_DWORD *)a4 - v12;
      v6 = (void *)(a4 + v12);
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
    v14 = v31;
    inited = (_DWORD *)EtwpInitLoggerContext(a4, v31, NumberOfProcessors, (_DWORD)v6, v7);
    v15 = inited;
    if ( !inited )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v14 + 8));
      return 8;
    }
    v16 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    if ( v16 < 0 )
      return RtlNtStatusToDosError(v16);
    inited[48] = ~(v36 - 1) & (inited[48] + v36 - 1);
    if ( (v15[77] & 0x4000000) != 0 )
    {
      v27 = EtwpInitializeCompression(v15);
      if ( v27 )
      {
        TraceBufferPool = RtlNtStatusToDosError(v27);
        if ( TraceBufferPool )
          goto LABEL_46;
      }
    }
    if ( (v15[77] & 0x400) == 0 )
    {
      v17 = EtwpAddLogHeaderToLogFile((__int64)v15, v6, v7, (v15[77] & 4) != 0);
      if ( v17 )
      {
        TraceBufferPool = RtlNtStatusToDosError(v17);
        if ( TraceBufferPool )
          goto LABEL_46;
      }
    }
    v18 = (unsigned int)v15[48];
    v19 = 0xFFFF;
    if ( (unsigned __int64)(v18 - 72) < 0xFFFF )
      v19 = v18 - 72;
    v15[49] = v19 & 0xFFFFFFF8;
    TraceBufferPool = EtwpAllocateTraceBufferPool(v15);
    if ( TraceBufferPool )
      goto LABEL_46;
    if ( (v15[77] & 0x20000) == 0 )
    {
      v21 = *((_WORD *)v15 + 10);
      OutputBuffer_4 = 0;
      ReturnLength = 0LL;
      InputBuffer = v21;
      TraceBufferPool = NtTraceControl(
                          EtwRegisterPrivateSession,
                          &InputBuffer,
                          2u,
                          (char *)&ReturnLength + 4,
                          8u,
                          (PULONG)&ReturnLength);
      if ( TraceBufferPool )
        goto LABEL_46;
      v28 = OutputBuffer_4;
      *((_QWORD *)v15 + 68) = HIDWORD(ReturnLength);
    }
    v22 = 2 * v14;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v14 + 8));
    v23 = inited;
    if ( (inited[77] & 0x400) == 0 )
    {
      EtwThread = EtwpCreateEtwThread((NTSTATUS (__cdecl *)(PVOID))EtwpLogger, inited);
      if ( !EtwThread )
      {
        TraceBufferPool = NtCurrentTeb()->LastErrorValue;
LABEL_33:
        _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v22 + 8));
        if ( !TraceBufferPool )
        {
          v25 = v34;
          *a2 = *(_DWORD *)a4;
          *v25 = *(_DWORD *)a4;
          return TraceBufferPool;
        }
        v15 = inited;
LABEL_46:
        v26 = (void *)*((_QWORD *)v15 + 16);
        if ( v26 )
        {
          NtClose(v26);
          *((_QWORD *)v15 + 16) = 0LL;
        }
        EtwpFreeLoggerContext(v15);
        return TraceBufferPool;
      }
      v23[4] = EtwThread;
    }
    EtwpGetUmLoggerInfoFromContext(a4, v23, &v28);
    _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 8 * v22), (__int64)v23);
    EtwpSendSessionNotification((__int64)inited, 5, 0);
    goto LABEL_33;
  }
  return result;
}
