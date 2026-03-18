/*
 * XREFs of ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2PEBU_InputDeviceHandle@@@Z @ 0x14021E150
 * Callers:
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1400EC48C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetUnavailableInputSource @ 0x1400C2850 (SetUnavailableInputSource.c)
 *     HasHidTable @ 0x1400E3A64 (HasHidTable.c)
 *     ApiSetEditionPostMouseMoveToQ @ 0x140192F40 (ApiSetEditionPostMouseMoveToQ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::PostMouseMoveToQ(
        CMouseProcessor *this,
        struct tagQ *a2,
        const struct tagLOGICALPOINT *a3,
        unsigned int a4,
        unsigned __int64 a5,
        const struct _InputDeviceHandle *a6)
{
  _DWORD *v10; // rdi
  char v11; // di
  bool v12; // si
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  const struct _InputDeviceHandle *v16; // [rsp+40h] [rbp-48h] BYREF
  __int128 v17; // [rsp+48h] [rbp-40h]

  if ( (*((_DWORD *)a2 + 109) & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6013);
  if ( (unsigned int)HasHidTable(*((_QWORD *)a2 + 12), (__int64)a2)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 464LL) + 832LL) + 100LL) & 2) != 0 )
  {
    v10 = (_DWORD *)((char *)a2 + 460);
  }
  else
  {
    v16 = a6;
    v17 = 0LL;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v11 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(UserSessionState + 69400),
        4,
        6,
        58,
        (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
    }
    v10 = (_DWORD *)((char *)a2 + 460);
    ApiSetEditionPostMouseMoveToQ(
      (__int64)a2,
      *(unsigned __int16 *)a3 | (*((unsigned __int16 *)a3 + 2) << 16),
      a4,
      a5,
      *((_QWORD *)this + 461),
      (__int64)a2 + 460,
      (__int64)&v16);
  }
  *((_DWORD *)a2 + 109) &= ~0x20u;
  SetUnavailableInputSource(v10);
}
