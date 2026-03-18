/*
 * XREFs of DpiSetDevicePowerTransitionState @ 0x14002AE78
 * Callers:
 *     DpiRequestDevicePowerState @ 0x14002A4E8 (DpiRequestDevicePowerState.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x14002A980 (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x14002AE04 (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140015210 (McTemplateK0pt_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiSetDevicePowerTransitionState(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  bool v6; // zf
  int v7; // [rsp+20h] [rbp-18h]

  result = WdLogSingleEntry3(9LL, a1, a2, 0LL);
  v6 = bTracingEnabled == 0;
  WdLogGlobalForLineNumber = 4231;
  *(_DWORD *)(a1 + 4288) = a2;
  if ( !v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
  {
    v7 = a2;
    return McTemplateK0pt_EtwWriteTransfer(
             (__int64)&DxgkControlGuid_Context,
             (__int64)&Dxgk_SetDevicePowerTransitionState,
             v5,
             *(_QWORD *)(a1 + 4032),
             v7);
  }
  return result;
}
