/*
 * XREFs of UsbhClearPdoIdleReady @ 0x1C000A20C
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C0003200 (UsbhPdoSetD0.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0004460 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhPdoDevicePowerState @ 0x1C000A4C0 (UsbhPdoDevicePowerState.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C0058434 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0019C20 (UsbhRefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhClearPdoIdleReady(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // r9d
  __int64 v10; // rax
  KSPIN_LOCK *v11; // rbp
  KIRQL v12; // r14
  int v13; // r9d
  int v14; // r10d
  __int64 v15; // rax

  v6 = PdoExt(a2);
  v7 = UsbhRefPdoDeviceHandle(a1, a2, a3, 1232235619LL);
  v8 = v7;
  if ( v7 )
  {
    Log(a1, 32, 1919306033, 0, v7);
    v6[446] &= v9;
    v10 = FdoExt(a1);
    if ( *(_QWORD *)(v10 + 4480) )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v10 + 4480))(*(_QWORD *)(v10 + 4232), v8, 0LL);
    v11 = (KSPIN_LOCK *)(FdoExt(a1) + 3720);
    v12 = KeAcquireSpinLockRaiseToDpc(v11);
    Log(a1, 256, 1146498353, v8, a3);
    Log(a1, v14, 1146498354, v13, 1232235619LL);
    v15 = FdoExt(a1);
    if ( *(_QWORD *)(v15 + 4472) )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v15 + 4472))(
        *(_QWORD *)(v15 + 4232),
        v8,
        a3,
        1232235619LL);
    KeReleaseSpinLock(v11, v12);
  }
}
