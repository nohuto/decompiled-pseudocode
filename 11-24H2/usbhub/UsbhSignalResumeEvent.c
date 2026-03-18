/*
 * XREFs of UsbhSignalResumeEvent @ 0x140019994
 * Callers:
 *     UsbhWaitConnect @ 0x140006D60 (UsbhWaitConnect.c)
 *     UsbhHubDispatchPortEvent @ 0x140007260 (UsbhHubDispatchPortEvent.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x140017768 (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhPortDisconnect @ 0x14002A520 (UsbhPortDisconnect.c)
 *     UsbhResumeSuspendedPort @ 0x14003279C (UsbhResumeSuspendedPort.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x140044E04 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDriverResetPort @ 0x140057310 (UsbhDriverResetPort.c)
 *     UsbhPortCycle @ 0x140057970 (UsbhPortCycle.c)
 *     UsbhPortRecycle @ 0x140057BC0 (UsbhPortRecycle.c)
 *     UsbhPortResumeFailed @ 0x140057C90 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x140019A84 (UsbhLogSignalResumeEvent.c)
 */

void __fastcall UsbhSignalResumeEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KIRQL v6; // al
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // rdx

  if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2, a3, a4) )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    v7 = *(unsigned __int16 *)(a2 + 4);
    v8 = *(int *)(a2 + 12);
    *(_DWORD *)(a2 + 448) = 1;
    if ( (UsbhLogMask & 0x10) != 0 && a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_DWORD *)v10 = 1986359664;
        *(_QWORD *)(v10 + 16) = v8;
        *(_QWORD *)(v10 + 24) = v7;
      }
    }
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 30;
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v6);
  }
}
