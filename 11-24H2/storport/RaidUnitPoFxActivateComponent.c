/*
 * XREFs of RaidUnitPoFxActivateComponent @ 0x14001D8D0
 * Callers:
 *     RaAcquirePowerRefWorkRoutine @ 0x14003E4F0 (RaAcquirePowerRefWorkRoutine.c)
 *     RaidUnitMaintenanceTime @ 0x140078D34 (RaidUnitMaintenanceTime.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x14007A900 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     RaUnitStoragePowerActive @ 0x14009AB70 (RaUnitStoragePowerActive.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14001DA40 (RaidAdapterPoFxActivateComponent.c)
 */

__int64 __fastcall RaidUnitPoFxActivateComponent(__int64 a1, unsigned int a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rsi
  unsigned int v6; // ebp
  unsigned __int8 v9; // r14
  __int64 v11; // rcx
  bool v12; // si

  v4 = *(_QWORD *)(a1 + 24);
  v6 = a3;
  v9 = 1;
  if ( a4 )
    *a4 &= 0xFCu;
  if ( *(_QWORD *)(v4 + 4960) )
  {
    v9 = RaidAdapterPoFxActivateComponent(v4, 0LL, a3);
    if ( a4 )
      *a4 |= 2u;
  }
  if ( !(unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
    return v9;
  if ( (*(_BYTE *)(v4 + 108) & 1) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2168));
    if ( (*(_BYTE *)(v4 + 108) & 2) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2176));
  }
  v11 = *(_QWORD *)(a1 + 1872);
  if ( (*(_DWORD *)(v11 + 148) & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 144));
    v11 = *(_QWORD *)(a1 + 1872);
  }
  if ( *(_DWORD *)(a1 + 1036) && (v6 & 1) != 0 )
    v6 |= 4u;
  PoFxActivateComponent(*(_QWORD *)v11, a2, v6);
  v12 = (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 2) != 0;
  if ( a4 )
    *a4 |= 1u;
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  return v12;
}
