/*
 * XREFs of IommuSetAddressSpace @ 0x140562660
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14054B9D4 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14054BD54 (IommupDomainDetachPasidDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuSetAddressSpace(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  KIRQL v4; // di
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v6; // r14
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  __int64 v9; // r13
  KIRQL v11; // [rsp+B0h] [rbp+18h]
  __int64 v12; // [rsp+B8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 8);
  v4 = KeAcquireSpinLockRaiseToDpc(&IommupPasidTableLock);
  v11 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 24));
  v6 = (_QWORD *)(v2 + 40);
  *(_QWORD *)(v2 + 32) = a2;
  v7 = *(_QWORD **)(v2 + 40);
  if ( v7 != (_QWORD *)(v2 + 40) )
  {
    do
    {
      v8 = (_QWORD *)v7[3];
      if ( v8 != v7 + 3 )
      {
        do
        {
          v12 = v8[5];
          v9 = *(_QWORD *)(v12 + 24);
          if ( (int)guard_dispatch_icall_no_overrides(*(_QWORD *)(v9 + 16), *(_QWORD *)(*(_QWORD *)(v12 + 72) + 40LL)) >= 0 )
            guard_dispatch_icall_no_overrides(*(_QWORD *)(v9 + 16), *(unsigned int *)(v2 + 16));
          v8 = (_QWORD *)*v8;
        }
        while ( v8 != v7 + 3 );
        v6 = (_QWORD *)(v2 + 40);
      }
      v7 = (_QWORD *)*v7;
    }
    while ( v7 != v6 );
    v4 = v11;
  }
  KxReleaseSpinLock((volatile signed __int64 *)(v2 + 24));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  KeReleaseSpinLock(&IommupPasidTableLock, v4);
  return 0LL;
}
