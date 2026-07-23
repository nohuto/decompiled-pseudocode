/*
 * XREFs of DbgpRemoveDebugPrintCallback @ 0x1405E4DC4
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x1404F7F00 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
