/*
 * XREFs of HalpIommuDeleteDevice @ 0x14054DC10
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404BB2D0 (HalpIommuUnblockDevice.c)
 *     HalpIommuBlockDevice @ 0x1404BE880 (HalpIommuBlockDevice.c)
 *     IommuCreateAtsDevice @ 0x140563580 (IommuCreateAtsDevice.c)
 *     IommuDeleteAtsDevice @ 0x140563700 (IommuDeleteAtsDevice.c)
 *     IommuMapDevice @ 0x140564480 (IommuMapDevice.c)
 *     IommuUnmapDevice @ 0x140564BD0 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x140566390 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x140566770 (IommuDomainDetachDevice.c)
 *     IommuDeviceCreate @ 0x140703920 (IommuDeviceCreate.c)
 *     IommuDeviceDelete @ 0x1407039C0 (IommuDeviceDelete.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IommupHvUnregisterDeviceId @ 0x1405662A8 (IommupHvUnregisterDeviceId.c)
 *     IidAreIdsStrictlyEqual @ 0x14069BF5C (IidAreIdsStrictlyEqual.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IommupDeviceDisablePasidTaggedDma @ 0x1406FF228 (IommupDeviceDisablePasidTaggedDma.c)
 */

__int64 __fastcall HalpIommuDeleteDevice(__int64 *a1)
{
  char v2; // bp
  __int64 v3; // rsi
  _QWORD *v4; // rax
  signed __int8 v5; // cf
  _QWORD *v6; // rdi
  unsigned __int8 CurrentIrql; // di
  __int64 *i; // r11
  __int64 v9; // r11
  __int64 *v11; // rcx
  __int64 **v12; // rax
  __int64 v13; // rcx
  __int64 v15; // rdx
  unsigned int v16; // edi
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rcx
  void *v20; // rcx

  v2 = 0;
  v3 = 0LL;
  v4 = KeAbPreAcquire((__int64)&HalpIommuDeviceCreatedListPushLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&HalpIommuDeviceCreatedListPushLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(
      &HalpIommuDeviceCreatedListPushLock,
      (__int64)v4,
      (__int64)&HalpIommuDeviceCreatedListPushLock);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
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
  v18 = a1[4];
  if ( HalpHvIommu )
    v16 = IommupHvUnregisterDeviceId(v18);
  else
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v18 + 16), a1[5], 0LL, v17);
  if ( *a1 )
    HalpMmAllocCtxFree(v19, *a1);
  v20 = (void *)a1[1];
  if ( v20 )
  {
    ObfDereferenceObjectWithTag(v20, 0x446C6148u);
    a1[1] = 0LL;
  }
  HalpMmAllocCtxFree((__int64)v20, (__int64)a1);
  return v16;
}
