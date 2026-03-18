/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003B918
 * Callers:
 *     _RegisterUserApiHook @ 0x1C003AC64 (_RegisterUserApiHook.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C003B0B0 (NtUserShutdownBlockReasonCreate.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C003B2E8 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     NtUserGetDManipHookInitFunction @ 0x1C003B400 (NtUserGetDManipHookInitFunction.c)
 *     NtUserFindWindowEx @ 0x1C003B4B0 (NtUserFindWindowEx.c)
 *     xxxSetDeskWallpaper @ 0x1C0062778 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C0062AC0 (LoadWallpaperFilenameFromRegistry.c)
 *     _RegisterDManipHook @ 0x1C0084750 (_RegisterDManipHook.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C0097320 (NtUserShutdownBlockReasonQuery.c)
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C00A35C0 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 *     _GetWOWClass @ 0x1C01BD988 (_GetWOWClass.c)
 *     UserGetHipDeviceInfo @ 0x1C01C2C50 (UserGetHipDeviceInfo.c)
 *     _SetDisplayMapping @ 0x1C01C3080 (_SetDisplayMapping.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01C73BC (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C0200444 (-GetDefaultWallpaperName@@YAXPEAGI@Z.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C0202484 (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     xxxSendShutdownData @ 0x1C0212F48 (xxxSendShutdownData.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A6D58 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02CE09C (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C003B940 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __fastcall RtlStringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  NTSTATUS result; // eax
  size_t v4; // [rsp+20h] [rbp-18h]

  if ( a2 - 1 <= 0x7FFFFFFE )
    return RtlStringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v4);
  result = -1073741811;
  if ( a2 )
    *a1 = 0;
  return result;
}
