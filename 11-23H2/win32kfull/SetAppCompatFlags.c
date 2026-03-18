/*
 * XREFs of SetAppCompatFlags @ 0x1C00A2C40
 * Callers:
 *     <none>
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C00A3310 (IsCurrentDesktopComposed.c)
 *     SetAppImeCompatFlags @ 0x1C00A3340 (SetAppImeCompatFlags.c)
 *     WPP_RECORDER_AND_TRACE_SF_DS @ 0x1C00A346C (WPP_RECORDER_AND_TRACE_SF_DS.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0138230 (__report_rangecheckfailure.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     ?TraceLoggingGDIScaledAppEvent@@YAXXZ @ 0x1C0201230 (-TraceLoggingGDIScaledAppEvent@@YAXXZ.c)
 */

__int64 __fastcall SetAppCompatFlags(_QWORD *a1)
{
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessPeb; // r13
  __int64 v4; // rax
  int v5; // ecx
  _WORD *v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // r15
  _WORD *v10; // rcx
  size_t v11; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // edx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  __int64 ThreadTeb; // rax
  __int64 v23; // rbx
  __int64 v24; // rbx
  unsigned __int16 *v25; // rax
  char v26; // r14
  ULONG64 v27; // rdx
  int v28; // ecx
  ULONG64 v29; // r8
  ULONG64 v30; // rdx
  _WORD *v31; // rcx
  _WORD *v32; // rbx
  _WORD *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // r15
  __int64 v37; // rax
  int v38; // r8d
  int v39; // r9d
  _UNKNOWN **v40; // rdx
  ULONG Value; // [rsp+50h] [rbp-218h] BYREF
  int v42; // [rsp+54h] [rbp-214h]
  int v43; // [rsp+58h] [rbp-210h]
  unsigned int v44; // [rsp+5Ch] [rbp-20Ch]
  _WORD *v45; // [rsp+60h] [rbp-208h]
  _WORD *v46; // [rsp+68h] [rbp-200h]
  __int64 v47; // [rsp+70h] [rbp-1F8h]
  __int64 v48; // [rsp+80h] [rbp-1E8h]
  __int128 v49; // [rsp+88h] [rbp-1E0h] BYREF
  UNICODE_STRING String; // [rsp+98h] [rbp-1D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-1C0h] BYREF
  WCHAR SourceString[96]; // [rsp+D0h] [rbp-198h] BYREF
  WCHAR v53[80]; // [rsp+190h] [rbp-D8h] BYREF

  Value = 0;
  DestinationString = 0LL;
  v49 = 0LL;
  ThreadProcess = PsGetThreadProcess((PETHREAD)*a1);
  ProcessPeb = PsGetProcessPeb(ThreadProcess);
  v4 = a1[83];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 640);
    *((_DWORD *)a1 + 160) = v5;
    a1[81] = *(_QWORD *)(v4 + 648);
    *(_DWORD *)(a1[60] + 20LL) = v5;
    *(_DWORD *)(a1[60] + 24LL) = *((_DWORD *)a1 + 162);
    return 0LL;
  }
  v25 = (unsigned __int16 *)a1[62];
  v26 = 1;
  if ( !v25 )
  {
    v27 = *(_QWORD *)(ProcessPeb + 32) + 96LL;
    if ( v27 >= MmUserProbeAddress )
      v27 = MmUserProbeAddress;
    v28 = *(_DWORD *)v27;
    v42 = v28;
    LODWORD(v49) = v28;
    v29 = *(_QWORD *)(v27 + 8);
    *((_QWORD *)&v49 + 1) = v29;
    if ( (v29 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v30 = (unsigned __int16)v28 + v29 + 2;
    if ( v30 <= v29 || v30 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v28 > HIWORD(v42) )
    {
      if ( (v28 & 1) == 0 )
        goto LABEL_60;
    }
    else if ( (v28 & 1) == 0 )
    {
      v25 = (unsigned __int16 *)&v49;
      goto LABEL_49;
    }
    v42 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 216LL);
LABEL_60:
    ExRaiseAccessViolation();
  }
LABEL_49:
  v31 = (_WORD *)*((_QWORD *)v25 + 1);
  v32 = &v31[(unsigned __int64)*v25 >> 1];
  v46 = v32;
  v33 = v32;
  v45 = v32;
  while ( v32 != v31 )
  {
    if ( *v32 == 46 )
      goto LABEL_4;
    v46 = --v32;
  }
  v32 = v33;
  v46 = v33;
LABEL_4:
  v7 = v32;
  v45 = v32;
  while ( v7 != v31 )
  {
    if ( *v7 == 92 || *v7 == 58 )
    {
      v45 = ++v7;
      break;
    }
    v45 = --v7;
  }
  v8 = 2 * (v32 - v7);
  v44 = v8;
  if ( v8 >= 0xA4 )
    v8 = 162;
  v44 = v8;
  v9 = v8;
  memmove(SourceString, v7, v8);
  v10 = (_WORD *)(a1[53] + 1008LL);
  if ( !*v10 )
  {
    v11 = 30LL;
    if ( v8 < 0x1E )
      v11 = v8;
    memmove(v10, v7, v11);
    *(_WORD *)(a1[53] + 1038LL) = 0;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
  v47 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v13 = CurrentProcessWin32Process & -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process = v13;
    v47 = v13;
  }
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80u) != 0 )
  {
    ThreadTeb = PsGetThreadTeb(*a1);
    v23 = ThreadTeb + 0x2000;
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    v24 = *(unsigned int *)(v23 + 48);
    ProbeForRead((volatile void *)(unsigned int)v24, 0x488uLL, 4u);
    v15 = *(_QWORD *)(v24 + 480);
  }
  else
  {
    v15 = *(_QWORD *)(ProcessPeb + 720);
  }
  a1[81] = v15;
  if ( (v15 & 0x800000000000000LL) != 0 )
  {
    v43 = 0;
    FastGetProfileDwordEx(0LL, 4LL, L"ForceDisableGDIScaling");
    v35 = PsGetCurrentProcessWin32Process(v34);
    v48 = v35;
    if ( v35 )
    {
      v35 &= -(__int64)(*(_QWORD *)v35 != 0LL);
      v48 = v35;
    }
    *(_DWORD *)(v35 + 12) |= 0x20000000u;
    TraceLoggingGDIScaledAppEvent();
  }
  v16 = *((unsigned int *)a1 + 162);
  *(_DWORD *)(a1[60] + 24LL) = v16;
  if ( (a1[81] & 0x2000000) != 0 || (v17 = IsCurrentDesktopComposed(v16, v13, v14), v18 = 0, !v17) )
    v18 = 1;
  v19 = *(unsigned int *)(a1[53] + 824LL);
  LOBYTE(v19) = v19 & 0x30;
  if ( (_BYTE)v19 == 16 )
    *(_QWORD *)a1[60] |= 0x10000000uLL;
  if ( v18 )
    goto LABEL_27;
  if ( (a1[81] & 0x880000000000000LL) != 0 )
  {
    v19 = a1[60];
    v21 = *(_QWORD *)(v19 + 224) | 0x10LL;
    goto LABEL_38;
  }
  v19 = a1[53];
  if ( (*(_DWORD *)(v19 + 824) & 0x30) != 0x10 )
  {
    if ( !(unsigned int)IsImmersiveBroker(v19) )
      goto LABEL_28;
    v19 = a1[60];
    v21 = *(_QWORD *)(v19 + 224) | 0x80LL;
LABEL_38:
    *(_QWORD *)(v19 + 224) = v21;
    goto LABEL_28;
  }
