/*
 * XREFs of InitCommonPerfStateContext @ 0x140046EC0
 * Callers:
 *     InitLegacyPccInternal @ 0x14000D764 (InitLegacyPccInternal.c)
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140036F80 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1400372A8 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1400384A0 (RegisterKernelPepPerf.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     HwDebugInitializeProcessorSupport @ 0x14003A4F4 (HwDebugInitializeProcessorSupport.c)
 */

__int64 __fastcall InitCommonPerfStateContext(__int64 a1, __int64 *a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 result; // rax

  *a2 = a1;
  *(_QWORD *)(a3 + 8) = a2;
  if ( *(_DWORD *)(a1 + 80) )
  {
    *(_DWORD *)a3 = *(_DWORD *)(a1 + 84);
    *(_DWORD *)(a3 + 28) = *(_DWORD *)(a1 + 80);
  }
  else
  {
    *(_DWORD *)a3 = *(_DWORD *)(a1 + 56);
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x23u) )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1400191A0,
        0LL);
      HwDebugInitializeProcessorSupport(a1, (__int64)a2, 0);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1400191A0);
    }
  }
  *(_DWORD *)(a3 + 20) = *(_DWORD *)(a1 + 736);
  result = a5;
  *(_DWORD *)(a3 + 16) = a4;
  *(_DWORD *)(a3 + 24) = a5;
  return result;
}
