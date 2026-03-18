/*
 * XREFs of StopFade @ 0x1C01BC550
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C0020430 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C0021F8C (zzzDwmStartRedirection.c)
 *     xxxSwitchDesktop @ 0x1C002C52C (xxxSwitchDesktop.c)
 *     EditionHandleSonarKeyEvent @ 0x1C008DCD0 (EditionHandleSonarKeyEvent.c)
 *     xxxTooltipWndProc @ 0x1C00D7ED0 (xxxTooltipWndProc.c)
 *     EditionStopSonar @ 0x1C0151AA0 (EditionStopSonar.c)
 *     zzzAnimateFade @ 0x1C01BCB78 (zzzAnimateFade.c)
 *     zzzStartSonar @ 0x1C01BCDFC (zzzStartSonar.c)
 *     MNAnimate @ 0x1C0233B54 (MNAnimate.c)
 * Callees:
 *     GreGetLayout @ 0x1C003CC34 (GreGetLayout.c)
 *     FindTimer @ 0x1C003DA48 (FindTimer.c)
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 *     DeleteFadeSprite @ 0x1C01BC4A0 (DeleteFadeSprite.c)
 */

__int64 StopFade()
{
  __int64 v0; // rax
  unsigned int v1; // ecx
  LONG v2; // edi
  HDC DCEx; // rbx
  LONG v4; // esi
  unsigned __int8 Layout; // al
  __int64 StockObject; // rax
  __int64 result; // rax

  FindTimer(gTermIO[1], 65526LL, 2u, 1, 0LL);
  v0 = DeleteFadeSprite();
  v1 = gfade[12];
  if ( (v1 & 2) == 0 && (v1 & 1) != 0 )
  {
    if ( v0 )
    {
      v2 = 0;
      DCEx = (HDC)_GetDCEx(v0, 0LL, 3LL);
      v4 = 0;
    }
    else
    {
      v2 = gfade[6];
      v4 = gfade[7];
      DCEx = *(HDC *)(gpDispInfo + 56LL);
    }
    Layout = GreGetLayout(DCEx);
    NtGdiBitBltInternal(
      (__int64)DCEx,
      v2,
      v4,
      gfade[8],
      gfade[9],
      *(HDC *)&gfade[2],
      0,
      0,
      (Layout << 31) + 13369376,
      0,
      0);
    _ReleaseDC(DCEx);
  }
  StockObject = GreGetStockObject(21LL);
  GreSelectBitmap(*(_QWORD *)&gfade[2], StockObject);
  GreCleanDC(*(_QWORD *)&gfade[2]);
  GreSetDCOwnerEx(*(_QWORD *)&gfade[2], 0LL, 0LL, 1LL);
  GreDeleteObject(*(_QWORD *)&gfade[4]);
  *(_QWORD *)&gfade[4] = 0LL;
  result = *(_QWORD *)gfade;
  gfade[12] = 0;
  return result;
}
