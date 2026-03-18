/*
 * XREFs of PopFxActivateDevice @ 0x14047D560
 * Callers:
 *     PopFxClearDeviceConstraints @ 0x140354884 (PopFxClearDeviceConstraints.c)
 *     PopFxActivateDevicesForSx @ 0x14047D428 (PopFxActivateDevicesForSx.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x14047D528 (PoFxActivateDeviceForSystemTransition.c)
 *     PoFxActivateDevice @ 0x14047D544 (PoFxActivateDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x1404AA2A0 (PoFxStartDevicePowerManagement.c)
 *     PoFxAddDeviceRelation @ 0x1405CB900 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x1405CBFA0 (PoFxRemoveDeviceRelation.c)
 *     PopPepPlatformStateRegistered @ 0x1405D6B38 (PopPepPlatformStateRegistered.c)
 *     PopPlActivateDeviceIterator @ 0x1405D7670 (PopPlActivateDeviceIterator.c)
 * Callees:
 *     PoFxActivateComponent @ 0x140203CD0 (PoFxActivateComponent.c)
 *     PopFxReferenceDevice @ 0x140281350 (PopFxReferenceDevice.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     PopFxDereferenceDevice @ 0x1403589F8 (PopFxDereferenceDevice.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall PopFxActivateDevice(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  volatile LONG *v6; // rsi
  KIRQL v7; // al
  int v8; // r8d
  KIRQL v9; // bp
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  ULONG_PTR v12; // rbx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  unsigned int i; // edi
  __int64 j; // rdi
  ULONG_PTR v17; // rsi

  if ( a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = (volatile LONG *)(v5 + 88);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 88));
  v8 = *(_DWORD *)(v5 + 120);
  v9 = v7;
  _m_prefetchw((const void *)(v5 + 296));
  v10 = *(_DWORD *)(v5 + 296);
  do
  {
    v11 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 296), v10, v10);
  }
  while ( v11 != v10 );
  if ( (v10 & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v5 + 80) + 864LL) & 1) != 0 )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 88), v9);
  }
  else
  {
    v12 = 0LL;
    *(_DWORD *)(v5 + 120) = v8 + 1;
    _m_prefetchw((const void *)(v5 + 296));
    v13 = *(_DWORD *)(v5 + 296);
    do
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 296), v13, v13);
    }
    while ( v14 != v13 );
    if ( (v13 & 4) != 0 )
    {
      v12 = *(_QWORD *)(v5 + 80);
      PopFxReferenceDevice(v12, 7);
      for ( i = 0; i < *(_DWORD *)(v12 + 868); ++i )
        PoFxActivateComponent(v12, i, 2);
    }
    ExReleaseSpinLockExclusive(v6, v9);
    if ( v12 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v12 + 868); j = (unsigned int)(j + 1) )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(v12 + 872) + 8 * j);
        if ( (*(_DWORD *)(v17 + 88) & 0x3FFFFFFF) == 0 )
          PopFxBugCheck(0x608uLL, *(_QWORD *)(*(_QWORD *)(v12 + 872) + 8 * j), v17 + 88, 0LL);
        KeWaitForSingleObject((PVOID)(v17 + 104), Executive, 0, 0, 0LL);
        if ( *(int *)(v17 + 88) >= 0 )
          PopFxBugCheck(0x608uLL, v17, v17 + 88, 0LL);
        if ( a2 )
          _InterlockedOr((volatile signed __int32 *)(v12 + 32), 1u);
        if ( (*(_DWORD *)(v12 + 864) & 0x80u) != 0 )
        {
          if ( a3 )
            _InterlockedOr((volatile signed __int32 *)(v12 + 32), 0x800u);
        }
      }
      KeWaitForSingleObject((PVOID)(v12 + 608), Executive, 0, 0, 0LL);
      PopFxDereferenceDevice(v12, 7);
    }
  }
}
