/*
 * XREFs of ?ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800F489C
 * Callers:
 *     ?AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKeyboardInputInfo@@@Z @ 0x1800F3EAC (-AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKey.c)
 *     ?DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ @ 0x1800F4184 (-DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ.c)
 *     ?InjectKeyEvent@KeyboardOverriderDispatcher@@UEAAJGG@Z @ 0x1800F4280 (-InjectKeyEvent@KeyboardOverriderDispatcher@@UEAAJGG@Z.c)
 *     ?OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800F4650 (-OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

void __fastcall KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
        KeyboardOverriderDispatcher *this,
        const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *a2)
{
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int128 v5; // [rsp+20h] [rbp-19h]
  int v6; // [rsp+30h] [rbp-9h]
  __int128 v7; // [rsp+40h] [rbp+7h] BYREF
  int v8; // [rsp+50h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+2Fh]
  __int128 v10; // [rsp+70h] [rbp+37h]

  LODWORD(v5) = *((unsigned __int16 *)a2 + 176);
  DWORD1(v5) = *((_DWORD *)a2 + 89);
  DWORD2(v5) = *((unsigned __int16 *)a2 + 180);
  HIDWORD(v5) = *((_DWORD *)a2 + 91);
  v6 = *((unsigned __int16 *)a2 + 4);
  memset_0(&v7, 0, 0x40uLL);
  v8 = v6;
  v3 = *(_QWORD *)a2;
  v7 = v5;
  v4 = *((_OWORD *)a2 + 21);
  v9 = v3;
  v10 = v4;
  NtMITSynthesizeKeyboardInput(4LL, &v7);
}
