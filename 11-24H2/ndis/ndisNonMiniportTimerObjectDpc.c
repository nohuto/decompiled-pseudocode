/*
 * XREFs of ndisNonMiniportTimerObjectDpc @ 0x1400D4690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisNonMiniportTimerObjectDpc(
        struct _KDPC *Dpc,
        void (__fastcall **DeferredContext)(_QWORD, _QWORD, _QWORD, _QWORD),
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ((void (__fastcall **)(struct _KDPC *, _QWORD, PVOID, PVOID))DeferredContext)[21](
    Dpc,
    DeferredContext[23],
    SystemArgument1,
    SystemArgument2);
}
