/*
 * XREFs of RaidUnitPoFxIdleComponentFromMiniport @ 0x14001BDD0
 * Callers:
 *     RaidPnPPassToMiniPort @ 0x140010ED8 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001DF90 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 *     RaidUnitCompleteResetRequest @ 0x14003C670 (RaidUnitCompleteResetRequest.c)
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     RaWmiPassToMiniPort @ 0x1401B73F4 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 */

__int64 __fastcall RaidUnitPoFxIdleComponentFromMiniport(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  _QWORD **v3; // rdi
  PEX_RUNDOWN_REF_CACHE_AWARE *v5; // r14
  char v7; // r15
  bool v8; // bl
  int v9; // ebx
  char v10; // cl
  __int64 v11; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (_QWORD **)(a1 + 1872);
  v5 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864);
  v7 = 0;
  v8 = 0;
  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    PoFxIdleComponent(**v3, a2, 0LL);
    v7 = 1;
    v9 = *((_DWORD *)*v3 + 8);
    ExReleaseRundownProtectionCacheAware(*v5);
    v8 = (v9 & 2) == 0;
  }
  if ( *(_QWORD *)(v2 + 4960) )
  {
    v10 = RaidAdapterPoFxIdleComponent(v2, 0LL, 0LL);
    if ( !v7 )
      v8 = v10;
  }
  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    _InterlockedDecrement64(*v3 + 5);
    _InterlockedIncrement64(*v3 + 20);
    ExReleaseRundownProtectionCacheAware(*v5);
  }
  v11 = *(_QWORD *)(v2 + 4960);
  if ( v11 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(v11 + 80));
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v2 + 4960) + 96LL));
  }
  return !v8 ? 0xC100000C : 0;
}
