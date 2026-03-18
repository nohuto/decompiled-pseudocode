/*
 * XREFs of RIMAddNonPnpDeviceOfType @ 0x1401D60A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     DeviceTypeToRimInputType @ 0x1400CAAD0 (DeviceTypeToRimInputType.c)
 *     rimOnPnpArrived @ 0x14017E1FC (rimOnPnpArrived.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1401D1DE0 (RIMFreeDev.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfType(char *a1, const UNICODE_STRING *a2, unsigned int a3, int a4, _QWORD *a5)
{
  char v8; // di
  bool v9; // r14
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  int v13; // edi
  struct RawInputManagerObject *v14; // r14
  int v15; // ecx
  WCHAR *Buffer; // rax
  ULONG64 v17; // r8
  _QWORD *v18; // rdx
  char v19; // r15
  bool v20; // r12
  int v21; // edx
  int v22; // r8d
  __int64 v23; // r9
  char v24; // r14
  bool v25; // r15
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  __int16 v30; // [rsp+30h] [rbp-88h]
  __int64 v31; // [rsp+58h] [rbp-60h] BYREF
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  const UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp-50h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+80h] [rbp-38h] BYREF

  Object = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      31,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
  }
  v13 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v13 >= 0 )
  {
    v14 = (struct RawInputManagerObject *)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v14 + 81) || *((_BYTE *)v14 + 82) )
    {
      v13 = -1073741637;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v19 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_57;
      v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 19392);
      v30 = 33;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v14 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        if ( !a4 )
        {
          p_DestinationString = a2;
LABEL_30:
          if ( v13 >= 0 )
          {
            v31 = 0LL;
            v13 = RIMCreateDev(v14, a3, p_DestinationString, 1, 0, 0LL, &v31);
            if ( v13 >= 0 )
            {
              *(_DWORD *)(v31 + 168) |= 1u;
              v13 = rimOnPnpArrived((__int64)v14, v31, (void *)0xFFFFFFFFFFFFFFFFLL);
              if ( v13 >= 0 )
              {
                if ( a4 )
                {
                  v18 = a5;
                  if ( (unsigned __int64)a5 >= MmUserProbeAddress )
                    v18 = (_QWORD *)MmUserProbeAddress;
                  *v18 = *(_QWORD *)(v31 + 16);
                }
                else
                {
                  *a5 = *(_QWORD *)(v31 + 16);
                }
              }
              if ( v13 < 0 )
                RIMFreeDev(v14, (struct RIMDEV *)v31);
            }
          }
          if ( DestinationString.Buffer )
            GreDeleteFastMutex((char *)DestinationString.Buffer);
          goto LABEL_57;
        }
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (const UNICODE_STRING *)MmUserProbeAddress;
        v15 = *(_DWORD *)&a2->Length;
        LODWORD(v31) = v15;
        *(_DWORD *)&SourceString.Length = v15;
        Buffer = a2->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = (ULONG64)Buffer + (unsigned __int16)v15 + 2;
        if ( v17 <= (unsigned __int64)Buffer || v17 >= MmUserProbeAddress )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v15 > WORD1(v31) )
        {
          if ( (v15 & 1) == 0 )
            goto LABEL_28;
        }
        else if ( (v15 & 1) == 0 )
        {
          DestinationString.MaximumLength = v15;
          DestinationString.Length = v15;
          DestinationString.Buffer = (PWSTR)Win32AllocPoolZInitImpl(256LL, (unsigned __int16)v15, 0x706D7452u);
          if ( DestinationString.Buffer )
          {
            RtlCopyUnicodeString(&DestinationString, &SourceString);
            p_DestinationString = &DestinationString;
          }
          else
          {
            v13 = -1073741801;
          }
          v14 = (struct RawInputManagerObject *)Object;
          goto LABEL_30;
        }
        LODWORD(v31) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 921);
LABEL_28:
        ExRaiseAccessViolation();
      }
      v13 = -1073741637;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v19 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v19 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_57;
      v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED) + 19392);
      v30 = 32;
    }
    LOBYTE(v22) = v20;
    LOBYTE(v21) = v19;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v22,
      v23,
      3,
      1,
      v30,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids);
LABEL_57:
    RIMUnlockExclusive((__int64)v14 + 104);
    ObfDereferenceObject(v14);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v24 = 0;
  }
  v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
    LOBYTE(v27) = v25;
    LOBYTE(v28) = v24;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v28,
      v27,
      *(_QWORD *)(v26 + 19392),
      4,
      1,
      34,
      (__int64)&WPP_f6a7500724f53a157ee15389c9df2fd3_Traceguids,
      v13);
  }
  return (unsigned int)v13;
}
