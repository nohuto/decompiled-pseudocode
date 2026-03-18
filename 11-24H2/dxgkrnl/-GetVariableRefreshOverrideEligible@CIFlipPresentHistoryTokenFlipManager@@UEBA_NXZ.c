/*
 * XREFs of ?GetVariableRefreshOverrideEligible@CIFlipPresentHistoryTokenFlipManager@@UEBA_NXZ @ 0x14005DD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetVariableRefreshOverrideEligible(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  char v1; // dl
  __int64 v2; // r8

  v1 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 8LL);
  if ( v2 )
    return *(_BYTE *)(v2 + 15) != 0;
  return v1;
}
