/*
 * XREFs of _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1400E4154
 * Callers:
 *     InitializeInputSensorsOnSharedThread @ 0x1402129C0 (InitializeInputSensorsOnSharedThread.c)
 *     InitializeSensorExplicitly @ 0x140212C10 (InitializeSensorExplicitly.c)
 * Callees:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1400E4040 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1400E46B0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x140211F1C (WPP_RECORDER_AND_TRACE_SF_sd.c)
 */

__int64 __fastcall anonymous_namespace_::InitializeInputSensorPass1Worker(
        __int64 a1,
        struct IRegisterInputDispatcherObjects *a2)
{
  __int64 v3; // rbp
  int v4; // esi
  CTouchProcessor **v5; // rcx
  bool v6; // di
  bool v7; // r14
  int v8; // edx
  int v9; // r8d
  __int64 v10; // r9
  CTouchProcessor **v11; // rcx
  __int16 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-18h]
  char v15; // [rsp+48h] [rbp-10h]

  v3 = W32GetUserSessionState(a1) + 48LL * (int)a1;
  v4 = CBaseInput::InitializeSensor(*(CBaseInput **)(v3 + 3144));
  if ( v4 >= 0 )
  {
    v4 = CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v3 + 3144), a2);
    if ( v4 < 0 )
    {
      v11 = &WPP_GLOBAL_Control;
      v6 = 0;
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
      {
        v11 = (CTouchProcessor **)*((unsigned int *)WPP_GLOBAL_Control + 11);
        if ( ((unsigned __int8)v11 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
          v6 = 1;
      }
      v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = v4;
        v14 = *(_QWORD *)(v3 + 3160);
        v10 = *(_QWORD *)(W32GetUserSessionState(v11) + 69400);
        v13 = 11;
        goto LABEL_19;
      }
    }
  }
  else
  {
    v5 = &WPP_GLOBAL_Control;
    v6 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v5 = (CTouchProcessor **)*((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( ((unsigned __int8)v5 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v6 = 1;
    }
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = v4;
      v14 = *(_QWORD *)(v3 + 3160);
      v10 = *(_QWORD *)(W32GetUserSessionState(v5) + 69400);
      v13 = 10;
LABEL_19:
      LOBYTE(v9) = v7;
      LOBYTE(v8) = v6;
      WPP_RECORDER_AND_TRACE_SF_sd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v9,
        v10,
        2,
        2,
        v13,
        (__int64)&WPP_ae9eb3bdebde318a8206422ca8ad61bb_Traceguids,
        v14,
        v15);
    }
  }
  return (unsigned int)v4;
}
