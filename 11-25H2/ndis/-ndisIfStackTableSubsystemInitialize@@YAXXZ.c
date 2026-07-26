/*
 * XREFs of ?ndisIfStackTableSubsystemInitialize@@YAXXZ @ 0x1401522C8
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1401998DC (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void ndisIfStackTableSubsystemInitialize(void)
{
  KeInitializeSpinLock(&qword_140126A68);
  qword_140126A60 = (__int64)&P;
  P = &P;
}
