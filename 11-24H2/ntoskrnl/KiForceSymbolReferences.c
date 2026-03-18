/*
 * XREFs of KiForceSymbolReferences @ 0x140C27FB4
 * Callers:
 *     KiInitSystem @ 0x140C28258 (KiInitSystem.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 KiForceSymbolReferences()
{
  _QWORD *v0; // rax
  signed __int8 v1; // cf
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp+10h] BYREF

  BugCheckParameter2 = 0LL;
  if ( !KeGetPcr()->Prcb.Number )
  {
    v0 = KeAbPreAcquire((__int64)&BugCheckParameter2, 0LL);
    v1 = _interlockedbittestandset64((volatile signed __int32 *)&BugCheckParameter2, 0LL);
    if ( v0 )
    {
      if ( v1 )
        KeAbPostReleaseEx((ULONG_PTR)&BugCheckParameter2, (ULONG_PTR)v0);
      else
        *((_BYTE *)v0 + 10) = 1;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  ExTryAcquireSpinLockExclusiveAtDpcLevel();
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
