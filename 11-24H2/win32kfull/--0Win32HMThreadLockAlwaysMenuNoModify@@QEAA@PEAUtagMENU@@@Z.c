/*
 * XREFs of ??0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagMENU@@@Z @ 0x1401E0D78
 * Callers:
 *     xxxMNStartMenu @ 0x14009A980 (xxxMNStartMenu.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagTHREADINFO@@PEAUtagMENU@@@Z @ 0x1401E0DB0 (--0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagTHREADINFO@@PEAUtagMENU@@@Z.c)
 */

Win32HMThreadLockAlwaysMenuNoModify *__fastcall Win32HMThreadLockAlwaysMenuNoModify::Win32HMThreadLockAlwaysMenuNoModify(
        Win32HMThreadLockAlwaysMenuNoModify *this,
        struct tagMENU *a2)
{
  struct tagTHREADINFO *v4; // rax

  v4 = PtiCurrent((__int64)this, (__int64)a2);
  Win32HMThreadLockAlwaysMenuNoModify::Win32HMThreadLockAlwaysMenuNoModify(this, v4, a2);
  return this;
}
