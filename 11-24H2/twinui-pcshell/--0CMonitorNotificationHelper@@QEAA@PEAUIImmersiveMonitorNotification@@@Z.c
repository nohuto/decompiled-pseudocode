/*
 * XREFs of ??0CMonitorNotificationHelper@@QEAA@PEAUIImmersiveMonitorNotification@@@Z @ 0x1802B1D8C
 * Callers:
 *     ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x18008D060 (-CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x1801F2540 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@@WRL@M.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CMonitorNotificationHelper *__fastcall CMonitorNotificationHelper::CMonitorNotificationHelper(
        CMonitorNotificationHelper *this,
        struct IImmersiveMonitorNotification *a2)
{
  __int64 v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification>(this);
  *(_QWORD *)this = &CMonitorNotificationHelper::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IImmersiveMonitorNotification *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return this;
}
