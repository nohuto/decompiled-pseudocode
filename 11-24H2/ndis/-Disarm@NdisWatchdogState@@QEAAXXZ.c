/*
 * XREFs of ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x140153530
 * Callers:
 *     ?ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x140142178 (-ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1401523D0 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ??1NdisWatchdogState@@QEAA@XZ @ 0x140153370 (--1NdisWatchdogState@@QEAA@XZ.c)
 * Callees:
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x140048340 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall NdisWatchdogState::Disarm(struct _KEVENT *this)
{
  if ( !KeReadStateEvent(this + 7) && !NdisWatchdogState::CancelTimer((NdisWatchdogState *)this) )
    ndisWaitForKernelObject(&this[7]);
}
