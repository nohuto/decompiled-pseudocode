/*
 * XREFs of ??1AtomicExecutionCheck@@QEAA@XZ @ 0x1C01A54C0
 * Callers:
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall AtomicExecutionCheck::~AtomicExecutionCheck(AtomicExecutionCheck *this, __int64 a2, __int64 a3)
{
  AtomicExecutionCheck::Disarm(this, a2, a3);
}
