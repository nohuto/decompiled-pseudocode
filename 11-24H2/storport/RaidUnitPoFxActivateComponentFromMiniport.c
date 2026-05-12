/*
 * XREFs of RaidUnitPoFxActivateComponentFromMiniport @ 0x14001BEEC
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14001DA40 (RaidAdapterPoFxActivateComponent.c)
 */

__int64 __fastcall RaidUnitPoFxActivateComponentFromMiniport(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  char v7; // bp
  __int64 v8; // rax
  __int64 v10; // rcx
  int v11; // ebp

  v3 = *(_QWORD *)(a1 + 24);
  v4 = a3;
  v7 = 1;
  if ( *(_QWORD *)(v3 + 4960) )
    v7 = RaidAdapterPoFxActivateComponent(*(_QWORD *)(a1 + 24), 0LL, a3);
  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (*(_BYTE *)(v3 + 108) & 1) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2168));
      if ( (*(_BYTE *)(v3 + 108) & 2) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2176));
    }
    v10 = *(_QWORD *)(a1 + 1872);
    if ( (*(_DWORD *)(v10 + 148) & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 144));
      v10 = *(_QWORD *)(a1 + 1872);
    }
    if ( *(_DWORD *)(a1 + 1036) && (v4 & 1) != 0 )
      v4 |= 4u;
    PoFxActivateComponent(*(_QWORD *)v10, a2, v4);
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
    v7 = (v11 & 2) != 0;
  }
  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1872) + 40LL));
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1872) + 152LL));
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
  v8 = *(_QWORD *)(v3 + 4960);
  if ( v8 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 80));
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v3 + 4960) + 88LL));
  }
  return v7 == 0 ? 0xC100000C : 0;
}
