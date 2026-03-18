/*
 * XREFs of UsbhHubProcessChangeWorker @ 0x14000F8C0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000F560 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14000F6F0 (UsbhIncHubBusy.c)
 *     UsbhPCE_wRun @ 0x14000FB64 (UsbhPCE_wRun.c)
 *     UsbhTrapFatalTimeout_x9f @ 0x14003D6F8 (UsbhTrapFatalTimeout_x9f.c)
 *     WPP_RECORDER_SF_dq @ 0x14003DE14 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhHubProcessChangeWorker(__int64 DeviceObject, unsigned __int16 *Context)
{
  int v4; // edx
  int v5; // r8d
  __int64 v6; // r14
  _QWORD *v7; // r12
  KIRQL v8; // al
  _QWORD *v9; // r8
  __int64 v10; // rcx
  KIRQL v11; // r8
  __int64 v12; // r9
  void *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rdx
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+18h] BYREF

  FdoExt(DeviceObject);
  v6 = Context[2];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      v5,
      100,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v6,
      (char)Context);
  v7 = (_QWORD *)UsbhIncHubBusy(DeviceObject, (__int64)(Context + 12), (__int64)Context, 1129345907, 0);
  Timeout.QuadPart = -6600000000LL - (int)(KeQueryTimeIncrement() - 1);
  if ( KeWaitForSingleObject(Context + 1232, Executive, 0, 0, &Timeout) == 258 )
  {
    v16 = *((_DWORD *)Context + 711);
    v17 = 10LL;
    if ( v16 )
      v17 = v16;
    UsbhTrapFatalTimeout_x9f(DeviceObject, v17, Context);
  }
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 306);
  *((_DWORD *)Context + 603) = 2;
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 306, v8);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( DeviceObject )
    {
      v9 = *(_QWORD **)(DeviceObject + 64);
      if ( v9 )
      {
        v10 = v9[111]
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(DeviceObject + 64) + 880LL)) & *((_DWORD *)v9 + 221));
        *(_DWORD *)v10 = 1464029256;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = Context;
        *(_QWORD *)(v10 + 24) = v6;
      }
    }
  }
  UsbhPCE_wRun(DeviceObject, Context + 12, Context);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 306);
  v12 = *((unsigned int *)Context + 603);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( DeviceObject )
    {
      v13 = *(void **)(DeviceObject + 64);
      if ( v13 )
      {
        v14 = *((_QWORD *)v13 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v13 + 220) & *((_DWORD *)v13 + 221));
        *(_DWORD *)v14 = 1682133064;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = v12;
        *(_QWORD *)(v14 + 24) = v6;
      }
    }
  }
  if ( *((_DWORD *)Context + 603) == 2 )
    *((_DWORD *)Context + 603) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 306, v11);
  UsbhDecHubBusy(DeviceObject, v15, v7);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 610, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(Context + 1208), 0, 0);
}
