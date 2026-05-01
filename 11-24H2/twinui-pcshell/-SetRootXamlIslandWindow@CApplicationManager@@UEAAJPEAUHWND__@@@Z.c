/*
 * XREFs of ?SetRootXamlIslandWindow@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x1802EBB50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801D13C0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 */

__int64 __fastcall CApplicationManager::SetRootXamlIslandWindow(CApplicationManager *this, HWND a2)
{
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  CIAMGlobals::AcquireExclusive((__int64)this, &v5);
  *((_QWORD *)this + 86) = a2;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
  return 0LL;
}
