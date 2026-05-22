/*
 * XREFs of ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x18007E798
 * Callers:
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x180055FB0 (-SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x18006EC74 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18008A190 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardInjectionDevice::Inject(KeyboardInjectionDevice *this, struct InputInfo *a2)
{
  int v5; // ecx
  __int64 v6; // rax
  _BYTE v7[2]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v8; // [rsp+22h] [rbp-56h]
  __int16 v9; // [rsp+24h] [rbp-54h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  if ( !*((_BYTE *)this + 1556) )
    return 2147549183LL;
  memset_0(v7, 0, 0x40uLL);
  v5 = *((_DWORD *)this + 2);
  v8 = *((_WORD *)a2 + 30);
  v9 = *((_WORD *)a2 + 47);
  v6 = *((_QWORD *)a2 + 4);
  v11 = v5;
  v12 = 0;
  v10 = v6;
  return (unsigned int)NtMITSynthesizeKeyboardInput(8LL, v7) != 1 ? 0x8007000D : 0;
}
