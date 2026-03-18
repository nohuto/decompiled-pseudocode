/*
 * XREFs of ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x14002AEF8
 * Callers:
 *     DpiRequestDevicePowerState @ 0x14002A4E8 (DpiRequestDevicePowerState.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140015210 (McTemplateK0pt_EtwWriteTransfer.c)
 */

void __fastcall DpiScheduleDelayedDevicePowerRequired(struct _FDO_CONTEXT *a1)
{
  __int64 v2; // r8
  int v3; // [rsp+20h] [rbp-18h]

  WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
  WdLogGlobalForLineNumber = 4571;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
  {
    v3 = 1;
    McTemplateK0pt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      (__int64)&Dxgk_DevicePowerRequiredTimer,
      v2,
      *((_QWORD *)a1 + 504),
      v3);
  }
  if ( !*((_DWORD *)a1 + 1058) )
    KeSetTimer((PKTIMER)((char *)a1 + 4304), DueTime, (PKDPC)((char *)a1 + 4368));
}
