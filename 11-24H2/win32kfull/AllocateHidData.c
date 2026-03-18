/*
 * XREFs of AllocateHidData @ 0x14012F38C
 * Callers:
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x14012EC70 (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1401721A8 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1401724D4 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     EditionPostRawMouseInputMessage @ 0x140230980 (EditionPostRawMouseInputMessage.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z @ 0x140271E98 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z.c)
 * Callees:
 *     ?AllocateHidData@RawInput@InputTraceLogging@@SAXQEAUtagHIDDATA@@KPEAUHWND__@@PEAXW4WhyThatPti@12@@Z @ 0x140198604 (-AllocateHidData@RawInput@InputTraceLogging@@SAXQEAUtagHIDDATA@@KPEAUHWND__@@PEAXW4WhyThatPti@12.c)
 *     ?AllocateHidData_NoTarget@RawInput@InputTraceLogging@@SAXQEAUtagQ@@PEAX@Z @ 0x140271B84 (-AllocateHidData_NoTarget@RawInput@InputTraceLogging@@SAXQEAUtagQ@@PEAX@Z.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14027251C (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall AllocateHidData(void *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 *v5; // rsi
  unsigned int ThreadId; // edi
  unsigned int v8; // ebx
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  PETHREAD *v17; // r14
  __int64 v18; // r9
  unsigned int v19; // r12d
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  _QWORD v27[2]; // [rsp+30h] [rbp-38h] BYREF
  int v28; // [rsp+78h] [rbp+10h]

  v28 = a2;
  v5 = a5;
  ThreadId = 0;
  v8 = a3;
  if ( a5 )
  {
    v10 = 0;
  }
  else
  {
    v12 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944);
    v5 = *(__int64 **)(v12 + 120);
    if ( !v5 )
    {
      v14 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18944);
      v5 = *(__int64 **)(v14 + 128);
      if ( !v5 )
      {
        UserSessionState = W32GetUserSessionState(v14, v13);
        InputTraceLogging::RawInput::AllocateHidData_NoTarget(*(struct tagQ *const *)(UserSessionState + 18944), a1);
        return 0LL;
      }
    }
    v10 = 1;
  }
  v17 = (PETHREAD *)v5[2];
  v18 = v8 + 80;
  if ( (unsigned int)v18 < v8 )
    return 0LL;
  v19 = v8 + 24;
  if ( v8 + 24 < v8 )
    return 0LL;
  LOBYTE(a3) = 18;
  v20 = HMAllocObject(v5[2], 0LL, a3, v18);
  v21 = v20;
  if ( v20 )
  {
    v27[1] = v5;
    *(_QWORD *)(v20 + 24) = 0LL;
    v27[0] = v20 + 24;
    HMAssignmentLock(v27, 1LL);
    *(_DWORD *)(v21 + 56) = v28;
    *(_DWORD *)(v21 + 60) = v19;
    *(_QWORD *)(v21 + 64) = a1;
    *(_QWORD *)(v21 + 72) = a4;
    *(_QWORD *)(v21 + 32) = 0LL;
    if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline(
                         v23,
                         v22,
                         v24,
                         v25) )
      *(_DWORD *)(v21 + 48) |= 1u;
    if ( v10 == 1 )
      *(_DWORD *)(v21 + 48) |= 4u;
    v26 = *v5;
    if ( v17 )
      ThreadId = (unsigned int)PsGetThreadId(*v17);
    InputTraceLogging::RawInput::AllocateHidData(v21, ThreadId, v26, a1, v10);
  }
  return v21;
}
