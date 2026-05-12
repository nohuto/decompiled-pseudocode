/*
 * XREFs of StorpUnitInitializePoFxPower @ 0x14005456C
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     RaidGetStorPoFxComponent @ 0x14002B0C0 (RaidGetStorPoFxComponent.c)
 *     RaMiniportGetRaidAdapter @ 0x140036868 (RaMiniportGetRaidAdapter.c)
 *     RaidUnitIsRegisteredForIdleDetection @ 0x1400713D4 (RaidUnitIsRegisteredForIdleDetection.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x140072C84 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidStorPoFxComponentVersionAndSizeIsValid @ 0x140072F84 (RaidStorPoFxComponentVersionAndSizeIsValid.c)
 *     RaidStorPoFxDeviceVersionAndSizeIsValid @ 0x140072FB4 (RaidStorPoFxDeviceVersionAndSizeIsValid.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1400781BC (RaidRegisterForRuntimePowerManagement.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall StorpUnitInitializePoFxPower(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  _BYTE *v6; // rcx
  __int64 v8; // rdx
  __int64 RaidAdapter; // r8
  char v10; // cl
  char v11; // al
  __int64 *Unit; // rax
  __int64 *v13; // rbx
  int *v14; // rcx
  int *StorPoFxComponent; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int TotalStorPoFxDeviceSize; // eax
  size_t v21; // rbp
  __int64 Pool; // rsi
  __int64 v23; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v24; // rcx
  __int64 v25; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v25) = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a3 )
    return 3238002694LL;
  v6 = *(_BYTE **)(a1 - 16);
  if ( (v6[248] & 1) != 0 )
    return 3238002690LL;
  RaidAdapter = RaMiniportGetRaidAdapter(v6);
  if ( !RaidAdapter )
    return 3238002694LL;
  if ( !v8 )
    return 3238002694LL;
  if ( *(_WORD *)v8 != 1 )
    return 3238002694LL;
  if ( *(_DWORD *)(v8 + 4) < 4u )
    return 3238002694LL;
  v10 = *(_BYTE *)(v8 + 8);
  BYTE1(v25) = *(_BYTE *)(v8 + 9);
  v11 = *(_BYTE *)(v8 + 10);
  LOBYTE(v25) = v10;
  BYTE2(v25) = v11;
  Unit = RaidAdapterFindUnit(RaidAdapter, v25);
  v13 = Unit;
  if ( !Unit )
    return 3238002694LL;
  if ( RuntimePowerDisabled )
  {
    *((_BYTE *)Unit + 507) |= 0x20u;
    return 0LL;
  }
  if ( (unsigned __int8)RaidUnitIsRegisteredForIdleDetection(Unit) )
    return 3238002689LL;
  if ( !(unsigned __int8)RaidStorPoFxDeviceVersionAndSizeIsValid(a3) )
    return 3238002694LL;
  if ( a3[2] != 1 )
    return 3238002694LL;
  StorPoFxComponent = RaidGetStorPoFxComponent(v14, 0);
  if ( !StorPoFxComponent
    || !(unsigned __int8)RaidStorPoFxComponentVersionAndSizeIsValid(StorPoFxComponent, StorPoFxComponent)
    || (unsigned int)(*(_DWORD *)(v17 + 8) - 1) > 1 )
  {
    return 3238002694LL;
  }
  v18 = *(_QWORD *)(v16 + 16) - 0x40880B3A585D326BLL;
  if ( *(_QWORD *)(v16 + 16) == 0x40880B3A585D326BLL )
    v18 = *(_QWORD *)(v16 + 24) + 0x41A796F04F77C677LL;
  if ( v18 )
    return 3238002694LL;
  v19 = v13[1];
  v25 = 0LL;
  if ( (int)RaidRegisterForRuntimePowerManagement(v19, a3, v13, &v25) < 0 )
    return 3238002689LL;
  TotalStorPoFxDeviceSize = RaidGetTotalStorPoFxDeviceSize(a3);
  v21 = TotalStorPoFxDeviceSize;
  Pool = RaidAllocatePool(64LL, TotalStorPoFxDeviceSize + 184, 1330667858LL, v13[1]);
  if ( Pool )
  {
    v23 = v25;
    *(_DWORD *)(Pool + 16) = 0;
    *(_DWORD *)(Pool + 32) |= 0xEu;
    *(_QWORD *)Pool = v23;
    *(_QWORD *)(Pool + 88) = Pool + 80;
    *(_QWORD *)(Pool + 80) = Pool + 80;
    KeInitializeSpinLock((PKSPIN_LOCK)(Pool + 96));
    if ( (a3[3] & 8) != 0 )
      *((_BYTE *)v13 + 505) |= 0x40u;
    if ( (a3[3] & 0x200) != 0 )
      *((_BYTE *)v13 + 506) |= 4u;
    *(_QWORD *)(Pool + 8) = Pool + 184;
    memmove((void *)(Pool + 184), a3, v21);
    if ( a4 )
      *a4 = 1;
    if ( *a3 == 3 && (a3[3] & 0x20) != 0 )
      *(_DWORD *)(Pool + 32) |= 0x100u;
    v24 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)v13[233];
    v13[234] = Pool;
    ExReInitializeRundownProtectionCacheAware(v24);
    *((_BYTE *)v13 + 505) |= 0x80u;
    return 0LL;
  }
  PoFxUnregisterDevice(v25);
  return 3238002691LL;
}
