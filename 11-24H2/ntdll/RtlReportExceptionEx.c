/*
 * XREFs of RtlReportExceptionEx @ 0x1801342D0
 * Callers:
 *     WerReportExceptionWorker @ 0x180134770 (WerReportExceptionWorker.c)
 * Callees:
 *     RtlReportException @ 0x180001490 (RtlReportException.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x180001534 (WerpBreakIntoDebuggerIfPresent.c)
 *     ReportExceptionInternal @ 0x18000287C (ReportExceptionInternal.c)
 *     WerpProcessId @ 0x1800029B4 (WerpProcessId.c)
 *     WerpThreadId @ 0x180002A04 (WerpThreadId.c)
 *     WerpWaitForCrashReporting @ 0x180002A54 (WerpWaitForCrashReporting.c)
 *     WerpCreateCompletionEvent @ 0x180112E18 (WerpCreateCompletionEvent.c)
 *     WerpSetProcessFaultInformation @ 0x180113E80 (WerpSetProcessFaultInformation.c)
 *     WerpCreateCrashDataSection @ 0x180114304 (WerpCreateCrashDataSection.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 *     ZwTerminateProcess @ 0x180162210 (ZwTerminateProcess.c)
 *     ZwDuplicateObject @ 0x180162410 (ZwDuplicateObject.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlReportExceptionEx(unsigned int *a1, __int64 a2, unsigned int a3, void *a4, __int64 a5)
{
  int v8; // esi
  int v9; // eax
  void *UniqueThread; // rdx
  int v11; // ecx
  int v13; // ebx
  _DWORD *v14; // rcx
  int v15; // ebx
  _DWORD *v16; // rdx
  _OWORD *v17; // r9
  __int64 v18; // rax
  __int64 v19; // [rsp+30h] [rbp-A8h]
  HANDLE v20; // [rsp+40h] [rbp-98h] BYREF
  _DWORD *v21; // [rsp+48h] [rbp-90h] BYREF
  HANDLE v22; // [rsp+50h] [rbp-88h] BYREF
  HANDLE v23; // [rsp+58h] [rbp-80h] BYREF
  void *v24; // [rsp+60h] [rbp-78h]
  HANDLE Handle; // [rsp+68h] [rbp-70h] BYREF
  HANDLE v26; // [rsp+70h] [rbp-68h] BYREF
  int v27; // [rsp+78h] [rbp-60h]
  int v28; // [rsp+7Ch] [rbp-5Ch]
  __int64 v29; // [rsp+80h] [rbp-58h]
  __int128 v30; // [rsp+88h] [rbp-50h] BYREF
  __int128 v31; // [rsp+98h] [rbp-40h]

  v24 = a4;
  v29 = a5;
  v30 = 0LL;
  v31 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  Handle = 0LL;
  v26 = 0LL;
  v21 = 0LL;
  v8 = WerpProcessId(a4);
  v27 = v8;
  v9 = WerpThreadId(a5);
  v28 = v9;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  if ( v8 != (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess || (v11 = 1, v9 != (_DWORD)UniqueThread) )
    v11 = 0;
  if ( v11 )
    return RtlReportException((__int64)a1, a2, a3);
  if ( v8 == (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess )
    WerpBreakIntoDebuggerIfPresent(a1, a2, a3);
  if ( (a3 & 4) != 0 || (v13 = WerpSetProcessFaultInformation((__int64)v24), v13 >= 0) )
  {
    v13 = WerpCreateCompletionEvent(&v20);
    if ( v13 >= 0 )
    {
      v13 = WerpCreateCrashDataSection(&v26, (void **)&v21);
      if ( v13 >= 0 )
      {
        v13 = ZwDuplicateObject(-1LL, v24, -1LL, &v23, 0x1FFFFF, 2, 0);
        if ( v13 >= 0 )
        {
          LODWORD(v19) = 0;
          v13 = ZwDuplicateObject(-1LL, v29, -1LL, &v22, 0x1FFFFF, 2, v19);
          if ( v13 >= 0 )
          {
            v14 = v21;
            *v21 = 248;
            *((_QWORD *)v14 + 21) = 1LL;
            v15 = v27;
            v14[1] = v27;
            v14[2] = v28;
            *((_QWORD *)v14 + 23) = v23;
            *((_QWORD *)v14 + 24) = v22;
            *((_QWORD *)v14 + 26) = v20;
            *((_QWORD *)v14 + 28) = 0LL;
            v14[58] = -1073741823;
            v14[59] = a3;
            v16 = v21;
            v21[60] = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
            v17 = v16 + 104;
            *((_QWORD *)v16 + 31) = 1LL;
            *(_OWORD *)(v16 + 66) = *(_OWORD *)a1;
            *(_OWORD *)(v16 + 70) = *((_OWORD *)a1 + 1);
            *(_OWORD *)(v16 + 74) = *((_OWORD *)a1 + 2);
            *(_OWORD *)(v16 + 78) = *((_OWORD *)a1 + 3);
            *(_OWORD *)(v16 + 82) = *((_OWORD *)a1 + 4);
            *(_OWORD *)(v16 + 86) = *((_OWORD *)a1 + 5);
            *(_OWORD *)(v16 + 90) = *((_OWORD *)a1 + 6);
            *(_OWORD *)(v16 + 94) = *((_OWORD *)a1 + 7);
            *(_OWORD *)(v16 + 98) = *((_OWORD *)a1 + 8);
            *((_QWORD *)v16 + 51) = *((_QWORD *)a1 + 18);
            if ( (a2 & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
            {
              *((_QWORD *)v16 + 32) = 1LL;
              v18 = 9LL;
              do
              {
                *v17 = *(_OWORD *)a2;
                v17[1] = *(_OWORD *)(a2 + 16);
                v17[2] = *(_OWORD *)(a2 + 32);
                v17[3] = *(_OWORD *)(a2 + 48);
                v17[4] = *(_OWORD *)(a2 + 64);
                v17[5] = *(_OWORD *)(a2 + 80);
                v17[6] = *(_OWORD *)(a2 + 96);
                v17 += 8;
                *(v17 - 1) = *(_OWORD *)(a2 + 112);
                a2 += 128LL;
                --v18;
              }
              while ( v18 );
              *v17 = *(_OWORD *)a2;
              v17[1] = *(_OWORD *)(a2 + 16);
              v17[2] = *(_OWORD *)(a2 + 32);
              v17[3] = *(_OWORD *)(a2 + 48);
              v17[4] = *(_OWORD *)(a2 + 64);
            }
            else
            {
              *((_QWORD *)v16 + 32) = 2LL;
              memset_thunk_772440563353939046(v17, 0, 0x4D0uLL);
            }
            *(_QWORD *)&v30 = v20;
            *((_QWORD *)&v30 + 1) = v26;
            *(_QWORD *)&v31 = v23;
            *((_QWORD *)&v31 + 1) = v22;
            v13 = ReportExceptionInternal(v15, (__int64)v26, &v30, 4u, a3, &Handle);
            if ( v13 >= 0 )
            {
              if ( !Handle || (v13 = WerpWaitForCrashReporting(v24, (__int64)v20, (__int64)Handle, 0LL), v13 >= 0) )
              {
                if ( (a3 & 4) != 0 || (v13 = ZwTerminateProcess(v24, *a1), v13 >= 0) )
                  v13 = 0;
              }
            }
          }
        }
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( v21 )
    NtUnmapViewOfSection(-1LL);
  if ( v26 )
    NtClose(v26);
  if ( v20 )
  {
    NtClose(v20);
    v20 = 0LL;
  }
  if ( v22 )
    NtClose(v22);
  if ( v23 )
    NtClose(v23);
  return (unsigned int)v13;
}
