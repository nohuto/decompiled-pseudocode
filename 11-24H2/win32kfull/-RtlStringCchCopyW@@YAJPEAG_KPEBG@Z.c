/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14012C7E0
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?GetCurrentWallpaperSettings@@YAXPEAU_UNICODE_STRING@@PEAUtagWALLPAPERSETTINGS@@@Z @ 0x14012B004 (-GetCurrentWallpaperSettings@@YAXPEAU_UNICODE_STRING@@PEAUtagWALLPAPERSETTINGS@@@Z.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x14012B2FC (LoadWallpaperFilenameFromRegistry.c)
 *     NtUserShutdownBlockReasonCreate @ 0x14012B7F0 (NtUserShutdownBlockReasonCreate.c)
 *     ?xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z @ 0x14012BB24 (-xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x14012C608 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     NtUserGetDManipHookInitFunction @ 0x14012C720 (NtUserGetDManipHookInitFunction.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x14012C9E4 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1401C1DF0 (NtUserShutdownBlockReasonQuery.c)
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x14020A840 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 *     _RegisterDManipHook @ 0x14021A630 (_RegisterDManipHook.c)
 *     _UnregisterClass @ 0x14023A7F8 (_UnregisterClass.c)
 *     _RegisterUserApiHook @ 0x140284A8C (_RegisterUserApiHook.c)
 *     _GetWOWClass @ 0x140285CA4 (_GetWOWClass.c)
 *     UserGetHipDeviceInfo @ 0x14028B8F0 (UserGetHipDeviceInfo.c)
 *     _SetDisplayMapping @ 0x14028BCD8 (_SetDisplayMapping.c)
 *     ?SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x14028FC5C (-SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     NtUserFindExistingCursorIcon @ 0x140294EB0 (NtUserFindExistingCursorIcon.c)
 *     NtUserFindWindowEx @ 0x140295160 (NtUserFindWindowEx.c)
 *     NtUserRegisterWindowMessage @ 0x14029B900 (NtUserRegisterWindowMessage.c)
 *     ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1402B5B5C (-GetDefaultWallpaperName@@YAXPEAGI@Z.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1402B6B8C (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140330538 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyW(char *a1, __int64 a2, char *a3)
{
  __int64 v3; // r9
  signed __int64 v4; // r8
  unsigned __int16 v5; // ax
  unsigned __int16 *v6; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( a2 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    v3 = 2147483646 - a2;
    v4 = a3 - a1;
    do
    {
      if ( !(v3 + a2) )
        break;
      v5 = *(_WORD *)&a1[v4];
      if ( !v5 )
        break;
      *(_WORD *)a1 = v5;
      a1 += 2;
      --a2;
    }
    while ( a2 );
    v6 = (unsigned __int16 *)(a1 - 2);
    if ( a2 )
      v6 = (unsigned __int16 *)a1;
    *v6 = 0;
    result = 2147483653LL;
    if ( a2 )
      return 0LL;
  }
  return result;
}
