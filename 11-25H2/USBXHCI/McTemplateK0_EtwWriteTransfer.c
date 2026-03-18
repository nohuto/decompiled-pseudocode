/*
 * XREFs of McTemplateK0_EtwWriteTransfer @ 0x140002264
 * Callers:
 *     Etw_EnableCallback @ 0x140002000 (Etw_EnableCallback.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140006C40 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v4[16]; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 1LL, v4);
}
