/*
 * XREFs of HalpIommuDeleteDevice @ 0x14054B2F8
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404BC0D0 (HalpIommuUnblockDevice.c)
 *     HalpIommuBlockDevice @ 0x1404BFF40 (HalpIommuBlockDevice.c)
 *     IommuCreateAtsDevice @ 0x140560CE0 (IommuCreateAtsDevice.c)
 *     IommuDeleteAtsDevice @ 0x140560E60 (IommuDeleteAtsDevice.c)
 *     IommuMapDevice @ 0x140561BE0 (IommuMapDevice.c)
 *     IommuUnmapDevice @ 0x140562340 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x140563B20 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x140563F00 (IommuDomainDetachDevice.c)
 *     IommuDeviceCreate @ 0x1406F7AC0 (IommuDeviceCreate.c)
 *     IommuDeviceDelete @ 0x1406F7B60 (IommuDeviceDelete.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     IommupHvUnregisterDeviceId @ 0x140563A38 (IommupHvUnregisterDeviceId.c)
 *     IidAreIdsStrictlyEqual @ 0x140690C0C (IidAreIdsStrictlyEqual.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IommupDeviceDisablePasidTaggedDma @ 0x1406F3438 (IommupDeviceDisablePasidTaggedDma.c)
 */

__int64 __fastcall HalpIommuDeleteDevice(__int64 *a1)
{
  char v2; // bp
  __int64 v3; // rsi
  __int64 *v4; // rax
  signed __int8 v5; // cf
  __int64 *v6; // rdi
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
  v4 = KeAbPreAcquire((__int64)&HalpIommuDeviceCreatedListPushLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&HalpIommuDeviceCreatedListPushLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&HalpIommuDeviceCreatedListPushLock, v4, (__int64)&HalpIommuDeviceCreatedListPushLock);
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
  v17 = a1[4];
  if ( HalpHvIommu )
    v16 = IommupHvUnregisterDeviceId(v17);
  else
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v17 + 16));
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
