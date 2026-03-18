/*
 * XREFs of ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C02651C0
 * Callers:
 *     NtGdiDdCreateFullscreenSprite @ 0x1C026F780 (NtGdiDdCreateFullscreenSprite.c)
 * Callees:
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00209B4 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     GreDeleteSprite @ 0x1C00267F8 (GreDeleteSprite.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0026CC4 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C005ADCC (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00AA9F0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     GreCreateSprite @ 0x1C00AB61C (GreCreateSprite.c)
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00B4A3C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     GreUpdateSprite @ 0x1C00B7164 (GreUpdateSprite.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C24 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C70 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00C5F04 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C834 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1C0131088 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C01340F4 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C013DCB0 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpDdCreateFullscreenSprite(HDC a1, unsigned int a2, void **a3, HDC *a4)
{
  HDC *v4; // r12
  void **v5; // r15
  int v6; // ebx
  HSPRITE v7; // r14
  __int64 DisplayDC; // rsi
  __int64 v10; // rdi
  Gre::Base *v11; // rcx
  __int64 v12; // rcx
  HDEV HDEV; // r13
  struct PDEVOBJ *v14; // rdx
  Gre::Base *v15; // rcx
  int v16; // eax
  HSPRITE v17; // rax
  __int64 v18; // r8
  struct DWMSPRITE *v19; // r12
  struct SFMLOGICALSURFACE *v20; // r15
  struct _SURFOBJ *v21; // rdx
  BOOL (__stdcall *v22)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r10
  unsigned int v23; // edi
  struct Gre::Base::SESSION_GLOBALS *v24; // rdi
  _BYTE v25[4]; // [rsp+80h] [rbp-1A8h] BYREF
  _BYTE v26[4]; // [rsp+84h] [rbp-1A4h] BYREF
  struct tagSIZE v27; // [rsp+88h] [rbp-1A0h] BYREF
  HDC *v28; // [rsp+90h] [rbp-198h]
  __int64 v29; // [rsp+98h] [rbp-190h] BYREF
  unsigned int v30; // [rsp+A0h] [rbp-188h]
  void **v31; // [rsp+A8h] [rbp-180h]
  struct Gre::Base::SESSION_GLOBALS *v32; // [rsp+B0h] [rbp-178h]
  HDEV v33; // [rsp+B8h] [rbp-170h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-168h] BYREF
  struct SFMLOGICALSURFACE *v35; // [rsp+C8h] [rbp-160h] BYREF
  _QWORD v36[2]; // [rsp+D0h] [rbp-158h] BYREF
  __int128 v37; // [rsp+E0h] [rbp-148h] BYREF
  __int64 v38; // [rsp+F0h] [rbp-138h]
  _BYTE v39[32]; // [rsp+F8h] [rbp-130h] BYREF
  struct DWMSPRITE *v40; // [rsp+118h] [rbp-110h]
  _QWORD v41[6]; // [rsp+120h] [rbp-108h] BYREF
  _BYTE v42[112]; // [rsp+150h] [rbp-D8h] BYREF
  struct tagRECT v43; // [rsp+1C0h] [rbp-68h] BYREF
  _QWORD v44[2]; // [rsp+1D0h] [rbp-58h] BYREF

  v4 = a4;
  v28 = a4;
  v5 = a3;
  v31 = a3;
  v30 = a2;
  v6 = -1073741811;
  DCOBJ::DCOBJ((DCOBJ *)v41, a1);
  v7 = 0LL;
  DisplayDC = 0LL;
  if ( !v41[0] )
    goto LABEL_2;
  v10 = *(_QWORD *)(v41[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v25);
  v32 = Gre::Base::Globals(v11);
  v34 = *((_QWORD *)v32 + 15);
  GreAcquireSemaphore(v34);
  HDEV = (HDEV)UserGetHDEV(v12);
  v33 = HDEV;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v26, v14, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v32 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v32 + 9), 7LL);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v42, (struct PDEVOBJ *)&v33);
  if ( HDEV && ((_DWORD)HDEV[10] & 0x400) == 0 )
  {
    v6 = -1073741801;
    if ( !IsDwmActive(v15) )
    {
      v6 = -1073741637;
LABEL_26:
      if ( v7 )
      {
        GreDeleteSprite((Gre::Base *)HDEV, 0LL, v7, 1);
        v7 = 0LL;
      }
      if ( DisplayDC )
      {
        GreDeleteDC(DisplayDC);
        DisplayDC = 0LL;
      }
      goto LABEL_30;
    }
    v29 = v10;
    if ( v10 )
    {
      v16 = *(_DWORD *)(v10 + 40);
      if ( (v16 & 0x400) == 0 && (v16 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v29) )
        {
          v43.left = *(_DWORD *)(v10 + 2560);
          v43.top = *(_DWORD *)(v10 + 2564);
          v43.right = v43.left + *(_DWORD *)(*(_QWORD *)(v10 + 2568) + 172LL);
          v43.bottom = v43.top + *(_DWORD *)(*(_QWORD *)(v10 + 2568) + 176LL);
          v17 = (HSPRITE)GreCreateSprite((Gre::Base *)HDEV, 0LL, &v43, 0LL, 0x9900u, 1, 0, 0, 0, 0, 0LL);
          v7 = v17;
          if ( v17 )
          {
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v39, 0LL, v17);
            v19 = v40;
            if ( v40 )
            {
              v35 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v40 + 18);
              v20 = v35;
              vSpDwmUpdateSpriteVisibility(v40, 0LL, v18);
              v27 = *(struct tagSIZE *)(*(_QWORD *)(v10 + 2568) + 172LL);
              if ( (unsigned int)bSpDwmCreateLogicalSurface(HDEV, v19, v20, &v27, &v35) )
              {
                v21 = (struct _SURFOBJ *)*((_QWORD *)v20 + 23);
                v36[0] = 0LL;
                SURFREFVIEW::bMap((SURFREFVIEW *)v36, v21);
                v44[0] = 0LL;
                v44[1] = v27;
                v29 = 0LL;
                v37 = 0LL;
                v38 = 0LL;
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v33) )
                {
                  v22 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))RedirBitBlt;
                }
                else if ( (*(_DWORD *)(*((_QWORD *)v20 + 23) + 88LL) & 1) != 0 )
                {
                  v22 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)HDEV + 351);
                }
                else
                {
                  v22 = EngBitBlt;
                }
                v23 = v30;
                LODWORD(v37) = v30 & 0xFFFFFF;
                LODWORD(v38) = 0;
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD *, __int64 *, _QWORD, __int128 *, _QWORD, int))v22)(
                  *((_QWORD *)v20 + 23),
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  v44,
                  &v29,
                  0LL,
                  &v37,
                  0LL,
                  61680);
                GreUpdateSprite(HDEV, 0LL, v7, 0LL, 0LL, 0LL, 0LL, 0LL, v23, 0LL, 0x20400001u, &v43, 0LL, 1, 0, 0);
                DisplayDC = GreCreateDisplayDC(HDEV, 1LL);
                if ( DisplayDC )
                {
                  *(_DWORD *)(*((_QWORD *)v20 + 23) + 88LL) |= 0x4000000u;
                  GreSelectBitmap(DisplayDC, *(_QWORD *)(*((_QWORD *)v20 + 23) + 8LL));
                  v6 = 0;
                }
                SURFREFVIEW::bUnMap((SURFREFVIEW *)v36);
              }
              DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v39);
              v5 = v31;
            }
            else
            {
              DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v39);
            }
            v4 = v28;
          }
        }
      }
    }
  }
  if ( v6 < 0 )
    goto LABEL_26;
LABEL_30:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v42);
  v24 = v32;
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v24 + 9));
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (void **)MmUserProbeAddress;
  *v5 = v7;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (HDC *)MmUserProbeAddress;
  *v4 = (HDC)DisplayDC;
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v26);
  SEMOBJ::vUnlock((SEMOBJ *)&v34);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v25);
LABEL_2:
  DCOBJ::~DCOBJ((DCOBJ *)v41);
  return (unsigned int)v6;
}
