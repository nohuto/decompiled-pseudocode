/*
 * XREFs of KeRetryOutswapProcess @ 0x140497DD0
 * Callers:
 *     MiProcessWorkingSets @ 0x140378690 (MiProcessWorkingSets.c)
 *     MmReleaseCommitForMemResetPages @ 0x14066AB1C (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

int __fastcall KeRetryOutswapProcess(volatile signed __int32 *a1)
{
  volatile signed __int32 *v1; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v3; // rdx
  int v4; // ebx
  signed __int64 v5; // rax
  signed __int64 *v6; // rdi
  signed __int64 v7; // rcx

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  KiAcquireKobjectLockSafe(v1);
  v4 = v1[66] & 7;
  if ( v4 == 1 )
    _InterlockedXor(v1 + 66, 7u);
  _InterlockedAnd(v1, 0xFFFFFF7F);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  LODWORD(v5) = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v4 == 1 )
  {
    v6 = (signed __int64 *)(v1 + 30);
    _m_prefetchw(&KiProcessOutSwapListHead);
    v5 = KiProcessOutSwapListHead;
    do
    {
      *v6 = v5;
      v7 = v5;
      v5 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v6, v5);
    }
    while ( v5 != v7 );
    if ( !v5 )
      LODWORD(v5) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  return v5;
}
