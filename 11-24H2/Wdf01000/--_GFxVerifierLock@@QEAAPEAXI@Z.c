/*
 * XREFs of ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x14007E7C0
 * Callers:
 *     ??1FxCallbackSpinLock@@UEAA@XZ @ 0x140040708 (--1FxCallbackSpinLock@@UEAA@XZ.c)
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x140040748 (--1FxCallbackMutexLock@@UEAA@XZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081AEC (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x140094868 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 *     ??1FxVerifierLock@@QEAA@XZ @ 0x140083B50 (--1FxVerifierLock@@QEAA@XZ.c)
 */

FxVerifierLock *__fastcall FxVerifierLock::`scalar deleting destructor'(FxVerifierLock *this)
{
  FxVerifierLock::~FxVerifierLock(this);
  FxStump::operator delete(this);
  return this;
}
