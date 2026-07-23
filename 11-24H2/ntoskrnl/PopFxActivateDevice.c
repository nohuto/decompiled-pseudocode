/*
 * XREFs of PopFxActivateDevice @ 0x140490A10
 * Callers:
 *     PopFxActivateDevicesForSx @ 0x1404908F4 (PopFxActivateDevicesForSx.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x1404909D8 (PoFxActivateDeviceForSystemTransition.c)
 *     PoFxActivateDevice @ 0x1404909F4 (PoFxActivateDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x1404A5D50 (PoFxStartDevicePowerManagement.c)
 *     PopFxClearDeviceConstraints @ 0x1404CDF98 (PopFxClearDeviceConstraints.c)
 *     PoFxAddDeviceRelation @ 0x1405CD770 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405CDE10 (PoFxRemoveDeviceRelation.c)
 *     PopPepPlatformStateRegistered @ 0x1405D8BE8 (PopPepPlatformStateRegistered.c)
 *     PopPlActivateDeviceIterator @ 0x1405D9720 (PopPlActivateDeviceIterator.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     PoFxActivateComponent @ 0x1402AE460 (PoFxActivateComponent.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     PopFxReferenceDevice @ 0x1403AA248 (PopFxReferenceDevice.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline @ 0x1405CB038 (Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline.c)
 */

void __fastcall PopFxActivateDevice(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  volatile LONG *v6; // rsi
  KIRQL v7; // al
  int v8; // r8d
  KIRQL v9; // bp
  ULONG_PTR v10; // rbx
  unsigned int i; // edi
  unsigned int j; // esi
  ULONG_PTR v13; // rdi

  if ( a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = (volatile LONG *)(v5 + 88);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 88));
  v8 = *(_DWORD *)(v5 + 120);
  v9 = v7;
  _m_prefetchw((const void *)(v5 + 296));
  if ( (_InterlockedOr((volatile signed __int32 *)(v5 + 296), 0) & 4) != 0
    && (*(_DWORD *)(*(_QWORD *)(v5 + 80) + 864LL) & 1) != 0 )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 88), v7);
  }
  else
  {
    v10 = 0LL;
    *(_DWORD *)(v5 + 120) = v8 + 1;
    _m_prefetchw((const void *)(v5 + 296));
    if ( (_InterlockedOr((volatile signed __int32 *)(v5 + 296), 0) & 4) != 0 )
    {
      v10 = *(_QWORD *)(v5 + 80);
      PopFxReferenceDevice(v10, 7);
      for ( i = 0; i < *(_DWORD *)(v10 + 868); ++i )
        PoFxActivateComponent(v10, i, 2);
    }
    ExReleaseSpinLockExclusive(v6, v9);
    if ( v10 )
    {
      for ( j = 0; j < *(_DWORD *)(v10 + 868); ++j )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(v10 + 872) + 8LL * j);
        if ( (*(_DWORD *)(v13 + 88) & 0x3FFFFFFF) == 0 )
          PopFxBugCheck(0x608uLL, *(_QWORD *)(*(_QWORD *)(v10 + 872) + 8LL * j), v13 + 88, 0LL);
        KeWaitForSingleObject((PVOID)(v13 + 104), Executive, 0, 0, 0LL);
        if ( *(int *)(v13 + 88) >= 0 )
          PopFxBugCheck(0x608uLL, v13, v13 + 88, 0LL);
        if ( a2 )
          _InterlockedOr((volatile signed __int32 *)(v10 + 32), 1u);
        if ( !(unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline()
          && (*(_DWORD *)(v10 + 864) & 0x80u) != 0 )
        {
          if ( a3 )
            _InterlockedOr((volatile signed __int32 *)(v10 + 32), 0x800u);
        }
      }
      KeWaitForSingleObject((PVOID)(v10 + 608), Executive, 0, 0, 0LL);
      PopFxDereferenceDevice(v10, 7);
    }
  }
}
