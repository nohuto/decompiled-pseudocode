/*
 * XREFs of ?WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z @ 0x1401521F0
 * Callers:
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1401523D0 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 * Callees:
 *     ndisWaitForExternalDriver @ 0x140152290 (ndisWaitForExternalDriver.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall NdisWatchdogState::WaitSynchronously(NdisWatchdogState *this, struct _KEVENT *a2)
{
  if ( *((_BYTE *)this + 264) )
    goto LABEL_4;
  if ( !(unsigned __int8)ndisWaitForExternalDriver(a2, *((_DWORD *)this + 41)) )
  {
    *((_BYTE *)this + 264) = 1;
LABEL_4:
    ndisWaitForKernelObject(a2);
  }
}
