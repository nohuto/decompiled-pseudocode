/*
 * XREFs of McTemplateK0p_EtwWriteTransfer @ 0x1400334D0
 * Callers:
 *     EtwTraceWakeInputIdle @ 0x1400334A0 (EtwTraceWakeInputIdle.c)
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1400B95D8 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1400B98DC (-GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     EtwTraceSleepInputIdle @ 0x1400E3880 (EtwTraceSleepInputIdle.c)
 *     EtwTraceDCompGetBatchEvent @ 0x1400EFF20 (EtwTraceDCompGetBatchEvent.c)
 *     EtwTraceFlipManagerBindingStart @ 0x140158290 (EtwTraceFlipManagerBindingStart.c)
 *     EtwTraceDITSpeedHitTestFailedRevalidation @ 0x1401B4300 (EtwTraceDITSpeedHitTestFailedRevalidation.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140033530 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 McTemplateK0p_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy((va_list)&v4[2], va);
  v6 = 0;
  v5 = 8;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 2LL, v4);
}
