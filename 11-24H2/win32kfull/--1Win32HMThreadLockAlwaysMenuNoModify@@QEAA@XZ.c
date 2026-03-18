/*
 * XREFs of ??1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ @ 0x1401B1700
 * Callers:
 *     xxxMNStartMenu @ 0x14009A980 (xxxMNStartMenu.c)
 *     xxxDrawMenuBarUnderlines @ 0x1401FF370 (xxxDrawMenuBarUnderlines.c)
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14009D218 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 */

void __fastcall Win32HMThreadLockAlwaysMenuNoModify::~Win32HMThreadLockAlwaysMenuNoModify(
        Win32HMThreadLockAlwaysMenuNoModify *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL);
  *(_DWORD *)(v1 + 40) &= ~0x200u;
  Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(this, v1);
}
