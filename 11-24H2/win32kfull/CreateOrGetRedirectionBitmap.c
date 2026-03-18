/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x14002CDD0
 * Callers:
 *     RecreateRedirectionBitmap @ 0x140039394 (RecreateRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x1400B67B4 (SetRedirectedWindow.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402B3404 (-zzzDwmStartRedirection@@YAJXZ.c)
 * Callees:
 *     ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x140013C4C (-GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140023E24 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x140027730 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     GreReferenceObject @ 0x14002C9F4 (GreReferenceObject.c)
 *     GreDereferenceObject @ 0x14002CCA4 (GreDereferenceObject.c)
 *     GreSetBitmapContentOwner @ 0x14002D374 (GreSetBitmapContentOwner.c)
 *     GreSetRedirection @ 0x14002D4E8 (GreSetRedirection.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x140062CF0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x140062D4C (--1-$SEMOBJEXORSHARED@$06@@QEAA@XZ.c)
 *     IsWindowContentProtected @ 0x1400631DC (IsWindowContentProtected.c)
 *     IsDesktopWindow @ 0x140075580 (IsDesktopWindow.c)
 *     DesktopFromDesktopWindow @ 0x1401035EC (DesktopFromDesktopWindow.c)
 *     GreGetDxSharedSurface @ 0x14015E6B0 (GreGetDxSharedSurface.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x140213F7C (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 *     ?GetDisplayAdapterLuidForMonitor@@YAHPEAUtagWND@@PEAU_LUID@@@Z @ 0x140285088 (-GetDisplayAdapterLuidForMonitor@@YAHPEAUtagWND@@PEAU_LUID@@@Z.c)
 */

__int64 __fastcall CreateOrGetRedirectionBitmap(struct tagWND *a1, int a2, int a3, HSURF *a4)
{
  int v4; // edi
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // r14d
  _DWORD *v9; // rdx
  unsigned int v10; // ebx
  unsigned int v11; // r15d
  __int64 UserSessionState; // rax
  HSURF v13; // rbx
  struct tagWND *TopLevelWindow; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  HWND v18; // r13
  int v19; // r12d
  BOOL v20; // r15d
  int v21; // ebx
  Gre::Base *v22; // rcx
  Gre::Base *v23; // rcx
  Gre::Base *v24; // rcx
  __int64 i; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct _METASPRITE *MetaSprite; // rax
  struct Gre::Base::SESSION_GLOBALS *v29; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C8h] BYREF
  struct _LUID v31; // [rsp+48h] [rbp-C0h] BYREF
  char v32[8]; // [rsp+50h] [rbp-B8h] BYREF
  char v33; // [rsp+58h] [rbp-B0h] BYREF
  char v34[8]; // [rsp+60h] [rbp-A8h] BYREF
  char v35[8]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v37[32]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-68h]
  _BYTE v39[176]; // [rsp+A8h] [rbp-60h] BYREF
  int v40; // [rsp+168h] [rbp+60h] BYREF
  int v41; // [rsp+170h] [rbp+68h]
  HSURF *v42; // [rsp+180h] [rbp+78h]

  v42 = a4;
  v41 = a2;
  v4 = 0;
  v6 = *((_QWORD *)a1 + 5);
  v40 = 0;
  v31 = 0LL;
  if ( (*(_BYTE *)(v6 + 26) & 0x20) == 0 )
  {
    v7 = *((_DWORD *)a1 + 95);
    v8 = 0x4000000;
    if ( (v7 & 0x20000) == 0 )
    {
      if ( !a3 )
        goto LABEL_4;
      *((_DWORD *)a1 + 95) = v7 | 0x20000;
    }
    v8 = 201326592;
LABEL_4:
    if ( (*(_BYTE *)(v6 + 26) & 8) == 0 || (unsigned int)IsDesktopWindow(a1) )
      goto LABEL_5;
    v18 = *(HWND *)a1;
    LOBYTE(v19) = 0;
    v20 = 0;
    v21 = 1;
    v22 = *(Gre::Base **)(W32GetUserSessionState() + 57008);
    v30 = *((_QWORD *)v22 + 6);
    v29 = Gre::Base::Globals(v22);
    if ( IsDwmActive(v23) )
    {
      ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v34, v29, v30, 0);
      if ( IsDwmActive(v24) )
      {
        v21 = 0;
        DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v37, v18, 0LL);
        if ( v38 )
        {
          v19 = *(_DWORD *)(v38 + 72);
          v20 = 1;
        }
        DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v37);
      }
      SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>(&v36);
      DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v35);
      if ( !v21 )
      {
LABEL_43:
        if ( !v20 || (v19 & 1) == 0 )
        {
LABEL_6:
          v9 = (_DWORD *)*((_QWORD *)a1 + 5);
          v10 = 1;
          v11 = 1;
          if ( v9[24] - v9[22] > 1 )
            v10 = v9[24] - v9[22];
          if ( v9[25] - v9[23] > 1 )
            v11 = v9[25] - v9[23];
          if ( v41 || !(unsigned int)IsDesktopWindow(a1) )
          {
            LOWORD(v40) = 96;
            if ( PtiCurrent() )
            {
              if ( *((_QWORD *)PtiCurrent() + 62) )
              {
                if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent() + 62) + 8LL) + 64LL) & 1) != 0 )
                {
                  v26 = *((_QWORD *)a1 + 5);
                  if ( (*(_DWORD *)(v26 + 288) & 0x4000000F) == 0x40000000 )
                  {
                    v27 = *(unsigned __int16 *)(v26 + 284);
                    if ( (_WORD)v27 != 96 )
                      LOWORD(v40) = GreGetScaledLogPixels(v27);
                  }
                }
              }
            }
            if ( (v8 & 0x1000000) == 0 )
            {
              LODWORD(v29) = 0;
              if ( (*((_DWORD *)a1 + 95) & 0x20000) == 0
                || (int)GreGetDxSharedSurface(
                          *(_QWORD *)a1,
                          (unsigned int)&v33,
                          (unsigned int)&v31,
                          (unsigned int)&v30,
                          (__int64)&v29,
                          (__int64)v32) < 0 )
              {
                GetDisplayAdapterLuidForMonitor(a1, &v31);
              }
            }
            UserSessionState = W32GetUserSessionState();
            OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v39, *(HDC *)(*(_QWORD *)(UserSessionState + 57008) + 64LL));
            v13 = (HSURF)GrepCreateCompatibleBitmap(
                           (struct OPTAPIDCOBJ *)v39,
                           v10,
                           v11,
                           v8,
                           &v31,
                           (unsigned __int16 *)&v40);
            OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v39);
            v40 = 1;
          }
          else
          {
            v13 = *(HSURF *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 40LL) + 120LL);
          }
          if ( !v13 )
          {
            v4 = -2143354872;
            goto LABEL_26;
          }
          TopLevelWindow = (struct tagWND *)GetTopLevelWindow(a1);
          if ( !(unsigned int)IsWindowContentProtected(a1)
            && TopLevelWindow
            && a1 != TopLevelWindow
            && (unsigned int)IsWindowContentProtected(TopLevelWindow)
            && *(_QWORD *)(*((_QWORD *)TopLevelWindow + 2) + 464LL) != *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) )
          {
            GreDeleteObject(v13);
            v13 = 0LL;
            v4 = -1073741790;
LABEL_26:
            *v42 = v13;
            return (unsigned int)v4;
          }
          if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x29D )
            DesktopFromDesktopWindow(a1);
          v15 = W32GetUserSessionState();
          GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v15 + 57008) + 48LL));
          if ( !v40 || (v4 = GreReferenceObject(v13), v4 >= 0) )
          {
            if ( (unsigned int)GreMarkUndeletableBitmap(v13) )
            {
              if ( !(unsigned int)GreSetRedirection(v13) || !(unsigned int)GreSetBitmapContentOwner(v13) )
              {
                GreMarkDeletableBitmap(v13);
                v4 = -2143354871;
              }
              if ( v4 >= 0 )
                goto LABEL_24;
            }
            else
            {
              v4 = -2143354871;
            }
            GreDereferenceObject(v13, 0);
          }
