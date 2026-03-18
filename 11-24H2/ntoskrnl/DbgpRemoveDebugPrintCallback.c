/*
 * XREFs of DbgpRemoveDebugPrintCallback @ 0x1405E77D4
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x1404FA620 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgpRemoveDebugPrintCallback(void *a1)
{
  unsigned __int8 CurrentIrql; // bp
  unsigned int v3; // ebx
  _UNKNOWN **i; // rdi
  struct _EX_RUNDOWN_REF *v5; // rsi
  _QWORD *v6; // rdx
  _QWORD *v7; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  v3 = 0;
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
  for ( i = (_UNKNOWN **)RtlpDebugPrintCallbackList; i != &RtlpDebugPrintCallbackList; i = (_UNKNOWN **)*i )
  {
    v5 = (struct _EX_RUNDOWN_REF *)(i - 3);
    if ( *(i - 1) == a1 )
    {
      _m_prefetchw(v5);
      if ( (_InterlockedOr((volatile signed __int32 *)v5, 1u) & 1) == 0 )
      {
        ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
        ExWaitForRundownProtectionRelease(v5 + 1);
        ExAcquireSpinLockExclusiveAtDpcLevel(&RtlpDebugPrintCallbackLock);
        v6 = *i;
        v7 = i[1];
        if ( *((_UNKNOWN ***)*i + 1) != i || (_UNKNOWN **)*v7 != i )
          __fastfail(3u);
        *v7 = v6;
        v6[1] = v7;
        if ( v7 == v6 )
          RtlpDebugPrintCallbacksActive = 0;
        ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpDebugPrintCallbackLock);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        ExFreePoolWithTag(i - 3, 0);
        return v3;
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return (unsigned int)-1073741275;
}