LABEL_27:
  *(_QWORD *)a1[60] |= 0x20000000uLL;
LABEL_28:
  if ( _bittest64(a1 + 81, 0x38u) )
  {
    v19 = a1[60];
    *(_QWORD *)(v19 + 224) |= 0x20uLL;
  }
  v20 = *((_DWORD *)a1 + 162);
  if ( (v20 & 0x10000000) == 0 )
  {
    v19 = 1536LL;
    if ( *((_WORD *)a1 + 316) < 0x600u )
    {
      *((_DWORD *)a1 + 162) = v20 | 0x20000000;
      v19 = a1[60];
      *(_DWORD *)(v19 + 24) |= 0x20000000u;
    }
  }
  v36 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v36 >= 0xB4 )
    _report_rangecheckfailure(v19);
  *(WCHAR *)((char *)SourceString + v36) = 0;
  v37 = PsGetCurrentProcessWin32Process(v19);
  if ( v37 )
    v37 &= -(__int64)(*(_QWORD *)v37 != 0LL);
  if ( (unsigned int)FastGetProfileStringW(0LL, (*(_DWORD *)(v37 + 12) & 0x80u) != 0 ? 43 : 33, SourceString, 0LL) )
  {
    String = 0LL;
    RtlInitUnicodeString(&String, v53);
    RtlUnicodeStringToInteger(&String, 0, &Value);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v26 = 0;
  }
  v40 = &WPP_RECORDER_INITIALIZED;
  if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v40) = v26;
    LOBYTE(v38) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_DS(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)v40, v38, v39, (unsigned int)v53, 80, 0);
  }
  *(_DWORD *)(a1[60] + 20LL) = Value;
  *((_DWORD *)a1 + 160) = Value;
  *(WCHAR *)((char *)SourceString + v36) = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return SetAppImeCompatFlags(a1, &DestinationString);
}
