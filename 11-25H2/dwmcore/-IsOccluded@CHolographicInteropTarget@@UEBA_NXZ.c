/*
 * XREFs of ?IsOccluded@CHolographicInteropTarget@@UEBA_NXZ @ 0x1802D9800
 * Callers:
 *     ?CheckOcclusionState@CHolographicInteropTarget@@UEAAJ_N@Z @ 0x180280CD0 (-CheckOcclusionState@CHolographicInteropTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?IsInStandby@CHolographicManager@@QEAA_NXZ @ 0x1802D8BF8 (-IsInStandby@CHolographicManager@@QEAA_NXZ.c)
 */

char __fastcall CHolographicInteropTarget::IsOccluded(CHolographicInteropTarget *this)
{
  CHolographicManager *v1; // rcx
  char v2; // r8

  v1 = (CHolographicManager *)*((_QWORD *)this + 3);
  if ( !v1 || CHolographicManager::IsInStandby(v1) )
    return 1;
  return v2;
}
