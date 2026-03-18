/*
 * XREFs of UsbhLogSignalSuspendEvent @ 0x14002BA4C
 * Callers:
 *     UsbhSignalSuspendEvent @ 0x14002AFB4 (UsbhSignalSuspendEvent.c)
 *     Usbh_PCE_wDone_Action @ 0x14002B050 (Usbh_PCE_wDone_Action.c)
 *     UsbhiSignalSuspendEvent @ 0x14002BDEC (UsbhiSignalSuspendEvent.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 */

__int64 __fastcall UsbhLogSignalSuspendEvent(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  KSPIN_LOCK *v5; // rbp
  KIRQL v6; // r14
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx

  v4 = 0;
  v5 = (KSPIN_LOCK *)(FdoExt(a1) + 1236);
  v6 = KeAcquireSpinLockRaiseToDpc(v5);
  v7 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1431529843;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_QWORD *)(v9 + 24) = v7;
      }
    }
  }
  if ( *(_DWORD *)(a2 + 696) == 2 )
  {
    *(_DWORD *)(a2 + 696) = 0;
    KeSetEvent((PRKEVENT)(a2 + 744), 0, 0);
    v4 = 1;
  }
  KeReleaseSpinLock(v5, v6);
  return v4;
}
