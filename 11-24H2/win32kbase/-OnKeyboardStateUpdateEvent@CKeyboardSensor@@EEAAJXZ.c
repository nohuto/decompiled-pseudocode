/*
 * XREFs of ?OnKeyboardStateUpdateEvent@CKeyboardSensor@@EEAAJXZ @ 0x1402105A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140210714 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 */

__int64 __fastcall CKeyboardSensor::OnKeyboardStateUpdateEvent(CKeyboardSensor *this)
{
  bool v2; // bl
  bool v3; // si
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx

  if ( *((_DWORD *)this + 334) )
  {
    v2 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(this);
      LOBYTE(v5) = v3;
      LOBYTE(v6) = v2;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v6,
        v5,
        *(_QWORD *)(UserSessionState + 69400),
        4,
        2,
        14,
        (__int64)&WPP_a1fdd663e0143125905100910a5d4b9c_Traceguids);
    }
    CKeyboardSensor::_KeyboardIOControl(this);
  }
  return 0LL;
}
