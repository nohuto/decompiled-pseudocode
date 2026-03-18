/*
 * XREFs of GetActiveHKL @ 0x1400489F0
 * Callers:
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x140048550 (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_IN.c)
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1400FA26C (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 *     ProcessKeyboardInputWorker @ 0x1400FA4E4 (ProcessKeyboardInputWorker.c)
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 *     VKFromVSC @ 0x1401157C0 (VKFromVSC.c)
 *     xxxKeyEventEx @ 0x14014BF54 (xxxKeyEventEx.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x14015B30C (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140189DE4 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     _GetKeyboardLayout @ 0x140023958 (_GetKeyboardLayout.c)
 */

__int64 __fastcall GetActiveHKL(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 18944)
    && ((v2 = *(_QWORD *)(W32GetUserSessionState(v1) + 18944), *(_QWORD *)(v2 + 120))
     && (v2 = *(_QWORD *)(W32GetUserSessionState(v2) + 18944), (v3 = *(_QWORD *)(*(_QWORD *)(v2 + 120) + 16LL)) != 0)
     && (v4 = *(_QWORD *)(v3 + 480)) != 0
     || (v6 = *(_QWORD *)(W32GetUserSessionState(v2) + 18944), *(_QWORD *)(v6 + 128))
     && (v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6) + 18944) + 128LL) + 16LL)) != 0
     && (v4 = *(_QWORD *)(v7 + 480)) != 0) )
  {
    return *(_QWORD *)(v4 + 40);
  }
  else
  {
    return GetKeyboardLayout(0);
  }
}
