/*
 * XREFs of ?GetFlipInterval@CIFlipPresentHistoryTokenFlipManager@@UEBA?BW4D3DDDI_FLIPINTERVAL_TYPE@@XZ @ 0x140041EB0
 * Callers:
 *     ?GetCustomDurationFlipInterval@CIFlipPresentHistoryTokenFlipManager@@UEBA?BW4D3DDDI_FLIPINTERVAL_TYPE@@XZ @ 0x140041E90 (-GetCustomDurationFlipInterval@CIFlipPresentHistoryTokenFlipManager@@UEBA-BW4D3DDDI_FLIPINTERVAL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CIFlipPresentHistoryTokenFlipManager::GetFlipInterval(CIFlipPresentHistoryTokenFlipManager *this)
{
  unsigned int v1; // edx
  __int64 v2; // rax

  v1 = 1;
  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 80LL) + 8LL);
  if ( v2 && (*(_BYTE *)(v2 + 15) || *(_BYTE *)(v2 + 14)) )
    return 0;
  return v1;
}
