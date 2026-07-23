/*
 * XREFs of ExDereferenceCallBackBlock @ 0x14043DD80
 * Callers:
 *     PoIssueCoalescingNotification @ 0x14043DCBC (PoIssueCoalescingNotification.c)
 *     KiEnumerateCallback @ 0x1404CF370 (KiEnumerateCallback.c)
 *     IoUnregisterPriorityCallback @ 0x140593C70 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1405AD690 (KeDeregisterBoundCallback.c)
 *     KiHandleBound @ 0x1405ADED0 (KiHandleBound.c)
 *     DbgkLkmdRegisterCallback @ 0x140705A30 (DbgkLkmdRegisterCallback.c)
 *     DbgkLkmdUnregisterCallback @ 0x140705B20 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x140705BC8 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x14074F1E0 (PoUnregisterCoalescingCallback.c)
 *     KeUserModeCallback @ 0x1408BCB10 (KeUserModeCallback.c)
 *     PspCallProcessNotifyRoutines @ 0x1408F2F68 (PspCallProcessNotifyRoutines.c)
 *     ExCallCallBack @ 0x1408F47CC (ExCallCallBack.c)
 *     PspCallThreadNotifyRoutines @ 0x1408FCCC0 (PspCallThreadNotifyRoutines.c)
 *     PspInitializeThunkContext @ 0x140920BE8 (PspInitializeThunkContext.c)
 *     PsCallImageNotifyRoutines @ 0x140922440 (PsCallImageNotifyRoutines.c)
 *     NtFindAtom @ 0x14097DBB0 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1409A1420 (PsInvokeWin32Callout.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140A87E30 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140A8C77C (PspSetCreateProcessNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140AA6790 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ExDereferenceCallBackBlock(signed __int64 *a1, struct _EX_RUNDOWN_REF *a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw(a1);
  v2 = *a1;
  while ( ((unsigned __int64)a2 ^ v2) < 0xF )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(a1, v2 + 1, v2);
    if ( v3 == v2 )
      return;
  }
  ExReleaseRundownProtection_0(a2);
}
