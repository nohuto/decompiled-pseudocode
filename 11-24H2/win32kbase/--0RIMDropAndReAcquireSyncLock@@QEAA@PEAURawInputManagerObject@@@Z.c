/*
 * XREFs of ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x1401455B8
 * Callers:
 *     RIMDeviceIoControl @ 0x14017AF70 (RIMDeviceIoControl.c)
 *     ?_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ @ 0x140210714 (-_KeyboardIOControl@CKeyboardSensor@@AEAAXXZ.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 */

RIMDropAndReAcquireSyncLock *__fastcall RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock(
        RIMDropAndReAcquireSyncLock *this,
        struct RawInputManagerObject *a2)
{
  *(_QWORD *)this = 0LL;
  if ( *((struct _KTHREAD **)a2 + 14) == KeGetCurrentThread() )
  {
    *(_QWORD *)this = a2;
    ObReferenceObjectByPointer(a2, 3u, ExRawInputManagerObjectType, 1);
    RIMUnlockExclusive(*(_QWORD *)this + 104LL);
  }
  return this;
}
