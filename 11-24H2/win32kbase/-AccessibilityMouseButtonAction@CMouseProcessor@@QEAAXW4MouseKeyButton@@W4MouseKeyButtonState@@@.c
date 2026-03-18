/*
 * XREFs of ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x14021B980
 * Callers:
 *     MouseButtonAction @ 0x140213040 (MouseButtonAction.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x140050308 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x140050448 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x140104354 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A2C38 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseButtonAction(CMouseProcessor *a1, int a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int16 v12; // dx
  __int16 v13; // ax
  __int128 v14; // [rsp+28h] [rbp-51h] BYREF
  __int64 v15; // [rsp+38h] [rbp-41h]
  _BYTE v16[96]; // [rsp+40h] [rbp-39h] BYREF

  v6 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
  if ( PsGetCurrentProcess(v8, v7, v9, v10) != v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1892);
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v11) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1893);
  if ( a3 > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1894);
  if ( (unsigned int)(a2 - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1895);
  v15 = 0LL;
  v12 = 1;
  if ( a2 != 1 )
    v12 = 4;
  v13 = 2 * v12;
  v14 = 0LL;
  if ( a3 != 1 )
    v13 = v12;
  WORD2(v14) = v13;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v16, (__int64)&v14, 2, 256);
  LOBYTE(v14) = 0;
  *((_QWORD *)&v14 + 1) = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v14);
  CMouseProcessor::SynthesizeMouse(a1, (struct CMouseProcessor::MouseInputDataEx *)v16, 0LL);
  if ( (_BYTE)v14 )
    --*(_DWORD *)(*((_QWORD *)&v14 + 1) + 28LL);
}
