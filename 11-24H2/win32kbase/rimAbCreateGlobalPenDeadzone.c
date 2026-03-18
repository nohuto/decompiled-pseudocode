/*
 * XREFs of rimAbCreateGlobalPenDeadzone @ 0x1401D9264
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x140057F58 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_UNKNOWN **__fastcall rimAbCreateGlobalPenDeadzone(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  unsigned __int64 v6; // rbx
  char v7; // si
  _UNKNOWN **result; // rax
  char v9; // bp
  int v10; // ebx
  int v11; // edi
  __int64 UserSessionState; // rax

  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !*(_DWORD *)(W32GetUserSessionState(0xFFFFF78000000004uLL) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 114);
  *(_DWORD *)(a1 + 492) = 1;
  *(_DWORD *)(a1 + 704) = v6 + 250;
  *(_OWORD *)(a1 + 496) = *a2;
  *(_OWORD *)(a1 + 512) = a2[1];
  *(_OWORD *)(a1 + 528) = a2[2];
  *(_OWORD *)(a1 + 544) = a2[3];
  *(_OWORD *)(a1 + 560) = a2[4];
  *(_OWORD *)(a1 + 576) = a2[5];
  *(_OWORD *)(a1 + 592) = a2[6];
  *(_OWORD *)(a1 + 608) = *a3;
  *(_OWORD *)(a1 + 624) = a3[1];
  *(_OWORD *)(a1 + 640) = a3[2];
  *(_OWORD *)(a1 + 656) = a3[3];
  *(_OWORD *)(a1 + 672) = a3[4];
  *(_OWORD *)(a1 + 688) = a3[5];
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = *(_DWORD *)(a1 + 652);
    v11 = *(_DWORD *)(a1 + 648);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_Dd(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v7,
                          v9,
                          *(_QWORD *)(UserSessionState + 19392),
                          4u,
                          1u,
                          0xAu,
                          (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
                          v11,
                          v10);
  }
  return result;
}
