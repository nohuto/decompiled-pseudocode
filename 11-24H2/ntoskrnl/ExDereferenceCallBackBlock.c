/*
 * XREFs of ExDereferenceCallBackBlock @ 0x1404459D0
 * Callers:
 *     PoIssueCoalescingNotification @ 0x140445910 (PoIssueCoalescingNotification.c)
 *     KiEnumerateCallback @ 0x1404D5F20 (KiEnumerateCallback.c)
 *     IoUnregisterPriorityCallback @ 0x140596C90 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1405B0720 (KeDeregisterBoundCallback.c)
 *     KiHandleBound @ 0x1405B0F60 (KiHandleBound.c)
 *     DbgkLkmdRegisterCallback @ 0x140707E70 (DbgkLkmdRegisterCallback.c)
 *     DbgkLkmdUnregisterCallback @ 0x140707F60 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x140708008 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x140750EC0 (PoUnregisterCoalescingCallback.c)
 *     PspCallThreadNotifyRoutines @ 0x1408A66B0 (PspCallThreadNotifyRoutines.c)
 *     KeUserModeCallback @ 0x1408BF150 (KeUserModeCallback.c)
 *     PspInitializeThunkContext @ 0x1408FE308 (PspInitializeThunkContext.c)
 *     PsCallImageNotifyRoutines @ 0x1408FFB60 (PsCallImageNotifyRoutines.c)
 *     ExCallCallBack @ 0x1409358AC (ExCallCallBack.c)
 *     PspCallProcessNotifyRoutines @ 0x140938898 (PspCallProcessNotifyRoutines.c)
 *     NtFindAtom @ 0x140992B70 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1409BADD0 (PsInvokeWin32Callout.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140A8B940 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140A90080 (PspSetCreateProcessNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140AAB560 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
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
