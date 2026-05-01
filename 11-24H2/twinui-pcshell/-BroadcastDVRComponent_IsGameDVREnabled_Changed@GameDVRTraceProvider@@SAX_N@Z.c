/*
 * XREFs of ?BroadcastDVRComponent_IsGameDVREnabled_Changed@GameDVRTraceProvider@@SAX_N@Z @ 0x180057EB4
 * Callers:
 *     _lambda_2dbad27d1cbd48c28fba7ea818d34463_::operator() @ 0x180057D8C (_lambda_2dbad27d1cbd48c28fba7ea818d34463_--operator().c)
 * Callees:
 *     ??$Shell_BroadcastDVRComponent_IsGameDVREnabled_Changed@AEA_N@GameDVRTraceProvider@@SAXAEA_N@Z @ 0x1800584CC (--$Shell_BroadcastDVRComponent_IsGameDVREnabled_Changed@AEA_N@GameDVRTraceProvider@@SAXAEA_N@Z.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x18005BF0C (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x18005C074 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x18005C194 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_IsGameDVREnabled_Changed(unsigned __int8 a1)
{
  int v1; // ebx
  int v2; // [rsp+38h] [rbp-840h]
  __int64 v3; // [rsp+40h] [rbp-838h] BYREF
  wchar_t OutputString[1024]; // [rsp+50h] [rbp-828h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+850h] [rbp-28h] BYREF
  size_t cchDest; // [rsp+858h] [rbp-20h] BYREF

  v1 = a1;
  LOBYTE(v3) = a1;
  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "BroadcastDVRComponent_IsGameDVREnabled_Changed");
  v2 = v1;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%d ", "fGameDVREnabled", v2, v3);
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_IsGameDVREnabled_Changed<bool &>(&v3);
}
