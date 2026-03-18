/*
 * XREFs of ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01F4DE4
 * Callers:
 *     MouseButtonAction @ 0x1C01E86F0 (MouseButtonAction.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C00545FC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C0055324 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@KA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1C01F2A80 (-GetExecutionEnvironment@CBaseProcessor@@KA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseButtonAction(CMouseProcessor *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int16 v10; // dx
  __int16 v11; // ax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE v15[4]; // [rsp+24h] [rbp-A4h] BYREF
  __int128 v16; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-90h]
  struct tagPOINT v18; // [rsp+40h] [rbp-88h] BYREF

  v3 = a3;
  v4 = a2;
  if ( (PVOID)PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1827);
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v7, v6, v8, v9) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1828);
  if ( v3 > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1829);
  if ( (unsigned int)(v4 - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1830);
  v17 = 0LL;
  v16 = 0LL;
  v10 = 1;
  if ( v4 != 1 )
    v10 = 4;
  v11 = 2 * v10;
  if ( v3 != 1 )
    v11 = v10;
  WORD2(v16) = v11;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v18, (__int64)&v16, 2, 256);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15, v12, v13, v14);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v18, 0LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v15);
}
