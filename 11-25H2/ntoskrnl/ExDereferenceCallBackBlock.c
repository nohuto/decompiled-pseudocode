/*
 * XREFs of ExDereferenceCallBackBlock @ 0x1404482A0
 * Callers:
 *     PoIssueCoalescingNotification @ 0x1404481D4 (PoIssueCoalescingNotification.c)
 *     KiEnumerateCallback @ 0x1404D6830 (KiEnumerateCallback.c)
 *     IoUnregisterPriorityCallback @ 0x1405935E0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1405ACD90 (KeDeregisterBoundCallback.c)
 *     KiHandleBound @ 0x1405AD5D0 (KiHandleBound.c)
 *     DbgkLkmdRegisterCallback @ 0x1406FBF90 (DbgkLkmdRegisterCallback.c)
 *     DbgkLkmdUnregisterCallback @ 0x1406FC080 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x1406FC128 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x140744DF0 (PoUnregisterCoalescingCallback.c)
 *     PspCallThreadNotifyRoutines @ 0x1408F38C0 (PspCallThreadNotifyRoutines.c)
 *     PspInitializeThunkContext @ 0x14090A9A0 (PspInitializeThunkContext.c)
 *     PsCallImageNotifyRoutines @ 0x14090BC00 (PsCallImageNotifyRoutines.c)
 *     ExCallCallBack @ 0x14091E61C (ExCallCallBack.c)
 *     PspCallProcessNotifyRoutines @ 0x14091F098 (PspCallProcessNotifyRoutines.c)
 *     KeUserModeCallback @ 0x140938670 (KeUserModeCallback.c)
 *     NtFindAtom @ 0x1409527D0 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x140961150 (PsInvokeWin32Callout.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140A86CD0 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140A8B2EC (PspSetCreateProcessNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140AA5FA0 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
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
