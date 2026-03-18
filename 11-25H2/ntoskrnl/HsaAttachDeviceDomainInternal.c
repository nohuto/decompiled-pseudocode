/*
 * XREFs of HsaAttachDeviceDomainInternal @ 0x140448D70
 * Callers:
 *     HsaAttachDeviceDomain @ 0x14056F4B0 (HsaAttachDeviceDomain.c)
 *     HsaDetachDeviceDomain @ 0x14056F630 (HsaDetachDeviceDomain.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     HsaFlushTbInternal @ 0x140448F28 (HsaFlushTbInternal.c)
 *     HsaUpdateDeviceTableEntry @ 0x140449444 (HsaUpdateDeviceTableEntry.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall HsaAttachDeviceDomainInternal(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned __int8 CurrentIrql; // di
  int v9; // r9d
  __int64 v10; // rdx
  int v11; // r9d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v14[4]; // [rsp+70h] [rbp-78h] BYREF
  int v15; // [rsp+74h] [rbp-74h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset_0(v14, 0, 0x70uLL);
  if ( !a3 )
  {
    v7 = *(_DWORD *)(a1 + 172);
    if ( v7 == 2 )
    {
      v15 = 1;
    }
    else if ( v7 != 1 )
    {
      return 3221225473LL;
    }
    a3 = v14;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v6);
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 152), &LockHandle);
  LOBYTE(v9) = 1;
  HsaUpdateDeviceTableEntry(a1, *(_QWORD *)(a2 + 40), 0, v9, (__int64)a3, 1, 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
  }
  __writecr8(CurrentIrql);
  LOBYTE(v11) = 1;
  HsaFlushTbInternal(a1, 0, *((_DWORD *)a3 + 12), v11, 0LL, 0LL, 0, 0LL);
  return 0LL;
}
