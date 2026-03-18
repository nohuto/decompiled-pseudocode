/*
 * XREFs of ?GetCustomDuration@CIFlipPresentHistoryTokenFlipManager@@UEBA?BIXZ @ 0x14004FC90
 * Callers:
 *     ?GetUseCustomDuration@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ @ 0x14004FC70 (-GetUseCustomDuration@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CIFlipPresentHistoryTokenFlipManager::GetCustomDuration(CIFlipPresentHistoryTokenFlipManager *this)
{
  unsigned int v1; // edx
  unsigned int *v2; // rax

  v1 = 0;
  v2 = *(unsigned int **)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 8LL);
  if ( v2 )
    return *v2;
  return v1;
}
