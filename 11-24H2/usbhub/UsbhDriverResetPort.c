/*
 * XREFs of UsbhDriverResetPort @ 0x140057310
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhDecHubBusy @ 0x14000F560 (UsbhDecHubBusy.c)
 *     UsbhResetPort @ 0x140018C04 (UsbhResetPort.c)
 *     UsbhAcquireEnumBusLock @ 0x140018F14 (UsbhAcquireEnumBusLock.c)
 *     UsbhSignalResumeEvent @ 0x140019994 (UsbhSignalResumeEvent.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhAllocateTimeoutObject @ 0x14002A488 (UsbhAllocateTimeoutObject.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSyncDeviceReset @ 0x140047888 (UsbhSignalSyncDeviceReset.c)
 */

__int64 __fastcall UsbhDriverResetPort(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // esi
  int v9; // eax
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // rdx
  int v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  Log(a1, 1024, 1884443460, a2, 0LL);
  v8 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v14 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x28u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v14);
  }
  UsbhSignalResumeEvent(a1, a2, v6, v7);
  v9 = UsbhAllocateTimeoutObject(a1, a2, &v15);
  if ( v9 < 0 )
  {
    v8 = 0;
    UsbhSignalSyncDeviceReset(a1, a3, a2, v9);
  }
  else
  {
    *(_DWORD *)(a2 + 2408) |= 1u;
    *(_DWORD *)(a2 + 544) = 0;
    if ( a3 )
    {
      v10 = PdoExt(a3);
      v10[355] &= ~0x1000u;
      v11 = PdoExt(a3);
      UsbhDecHubBusy(a1, v12, *((_QWORD **)v11 + 107));
      *((_QWORD *)PdoExt(a3) + 107) = 0LL;
    }
    UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
    UsbhResetPort(a1, a2, v15);
    _InterlockedExchange((volatile __int32 *)(a2 + 428), 10);
  }
  return v8;
}
