/*
 * XREFs of PoFxIdleDevice @ 0x1403D76E4
 * Callers:
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1403D77B8 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopFxClearDeviceConstraints @ 0x1404A6344 (PopFxClearDeviceConstraints.c)
 *     PopFxIdleDevicesFromSx @ 0x1404A9368 (PopFxIdleDevicesFromSx.c)
 *     PoFxAddDeviceRelation @ 0x1405D0050 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405D06F0 (PoFxRemoveDeviceRelation.c)
 *     PopPepPlatformStateRegistered @ 0x1405DBD18 (PopPepPlatformStateRegistered.c)
 *     PopPlIdleDeviceIterator @ 0x1405DC9A0 (PopPlIdleDeviceIterator.c)
 *     PiProcessResourceRequirementsChanged @ 0x140724064 (PiProcessResourceRequirementsChanged.c)
 *     PnpCancelStopDeviceNode @ 0x140734DF8 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x140736668 (PipProcessRestartPhase2.c)
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x1408BAFAC (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x1408BB868 (PiProcessQueryDeviceState.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140A115D8 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140A6B488 (PnpDeleteLockedDeviceNodes.c)
 *     PnpDeleteLockedDeviceNode @ 0x140A6B71C (PnpDeleteLockedDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x140A9C5C0 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 *     PoFxIdleComponent @ 0x1403B4850 (PoFxIdleComponent.c)
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
  ULONG_PTR v8; // rdi

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
              PoFxIdleComponent(v8, v1++);
            while ( v1 < *(_DWORD *)(v8 + 868) );
          }
        }
      }
      ExReleaseSpinLockExclusive(v3, v7);
    }
  }
}
