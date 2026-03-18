/*
 * XREFs of RIMAddInjectionDeviceOfType @ 0x1401D5450
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1401E5870 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1401E5C18 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     DeviceTypeToRimInputType @ 0x1400CAAD0 (DeviceTypeToRimInputType.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1401D1DE0 (RIMFreeDev.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall RIMAddInjectionDeviceOfType(
        char *a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  char v8; // si
  bool v9; // r14
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  char v13; // si
  bool v14; // r14
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  int v19; // esi
  PVOID v20; // r14
  char *v21; // r12
  _QWORD *v22; // r12
  unsigned int v23; // ecx
  ULONG64 v24; // rax
  int v25; // ecx
  WCHAR *v26; // rax
  ULONG64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  char v30; // r15
  bool v31; // r12
  int v32; // edx
  int v33; // r8d
  __int64 v34; // r9
  char v35; // si
  bool v36; // r15
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  char v40; // si
  bool v41; // r15
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  char v45; // r14
  bool v46; // r15
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  __int16 v50; // [rsp+30h] [rbp-178h]
  _BYTE v51[4]; // [rsp+50h] [rbp-158h] BYREF
  int v52; // [rsp+54h] [rbp-154h]
  int v53; // [rsp+58h] [rbp-150h]
  __int64 v54; // [rsp+60h] [rbp-148h] BYREF
  int v55; // [rsp+68h] [rbp-140h]
  PVOID Object; // [rsp+70h] [rbp-138h] BYREF
  const UNICODE_STRING *p_DestinationString; // [rsp+78h] [rbp-130h]
  __int64 v58; // [rsp+80h] [rbp-128h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-120h] BYREF
  const UNICODE_STRING *v60; // [rsp+98h] [rbp-110h]
  _QWORD *v61; // [rsp+A0h] [rbp-108h]
  __int64 v62; // [rsp+A8h] [rbp-100h]
  _QWORD *v63; // [rsp+B0h] [rbp-F8h]
  _QWORD *v64; // [rsp+B8h] [rbp-F0h]
  UNICODE_STRING SourceString; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v66[18]; // [rsp+D0h] [rbp-D8h] BYREF

  v58 = a4;
  v55 = a3;
  v60 = a2;
  LODWORD(v54) = a3;
  v62 = a4;
  v61 = a6;
  v63 = a6;
  v64 = a6;
  Object = 0LL;
  memset(v66, 0, sizeof(v66));
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      40,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  if ( !a4 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v13 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 19392),
        3,
        1,
        41,
        (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
    }
    return 3221225485LL;
  }
  if ( a5 )
  {
    v52 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1217);
  }
  v19 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  v53 = v19;
  if ( v19 >= 0 )
  {
    v20 = Object;
    v21 = (char *)Object + 104;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v20 + 81) )
    {
      if ( !*((_BYTE *)v20 + 82) )
      {
        v19 = -1073741637;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v30 = 0;
        }
        v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_91;
        v34 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
        v50 = 45;
        goto LABEL_90;
      }
    }
    else if ( !*((_BYTE *)v20 + 82) )
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v55) & *((_DWORD *)v20 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        if ( !a5 )
        {
          p_DestinationString = v60;
          *(_OWORD *)v66 = *(_OWORD *)v58;
          *(_OWORD *)&v66[2] = *(_OWORD *)(v58 + 16);
          *(_OWORD *)&v66[4] = *(_OWORD *)(v58 + 32);
          *(_OWORD *)&v66[6] = *(_OWORD *)(v58 + 48);
          *(_OWORD *)&v66[8] = *(_OWORD *)(v58 + 64);
          *(_OWORD *)&v66[10] = *(_OWORD *)(v58 + 80);
          *(_OWORD *)&v66[12] = *(_OWORD *)(v58 + 96);
          *(_OWORD *)&v66[14] = *(_OWORD *)(v58 + 112);
          *(_OWORD *)&v66[16] = *(_OWORD *)(v58 + 128);
          v22 = v61;
          v23 = v55;
LABEL_41:
          if ( v19 >= 0 )
          {
            v54 = 0LL;
            v19 = RIMCreateDev((struct RawInputManagerObject *)v20, v23, p_DestinationString, 0, 1, (__int64)v66, &v54);
            v53 = v19;
            if ( !a5 )
              *(_DWORD *)(v58 + 136) = v66[17];
            if ( v19 >= 0 )
            {
              if ( a5 )
              {
                if ( (unsigned __int64)v22 >= MmUserProbeAddress )
                  v22 = (_QWORD *)MmUserProbeAddress;
                *v22 = *(_QWORD *)(v54 + 16);
                v28 = v54;
              }
              else
              {
                v28 = v54;
                if ( (v66[2] & 1) != 0 )
                  v29 = *(_QWORD *)(v54 + 24);
                else
                  v29 = *(_QWORD *)(v54 + 16);
                *v64 = v29;
              }
              if ( *((_QWORD *)v20 + 104) || *((_DWORD *)v20 + 264) )
                *(_DWORD *)(v28 + 168) |= 0x80000u;
            }
          }
          if ( DestinationString.Buffer )
            GreDeleteFastMutex((char *)DestinationString.Buffer);
          goto LABEL_91;
        }
        v24 = (ULONG64)v60;
        if ( (unsigned __int64)v60 >= MmUserProbeAddress )
          v24 = MmUserProbeAddress;
        v25 = *(_DWORD *)v24;
        v52 = v25;
        *(_DWORD *)&SourceString.Length = v25;
        v26 = *(WCHAR **)(v24 + 8);
        SourceString.Buffer = v26;
        if ( ((unsigned __int8)v26 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v27 = (ULONG64)v26 + (unsigned __int16)v25 + 2;
        if ( v27 <= (unsigned __int64)v26 || v27 >= MmUserProbeAddress )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v25 > HIWORD(v52) )
        {
          if ( (v25 & 1) == 0 )
            goto LABEL_39;
        }
        else if ( (v25 & 1) == 0 )
        {
          DestinationString.MaximumLength = v25;
          DestinationString.Length = v25;
          DestinationString.Buffer = (PWSTR)Win32AllocPoolZInitImpl(256LL, (unsigned __int16)v25, 0x706D7452u);
          if ( DestinationString.Buffer )
          {
            RtlCopyUnicodeString(&DestinationString, &SourceString);
            p_DestinationString = &DestinationString;
            v19 = v53;
          }
          else
          {
            v19 = -1073741801;
            v53 = -1073741801;
          }
          v20 = Object;
          v22 = v61;
          v23 = v55;
          goto LABEL_41;
        }
        v52 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1253);
LABEL_39:
        ExRaiseAccessViolation();
      }
      v19 = -1073741637;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v30 = 0;
      }
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_91;
      v34 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
      v50 = 42;
LABEL_90:
      LOBYTE(v33) = v31;
      LOBYTE(v32) = v30;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v32,
        v33,
        v34,
        3,
        1,
        v50,
        (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
LABEL_91:
      RIMUnlockExclusive((__int64)v20 + 104);
      ObfDereferenceObject(v20);
      goto LABEL_93;
    }
    v20 = Object;
    if ( KeGetCurrentThread() == *((struct _KTHREAD **)Object + 5) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v35 = 0;
      }
      v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v37 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v38) = v36;
        LOBYTE(v39) = v35;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v39,
          v38,
          *(_QWORD *)(v37 + 19392),
          3,
          1,
          43,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
      }
      v19 = -1073741637;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v40 = 0;
      }
      v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v42 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v43) = v41;
        LOBYTE(v44) = v40;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v44,
          v43,
          *(_QWORD *)(v42 + 19392),
          3,
          1,
          44,
          (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
      }
      ++*((_DWORD *)v20 + 276);
      RIMUnlockExclusive((__int64)v21);
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v51, 1);
      KeWaitForSingleObject(*((PVOID *)v20 + 137), UserRequest, 0, 0, 0LL);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v51);
      RIMLockExclusive((__int64)v21);
      v19 = -2147483631;
    }
    goto LABEL_91;
  }
  v19 = -1073741816;
LABEL_93:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v45 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v45 = 0;
  }
  v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v45 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v47 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v48) = v46;
    LOBYTE(v49) = v45;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v49,
      v48,
      *(_QWORD *)(v47 + 19392),
      4,
      1,
      46,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v19);
  }
  return (unsigned int)v19;
}