LABEL_24:
          v16 = W32GetUserSessionState();
          GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v16 + 57008) + 48LL));
          if ( v4 < 0 )
          {
            GreDeleteObject(v13);
            v13 = 0LL;
          }
          goto LABEL_26;
        }
LABEL_5:
        v8 |= 0x1000000u;
        goto LABEL_6;
      }
    }
    i = 0LL;
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v29, (struct PDEVOBJ *)&v30);
    if ( *(_DWORD *)(v30 + 140) )
    {
      MetaSprite = pSpGetMetaSprite((const struct _SPRITESTATE *)(v30 + 80), v18, 0LL, 0);
      if ( !MetaSprite )
      {
LABEL_42:
        SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v29);
        v20 = i != 0;
        goto LABEL_43;
      }
      i = *((_QWORD *)MetaSprite + 3);
    }
    else if ( v18 )
    {
      for ( i = *(_QWORD *)(v30 + 88);
            i && (*(HWND *)(i + 72) != v18 || (*(_DWORD *)i & 0x400) != 0);
            i = *(_QWORD *)(i + 24) )
      {
        ;
      }
    }
    if ( i )
      v19 = *(_DWORD *)(i + 224);
    goto LABEL_42;
  }
  *a4 = 0LL;
  return 0LL;
}
