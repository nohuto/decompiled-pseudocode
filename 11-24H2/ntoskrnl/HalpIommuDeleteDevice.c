/*
 * XREFs of HalpIommuDeleteDevice @ 0x14054B4BC
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404B6140 (HalpIommuUnblockDevice.c)
 *     HalpIommuBlockDevice @ 0x1404B9A40 (HalpIommuBlockDevice.c)
 *     IommuCreateAtsDevice @ 0x1405611B0 (IommuCreateAtsDevice.c)
 *     IommuDeleteAtsDevice @ 0x140561330 (IommuDeleteAtsDevice.c)
 *     IommuMapDevice @ 0x1405620B0 (IommuMapDevice.c)
 *     IommuUnmapDevice @ 0x140562800 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x140564090 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x140564470 (IommuDomainDetachDevice.c)
 *     IommuDeviceCreate @ 0x1407014F0 (IommuDeviceCreate.c)
 *     IommuDeviceDelete @ 0x140701590 (IommuDeviceDelete.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IommupHvUnregisterDeviceId @ 0x140563FA8 (IommupHvUnregisterDeviceId.c)
 *     IidAreIdsStrictlyEqual @ 0x14069CFDC (IidAreIdsStrictlyEqual.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IommupDeviceDisablePasidTaggedDma @ 0x1406FCE68 (IommupDeviceDisablePasidTaggedDma.c)
 */

__int64 __fastcall HalpIommuDeleteDevice(__int64 *a1)
{
  char v2; // bp
  __int64 v3; // rsi
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rdi
  unsigned __int8 CurrentIrql; // di
  __int64 *i; // r11
  __int64 v9; // r11
  __int64 *v11; // rcx
  __int64 **v12; // rax
  __int64 v13; // rcx
  __int64 v15; // rdx
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // rcx
  void *v19; // rcx

  v2 = 0;
  v3 = 0LL;
  v4 = (char *)KeAbPreAcquire((__int64)&HalpIommuDeviceCreatedListPushLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&HalpIommuDeviceCreatedListPushLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&HalpIommuDeviceCreatedListPushLock, v4, (__int64)&HalpIommuDeviceCreatedListPushLock);
  if ( v6 )
    v6[10] = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  ExAcquireSpinLockExclusiveAtDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
  for ( i = (__int64 *)HalpIommuDeviceCreatedList; i != &HalpIommuDeviceCreatedList; i = *(__int64 **)v9 )
  {
    v3 = (__int64)i;
    if ( (unsigned __int8)IidAreIdsStrictlyEqual(i[2], *a1) )
    {
      if ( (*(_DWORD *)(v9 + 32))-- == 1 )
      {
        v11 = *(__int64 **)v9;
        if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || (v12 = *(__int64 ***)(v9 + 8), *v12 != (__int64 *)v9) )
          __fastfail(3u);
        *v12 = v11;
        v2 = 1;
        v11[1] = (__int64)v12;
        break;
      }
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&HalpIommuDeviceCreatedListSpinLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HalpIommuDeviceCreatedListPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HalpIommuDeviceCreatedListPushLock);
  KeAbPostRelease((ULONG_PTR)&HalpIommuDeviceCreatedListPushLock);
  if ( !v2 )
    return 0LL;
  if ( v3 )
  {
    v15 = *(_QWORD *)(v3 + 16);
    if ( v15 )
      HalpMmAllocCtxFree(v13, v15);
    HalpMmAllocCtxFree(v13, v3);
  }
  v16 = IommupDeviceDisablePasidTaggedDma(a1);
  v17 = a1[4];
  if ( HalpHvIommu )
    v16 = IommupHvUnregisterDeviceId(v17);
  else
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v17 + 16), a1[5]);
  if ( *a1 )
    HalpMmAllocCtxFree(v18, *a1);
  v19 = (void *)a1[1];
  if ( v19 )
  {
    ObfDereferenceObjectWithTag(v19, 0x446C6148u);
    a1[1] = 0LL;
  }
  HalpMmAllocCtxFree((__int64)v19, (__int64)a1);
  return v16;
}
