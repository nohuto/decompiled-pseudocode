/*
 * XREFs of PoFxIdleDevice @ 0x140477718
 * Callers:
 *     PopFxClearDeviceConstraints @ 0x140354884 (PopFxClearDeviceConstraints.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x140477304 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopFxIdleDevicesFromSx @ 0x1404A8340 (PopFxIdleDevicesFromSx.c)
 *     PoFxAddDeviceRelation @ 0x1405CB900 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405CBFA0 (PoFxRemoveDeviceRelation.c)
 *     PopPepPlatformStateRegistered @ 0x1405D6B38 (PopPepPlatformStateRegistered.c)
 *     PopPlIdleDeviceIterator @ 0x1405D77C0 (PopPlIdleDeviceIterator.c)
 *     PiProcessResourceRequirementsChanged @ 0x140717F64 (PiProcessResourceRequirementsChanged.c)
 *     PnpCancelStopDeviceNode @ 0x140728B68 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x14072A3D8 (PipProcessRestartPhase2.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140833970 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PiProcessQueryDeviceState @ 0x140833E34 (PiProcessQueryDeviceState.c)
 *     PipEnumerateDevice @ 0x1408353E4 (PipEnumerateDevice.c)
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140A68A14 (PnpDeleteLockedDeviceNodes.c)
 *     PnpDeleteLockedDeviceNode @ 0x140A68CA8 (PnpDeleteLockedDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x140A966B0 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     PoFxIdleComponent @ 0x14034C3C0 (PoFxIdleComponent.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
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
