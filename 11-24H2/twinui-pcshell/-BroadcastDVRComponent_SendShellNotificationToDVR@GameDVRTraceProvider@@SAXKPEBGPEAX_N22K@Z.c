/*
 * XREFs of ?BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z @ 0x180059A30
 * Callers:
 *     ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800597E8 (-SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture.c)
 * Callees:
 *     ??$Shell_BroadcastDVRComponent_SendShellNotificationToDVR@AEAKAEAPEBGAEAPEAXAEA_NAEA_NAEA_NAEAK@GameDVRTraceProvider@@SAXAEAKAEAPEBGAEAPEAXAEA_N330@Z @ 0x180059EF8 (--$Shell_BroadcastDVRComponent_SendShellNotificationToDVR@AEAKAEAPEBGAEAPEAXAEA_NAEA_NAEA_NAEAK@.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x18005BF0C (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ??0GameDVR_OutputDebug@@QEAA@PEBD@Z @ 0x18005C074 (--0GameDVR_OutputDebug@@QEAA@PEBD@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x18005C194 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall GameDVRTraceProvider::BroadcastDVRComponent_SendShellNotificationToDVR(
        int a1,
        const unsigned __int16 *a2,
        void *a3,
        unsigned __int8 a4,
        bool a5,
        bool a6,
        unsigned int a7)
{
  int v7; // r14d
  int v11; // [rsp+38h] [rbp-C8h]
  __int64 v12; // [rsp+38h] [rbp-C8h]
  __int64 v13; // [rsp+38h] [rbp-C8h]
  __int64 v14; // [rsp+38h] [rbp-C8h]
  __int64 v15; // [rsp+38h] [rbp-C8h]
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  void *v18; // [rsp+50h] [rbp-B0h] BYREF
  const unsigned __int16 *v19; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t OutputString[1024]; // [rsp+60h] [rbp-A0h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+860h] [rbp+760h] BYREF
  size_t cchDest; // [rsp+868h] [rbp+768h] BYREF

  v7 = a4;
  LODWORD(v17) = a1;
  v19 = a2;
  LOBYTE(v16) = a4;
  v18 = a3;
  GameDVR_OutputDebug::GameDVR_OutputDebug(OutputString, "BroadcastDVRComponent_SendShellNotificationToDVR");
  v11 = a1;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%u ", "notificationType", v11, v16, v17, v18, v19);
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=\"%s\" ", "pwszNotificationType", a2);
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=0x%I64x ", "hWnd", a3);
  LODWORD(v12) = v7;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%d ", "fIsGame", v12);
  LODWORD(v13) = a5;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%d ", "fLaunchOverlay", v13);
  LODWORD(v14) = a6;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%d ", "fSendNotificationToDVR", v14);
  LODWORD(v15) = a7;
  StringCchPrintfExW(pszDest, cchDest, &pszDest, &cchDest, 0, L"%S=%u ", "dwAppNotificationFlags", v15);
  GameDVR_OutputDebug::OutputString(OutputString);
  GameDVRTraceProvider::Shell_BroadcastDVRComponent_SendShellNotificationToDVR<unsigned long &,unsigned short const * &,void * &,bool &,bool &,bool &,unsigned long &>(
    (unsigned int)&v17,
    (unsigned int)&v19,
    (unsigned int)&v18,
    (unsigned int)&v16,
    (__int64)&a5,
    (__int64)&a6,
    (__int64)&a7);
}
