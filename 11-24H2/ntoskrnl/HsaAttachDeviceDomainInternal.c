/*
 * XREFs of HsaAttachDeviceDomainInternal @ 0x14043E2A0
 * Callers:
 *     HsaAttachDeviceDomain @ 0x14056FC40 (HsaAttachDeviceDomain.c)
 *     HsaDetachDeviceDomain @ 0x14056FDC0 (HsaDetachDeviceDomain.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     HsaFlushTbInternal @ 0x14043E458 (HsaFlushTbInternal.c)
 *     HsaUpdateDeviceTableEntry @ 0x14043E974 (HsaUpdateDeviceTableEntry.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HsaAttachDeviceDomainInternal(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned __int8 CurrentIrql; // di
  int v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // r9d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v15[4]; // [rsp+70h] [rbp-78h] BYREF
  int v16; // [rsp+74h] [rbp-74h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset_0(v15, 0, 0x70uLL);
  if ( !a3 )
  {
    v7 = *(_DWORD *)(a1 + 172);
    if ( v7 == 2 )
    {
      v16 = 1;
    }
    else if ( v7 != 1 )
    {
      return 3221225473LL;
    }
    a3 = v15;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v6, 15LL);
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 152), &LockHandle);
  LOBYTE(v9) = 1;
  HsaUpdateDeviceTableEntry(a1, *(_QWORD *)(a2 + 40), 0, v9, (__int64)a3, 1, 0);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v10);
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
  }
  __writecr8(CurrentIrql);
  LOBYTE(v12) = 1;
  HsaFlushTbInternal(a1, 0, *((_DWORD *)a3 + 12), v12, 0LL, 0LL, 0, 0LL);
  return 0LL;
}
