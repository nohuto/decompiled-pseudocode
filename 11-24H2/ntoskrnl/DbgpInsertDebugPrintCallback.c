/*
 * XREFs of DbgpInsertDebugPrintCallback @ 0x1405E76F8
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x1404FA620 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall DbgpInsertDebugPrintCallback(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 *v6; // rax
  __int64 v7; // rbx

  Pool2 = ExAllocatePool2(0x40uLL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_DWORD *)Pool2 = 0;
  *(_QWORD *)(Pool2 + 16) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  ExAcquireSpinLockExclusiveAtDpcLevel(&RtlpDebugPrintCallbackLock);
  v6 = (__int64 *)off_140E08798;
  v7 = v3 + 24;
  if ( *off_140E08798 != (_UNKNOWN *)&RtlpDebugPrintCallbackList )
    __fastfail(3u);
  *(_QWORD *)v7 = &RtlpDebugPrintCallbackList;
  *(_QWORD *)(v7 + 8) = v6;
  *v6 = v7;
  off_140E08798 = (_UNKNOWN **)v7;
  RtlpDebugPrintCallbacksActive = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpDebugPrintCallbackLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return 0LL;
}
