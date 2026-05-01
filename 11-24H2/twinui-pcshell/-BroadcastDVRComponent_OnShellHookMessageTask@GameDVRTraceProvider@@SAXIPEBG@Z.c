/*
 * XREFs of ?BroadcastDVRComponent_OnShellHookMessageTask@GameDVRTraceProvider@@SAXIPEBG@Z @ 0x18031618C
 * Callers:
 *     ?OnShellHookMessageTask@BroadcastDVRComponent@@AEAAXF@Z @ 0x180318350 (-OnShellHookMessageTask@BroadcastDVRComponent@@AEAAXF@Z.c)
 * Callees:
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x18005BF0C (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x18005C074 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x18005C194 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$Shell_BroadcastDVRComponent_OnShellHookMessageTask@AEAIAEAPEBG@GameDVRTraceProvider@@SAXAEAIAEAPEBG@Z @ 0x180313E40 (--$Shell_BroadcastDVRComponent_OnShellHookMessageTask@AEAIAEAPEBG@GameDVRTraceProvider@@SAXAEAIA.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_OnShellHookMessageTask(int a1, const unsigned __int16 *a2)
{
  int v4; // [rsp+38h] [rbp-C8h]
  __int64 v5; // [rsp+40h] [rbp-C0h] BYREF
  const WCHAR *v6; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t OutputString[1024]; // [rsp+50h] [rbp-B0h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+850h] [rbp+750h] BYREF
  size_t cchDest; // [rsp+858h] [rbp+758h] BYREF

  LODWORD(v5) = a1;
  v6 = a2;
  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "BroadcastDVRComponent_OnShellHookMessageTask");
  v4 = a1;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%u ", "command", v4, v5, v6);
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=\"%s\" ", "CommandString", a2);
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_OnShellHookMessageTask<unsigned int &,unsigned short const * &>(
    (int *)&v5,
    &v6);
}
