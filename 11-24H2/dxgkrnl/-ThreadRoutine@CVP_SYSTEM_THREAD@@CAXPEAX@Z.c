/*
 * XREFs of ?ThreadRoutine@CVP_SYSTEM_THREAD@@CAXPEAX@Z @ 0x1401D0B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CVP_SYSTEM_THREAD::ThreadRoutine(PVOID StartContext)
{
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)StartContext + 8LL))(StartContext);
  (**(void (__fastcall ***)(PVOID, __int64))StartContext)(StartContext, 1LL);
}
