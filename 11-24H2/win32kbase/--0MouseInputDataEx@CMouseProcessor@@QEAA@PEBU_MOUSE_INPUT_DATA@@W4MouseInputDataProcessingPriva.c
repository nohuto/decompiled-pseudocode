/*
 * XREFs of ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x140050308
 * Callers:
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x14005025C (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x14021B980 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x14021BB04 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x14021BBC4 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1400501A8 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 */

__int64 __fastcall CMouseProcessor::MouseInputDataEx::MouseInputDataEx(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int128 v11; // [rsp+58h] [rbp+7h] BYREF
  __int64 v12; // [rsp+68h] [rbp+17h]
  __int128 v13; // [rsp+78h] [rbp+27h] BYREF
  __int64 v14; // [rsp+88h] [rbp+37h]

  v8 = MEMORY[0xFFFFF78000000004];
  v9 = MEMORY[0xFFFFF78000000320];
  v13 = 0uLL;
  v14 = 0LL;
  *((LARGE_INTEGER *)&v11 + 1) = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&v11 = ((unsigned __int64)(v8 << 32) * (unsigned __int128)(unsigned __int64)(v9 << 8)) >> 64;
  v12 = *((_QWORD *)&v11 + 1);
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx(a1, a2, &v11, a4, (__int64)&v13, 0LL);
  *(_DWORD *)(a1 + 88) = a3;
  return a1;
}
