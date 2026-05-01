/*
 * XREFs of ?SetEnabledTouchGestures@TouchGestureSettings@@UEAAIW4TouchGestureType@@@Z @ 0x18058BF70
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableTouchGestures@TouchGestureSettings@@AEAAXXZ @ 0x1801FCAF8 (-DisableTouchGestures@TouchGestureSettings@@AEAAXXZ.c)
 *     ??$SetEnabledTouchGestures@I@TouchGestureTelemetry@@SAX$$QEAI@Z @ 0x18058BD5C (--$SetEnabledTouchGestures@I@TouchGestureTelemetry@@SAX$$QEAI@Z.c)
 */

__int64 __fastcall TouchGestureSettings::SetEnabledTouchGestures(TouchGestureSettings *a1, int a2)
{
  unsigned int v4; // ebx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+30h] [rbp+8h]
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( !*((_DWORD *)a1 + 29) )
  {
    try
    {
      v4 = std::_Random_device();
      v8 = v4;
      *((_DWORD *)a1 + 29) = v4;
      *((_DWORD *)a1 + 8) = a2;
      if ( !a2 )
        TouchGestureSettings::DisableTouchGestures(a1);
      v9 = *((_DWORD *)a1 + 8);
      TouchGestureTelemetry::SetEnabledTouchGestures<unsigned int>(&v9);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x5B,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturesettings.cpp",
        v5);
      return v8;
    }
  }
  return v4;
}
