/*
 * XREFs of ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14001C920
 * Callers:
 *     GreAlphaBlend @ 0x140010F88 (GreAlphaBlend.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x14001A5E0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400C3880 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     GrePatBlt @ 0x1400C4060 (GrePatBlt.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x1400C4DA4 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 *     NtGdiGetPixel @ 0x1400C51B0 (NtGdiGetPixel.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     GreFillRgn @ 0x1400E2680 (GreFillRgn.c)
 *     GreFrameRgn @ 0x1400E2CD4 (GreFrameRgn.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401A37F4 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1401E0F84 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x1403050D8 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140029324 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF98 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140032E18 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1400A4EA4 (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z @ 0x1400C56E8 (-bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1400CE6CC (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DFA4C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E7958 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x14010A3E4 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14015763C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x140175528 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14026E514 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bSpDwmValidateSurface(struct XDCOBJ *a1, LONG a2, int a3, int a4, int a5)
{
  struct REGION *v5; // rdi
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r14
  unsigned int v10; // r12d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // rbx
  LONG *v15; // rax
  LONG v16; // ecx
  LONG v17; // eax
  __int64 v18; // r14
  __int64 v19; // rax
  LONG v20; // ecx
  __int64 v21; // rcx
  int v22; // r15d
  LONG *v23; // r13
  __int64 v24; // r14
  LONG v25; // ecx
  LONG v26; // eax
  LONG v27; // eax
  __int64 v28; // rax
  LONG x; // ecx
  LONG y; // edx
  LONG v31; // eax
  __int64 v32; // r14
  struct _POINTL *v33; // rdx
  __int64 v34; // rdx
  int v35; // r8d
  int v36; // ecx
  LONG left; // r12d
  LONG top; // r13d
  struct _POINTL *v40; // rdx
  HSURF v41; // r15
  __int64 v42; // r14
  int v43; // ebx
  __int64 v44; // rax
  struct _POINTL v45; // [rsp+50h] [rbp-B0h] BYREF
  struct _POINTL v46; // [rsp+58h] [rbp-A8h] BYREF
  int v47; // [rsp+60h] [rbp-A0h]
  struct REGION *v48; // [rsp+68h] [rbp-98h] BYREF
  struct REGION *v49; // [rsp+70h] [rbp-90h] BYREF
  __int64 v50; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL v51; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v52; // [rsp+90h] [rbp-70h] BYREF
  int v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v56; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v57[4]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v58[4]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v59[4]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v60[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v61; // [rsp+110h] [rbp+10h]
  _BYTE v62[144]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v63[144]; // [rsp+1B0h] [rbp+B0h] BYREF
  struct tagRECT v64; // [rsp+240h] [rbp+140h] BYREF
  struct _RECTL v65; // [rsp+250h] [rbp+150h] BYREF

  v51 = 0LL;
  v5 = 0LL;
  v53 = 0;
  v56 = 0LL;
  v7 = *(_QWORD *)a1;
  v8 = a4;
  v9 = a3;
  v45.x = a2;
  v47 = 8;
  if ( !v7
    || (*(_DWORD *)(v7 + 36) & 0x200) == 0
    || !(unsigned int)IsDwmActive()
    || (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4001) != 0x4001
    || !*(_QWORD *)(*(_QWORD *)a1 + 472LL) )
  {
    return 0LL;
  }
  v10 = 1;
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 288) & 1) == 0 )
          return 0LL;
        RecordCapabilityUsage(CurrentProcessWin32Process, 1LL);
      }
    }
  }
  v12 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 496LL) || !*(_DWORD *)(v12 + 488) && !*(_DWORD *)(v12 + 492) || KeAreApcsDisabled() )
    return 0LL;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v63);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v63, a1, 0) )
    goto LABEL_63;
  v13 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 504LL) )
  {
LABEL_64:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v63);
    return v10;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 48) + 24LL);
  if ( !*(_DWORD *)(v13 + 492) )
  {
    v15 = (LONG *)DC::prgnVisSnap(*(DC **)a1);
    if ( !v15 )
      goto LABEL_63;
    v52.left = v15[13];
    v52.top = v15[14];
    v16 = v15[15];
    v17 = v15[16];
    v52.right = v16;
    v52.bottom = v17;
    if ( (unsigned int)IsRectEmptyInl(&v52) )
      goto LABEL_63;
  }
  if ( !(_DWORD)v8 )
    goto LABEL_63;
  if ( !a5 )
    goto LABEL_63;
  if ( (unsigned __int64)(v8 + v45.x + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_63;
  if ( (unsigned __int64)(a5 + v9 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_63;
  DC::QuickInitXform(v13, &v55, 516LL);
  if ( (*(_DWORD *)(v55 + 32) & 2) == 0 )
    goto LABEL_63;
  v45.y = v9;
  EXFORMOBJ::bXform((EXFORMOBJ *)&v55, &v45, 1uLL);
  v18 = *(_QWORD *)a1;
  v19 = *(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1LL;
  v20 = *(_DWORD *)(*(_QWORD *)a1 + 8 * v19 + 1020) + v45.y;
  v52.left = *(_DWORD *)(*(_QWORD *)a1 + 8 * v19 + 1016) + v45.x;
  v52.top = v20;
  v52.right = v52.left + v8;
  v52.bottom = v20 + a5;
  v64 = v52;
  ERECTL::vOrder((ERECTL *)&v64);
  v21 = *(_QWORD *)(v18 + 496);
  v57[0] = 0;
  v57[1] = 0;
  v57[2] = *(_DWORD *)(v21 + 56);
  v57[3] = *(_DWORD *)(v21 + 60);
  ERECTL::operator*=(&v64, v57);
  if ( (unsigned int)IsRectEmptyInl(&v64) )
    goto LABEL_63;
  if ( !*(_DWORD *)(v18 + 492) )
  {
    if ( (*(_DWORD *)(v18 + 36) & 0x4000) != 0 )
      SURFACE::bUnMap(*(SURFACE **)(v18 + 496));
    v22 = 0;
    SEMOBJ<7>::SEMOBJ<7>(&v48, *((_QWORD *)a1 + 2));
    if ( !(unsigned int)IsDwmActive() )
    {
LABEL_52:
      if ( v48 )
        GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal);
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0
        && (unsigned int)SURFACE::Map(*(_QWORD *)(*(_QWORD *)a1 + 496LL)) == 2 )
      {
        *(_DWORD *)(*(_QWORD *)a1 + 44LL) |= 1u;
LABEL_61:
        if ( v5 )
        {
          v48 = v5;
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v48);
        }
        goto LABEL_63;
      }
      if ( v22 )
        goto LABEL_58;
LABEL_63:
      v10 = 0;
      goto LABEL_64;
    }
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v60, *(HWND *)(*(_QWORD *)a1 + 472LL));
    v23 = (LONG *)v61;
    if ( v61 )
    {
      v24 = *(_QWORD *)(v61 + 144);
      if ( (*(_DWORD *)(v24 + 252) & 0x80u) == 0
        && *(_QWORD *)(v24 + 184) == ((*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) != 0LL)) )
      {
        if ( *(_QWORD *)(v24 + 80) )
        {
          v54 = *(_QWORD *)(v24 + 80);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v50);
          if ( v54 )
          {
            if ( v50 )
            {
              if ( !(unsigned int)RGNOBJ::bContain((RGNOBJ *)&v54, (struct _RECTL *)&v64) )
              {
                RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v49);
                if ( v49 )
                {
                  v25 = v23[15];
                  v26 = v23[16];
                  v65.left = v23[14];
                  v65.top = v25;
                  v65.right = v26;
                  v27 = v23[17];
                  v46.x = v65.left;
                  v46.y = v25;
                  v65.bottom = v27;
                  ERECTL::bOffsetSubtract((ERECTL *)&v65, &v46, 0);
                  RGNOBJ::vSet((RGNOBJ *)&v50, &v65);
                  if ( RGNOBJ::iCombine((RGNOBJ *)&v49, (struct RGNOBJ *)&v50, (struct RGNOBJ *)&v54, 4) )
                  {
                    v5 = v49;
                    v22 = 1;
                  }
                  else if ( v49 )
                  {
                    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v49);
                  }
                }
              }
            }
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v50);
          if ( !v22 )
            goto LABEL_51;
        }
        else
        {
          v22 = 1;
        }
        v46 = 0LL;
        v28 = *(_QWORD *)(v24 + 184);
        if ( v28 )
        {
          x = *(_DWORD *)(v28 + 32);
          y = *(_DWORD *)(v28 + 36);
        }
        else
        {
          y = v46.y;
          x = v46.x;
        }
        v51.x = v23[14];
        v31 = v23[15];
        v64.top = 0;
        v64.left = 0;
        v64.right = x;
        v64.bottom = y;
        *(_DWORD *)(v24 + 252) |= 0x80u;
        v51.y = v31;
        if ( v5 )
        {
          v58[0] = *((_DWORD *)v5 + 13);
          v58[1] = *((_DWORD *)v5 + 14);
          v58[2] = *((_DWORD *)v5 + 15);
          v58[3] = *((_DWORD *)v5 + 16);
          ERECTL::operator*=(&v64, v58);
          if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v64) )
          {
            v46 = (struct _POINTL)v5;
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v46);
            *(_DWORD *)(v24 + 252) |= 0x80u;
            v22 = 0;
          }
        }
      }
    }
LABEL_51:
    DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v60);
    goto LABEL_52;
  }
LABEL_58:
  v32 = *(_QWORD *)a1;
  v33 = (struct _POINTL *)(v14 + 2576);
  if ( !*(_DWORD *)(*(_QWORD *)a1 + 492LL) )
    v33 = &v51;
  ERECTL::bOffsetAdd((ERECTL *)&v64, v33, 0);
  v34 = *(_QWORD *)(v14 + 2544);
  v35 = *(_DWORD *)(v14 + 2580);
  v59[0] = *(_DWORD *)(v14 + 2576);
  v59[2] = *(_DWORD *)(v34 + 56) + v59[0];
  v36 = *(_DWORD *)(v34 + 60);
  v59[1] = v35;
  v59[3] = v35 + v36;
  ERECTL::operator*=(&v64, v59);
  if ( (unsigned int)IsRectEmptyInl(&v64) )
    goto LABEL_61;
  left = v64.left;
  top = v64.top;
  v40 = (struct _POINTL *)(v14 + 2576);
  if ( !*(_DWORD *)(v32 + 492) )
    v40 = &v51;
  ERECTL::bOffsetSubtract((ERECTL *)&v64, v40, 0);
  v41 = *(HSURF *)(*(_QWORD *)(v32 + 496) + 32LL);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v63);
  v42 = *((_QWORD *)a1 + 2);
  v43 = v53;
  while ( 1 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v62);
    if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v62, a1, 0) )
    {
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v62);
      goto LABEL_80;
    }
    v44 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
    if ( v44 )
    {
      if ( *(_QWORD *)(v44 + 3456) )
      {
        v43 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(v44 + 3456))(*(_QWORD *)(v44 + 1784), &v56);
        if ( v43 == 258 )
        {
          KeDelayExecutionThread(0, 0, *(PLARGE_INTEGER *)(v42 + 2192));
          --v47;
        }
      }
    }
    else
    {
      v43 = -1073741823;
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v62);
    if ( v43 != 258 )
      break;
    if ( !v47 )
      goto LABEL_80;
  }
  if ( v43 >= 0 )
    return bSpDwmUpdateSurface(0LL, v56, a1, v41, 1.0, left, top, (struct ERECTL *)&v64, v5);
LABEL_80:
  if ( v5 )
  {
    v48 = v5;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v48);
  }
  return 0LL;
}
