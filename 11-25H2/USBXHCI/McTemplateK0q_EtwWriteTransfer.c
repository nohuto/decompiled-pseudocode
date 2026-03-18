/*
 * XREFs of McTemplateK0q_EtwWriteTransfer @ 0x140006BE0
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x140025E20 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_WdfEvtInterruptIsr @ 0x140039780 (Interrupter_WdfEvtInterruptIsr.c)
 *     Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled @ 0x140048624 (Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140006C40 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0q_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v5[4]; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+88h] [rbp+20h] BYREF

  v6 = a4;
  v5[3] = 4LL;
  v5[2] = &v6;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, 0LL, 2LL, v5);
}
