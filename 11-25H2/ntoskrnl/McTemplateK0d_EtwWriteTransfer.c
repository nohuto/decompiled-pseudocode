/*
 * XREFs of McTemplateK0d_EtwWriteTransfer @ 0x14042361C
 * Callers:
 *     PiCMGetDeviceInterfaceList @ 0x140956D90 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetDeviceIdList @ 0x14095ED28 (PiCMGetDeviceIdList.c)
 *     PiSwIrpStartCreate @ 0x1409A4020 (PiSwIrpStartCreate.c)
 *     PipInitComputerIds @ 0x140C52860 (PipInitComputerIds.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1404250D4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0d_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v5[3]; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  int v8; // [rsp+88h] [rbp+20h] BYREF

  v8 = a4;
  v5[2] = &v8;
  v7 = 0;
  v6 = 4;
  return McGenEventWrite_EtwWriteTransfer(&MS_KernelPnP_Provider_Context, a2, 0LL, 2LL, v5);
}
