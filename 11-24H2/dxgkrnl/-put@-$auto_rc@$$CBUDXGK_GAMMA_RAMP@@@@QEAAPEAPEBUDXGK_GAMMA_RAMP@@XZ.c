/*
 * XREFs of ?put@?$auto_rc@$$CBUDXGK_GAMMA_RAMP@@@@QEAAPEAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x140051858
 * Callers:
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1402DEC30 (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

_QWORD *__fastcall auto_rc<DXGK_GAMMA_RAMP const>::put(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  if ( *a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 202;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          202LL,
          v2,
          v3,
          0LL,
          2,
          -1,
          L"An auto_rc must be empty before calling put()",
          202,
          0,
          0,
          0,
          0);
    }
  }
  return a1;
}
