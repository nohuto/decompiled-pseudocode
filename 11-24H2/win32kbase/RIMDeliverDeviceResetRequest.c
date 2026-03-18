/*
 * XREFs of RIMDeliverDeviceResetRequest @ 0x14005A56C
 * Callers:
 *     rimDeviceResetApc @ 0x14005A7B0 (rimDeviceResetApc.c)
 *     rimOnPnpArrived @ 0x14017E1FC (rimOnPnpArrived.c)
 * Callees:
 *     ?DeliverDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14005A744 (-DeliverDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RIMDeliverDeviceResetRequest(char *OutputBuffer)
{
  bool v2; // di
  bool v3; // si
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  NTSTATUS v7; // esi
  __int64 v9; // rcx
  bool v10; // bl
  bool v11; // di
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx

  InputTraceLogging::RIM::DeliverDeviceResetRequest((const struct RIMDEV *)OutputBuffer);
  v2 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      10,
      (__int64)&WPP_62af42fa4e0f3c4768c5349c123bf845_Traceguids,
      (char)OutputBuffer);
  }
  ObfReferenceObject(*((PVOID *)OutputBuffer + 4));
  v7 = ZwDeviceIoControlFile(
         *((HANDLE *)OutputBuffer + 26),
         0LL,
         rimDeviceResetApc,
         OutputBuffer,
         (PIO_STATUS_BLOCK)(OutputBuffer + 152),
         0xB0233u,
         0LL,
         0,
         0LL,
         0);
  if ( v7 < 0 )
  {
    ObfDereferenceObject(*((PVOID *)OutputBuffer + 4));
    v10 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v9 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v9 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
        v10 = 1;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(v9);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(v12 + 19392),
        3,
        1,
        11,
        (__int64)&WPP_62af42fa4e0f3c4768c5349c123bf845_Traceguids);
    }
  }
  return (unsigned int)v7;
}
