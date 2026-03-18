/*
 * XREFs of IommuSetAddressSpace @ 0x1405621A0
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14054B814 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14054BB10 (IommupDomainDetachPasidDevice.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuSetAddressSpace(__int64 a1, KSPIN_LOCK a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v4; // di
  unsigned __int8 CurrentIrql; // bp
  KSPIN_LOCK *v6; // r14
  KSPIN_LOCK *v7; // rbx
  KSPIN_LOCK *v8; // rdi
  __int64 v9; // r13
  KIRQL v11; // [rsp+B0h] [rbp+18h]

  v2 = *(KSPIN_LOCK **)(a1 + 8);
  v4 = KeAcquireSpinLockRaiseToDpc(&IommupPasidTableLock);
  v11 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock(v2 + 3);
  v6 = v2 + 5;
  v2[4] = a2;
  v7 = (KSPIN_LOCK *)v2[5];
  if ( v7 != v2 + 5 )
  {
    do
    {
      v8 = (KSPIN_LOCK *)v7[3];
      if ( v8 != v7 + 3 )
      {
        do
        {
          v9 = *(_QWORD *)(v8[5] + 24);
          if ( (int)guard_dispatch_icall_no_overrides(*(_QWORD *)(v9 + 16)) >= 0 )
            guard_dispatch_icall_no_overrides(*(_QWORD *)(v9 + 16));
          v8 = (KSPIN_LOCK *)*v8;
        }
        while ( v8 != v7 + 3 );
        v6 = v2 + 5;
      }
      v7 = (KSPIN_LOCK *)*v7;
    }
    while ( v7 != v6 );
    v4 = v11;
  }
  KxReleaseSpinLock((volatile signed __int64 *)v2 + 3);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  KeReleaseSpinLock(&IommupPasidTableLock, v4);
  return 0LL;
}
