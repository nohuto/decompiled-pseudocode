/*
 * XREFs of ?BroadcastDVRComponent_OnGameBarInitCompleteTask@GameDVRTraceProvider@@SAXPEAXI@Z @ 0x180316074
 * Callers:
 *     ?OnGameBarInitCompleteTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@K@Z @ 0x180317F08 (-OnGameBarInitCompleteTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@K@Z.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x18005BF0C (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x18005C074 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x18005C194 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$Shell_BroadcastDVRComponent_OnGameBarInitCompleteTask@AEAPEAXAEAI@GameDVRTraceProvider@@SAXAEAPEAXAEAI@Z @ 0x180313DDC (--$Shell_BroadcastDVRComponent_OnGameBarInitCompleteTask@AEAPEAXAEAI@GameDVRTraceProvider@@SAXAE.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_OnGameBarInitCompleteTask(void *a1, int a2)
{
  __int64 v4; // [rsp+38h] [rbp-C8h]
  __int64 v5; // [rsp+40h] [rbp-C0h] BYREF
  void *v6; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t OutputString[1024]; // [rsp+50h] [rbp-B0h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+850h] [rbp+750h] BYREF
  size_t cchDest; // [rsp+858h] [rbp+758h] BYREF

  v6 = a1;
  LODWORD(v5) = a2;
  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "BroadcastDVRComponent_OnGameBarInitCompleteTask");
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=0x%I64x ", "hWnd", a1, v5, v6);
  LODWORD(v4) = a2;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%u ", "GamePanelPid", v4);
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_OnGameBarInitCompleteTask<void * &,unsigned int &>(
    (__int64 *)&v6,
    (int *)&v5);
}
