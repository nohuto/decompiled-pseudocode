/*
 * XREFs of ?BroadcastDVRComponent_DisplayStateChangeWNFCallback@GameDVRTraceProvider@@SAXK@Z @ 0x180315CE4
 * Callers:
 *     ?DisplayStateChangeWNFCallback@BroadcastDVRComponent@@AEAAXPEBU_NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION@@@Z @ 0x180316708 (-DisplayStateChangeWNFCallback@BroadcastDVRComponent@@AEAAXPEBU_NETWORK_DISPLAY_STATE_CHANGE_NOT.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x18005BF0C (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x18005C074 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x18005C194 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$Shell_BroadcastDVRComponent_DisplayStateChangeWNFCallback@AEAK@GameDVRTraceProvider@@SAXAEAK@Z @ 0x180313C8C (--$Shell_BroadcastDVRComponent_DisplayStateChangeWNFCallback@AEAK@GameDVRTraceProvider@@SAXAEAK@.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_DisplayStateChangeWNFCallback(int a1)
{
  int v2; // [rsp+38h] [rbp-840h]
  int v3[4]; // [rsp+40h] [rbp-838h] BYREF
  wchar_t OutputString[1024]; // [rsp+50h] [rbp-828h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+850h] [rbp-28h] BYREF
  size_t cchDest; // [rsp+858h] [rbp-20h] BYREF

  v3[0] = a1;
  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "BroadcastDVRComponent_DisplayStateChangeWNFCallback");
  v2 = a1;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%u ", "MiracastDeviceState", v2, *(_QWORD *)v3);
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_DisplayStateChangeWNFCallback<unsigned long &>(v3);
}
