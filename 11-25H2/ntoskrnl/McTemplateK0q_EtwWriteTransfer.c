/*
 * XREFs of McTemplateK0q_EtwWriteTransfer @ 0x1405924B0
 * Callers:
 *     SecureDump_LogErrorEvent @ 0x14059E96C (SecureDump_LogErrorEvent.c)
 *     PnpCallAddDevice @ 0x140832FB8 (PnpCallAddDevice.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1404250D4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0q_EtwWriteTransfer(REGHANDLE *a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return McGenEventWrite_EtwWriteTransfer(a1, a2, 0LL, 2u, &v5);
}
