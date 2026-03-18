/*
 * XREFs of KiForceSymbolReferences @ 0x140C16F24
 * Callers:
 *     KiInitSystem @ 0x140C171C8 (KiInitSystem.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 KiForceSymbolReferences()
{
  __int64 *v0; // rax
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
