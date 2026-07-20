/*
 * XREFs of SmpExecuteImage @ 0x140003090
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140002580 (SmscpLoadSubSystemsForMuSession.c)
 *     SmscpLoadSubSystem @ 0x140002D40 (SmscpLoadSubSystem.c)
 *     SmscpExecuteInitialCommand @ 0x140003B40 (SmscpExecuteInitialCommand.c)
 *     SmpExecuteCommand @ 0x140003F30 (SmpExecuteCommand.c)
 *     SmpStartCsr @ 0x140004120 (SmpStartCsr.c)
 *     SmpInvokeAutoChk @ 0x140015CB8 (SmpInvokeAutoChk.c)
 *     SmpLoadSubSystem @ 0x140016D30 (SmpLoadSubSystem.c)
 *     SmpStartServerSilo @ 0x140018E80 (SmpStartServerSilo.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     SmpInternalLogFailure @ 0x1400036FC (SmpInternalLogFailure.c)
 *     SmpSelectNodeNumber @ 0x140003810 (SmpSelectNodeNumber.c)
 *     SmpGetProcessId @ 0x140007F50 (SmpGetProcessId.c)
 *     SmLogFailureInt @ 0x140008078 (SmLogFailureInt.c)
 *     memset_0 @ 0x14001EF9F (memset_0.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpExecuteImage(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        int a6,
        _OWORD *a7)
{
  _OWORD *v7; // r15
  __int64 v8; // rdi
  int v10; // ebx
  __int64 v11; // r8
  ULONG v12; // ecx
  int v13; // r12d
  int UserProcess; // esi
  void *v15; // rcx
  NTSTATUS v16; // eax
  int v17; // ecx
  __int64 v18; // rbx
  unsigned __int16 v20; // ax
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rsi
  _WORD *v24; // rdx
  __int16 v25; // ax
  _WORD *v26; // rax
  void *v27; // rcx
  int ProcessId; // eax
  __int64 v29; // rcx
  __int64 v30; // rbx
  _WORD *v31; // rdx
  __int16 v32; // ax
  _WORD *v33; // rax
  int v34; // [rsp+60h] [rbp-A0h] BYREF
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // [rsp+68h] [rbp-98h] BYREF
  __int16 v36; // [rsp+70h] [rbp-90h] BYREF
  int v37; // [rsp+74h] [rbp-8Ch] BYREF
  _WORD v38[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v39; // [rsp+7Ch] [rbp-84h]
  __int128 v40; // [rsp+8Ch] [rbp-74h]
  __int64 v41; // [rsp+9Ch] [rbp-64h]
  int v42; // [rsp+A4h] [rbp-5Ch]
  int *v43; // [rsp+A8h] [rbp-58h]
  _OWORD v44[6]; // [rsp+B0h] [rbp-50h] BYREF
  int v45; // [rsp+110h] [rbp+10h]
  _BYTE v46[64]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v47[160]; // [rsp+160h] [rbp+60h] BYREF
  int *v48; // [rsp+200h] [rbp+100h] BYREF
  __int64 v49; // [rsp+208h] [rbp+108h]
  __int128 ProcessInformation; // [rsp+210h] [rbp+110h] BYREF
  __int128 v51; // [rsp+220h] [rbp+120h]
  __int64 v52; // [rsp+230h] [rbp+130h]
  int v53; // [rsp+238h] [rbp+138h]
  int v54; // [rsp+23Ch] [rbp+13Ch]

  v7 = v44;
  v8 = 0LL;
  v37 = 0;
  v48 = a5;
  v41 = 0LL;
  v45 = 0;
  v42 = 0;
  if ( a7 )
    v7 = a7;
  v39 = 0LL;
  ProcessParameters = 0LL;
  v40 = 0LL;
  memset(v44, 0, sizeof(v44));
  v10 = RtlCreateProcessParametersEx(&ProcessParameters, a1, 0LL, a2, a3, SmpDefaultEnvironment, 0LL, 0LL, 0LL, 0LL, 1);
  if ( v10 >= 0 )
  {
    v12 = SmpDebug;
    if ( (a6 & 1) != 0 )
      v12 = 1;
    ProcessParameters->DebugFlags = v12;
    if ( (a6 & 0x400) != 0 )
    {
      ProcessParameters->Flags |= 0x40000u;
      v13 = SmpSelectNodeNumber() + 1;
    }
    else
    {
      LOWORD(v13) = 0;
    }
    if ( (a6 & 0x1000) != 0 )
      ProcessParameters->Flags |= 0x400000u;
    if ( (a6 & 0x4000) != 0 )
      ProcessParameters->Flags |= 0x800000u;
    if ( (a6 & 0x8000) != 0 )
      ProcessParameters->Flags |= 0x80000000;
    v34 = a6;
    ProcessParameters->Flags |= 0x20000u;
    *(_DWORD *)v7 = 104;
    if ( SmpTraceHandle && EtwEventEnabled(SmpTraceHandle, &SmssEvt_ExecuteImage_Start) )
    {
      v20 = *a1;
      v53 = *a1;
      v36 = v20 >> 1;
      *(_QWORD *)&ProcessInformation = &v34;
      *(_QWORD *)&v51 = &v36;
      v52 = *((_QWORD *)a1 + 1);
      *((_QWORD *)&ProcessInformation + 1) = 4LL;
      *((_QWORD *)&v51 + 1) = 2LL;
      v54 = 0;
      EtwEventWrite(SmpTraceHandle, &SmssEvt_ExecuteImage_Start, 3LL, &ProcessInformation);
    }
    v41 = 0LL;
    v38[0] = 1;
    v43 = v48;
    v42 = 0;
    LOBYTE(v11) = (a6 & 0x400) != 0;
    v38[1] = v13;
    v39 = 0LL;
    v40 = 0LL;
    UserProcess = RtlCreateUserProcessEx(a1, ProcessParameters, v11, v38, v7);
    RtlDestroyProcessParameters(ProcessParameters);
    if ( UserProcess < 0 )
    {
      v34 = 0;
      if ( SmpTraceHandle && EtwEventEnabled(SmpTraceHandle, &SmssEvt_ExecuteImage_Stop) )
      {
        v48 = &v34;
        v49 = 4LL;
        EtwEventWrite(SmpTraceHandle, &SmssEvt_ExecuteImage_Stop, 1LL, &v48);
      }
      if ( a1 )
        v18 = *((_QWORD *)a1 + 1);
      else
        v18 = 0LL;
      memset_0(v46, 0, 0xE0uLL);
      if ( v18 )
      {
        v29 = 64LL;
        v30 = v18 - (_QWORD)v47;
        v31 = v47;
        do
        {
          if ( v29 == -2147483582 )
            break;
          v32 = *(_WORD *)((char *)v31 + v30);
          if ( !v32 )
            break;
          *v31++ = v32;
          --v29;
        }
        while ( v29 );
        v33 = v31 - 1;
        if ( v29 )
          v33 = v31;
        *v33 = 0;
      }
      SmpInternalLogFailure("SmpExecuteImage", 9999LL, (unsigned int)UserProcess, v46);
      return (unsigned int)UserProcess;
    }
    v15 = (void *)*((_QWORD *)v7 + 1);
    v52 = 0LL;
    v53 = 0;
    ProcessInformation = 0LL;
    v51 = 0LL;
    v16 = NtQueryInformationProcess(v15, ProcessBasicInformation, &ProcessInformation, 0x30u, 0LL);
    v17 = v52;
    if ( v16 < 0 )
      v17 = 0;
    v34 = v17;
    if ( SmpTraceHandle && EtwEventEnabled(SmpTraceHandle, &SmssEvt_ExecuteImage_Stop) )
    {
      v48 = &v34;
      v49 = 4LL;
      EtwEventWrite(SmpTraceHandle, &SmssEvt_ExecuteImage_Stop, 1LL, &v48);
    }
    if ( (a6 & 0x2000) != 0 )
    {
      v27 = (void *)*((_QWORD *)v7 + 1);
      v37 = 1;
      UserProcess = NtSetInformationProcess(v27, ProcessBreakOnTermination, &v37, 4u);
      if ( UserProcess < 0 )
      {
        ProcessId = SmpGetProcessId(*((_QWORD *)v7 + 1));
        SmLogFailureInt((unsigned int)"SmpExecuteImage", 10013, ProcessId, 0, UserProcess);
LABEL_55:
        NtTerminateProcess(*((HANDLE *)v7 + 1), UserProcess);
        goto LABEL_56;
      }
    }
    if ( (a6 & 0x20) == 0 )
    {
      if ( *((_DWORD *)v7 + 18) != 1 && (a6 & 0x8000) == 0 )
      {
        UserProcess = -1073741701;
        if ( a1 )
          v8 = *((_QWORD *)a1 + 1);
        SmpLogFailureString((__int64)"SmpExecuteImage", 0x272Du, v8, 0xC000007B);
        goto LABEL_55;
      }
      NtResumeThread(*((HANDLE *)v7 + 2), 0LL);
      if ( (a6 & 2) == 0 )
      {
        if ( (a6 & 0x10000) == 0 )
        {
          NtWaitForSingleObject(*((HANDLE *)v7 + 2), 0, 0LL);
          goto LABEL_60;
        }
LABEL_56:
        NtWaitForSingleObject(*((HANDLE *)v7 + 1), 0, 0LL);
LABEL_60:
        NtClose(*((HANDLE *)v7 + 2));
        NtClose(*((HANDLE *)v7 + 1));
        return (unsigned int)UserProcess;
      }
    }
    if ( (a6 & 0x20) != 0 )
      return (unsigned int)UserProcess;
    goto LABEL_60;
  }
  if ( a1 )
    v21 = *((_QWORD *)a1 + 1);
  else
    v21 = 0LL;
  memset_0(v46, 0, 0xE0uLL);
  if ( v21 )
  {
    v22 = 64LL;
    v23 = v21 - (_QWORD)v47;
    v24 = v47;
    do
    {
      if ( v22 == -2147483582 )
        break;
      v25 = *(_WORD *)((char *)v24 + v23);
      if ( !v25 )
        break;
      *v24++ = v25;
      --v22;
    }
    while ( v22 );
    v26 = v24 - 1;
    if ( v22 )
      v26 = v24;
    *v26 = 0;
  }
  SmpInternalLogFailure("SmpExecuteImage", 9915LL, (unsigned int)v10, v46);
  return (unsigned int)v10;
}
