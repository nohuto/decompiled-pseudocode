/*
 * XREFs of RtlReportExceptionEx @ 0x180132500
 * Callers:
 *     WerReportExceptionWorker @ 0x1801329A0 (WerReportExceptionWorker.c)
 * Callees:
 *     ReportExceptionInternal @ 0x1800AC57C (ReportExceptionInternal.c)
 *     WerpProcessId @ 0x1800AC6B4 (WerpProcessId.c)
 *     WerpThreadId @ 0x1800AC704 (WerpThreadId.c)
 *     WerpWaitForCrashReporting @ 0x1800AC754 (WerpWaitForCrashReporting.c)
 *     RtlReportException @ 0x18010B4F0 (RtlReportException.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x18010B594 (WerpBreakIntoDebuggerIfPresent.c)
 *     WerpCreateCompletionEvent @ 0x18010E0D8 (WerpCreateCompletionEvent.c)
 *     WerpSetProcessFaultInformation @ 0x18010F180 (WerpSetProcessFaultInformation.c)
 *     WerpCreateCrashDataSection @ 0x18010F554 (WerpCreateCrashDataSection.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 *     ZwTerminateProcess @ 0x1801605D0 (ZwTerminateProcess.c)
 *     ZwDuplicateObject @ 0x1801607D0 (ZwDuplicateObject.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlReportExceptionEx(
        PEXCEPTION_RECORD ExceptionRecord,
        PCONTEXT ContextRecord,
        ULONG Flags,
        PLARGE_INTEGER Timeout)
{
  int v7; // esi
  int v8; // eax
  void *UniqueThread; // rdx
  int v10; // ecx
  NTSTATUS v12; // ebx
  _QWORD *v13; // rcx
  int v14; // ebx
  char *v15; // rdx
  _OWORD *v16; // r9
  __int64 v17; // rax
  HANDLE v18; // [rsp+40h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-90h] BYREF
  HANDLE v20; // [rsp+50h] [rbp-88h] BYREF
  HANDLE TargetHandle; // [rsp+58h] [rbp-80h] BYREF
  HANDLE SourceHandle; // [rsp+60h] [rbp-78h]
  HANDLE Handle; // [rsp+68h] [rbp-70h] BYREF
  HANDLE v24; // [rsp+70h] [rbp-68h] BYREF
  int v25; // [rsp+78h] [rbp-60h]
  int v26; // [rsp+7Ch] [rbp-5Ch]
  HANDLE v27; // [rsp+80h] [rbp-58h]
  __int128 v28; // [rsp+88h] [rbp-50h] BYREF
  __int128 v29; // [rsp+98h] [rbp-40h]
  void *v30; // [rsp+100h] [rbp+28h]

  SourceHandle = Timeout;
  v27 = v30;
  v28 = 0LL;
  v29 = 0LL;
  TargetHandle = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  v24 = 0LL;
  BaseAddress = 0LL;
  v7 = WerpProcessId(Timeout);
  v25 = v7;
  v8 = WerpThreadId(v30);
  v26 = v8;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  if ( v7 != (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess || (v10 = 1, v8 != (_DWORD)UniqueThread) )
    v10 = 0;
  if ( v10 )
    return RtlReportException(ExceptionRecord, ContextRecord, Flags);
  if ( v7 == (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess )
    WerpBreakIntoDebuggerIfPresent(ExceptionRecord, ContextRecord, Flags);
  if ( (Flags & 4) != 0 || (v12 = WerpSetProcessFaultInformation(SourceHandle), v12 >= 0) )
  {
    v12 = WerpCreateCompletionEvent(&v18);
    if ( v12 >= 0 )
    {
      v12 = WerpCreateCrashDataSection(&v24, &BaseAddress);
      if ( v12 >= 0 )
      {
        v12 = ZwDuplicateObject(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                SourceHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &TargetHandle,
                0x1FFFFFu,
                2u,
                0);
        if ( v12 >= 0 )
        {
          v12 = ZwDuplicateObject(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  v27,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &v20,
                  0x1FFFFFu,
                  2u,
                  0);
          if ( v12 >= 0 )
          {
            v13 = BaseAddress;
            *(_DWORD *)BaseAddress = 248;
            v13[21] = 1LL;
            v14 = v25;
            *((_DWORD *)v13 + 1) = v25;
            *((_DWORD *)v13 + 2) = v26;
            v13[23] = TargetHandle;
            v13[24] = v20;
            v13[26] = v18;
            v13[28] = 0LL;
            *((_DWORD *)v13 + 58) = -1073741823;
            *((_DWORD *)v13 + 59) = Flags;
            v15 = (char *)BaseAddress;
            *((_DWORD *)BaseAddress + 60) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
            v16 = v15 + 416;
            *((_QWORD *)v15 + 31) = 1LL;
            *(_OWORD *)(v15 + 264) = *(_OWORD *)&ExceptionRecord->ExceptionCode;
            *(_OWORD *)(v15 + 280) = *(_OWORD *)&ExceptionRecord->ExceptionAddress;
            *(_OWORD *)(v15 + 296) = *(_OWORD *)ExceptionRecord->ExceptionInformation;
            *(_OWORD *)(v15 + 312) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[2];
            *(_OWORD *)(v15 + 328) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[4];
            *(_OWORD *)(v15 + 344) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[6];
            *(_OWORD *)(v15 + 360) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[8];
            *(_OWORD *)(v15 + 376) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[10];
            *(_OWORD *)(v15 + 392) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[12];
            *((_QWORD *)v15 + 51) = ExceptionRecord->ExceptionInformation[14];
            if ( ((unsigned __int64)ContextRecord & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
            {
              *((_QWORD *)v15 + 32) = 1LL;
              v17 = 9LL;
              do
              {
                *v16 = *(_OWORD *)&ContextRecord->P1Home;
                v16[1] = *(_OWORD *)&ContextRecord->P3Home;
                v16[2] = *(_OWORD *)&ContextRecord->P5Home;
                v16[3] = *(_OWORD *)&ContextRecord->ContextFlags;
                v16[4] = *(_OWORD *)&ContextRecord->SegGs;
                v16[5] = *(_OWORD *)&ContextRecord->Dr1;
                v16[6] = *(_OWORD *)&ContextRecord->Dr3;
                v16 += 8;
                *(v16 - 1) = *(_OWORD *)&ContextRecord->Dr7;
                ContextRecord = (PCONTEXT)((char *)ContextRecord + 128);
                --v17;
              }
              while ( v17 );
              *v16 = *(_OWORD *)&ContextRecord->P1Home;
              v16[1] = *(_OWORD *)&ContextRecord->P3Home;
              v16[2] = *(_OWORD *)&ContextRecord->P5Home;
              v16[3] = *(_OWORD *)&ContextRecord->ContextFlags;
              v16[4] = *(_OWORD *)&ContextRecord->SegGs;
            }
            else
            {
              *((_QWORD *)v15 + 32) = 2LL;
              memset_thunk_772440563353939046(v16, 0, 0x4D0uLL);
            }
            *(_QWORD *)&v28 = v18;
            *((_QWORD *)&v28 + 1) = v24;
            *(_QWORD *)&v29 = TargetHandle;
            *((_QWORD *)&v29 + 1) = v20;
            v12 = ReportExceptionInternal(v14, (__int64)v24, &v28, 4u, Flags, &Handle);
            if ( v12 >= 0 )
            {
              if ( !Handle || (v12 = WerpWaitForCrashReporting(SourceHandle, v18, Handle, 0LL), v12 >= 0) )
              {
                if ( (Flags & 4) != 0
                  || (v12 = ZwTerminateProcess(SourceHandle, ExceptionRecord->ExceptionCode), v12 >= 0) )
                {
                  v12 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( BaseAddress )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( v24 )
    NtClose(v24);
  if ( v18 )
  {
    NtClose(v18);
    v18 = 0LL;
  }
  if ( v20 )
    NtClose(v20);
  if ( TargetHandle )
    NtClose(TargetHandle);
  return v12;
}
