/*
 * XREFs of ACPIFilterFastIoDetachCallback @ 0x14003C550
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitDeleteChildDeviceList @ 0x14003C9AC (ACPIInitDeleteChildDeviceList.c)
 *     ACPIInitResetDeviceExtension @ 0x14003DA70 (ACPIInitResetDeviceExtension.c)
 *     WPP_RECORDER_SF_qss @ 0x14003E0C4 (WPP_RECORDER_SF_qss.c)
 */

char __fastcall ACPIFilterFastIoDetachCallback(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax
  ULONG_PTR v2; // rbx
  __int64 v3; // rcx
  const char *v4; // rax
  const char *v5; // rdx
  __int64 v7; // [rsp+38h] [rbp-10h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v2 = DeviceExtension;
  if ( DeviceExtension )
  {
    v3 = *(_QWORD *)(DeviceExtension + 8);
    v4 = byte_1400753E8;
    v5 = byte_1400753E8;
    if ( (v3 & 0x200000000000LL) != 0 )
    {
      v4 = *(const char **)(v2 + 608);
      if ( (v3 & 0x400000000000LL) != 0 )
        v5 = *(const char **)(v2 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = (__int64)v5;
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_qss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v5,
        12,
        10,
        (__int64)&WPP_9d2f517172373c998ff4f5e88626c58e_Traceguids,
        v2,
        (__int64)v4,
        v7);
    }
    LOBYTE(DeviceExtension) = *(_BYTE *)(v2 + 8) & 0x60;
    if ( (_BYTE)DeviceExtension == 64 )
    {
      *(_DWORD *)(v2 + 368) = 4;
      ACPIInitDeleteChildDeviceList(v2, v5);
      LOBYTE(DeviceExtension) = ACPIInitResetDeviceExtension(v2);
    }
  }
  return DeviceExtension;
}
