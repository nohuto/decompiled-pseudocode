/*
 * XREFs of _EnsureDpiDepSysMetCacheForPlateau @ 0x140227310
 * Callers:
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     NtUserEnsureDpiDepSysMetCacheForPlateau @ 0x1402272D0 (NtUserEnsureDpiDepSysMetCacheForPlateau.c)
 * Callees:
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x14007AED4 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     Feature_DpiMetricsFixes__private_IsEnabledDeviceUsageNoInline @ 0x140287708 (Feature_DpiMetricsFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     GetDpiCacheIndex @ 0x1402F160C (GetDpiCacheIndex.c)
 */

__int64 __fastcall EnsureDpiDepSysMetCacheForPlateau(__int64 a1)
{
  unsigned __int16 v1; // bp
  __int64 DpiCacheIndex; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v1 = a1;
  DpiCacheIndex = (int)GetDpiCacheIndex(a1);
  v5 = 0;
  if ( (unsigned int)Feature_DpiMetricsFixes__private_IsEnabledDeviceUsageNoInline() && (_DWORD)DpiCacheIndex == -1 )
    return 0LL;
  v7 = 120 * DpiCacheIndex + 2284;
  do
  {
    v4 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19928);
    if ( *(_DWORD *)(v7 + v4) == -1 )
    {
      v8 = ScaleSystemMetricForDPIWithoutCache(v5, v1);
      v4 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19928);
      *(_DWORD *)(v7 + v4) = v8;
    }
    ++v5;
    v7 += 4LL;
  }
  while ( v5 < 0x1E );
  return 1LL;
}
