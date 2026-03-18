/*
 * XREFs of ?IsDockTargetActive@@YAEPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1402A5FA0
 * Callers:
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1402A6F48 (-VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTIO.c)
 * Callees:
 *     ?IsDockTargetActive@WindowArrangement@@YA_NW4THRESHOLD_SELECTOR@@W4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1402DC8AC (-IsDockTargetActive@WindowArrangement@@YA_NW4THRESHOLD_SELECTOR@@W4THRESHOLD_MARGIN_DIRECTION@@@.c)
 */

char __fastcall IsDockTargetActive(__int64 a1)
{
  char v1; // bl

  if ( (*(_DWORD *)(a1 + 200) & 0x8000) == 0 )
    return WindowArrangement::IsDockTargetActive(6LL);
  if ( !(unsigned __int8)WindowArrangement::IsDockTargetActive(0LL) )
    return 0;
  v1 = 1;
  if ( !(unsigned __int8)WindowArrangement::IsDockTargetActive(1LL) )
    return 0;
  return v1;
}
