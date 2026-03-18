/*
 * XREFs of GreDeleteObject @ 0x140010390
 * Callers:
 *     DeleteMaybeSpecialRgn @ 0x14000F440 (DeleteMaybeSpecialRgn.c)
 *     UserSetDCVisRgn @ 0x14000F460 (UserSetDCVisRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x140010DA0 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400A2D78 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     UserValidateCopyRgn @ 0x140113380 (UserValidateCopyRgn.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x140144088 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x14014B9F0 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     CleanupGDI @ 0x140165F88 (CleanupGDI.c)
 *     DestroyCacheDC @ 0x1401689F0 (DestroyCacheDC.c)
 *     bInitBRUSHOBJ @ 0x1402E409C (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeleteFont @ 0x140010D54 (bDeleteFont.c)
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     bDeleteRegion @ 0x14002C420 (bDeleteRegion.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x140035800 (--1EPALOBJ@@QEAA@XZ.c)
 *     bDeleteSurface @ 0x1400365C0 (bDeleteSurface.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400E8C68 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400EC06C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1401C256C (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreDeleteObject(HRGN a1)
{
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // edi
  int (*v9)(void); // rax
  __int64 SessionState; // rax
  unsigned int v11; // esi
  HSEMAPHORE v12; // rbx
  struct _GRETHREAD *v13; // rax
  bool v14; // zf
  HSEMAPHORE v15; // rbx
  struct _GRETHREAD *v16; // rax
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF
  HSEMAPHORE v18; // [rsp+38h] [rbp+10h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v2 = (((unsigned int)a1 >> 16) & 0x1F) - 1;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 3;
  if ( !v3 )
    return bDeleteRegion(a1);
  v5 = v3 - 1;
  if ( !v5 )
    return bDeleteSurface(a1);
  v6 = v5 - 3;
  if ( v6 )
  {
    v7 = v6 - 2;
    if ( !v7 )
    {
      v8 = 0;
      v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 584LL);
      if ( v9 )
      {
        if ( v9() >= 0 )
          return (unsigned int)bDeleteFont(a1, 0LL);
      }
      return v8;
    }
    if ( v7 == 6 )
      return bDeleteBrush((HBRUSH)a1);
    return 0LL;
  }
  SessionState = W32GetSessionState();
  SEMOBJ<13>::SEMOBJ<13>(&v18, *(_QWORD *)(SessionState + 88));
  EPALOBJ::EPALOBJ((EPALOBJ *)&v17, (HPALETTE)a1);
  if ( !v17 || (*(_DWORD *)(v17 + 24) & 0x1000000) != 0 )
  {
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v17);
    v15 = v18;
    if ( v18 )
    {
      EtwTraceGreLockReleaseSemaphore(L"Palette", v18);
      v16 = GreGetCurrentThreadCrossSessionCheck();
      if ( v16 )
      {
        v14 = (*((_BYTE *)v16 + 21))-- == 1;
        if ( v14 )
          *(_QWORD *)v16 &= ~0x2000uLL;
      }
      GreReleaseSemaphoreSharedInternal(v15);
    }
    return 0LL;
  }
  v11 = XEPALOBJ::bDeletePalette(&v17, 0LL);
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v17);
  v12 = v18;
  if ( v18 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Palette", v18);
    v13 = GreGetCurrentThreadCrossSessionCheck();
    if ( v13 )
    {
      v14 = (*((_BYTE *)v13 + 21))-- == 1;
      if ( v14 )
        *(_QWORD *)v13 &= ~0x2000uLL;
    }
    GreReleaseSemaphoreSharedInternal(v12);
  }
  return v11;
}
