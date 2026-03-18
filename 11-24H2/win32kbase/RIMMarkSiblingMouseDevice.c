/*
 * XREFs of RIMMarkSiblingMouseDevice @ 0x14017C2B0
 * Callers:
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401D298C (-RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMCAUsageToLegacyFlag @ 0x1401E3230 (RIMCAUsageToLegacyFlag.c)
 */

void __fastcall RIMMarkSiblingMouseDevice(struct RIMDEV *a1, unsigned __int16 a2)
{
  bool v4; // di
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19392),
      4,
      1,
      82,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      (char)a1);
  }
  *((_WORD *)a1 + 432) = (*((_WORD *)a1 + 432) | RIMCAUsageToLegacyFlag(a2)) & 0xFFFE;
  if ( a2 == 5 )
    *((_DWORD *)a1 + 42) |= 0x18000000u;
  InputTraceLogging::RIM::RimDeviceExtendedProps(a1);
}
