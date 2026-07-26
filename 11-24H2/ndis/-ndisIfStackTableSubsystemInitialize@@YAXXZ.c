/*
 * XREFs of ?ndisIfStackTableSubsystemInitialize@@YAXXZ @ 0x140147608
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x14018E8A4 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void ndisIfStackTableSubsystemInitialize(void)
{
  KeInitializeSpinLock(&qword_14011CA28);
  qword_14011CA20 = (__int64)&P;
  P = &P;
}
