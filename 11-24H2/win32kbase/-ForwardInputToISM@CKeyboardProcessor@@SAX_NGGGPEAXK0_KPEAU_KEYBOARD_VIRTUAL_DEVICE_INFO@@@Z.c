/*
 * XREFs of ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x140048470
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x140048550 (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_IN.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x140048F70 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CKeyboardProcessor::ForwardInputToISM(
        bool a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        void *a5,
        unsigned int a6,
        bool a7,
        unsigned __int64 a8,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a9)
{
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  void *v15; // [rsp+20h] [rbp-1A8h]
  __int64 v16; // [rsp+28h] [rbp-1A0h]
  __int64 v17; // [rsp+30h] [rbp-198h]
  __int64 v18; // [rsp+38h] [rbp-190h]
  _BYTE v19[352]; // [rsp+60h] [rbp-168h] BYREF

  memset(v19, 0, sizeof(v19));
  CKeyboardProcessor::CreateKeyboardInputMessage(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    0,
    a8,
    a9,
    (struct _MIT_KEYBOARD_INPUT_MESSAGE *)v19);
  UserSessionState = W32GetUserSessionState(v13);
  InputExtensibilityCallout::CoreMsgSendMessage(
    *(_QWORD *)(UserSessionState + 16408),
    8LL,
    v19,
    352LL,
    v15,
    v16,
    v17,
    v18);
}
