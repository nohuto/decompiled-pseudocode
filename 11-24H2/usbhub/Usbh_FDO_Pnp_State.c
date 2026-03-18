/*
 * XREFs of Usbh_FDO_Pnp_State @ 0x140050DB4
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x14002D470 (UsbhFdoSystemPowerState.c)
 *     UsbhAddDevice @ 0x14004EA90 (UsbhAddDevice.c)
 *     UsbhFdoPnp_RemoveDevice @ 0x14004FCB0 (UsbhFdoPnp_RemoveDevice.c)
 *     UsbhFdoPnp_StartDevice @ 0x14004FEC0 (UsbhFdoPnp_StartDevice.c)
 *     UsbhFdoPnp_StopDevice @ 0x1400500E0 (UsbhFdoPnp_StopDevice.c)
 *     UsbhFdoPnp_SurpriseRemove @ 0x140050170 (UsbhFdoPnp_SurpriseRemove.c)
 *     UsbhInitCallbackWorker @ 0x140050560 (UsbhInitCallbackWorker.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhAcquireFdoPnpLock @ 0x14002DD30 (UsbhAcquireFdoPnpLock.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Usbh_FDO_Pnp_State(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rbx
  __int64 result; // rax

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  Log(*(_QWORD *)(a1 + 8), 2, 1398031678, *((_QWORD *)v4 + 171), v3);
  UsbhAcquireFdoPnpLock(*(_QWORD *)(a1 + 8), a1, v3, 0, 0);
  *((_QWORD *)v4 + 169) = *(_QWORD *)(a1 + 24);
  result = (*((__int64 (__fastcall **)(__int64, _QWORD))v4 + 171))(a1, (unsigned int)v3);
  *((_QWORD *)v4 + 169) = 0LL;
  return result;
}
