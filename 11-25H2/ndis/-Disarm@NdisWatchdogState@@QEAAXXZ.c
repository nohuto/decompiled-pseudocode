/*
 * XREFs of ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x14015FDA0
 * Callers:
 *     ?ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x14014CE48 (-ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x14015E750 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ??1NdisWatchdogState@@QEAA@XZ @ 0x14015FBE0 (--1NdisWatchdogState@@QEAA@XZ.c)
 * Callees:
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1400621E0 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall NdisWatchdogState::Disarm(struct _KEVENT *this)
{
  if ( !KeReadStateEvent(this + 7) && !NdisWatchdogState::CancelTimer((NdisWatchdogState *)this) )
    ndisWaitForKernelObject(&this[7]);
}
