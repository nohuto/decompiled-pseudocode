/*
 * XREFs of _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01BEDAC
 * Callers:
 *     GetDpiDependentMetric @ 0x1C00E91E0 (GetDpiDependentMetric.c)
 *     GetCaptionHeight @ 0x1C00EA380 (GetCaptionHeight.c)
 *     SetTiledRect @ 0x1C00EA538 (SetTiledRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00EA700 (xxxInitSendValidateMinMaxInfoEx.c)
 *     NtUserEnsureDpiDepSysMetCacheForPlateau @ 0x1C01CEDD0 (NtUserEnsureDpiDepSysMetCacheForPlateau.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C00EB0D0 (GetDpiCacheSlot.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01BEE20 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall EnsureDpiDepSysMetCacheForPlateau(unsigned int a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx

  v2 = 0;
  v3 = 120LL * (int)GetDpiCacheSlot(a1) + 2284;
  do
  {
    if ( *(_DWORD *)(v3 + gpsi) == -1 )
      *(_DWORD *)(v3 + gpsi) = ScaleSystemMetricForDPIWithoutCache(v2, a1);
    ++v2;
    v3 += 4LL;
  }
  while ( v2 < 0x1E );
  return 1LL;
}
