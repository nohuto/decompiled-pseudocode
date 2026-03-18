/*
 * XREFs of IommuSetAddressSpace @ 0x140564A30
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14054E124 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14054E420 (IommupDomainDetachPasidDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuSetAddressSpace(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  KIRQL v4; // di
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rbp
  _QWORD *v9; // rdi
  __int64 v10; // r13
  unsigned __int8 v12; // [rsp+40h] [rbp-58h]
  KIRQL v14; // [rsp+B0h] [rbp+18h]
  __int64 v15; // [rsp+B8h] [rbp+20h]
  __int64 v16; // [rsp+B8h] [rbp+20h]

  v2 = a1[1];
  v15 = *a1;
  v4 = KeAcquireSpinLockRaiseToDpc(&IommupPasidTableLock);
  v14 = v4;
  CurrentIrql = KeGetCurrentIrql();
  v12 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 24));
  v6 = (_QWORD *)(v2 + 40);
  *(_QWORD *)(v2 + 32) = a2;
  v7 = *(_QWORD **)(v2 + 40);
  if ( v7 != (_QWORD *)(v2 + 40) )
  {
    v8 = v15;
    do
    {
      v9 = (_QWORD *)v7[3];
      if ( v9 != v7 + 3 )
      {
        do
        {
          v16 = v9[5];
          v10 = *(_QWORD *)(v16 + 24);
          if ( (int)guard_dispatch_icall_no_overrides(
                      *(_QWORD *)(v10 + 16),
                      *(_QWORD *)(*(_QWORD *)(v16 + 72) + 40LL),
                      *(unsigned int *)(v2 + 16),
                      a2) >= 0 )
            guard_dispatch_icall_no_overrides(
              *(_QWORD *)(v10 + 16),
              *(unsigned int *)(v2 + 16),
              *(unsigned int *)(v8 + 16),
              *(_QWORD *)(v16 + 72));
          v9 = (_QWORD *)*v9;
        }
        while ( v9 != v7 + 3 );
        v6 = (_QWORD *)(v2 + 40);
      }
      v7 = (_QWORD *)*v7;
    }
    while ( v7 != v6 );
    CurrentIrql = v12;
    v4 = v14;
  }
  KxReleaseSpinLock((volatile signed __int64 *)(v2 + 24));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  KeReleaseSpinLock(&IommupPasidTableLock, v4);
  return 0LL;
}
