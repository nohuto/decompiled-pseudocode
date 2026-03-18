/*
 * XREFs of DbgpInsertDebugPrintCallback @ 0x1405DB648
 * Callers:
 *     DbgSetDebugPrintCallback @ 0x1404F8150 (DbgSetDebugPrintCallback.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
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
  v6 = (__int64 *)off_140E086B8;
  v7 = v3 + 24;
  if ( *off_140E086B8 != (_UNKNOWN *)&RtlpDebugPrintCallbackList )
    __fastfail(3u);
  *(_QWORD *)v7 = &RtlpDebugPrintCallbackList;
  *(_QWORD *)(v7 + 8) = v6;
  *v6 = v7;
  off_140E086B8 = (_UNKNOWN **)v7;
  RtlpDebugPrintCallbacksActive = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&RtlpDebugPrintCallbackLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return 0LL;
}
