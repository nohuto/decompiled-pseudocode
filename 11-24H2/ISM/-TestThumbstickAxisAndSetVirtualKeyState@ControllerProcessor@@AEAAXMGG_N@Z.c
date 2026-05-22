/*
 * XREFs of ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXMGG_N@Z @ 0x18005BB40
 * Callers:
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x18017C92C (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x180055FB0 (-SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z.c)
 */

void __fastcall ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
        ControllerProcessor *this,
        float a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        char a5)
{
  unsigned __int16 v6; // bx
  char v8; // r8

  v6 = a3;
  if ( a2 >= 0.70999998 )
  {
    ControllerProcessor::SetVirtualKeyState(this, a4, 0, a5);
    goto LABEL_9;
  }
  if ( a2 <= 0.69 )
  {
    if ( a2 >= -0.69 )
    {
      ControllerProcessor::SetVirtualKeyState(this, a3, 0, a5);
      goto LABEL_5;
    }
    if ( a2 > -0.70999998 )
      goto LABEL_6;
    ControllerProcessor::SetVirtualKeyState(this, a3, 0, a5);
    v6 = a4;
LABEL_9:
    v8 = 1;
    goto LABEL_7;
  }
LABEL_5:
  v6 = a4;
LABEL_6:
  v8 = 0;
LABEL_7:
  ControllerProcessor::SetVirtualKeyState(this, v6, v8, a5);
}
