/*
 * XREFs of UsbdHubArmBusForWake @ 0x1C003BF64
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C000EB10 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 */

_DWORD *__fastcall UsbdHubArmBusForWake(__int64 a1)
{
  _DWORD *result; // rax
  _DWORD *v2; // rbx

  result = FdoExt(a1);
  v2 = result;
  if ( *((_QWORD *)result + 552) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0xAu,
          (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids);
    }
    result = (_DWORD *)(*((__int64 (__fastcall **)(_QWORD, __int64))v2 + 552))(*((_QWORD *)v2 + 529), 1LL);
    v2[640] |= 0x40000u;
  }
  return result;
}
