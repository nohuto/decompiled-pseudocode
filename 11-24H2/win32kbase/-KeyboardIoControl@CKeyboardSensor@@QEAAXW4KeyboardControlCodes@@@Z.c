/*
 * XREFs of ?KeyboardIoControl@CKeyboardSensor@@QEAAXW4KeyboardControlCodes@@@Z @ 0x1402102D8
 * Callers:
 *     IoControl @ 0x140212EF0 (IoControl.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z @ 0x14020C454 (-GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z.c)
 *     ?GetInfo@SensorLocality@CBaseInput@@QEBA?AW4SensorLocalityInfo@@XZ @ 0x14020C54C (-GetInfo@SensorLocality@CBaseInput@@QEBA-AW4SensorLocalityInfo@@XZ.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140210714 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 */

void __fastcall CKeyboardSensor::KeyboardIoControl(__int64 a1, int a2)
{
  int v3; // ebp
  char v4; // di
  bool v5; // si
  bool v6; // r14
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  bool v10; // bl
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  bool v14; // si
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  struct _KEVENT *DispatcherObjectByName; // rax
  char v19; // si
  unsigned int CurrentThreadId; // ebx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // [rsp+40h] [rbp-28h]

  v3 = *(_DWORD *)(a1 + 1336) | a2;
  *(_DWORD *)(a1 + 1336) = v3;
  v4 = 1;
  v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      2,
      10,
      (__int64)&WPP_a1fdd663e0143125905100910a5d4b9c_Traceguids,
      v3);
  }
  if ( *(_QWORD *)(a1 + 1256) )
  {
    if ( (CBaseInput::SensorLocality::GetInfo(a1 + 1312) & 4) != 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v4 = 0;
      }
      v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v16) = v14;
        LOBYTE(v17) = v4;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v17,
          v16,
          *(_QWORD *)(v15 + 69400),
          4,
          2,
          12,
          (__int64)&WPP_a1fdd663e0143125905100910a5d4b9c_Traceguids);
      }
      CKeyboardSensor::_KeyboardIOControl((CKeyboardSensor *)a1);
    }
    else
    {
      DispatcherObjectByName = (struct _KEVENT *)CRIMBase::GetDispatcherObjectByName(a1, 0x12u);
      KeSetEvent(DispatcherObjectByName, 1, 0);
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v4 = 0;
      }
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
        v22 = W32GetUserSessionState(v21);
        LODWORD(v23) = CurrentThreadId;
        WPP_RECORDER_AND_TRACE_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v4,
          v19,
          *(_QWORD *)(v22 + 69400),
          4u,
          2u,
          0xDu,
          (__int64)&WPP_a1fdd663e0143125905100910a5d4b9c_Traceguids,
          v23);
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v4 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(v11 + 69400),
        4,
        2,
        11,
        (__int64)&WPP_a1fdd663e0143125905100910a5d4b9c_Traceguids);
    }
  }
}
