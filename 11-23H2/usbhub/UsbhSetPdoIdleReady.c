/*
 * XREFs of UsbhSetPdoIdleReady @ 0x1C000A364
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C000A4C0 (UsbhPdoDevicePowerState.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C001A0F0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhPdoSetDx @ 0x1C001ACC4 (UsbhPdoSetDx.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C00580F0 (UsbhIdleIrp_NoIrp.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0019C20 (UsbhRefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhSetPdoIdleReady(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // r9d
  unsigned int v10; // r14d
  __int64 v11; // rax
  KSPIN_LOCK *v12; // rbp
  KIRQL v13; // r14
  int v14; // r9d
  int v15; // r10d
  __int64 v16; // rax

  v6 = PdoExt(a2);
  v7 = UsbhRefPdoDeviceHandle(a1, a2, a3, 1232364915LL);
  v8 = v7;
  if ( v7 )
  {
    Log(a1, 32, 1919306034, 0, v7);
    v10 = v9 + 1;
    v6[446] = v9 + 1;
    v11 = FdoExt(a1);
    if ( *(_QWORD *)(v11 + 4480) )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v11 + 4480))(*(_QWORD *)(v11 + 4232), v8, v10);
    v12 = (KSPIN_LOCK *)(FdoExt(a1) + 3720);
    v13 = KeAcquireSpinLockRaiseToDpc(v12);
    Log(a1, 256, 1146498353, v8, a3);
    Log(a1, v15, 1146498354, v14, 1232364915LL);
    v16 = FdoExt(a1);
    if ( *(_QWORD *)(v16 + 4472) )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v16 + 4472))(
        *(_QWORD *)(v16 + 4232),
        v8,
        a3,
        1232364915LL);
    KeReleaseSpinLock(v12, v13);
  }
}
