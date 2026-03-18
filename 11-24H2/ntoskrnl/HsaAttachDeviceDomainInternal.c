/*
 * XREFs of HsaAttachDeviceDomainInternal @ 0x140445EF0
 * Callers:
 *     HsaAttachDeviceDomain @ 0x1405727B0 (HsaAttachDeviceDomain.c)
 *     HsaDetachDeviceDomain @ 0x140572930 (HsaDetachDeviceDomain.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D84E0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     HsaFlushTbInternal @ 0x1404460A8 (HsaFlushTbInternal.c)
 *     HsaUpdateDeviceTableEntry @ 0x1404465C4 (HsaUpdateDeviceTableEntry.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
