/*
 * XREFs of DxgkMapMdlToIoMmuCB @ 0x140056940
 * Callers:
 *     <none>
 * Callees:
 *     SmmCreatePhysicalObjectForMdl @ 0x1400112E8 (SmmCreatePhysicalObjectForMdl.c)
 *     DpiGetSysMmAdapterFromDevice @ 0x140011EAC (DpiGetSysMmAdapterFromDevice.c)
 */

__int64 __fastcall DxgkMapMdlToIoMmuCB(__int64 a1, __int64 *a2)
{
  struct SYSMM_ADAPTER *SysMmAdapterFromDevice; // rax
  __int64 result; // rax
  struct SYSMM_PHYSICAL_OBJECT *v5; // [rsp+58h] [rbp+10h] BYREF
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0LL;
  SysMmAdapterFromDevice = (struct SYSMM_ADAPTER *)DpiGetSysMmAdapterFromDevice();
  result = SmmCreatePhysicalObjectForMdl(SysMmAdapterFromDevice, *a2, 3, 1, 0LL, 0, &v5, &v6);
  a2[1] = (__int64)v5;
  return result;
}
