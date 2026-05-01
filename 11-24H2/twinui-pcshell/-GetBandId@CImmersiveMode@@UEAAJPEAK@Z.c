/*
 * XREFs of ?GetBandId@CImmersiveMode@@UEAAJPEAK@Z @ 0x1802F1770
 * Callers:
 *     ?GetBandId@CImmersiveMode@@WBI@EAAJPEAK@Z @ 0x1802F17D0 (-GetBandId@CImmersiveMode@@WBI@EAAJPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveMode::GetBandId(CImmersiveMode *this, unsigned int *a2)
{
  RTL_SRWLOCK *v4; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  *a2 = *((_DWORD *)this + 40);
  ReleaseSRWLockShared(v4);
  return 0LL;
}
