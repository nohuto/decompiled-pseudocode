/*
 * XREFs of ?GetForegroundApplication@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1802B11C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetForegroundApplicationNoLock@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180224AC8 (-_GetForegroundApplicationNoLock@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetForegroundApplication(
        CApplicationManager *this,
        struct IImmersiveApplication **a2)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned int ForegroundApplicationNoLock; // edi

  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  ForegroundApplicationNoLock = CApplicationManager::_GetForegroundApplicationNoLock(
                                  (CApplicationManager *)((char *)this - 152),
                                  a2);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return ForegroundApplicationNoLock;
}
