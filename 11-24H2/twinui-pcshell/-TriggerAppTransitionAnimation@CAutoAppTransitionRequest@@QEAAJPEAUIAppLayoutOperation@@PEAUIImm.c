/*
 * XREFs of ?TriggerAppTransitionAnimation@CAutoAppTransitionRequest@@QEAAJPEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18051FFA4
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180518614 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ @ 0x18051C250 (-OnOutgoingTransitionCompleted@TabletModePositioner@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAutoAppTransitionRequest::TriggerAppTransitionAnimation(
        CAutoAppTransitionRequest *this,
        struct IAppLayoutOperation *a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  unsigned int v5; // ecx

  if ( *((_BYTE *)this + 16) )
  {
    return (unsigned int)-2147467259;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct IAppLayoutOperation *, struct IImmersiveMonitor *, _QWORD))(**((_QWORD **)this + 1) + 32LL))(
           *((_QWORD *)this + 1),
           a2,
           a3,
           0LL);
    *((_BYTE *)this + 16) = (v5 & 0x80000000) == 0;
  }
  return v5;
}
