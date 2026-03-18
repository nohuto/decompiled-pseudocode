/*
 * XREFs of RIMHidGetCaps @ 0x1401DD328
 * Callers:
 *     RIMCreateHidDesc @ 0x1401DBCC8 (RIMCreateHidDesc.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RIMHidGetCaps(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // rax
  bool v9; // bl
  _DWORD *v10; // r14
  bool v11; // si
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx
  GUID *v16; // rax
  NTSTATUS Status; // ebx
  PIRP v18; // rax
  IRP *v19; // rsi
  bool v20; // si
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _IO_STACK_LOCATION *v25; // rbx
  char v26; // si
  bool v27; // bp
  __int64 UserSessionState; // rax
  int v29; // r8d
  int v30; // edx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-40h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v8 = (_DWORD *)Win32AllocPoolZInitImpl(64LL, 0x28uLL, 0x70707352u);
  v9 = 0;
  v10 = v8;
  if ( v8 )
  {
    *v8 = 65576;
    if ( !*(_QWORD *)(a1 + 416) )
    {
      v16 = (GUID *)Win32AllocPoolZInitImpl(64LL, 0x10uLL, 0x70707352u);
      *(_QWORD *)(a1 + 416) = v16;
      if ( !v16 )
        goto LABEL_11;
      *v16 = GUID_HID_INTERFACE_HIDPARSE;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v18 = IoBuildSynchronousFsdRequest(0x1Bu, a2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v19 = v18;
    if ( v18 )
    {
      v18->RequestorMode = 0;
      CurrentStackLocation = v18->Tail.Overlay.CurrentStackLocation;
      v18->IoStatus.Status = -1073741637;
      v25 = CurrentStackLocation - 1;
      if ( !v25 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 899);
      v25->MinorFunction = 8;
      v25->Parameters.WMI.ProviderId = *(_QWORD *)(a1 + 416);
      v25->Parameters.CreatePipe.Parameters = 0LL;
      v25->Parameters.Create.Options = 65576;
      v25->Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v10;
      Status = IofCallDriver(a2, v19);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v26 = 0;
        }
        v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v29) = v27;
          LOBYTE(v30) = v26;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v30,
            v29,
            *(_QWORD *)(UserSessionState + 19392),
            3,
            1,
            41,
            (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
            (char)a2);
        }
      }
      else
      {
        if ( !*((_QWORD *)v10 + 4) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 924);
        Status = (*((__int64 (__fastcall **)(__int64, __int64))v10 + 4))(a3, a4);
      }
      goto LABEL_36;
    }
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
    {
      v9 = 1;
    }
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(v21 + 19392),
        3,
        1,
        40,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
    }
LABEL_11:
    Status = -1073741670;
LABEL_36:
    GreDeleteFastMutex((char *)v10);
    return (unsigned int)Status;
  }
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 )
    v9 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(v12 + 19392),
      3,
      1,
      39,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
  }
  return 3221225626LL;
}
