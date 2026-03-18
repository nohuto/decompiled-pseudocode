/*
 * XREFs of ProcessKeyboardInjectedInputViaRim @ 0x1400FABC0
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1400FA26C (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1400FAC58 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1400FB48C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ProcessKeyboardInjectedInput @ 0x1400FB4F8 (ProcessKeyboardInjectedInput.c)
 */

__int64 __fastcall ProcessKeyboardInjectedInputViaRim(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  int v5; // ebx
  struct tagTHREADINFO *v6; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+50h] [rbp+18h]

  v3 = *(_DWORD *)(a2 + 388);
  v10 = *(_QWORD *)(a2 + 376);
  v5 = *(_DWORD *)(a2 + 384);
  v6 = PtiCurrent(a1);
  v8 = v10;
  v9 = v5;
  if ( (unsigned int)((__int64 (__fastcall *)(__int64, struct tagTHREADINFO *, __int64 *, _QWORD))ApiSetEditionIsGpqForegroundAccessibleExplicit)(
                       1LL,
                       v6,
                       &v8,
                       v3) )
    return ProcessKeyboardInjectedInput(a1, a2, 0LL);
  else
    return InputTraceLogging::Keyboard::DropInput(0LL);
}
