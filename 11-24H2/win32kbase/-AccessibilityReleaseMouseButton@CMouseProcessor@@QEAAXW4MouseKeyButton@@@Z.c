/*
 * XREFs of ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x14021BBC4
 * Callers:
 *     ReleaseMouseButton @ 0x1402132B0 (ReleaseMouseButton.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x140050308 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x140050448 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x140104354 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A2C38 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::AccessibilityReleaseMouseButton(CMouseProcessor *a1, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  int v10; // edx
  __int16 v11; // cx
  __int128 v12; // [rsp+30h] [rbp-41h] BYREF
  __int64 v13; // [rsp+40h] [rbp-31h]
  _BYTE v14[96]; // [rsp+48h] [rbp-29h] BYREF

  v4 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
  if ( PsGetCurrentProcess(v6, v5, v7, v8) != v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1929);
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v9) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1930);
  v13 = 0LL;
  v12 = 0LL;
  v10 = a2 & 1;
  if ( (a2 & 1) != 0 )
    WORD2(v12) = 2;
  v11 = v10 != 0 ? 2 : 0;
  if ( (a2 & 2) != 0 )
  {
    v11 = v10 != 0 ? 10 : 8;
    WORD2(v12) = v11;
  }
  if ( !v11 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1945);
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v14, (__int64)&v12, 3, 256);
  LOBYTE(v12) = 0;
  *((_QWORD *)&v12 + 1) = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v12);
  CMouseProcessor::SynthesizeMouse(a1, (struct CMouseProcessor::MouseInputDataEx *)v14, 0LL);
  if ( (_BYTE)v12 )
    --*(_DWORD *)(*((_QWORD *)&v12 + 1) + 28LL);
}
