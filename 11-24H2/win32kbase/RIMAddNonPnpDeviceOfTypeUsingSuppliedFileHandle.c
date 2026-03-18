/*
 * XREFs of RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401D65E0
 * Callers:
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x14020CDA0 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x14005B4D0 (rimDoRimDevChange.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     DeviceTypeToRimInputType @ 0x1400CAAD0 (DeviceTypeToRimInputType.c)
 *     rimOnPnpArrived @ 0x14017E1FC (rimOnPnpArrived.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1401D1DE0 (RIMFreeDev.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
        char *a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        void *a4,
        int a5,
        _QWORD *a6)
{
  char v7; // si
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  char v12; // si
  bool v13; // r14
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  int v18; // esi
  struct RawInputManagerObject *v19; // r14
  int v20; // ecx
  WCHAR *Buffer; // rax
  ULONG64 v22; // r8
  _QWORD *v23; // r8
  char v24; // r15
  bool v25; // r12
  int v26; // edx
  int v27; // r8d
  __int64 v28; // r9
  char v29; // r14
  bool v30; // r15
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  __int16 v34; // [rsp+30h] [rbp-98h]
  __int64 v35; // [rsp+58h] [rbp-70h] BYREF
  PVOID Object; // [rsp+60h] [rbp-68h] BYREF
  const UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-58h] BYREF
  UNICODE_STRING SourceString; // [rsp+80h] [rbp-48h] BYREF
  char *v40; // [rsp+D0h] [rbp+8h]

  v40 = a1;
  Object = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      35,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
    a1 = v40;
  }
  if ( !a4 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v12 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(v14 + 19392),
        4,
        1,
        36,
        (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
        13);
    }
    return 3221225485LL;
  }
  v18 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v18 >= 0 )
  {
    v19 = (struct RawInputManagerObject *)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v19 + 81) || *((_BYTE *)v19 + 82) )
    {
      v18 = -1073741637;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v24 = 0;
      }
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v24 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      v28 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
      v34 = 38;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v19 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        if ( !a5 )
        {
          p_DestinationString = a2;
LABEL_39:
          if ( v18 >= 0 )
          {
            v35 = 0LL;
            v18 = RIMCreateDev(v19, a3, p_DestinationString, 1, 0, 0LL, &v35);
            if ( v18 >= 0 )
            {
              *(_DWORD *)(v35 + 168) |= 1u;
              v18 = rimOnPnpArrived((__int64)v19, v35, a4);
              if ( v18 >= 0 )
              {
                rimDoRimDevChange((__int64)v19, v35, 2u);
                v23 = a6;
                if ( a6 )
                {
                  if ( a5 )
                  {
                    if ( (unsigned __int64)a6 >= MmUserProbeAddress )
                      v23 = (_QWORD *)MmUserProbeAddress;
                    *v23 = *(_QWORD *)(v35 + 16);
                  }
                  else
                  {
                    *a6 = *(_QWORD *)(v35 + 16);
                  }
                }
              }
              if ( v18 < 0 )
                RIMFreeDev(v19, (struct RIMDEV *)v35);
            }
          }
          if ( DestinationString.Buffer )
            GreDeleteFastMutex((char *)DestinationString.Buffer);
          goto LABEL_67;
        }
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (const UNICODE_STRING *)MmUserProbeAddress;
        v20 = *(_DWORD *)&a2->Length;
        LODWORD(v35) = v20;
        *(_DWORD *)&SourceString.Length = v20;
        Buffer = a2->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v22 = (ULONG64)Buffer + (unsigned __int16)v20 + 2;
        if ( v22 <= (unsigned __int64)Buffer || v22 >= MmUserProbeAddress )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v20 > WORD1(v35) )
        {
          if ( (v20 & 1) == 0 )
            goto LABEL_37;
        }
        else if ( (v20 & 1) == 0 )
        {
          DestinationString.MaximumLength = v20;
          DestinationString.Length = v20;
          DestinationString.Buffer = (PWSTR)Win32AllocPoolZInitImpl(256LL, (unsigned __int16)v20, 0x706D7452u);
          if ( DestinationString.Buffer )
          {
            RtlCopyUnicodeString(&DestinationString, &SourceString);
            p_DestinationString = &DestinationString;
          }
          else
          {
            v18 = -1073741801;
          }
          v19 = (struct RawInputManagerObject *)Object;
          goto LABEL_39;
        }
        LODWORD(v35) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1079);
LABEL_37:
        ExRaiseAccessViolation();
      }
      v18 = -1073741637;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v24 = 0;
      }
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v24 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_67;
      v28 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
      v34 = 37;
    }
    LOBYTE(v27) = v25;
    LOBYTE(v26) = v24;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v27,
      v28,
      3,
      1,
      v34,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
LABEL_67:
    RIMUnlockExclusive((__int64)v19 + 104);
    ObfDereferenceObject(v19);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v29 = 0;
  }
  v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v32) = v30;
    LOBYTE(v33) = v29;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v33,
      v32,
      *(_QWORD *)(v31 + 19392),
      4,
      1,
      39,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v18);
  }
  return (unsigned int)v18;
}
