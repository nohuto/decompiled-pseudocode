/*
 * XREFs of DesktopAlloc @ 0x140072EC0
 * Callers:
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14003EBCC (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1400726F0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     DefSetText @ 0x140073730 (DefSetText.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x140073BE8 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1401E4EC8 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x140269110 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     _InitPwSB @ 0x1402E8494 (_InitPwSB.c)
 * Callees:
 *     DesktopAllocInternal @ 0x1400B6320 (DesktopAllocInternal.c)
 */

__int64 __fastcall DesktopAlloc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  _DWORD *v9; // rcx

  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
    return 0LL;
  LOBYTE(a4) = 1;
  v7 = DesktopAllocInternal(a1, a2, a3, a4);
  if ( !v7 )
  {
    v9 = *(_DWORD **)(W32GetUserSessionState(v6, v5) + 19928);
    if ( (*v9 & 0x100) != 0 )
    {
      _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v9, v8) + 19928), 0xFFFFFEFF);
      UserLogError(2147483891LL);
    }
  }
  return v7;
}
