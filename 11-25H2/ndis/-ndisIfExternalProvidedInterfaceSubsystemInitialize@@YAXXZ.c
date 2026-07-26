/*
 * XREFs of ?ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ @ 0x140152664
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1401998DC (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void ndisIfExternalProvidedInterfaceSubsystemInitialize(void)
{
  KeInitializeSpinLock(&qword_140126AC8);
  qword_140126AC0 = (__int64)&qword_140126AB8;
  qword_140126AB8 = (__int64)&qword_140126AB8;
}
