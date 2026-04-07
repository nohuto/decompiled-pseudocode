/*
 * XREFs of ?DestroyRootVisualForDesktop@CWindowList@@AEAAXPEAUCDesktop@@@Z @ 0x1800EF1FC
 * Callers:
 *     ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z @ 0x1800EEE78 (-DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceProxy@@PEBUtagRECT@@@Z @ 0x180077090 (-SetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceProxy@@PEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

void __fastcall CWindowList::DestroyRootVisualForDesktop(CWindowList *this, struct CDesktop *a2)
{
  CVisualProxy **v3; // rcx
  int v4; // eax
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v10; // [rsp+38h] [rbp-20h] BYREF

  if ( *((_QWORD *)a2 + 3) )
  {
    v9 = 0LL;
    GetDesktopID(2LL, &v9);
    if ( *(_QWORD *)a2 == v9 )
    {
      v3 = (CVisualProxy **)*((_QWORD *)a2 + 3);
      v10 = 0LL;
      v4 = CVisual::SetBlurredWallpaperSurface(v3, 0LL, &v10);
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x886u, 0LL);
    }
    CBaseObject::Release(*((CBaseObject **)a2 + 3));
  }
  v5 = (CBaseObject *)*((_QWORD *)a2 + 1);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)a2 + 2);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)a2 + 6);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject *)*((_QWORD *)a2 + 7);
  if ( v8 )
    CBaseObject::Release(v8);
}
