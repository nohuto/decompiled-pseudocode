/*
 * XREFs of UsbhSshEnterSx @ 0x14005E5B0
 * Callers:
 *     UsbhFdoSetPowerSx_Action @ 0x14004A7E8 (UsbhFdoSetPowerSx_Action.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000F560 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14000F6F0 (UsbhIncHubBusy.c)
 *     UsbhDisableTimerObject @ 0x140013F2C (UsbhDisableTimerObject.c)
 *     Log @ 0x1400298B0 (Log.c)
 */

LONG __fastcall UsbhSshEnterSx(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // r9
  int v7; // r10d
  __int64 v8; // rdx

  v4 = FdoExt(a1);
  v5 = (_QWORD *)UsbhIncHubBusy(a1, a2, a1, 2018734963, 1);
  KeWaitForSingleObject(v4 + 790, Executive, 0, 0, 0LL);
  Log(
    a1,
    0x10000,
    1213429803,
    _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 413, (signed __int64)v5, 0LL),
    (__int64)v5);
  if ( v6 )
  {
    Log(a1, v7, 1213429810, v6, (__int64)v5);
    UsbhDecHubBusy(a1, v8, v5);
  }
  UsbhDisableTimerObject(a1, (__int64)(v4 + 800));
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 790), 16, 1, 0);
}
