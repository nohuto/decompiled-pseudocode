/*
 * XREFs of ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x14015B610
 * Callers:
 *     xxxKeyEventEx @ 0x14014BF54 (xxxKeyEventEx.c)
 * Callees:
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x140048550 (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_IN.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x140048F70 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CKeyboardProcessor::ForwardInputToKeyboardOverrider(
        unsigned __int8 a1,
        __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        void *a5,
        unsigned int a6,
        unsigned __int16 a7,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a8)
{
  int v9; // ebp
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  _DWORD v14[92]; // [rsp+60h] [rbp-178h] BYREF

  v9 = a1;
  memset(v14, 0, sizeof(v14));
  LOWORD(v14[88]) = a2;
  v14[89] = v9;
  LOWORD(v14[90]) = a3;
  v14[91] = a6;
  CKeyboardProcessor::CreateKeyboardInputMessage(
    v9,
    a2,
    a3,
    a4,
    a5,
    a6,
    0,
    a7,
    0,
    a8,
    (struct _MIT_KEYBOARD_INPUT_MESSAGE *)v14);
  UserSessionState = W32GetUserSessionState(v12);
  InputExtensibilityCallout::CoreMsgSendMessage(*(_QWORD *)(UserSessionState + 16408), 13);
}
