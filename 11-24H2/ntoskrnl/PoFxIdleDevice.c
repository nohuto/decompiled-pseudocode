/*
 * XREFs of PoFxIdleDevice @ 0x1402F11C4
 * Callers:
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1402F1298 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopFxIdleDevicesFromSx @ 0x1404A3788 (PopFxIdleDevicesFromSx.c)
 *     PopFxClearDeviceConstraints @ 0x1404CDF98 (PopFxClearDeviceConstraints.c)
 *     PoFxAddDeviceRelation @ 0x1405CD770 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405CDE10 (PoFxRemoveDeviceRelation.c)
 *     PopPepPlatformStateRegistered @ 0x1405D8BE8 (PopPepPlatformStateRegistered.c)
 *     PopPlIdleDeviceIterator @ 0x1405D9870 (PopPlIdleDeviceIterator.c)
 *     PiProcessResourceRequirementsChanged @ 0x140721BF4 (PiProcessResourceRequirementsChanged.c)
 *     PnpCancelStopDeviceNode @ 0x140732D28 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x140734598 (PipProcessRestartPhase2.c)
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x1408B895C (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x1408B91C4 (PiProcessQueryDeviceState.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1409BF9E8 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140A649E8 (PnpDeleteLockedDeviceNodes.c)
 *     PnpDeleteLockedDeviceNode @ 0x140A64C7C (PnpDeleteLockedDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x140A97B30 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     PoFxIdleComponent @ 0x1403A8D20 (PoFxIdleComponent.c)
 */

void __fastcall PoFxIdleDevice(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  volatile LONG *v3; // rsi
  KIRQL v4; // al
  int v5; // r8d
  void *v6; // rdx
  KIRQL v7; // bp
  __int64 v8; // rdi

  if ( a1 )
  {
    v1 = 0;
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    if ( v2 )
    {
      v3 = (volatile LONG *)(v2 + 88);
      v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 88));
      v5 = *(_DWORD *)(v2 + 120);
      v6 = (void *)(v2 + 296);
      v7 = v4;
      _m_prefetchw((const void *)(v2 + 296));
      if ( (_InterlockedOr((volatile signed __int32 *)(v2 + 296), 0) & 4) == 0
        || (*(_DWORD *)(*(_QWORD *)(v2 + 80) + 864LL) & 1) == 0 )
      {
        *(_DWORD *)(v2 + 120) = v5 - 1;
        _m_prefetchw(v6);
        if ( (_InterlockedOr((volatile signed __int32 *)v6, 0) & 4) != 0 )
        {
          v8 = *(_QWORD *)(v2 + 80);
          if ( *(_DWORD *)(v8 + 868) )
          {
            do
              PoFxIdleComponent(v8, v1++, 2LL);
            while ( v1 < *(_DWORD *)(v8 + 868) );
          }
        }
      }
      ExReleaseSpinLockExclusive(v3, v7);
    }
  }
}
