/*
 * XREFs of ACPIMatchHardwareAddress @ 0x1400AFD8C
 * Callers:
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1400AFB28 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     WPP_RECORDER_SF_IqLL @ 0x14003FD10 (WPP_RECORDER_SF_IqLL.c)
 *     WPP_RECORDER_SF_IqL @ 0x14003FF64 (WPP_RECORDER_SF_IqL.c)
 *     ACPIInternalQueryExtendedAddress @ 0x140049438 (ACPIInternalQueryExtendedAddress.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memset @ 0x140070F40 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1400AFEF4 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIMatchHardwareAddress(PDEVICE_OBJECT DeviceObject, __int64 a2, _BYTE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r14d
  int v11; // [rsp+20h] [rbp-A9h]
  _QWORD v12[12]; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v13[16]; // [rsp+B0h] [rbp-19h] BYREF

  v12[0] = 0LL;
  *a3 = 0;
  memset(&v12[2], 0, 0x48uLL);
  LOWORD(v12[2]) = 2331;
  v12[3] = v13;
  memset(v13, 0, sizeof(v13));
  v13[0] = 65600;
  v13[2] = -1;
  v13[3] = -1;
  v9 = ACPIInternalSendSynchronousIrp(DeviceObject);
  if ( v9 >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_IqL((__int64)WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, v11);
    v12[0] = v13[2];
    if ( (_DWORD)a2 == v13[2] )
    {
      *a3 = 1;
      if ( (int)ACPIInternalQueryExtendedAddress(DeviceObject, (__int64)v12) >= 0 && a2 != v12[0] )
        *a3 = 0;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_IqLL((__int64)WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, v11);
  return (unsigned int)v9;
}
