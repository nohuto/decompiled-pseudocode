/*
 * XREFs of ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x14011F570
 * Callers:
 *     BRUSHOBJ_pvGetRbrush @ 0x14011EB60 (BRUSHOBJ_pvGetRbrush.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x140120044 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x14032053C (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x14000FB40 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D2050 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400DD84C (--$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x14010EFB4 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x14010F2DC (-vCheckForTrivial@XLATE@@QEAAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x140127728 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1401277C8 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x140127884 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x14015C7AC (-pCreateXlate@@YAPEAVXLATE@@K@Z.c)
 *     ?vCheckForICM@XLATE@@QEAAXPEAXK@Z @ 0x1401782FC (-vCheckForICM@XLATE@@QEAAXPEAXK@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x140180CA0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x140182AE8 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z.c)
 *     ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x1401A23C8 (-vAcquire@HTSEMOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401BACBC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bIsCMYKColor@EBRUSHOBJ@@QEBAHXZ @ 0x140218258 (-bIsCMYKColor@EBRUSHOBJ@@QEBAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1402680F0 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     HT_CreateHalftoneBrush @ 0x1402F3278 (HT_CreateHalftoneBrush.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1402FA8F4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     EngDitherColor @ 0x140302630 (EngDitherColor.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bGetRealizedBrush(
        struct BRUSH *a1,
        struct EBRUSHOBJ *a2,
        __int64 (__fastcall *a3)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))
{
  struct Gre::Base::SESSION_GLOBALS *v6; // r13
  struct _SURFOBJ *v7; // r15
  __int64 v8; // rax
  unsigned int v9; // esi
  bool v10; // dl
  void *v11; // rdx
  __int64 v12; // rax
  unsigned __int8 v13; // bl
  __int64 v14; // rax
  XLATE *v15; // rbx
  unsigned int NearestIndexFromColorref; // r15d
  unsigned int v17; // r14d
  XLATE *v18; // rsi
  __int64 v19; // r8
  HDEV v20; // rax
  __int64 v21; // rcx
  HDEV v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  ULONG *v25; // r9
  ULONG v26; // eax
  ULONG v27; // eax
  bool v28; // al
  bool v29; // dl
  HPALETTE *v30; // rax
  HPALETTE *v31; // r14
  HDEV v32; // rax
  int v33; // r8d
  int v34; // ecx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  char v40; // cl
  __int128 *v41; // rax
  __int128 v42; // xmm0
  __int64 v43; // xmm1_8
  signed int HalftoneBrush; // ecx
  __int64 v45; // rax
  void *v46; // rbx
  int v48; // eax
  HBITMAP v49; // r15
  int v50; // ebx
  int v51; // eax
  HBITMAP IcmDIB; // rax
  bool v53; // zf
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r10
  __int64 v57; // r9
  int v58; // eax
  int inited; // eax
  int v60; // r8d
  unsigned int v61; // r8d
  __int64 v62; // rdx
  __int64 v63; // rax
  bool v64; // cf
  __int64 v65; // r8
  unsigned int v66; // ebx
  char v67[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v68; // [rsp+68h] [rbp-98h] BYREF
  char v69; // [rsp+70h] [rbp-90h]
  BOOL v70; // [rsp+78h] [rbp-88h] BYREF
  __int64 v71; // [rsp+80h] [rbp-80h] BYREF
  HDEV hdev; // [rsp+88h] [rbp-78h] BYREF
  XLATE *Xlate; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v74; // [rsp+98h] [rbp-68h] BYREF
  char v75; // [rsp+A0h] [rbp-60h]
  __int64 v76; // [rsp+A8h] [rbp-58h] BYREF
  char v77; // [rsp+B0h] [rbp-50h]
  int v78; // [rsp+B4h] [rbp-4Ch]
  __int64 v79; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v80; // [rsp+C0h] [rbp-40h]
  unsigned int v81; // [rsp+C8h] [rbp-38h] BYREF
  int v82; // [rsp+CCh] [rbp-34h]
  int v83; // [rsp+D0h] [rbp-30h]
  int v84; // [rsp+D4h] [rbp-2Ch]
  __int64 v85; // [rsp+D8h] [rbp-28h]
  int v86; // [rsp+E0h] [rbp-20h]
  int v87; // [rsp+E4h] [rbp-1Ch]
  _DWORD v88[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v89; // [rsp+F0h] [rbp-10h]
  __int64 *v90; // [rsp+F8h] [rbp-8h]
  _BYTE v91[32]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v92; // [rsp+120h] [rbp+20h]
  __int128 v93; // [rsp+128h] [rbp+28h] BYREF
  __int64 v94; // [rsp+138h] [rbp+38h]

  v6 = Gre::Base::Globals(a1);
  v80 = *((_DWORD *)a1 + 20);
  if ( v80 == 12 )
    return 0LL;
  v7 = 0LL;
  v79 = 0LL;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v91);
  v8 = *((_QWORD *)a2 + 10);
  v9 = 1;
  v92 = 0LL;
  v76 = 0LL;
  v77 = 0;
  v78 = 0;
  hdev = *(HDEV *)(v8 + 48);
  Xlate = 0LL;
  if ( ((_DWORD)hdev[10] & 1) == 0 || (v10 = 1, a3 != EngRealizeBrush) )
    v10 = 0;
  NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v68, v10);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v67, (struct PDEVOBJ *)&hdev);
  v12 = *((unsigned int *)a1 + 20);
  v13 = 6;
  if ( (unsigned int)v12 < 6 )
  {
    LOBYTE(v11) = 5;
    v14 = HmgShareLockCheck(*((_QWORD *)hdev + v12 + 182), v11);
    v92 = v14;
    if ( v14 )
    {
      v79 = v14 + 24;
      Xlate = pCreateXlate(2u);
      v15 = Xlate;
      if ( Xlate )
      {
        NearestIndexFromColorref = *((_DWORD *)a2 + 13);
        if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
        {
          v17 = *((_DWORD *)a2 + 6);
          *((_DWORD *)v15 + 21) = NearestIndexFromColorref;
          *((_DWORD *)v15 + 22) = v17;
          XLATE::vCheckForICM(v15, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
        }
        else
        {
          NearestIndexFromColorref = ulGetNearestIndexFromColorref(
                                       *((_QWORD *)a2 + 11),
                                       *((_QWORD *)a2 + 12),
                                       NearestIndexFromColorref,
                                       1LL);
          v17 = ulGetNearestIndexFromColorref(
                  *((_QWORD *)a2 + 11),
                  *((_QWORD *)a2 + 12),
                  *((unsigned int *)a2 + 6),
                  1LL);
          if ( *(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1
            && *(_DWORD *)(*((_QWORD *)a2 + 11) + 28LL)
            && *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 6)
            && NearestIndexFromColorref == v17 )
          {
            v17 = 1 - NearestIndexFromColorref;
          }
          *((_DWORD *)v15 + 21) = NearestIndexFromColorref;
          *((_DWORD *)v15 + 22) = v17;
          XLATE::vCheckForICM(v15, *((void **)a2 + 8), *((_DWORD *)a2 + 18));
          XLATE::vCheckForTrivial(v15);
        }
        *((_QWORD *)v15 + 5) = *((_QWORD *)v6 + 475);
        v18 = v15;
        *((_QWORD *)v15 + 6) = *((_QWORD *)a2 + 11);
        *((_QWORD *)v15 + 7) = *((_QWORD *)a2 + 12);
        *((_DWORD *)v15 + 19) |= 0x100u;
        *((_DWORD *)v15 + 7) = NearestIndexFromColorref;
        v7 = (struct _SURFOBJ *)v79;
        *((_DWORD *)v15 + 8) = v17;
        goto LABEL_134;
      }
    }
LABEL_145:
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v67);
    if ( v69 )
      GreReleaseSemaphoreShared<1,>(v68);
    SURFMEM::~SURFMEM((SURFMEM *)&v76);
    EXLATEOBJ::vAltUnlock(&Xlate);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v91);
    return 0LL;
  }
  if ( (unsigned int)v12 >= 0xC )
  {
    v48 = *((_DWORD *)a2 + 18);
    v49 = (HBITMAP)*((_QWORD *)a1 + 3);
    v50 = 0;
    if ( (v48 & 1) != 0 )
    {
      v11 = (void *)*((_QWORD *)a2 + 8);
      if ( !v11 )
      {
        if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
          goto LABEL_107;
        goto LABEL_106;
      }
      v51 = *((_DWORD *)a1 + 10);
      if ( (v51 & 0x80u) != 0 )
      {
        if ( *((_DWORD *)a1 + 21) || (IcmDIB = BRUSH::hFindIcmDIB(a1, v11)) == 0LL )
        {
LABEL_107:
          LOBYTE(v11) = 5;
          v54 = HmgShareLock(v49, v11);
          v92 = v54;
          v55 = v54;
          if ( !v54 )
            goto LABEL_145;
          v56 = *((_QWORD *)a2 + 10);
          v57 = *(_QWORD *)(v54 + 128);
          v58 = *((_DWORD *)a1 + 10);
          if ( (v58 & 0x1000) != 0 )
          {
            inited = EXLATEOBJ::bMakeXlate(
                       &Xlate,
                       *(unsigned __int16 **)(v57 + 112),
                       *((_QWORD *)a2 + 12),
                       *((_QWORD *)a2 + 10),
                       *(_DWORD *)(v57 + 60),
                       *(_DWORD *)(v57 + 28));
LABEL_132:
            if ( !inited )
              goto LABEL_145;
            v18 = Xlate;
            v7 = 0LL;
            goto LABEL_134;
          }
          if ( (v58 & 0x2000) != 0 )
          {
            if ( *(_DWORD *)(v55 + 96) == *(_DWORD *)(v56 + 96) )
            {
              v7 = (struct _SURFOBJ *)v79;
              v18 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v6 + 4552);
              goto LABEL_135;
            }
            goto LABEL_145;
          }
          if ( (*(_WORD *)(v55 + 100) || *(_QWORD *)(v55 + 24)) && *(HDEV *)(v55 + 48) != hdev )
            goto LABEL_145;
          if ( !v57 )
          {
            v60 = *(_DWORD *)(v55 + 96);
            if ( v60 == *((_DWORD *)hdev + 523) )
            {
              if ( ((_DWORD)hdev[539] & 0x100) == 0 )
              {
                v57 = *((_QWORD *)hdev + 224);
                goto LABEL_128;
              }
            }
            else
            {
              if ( v60 == *((_DWORD *)a2 + 19) )
              {
                v57 = *((_QWORD *)a2 + 13);
                goto LABEL_128;
              }
              if ( v60 == 3 )
              {
                if ( ((_DWORD)hdev[539] & 0x100) == 0 )
                {
                  v57 = *((_QWORD *)v6 + 473);
                  goto LABEL_128;
                }
              }
              else if ( ((_DWORD)hdev[10] & 0x20000) == 0 )
              {
                goto LABEL_145;
              }
            }
            v57 = 0LL;
          }
LABEL_128:
          if ( v50 )
          {
            v61 = *((_DWORD *)a2 + 18);
            v62 = *((_QWORD *)a2 + 8);
          }
          else
          {
            v61 = 0;
            v62 = 0LL;
          }
          inited = EXLATEOBJ::bInitXlateObj(
                     (Gre::Base *)&Xlate,
                     v62,
                     v61,
                     v57,
                     *(_QWORD *)(v56 + 128),
                     *((_QWORD *)a2 + 12),
                     *((_QWORD *)a2 + 12),
                     *((_DWORD *)a2 + 12),
                     *((_DWORD *)a2 + 13),
                     0xFFFFFF,
                     0);
          goto LABEL_132;
        }
        v49 = IcmDIB;
LABEL_106:
        v50 = 1;
        goto LABEL_107;
      }
      v53 = (v51 & 0x20000) == 0;
    }
    else
    {
      if ( (v48 & 4) != 0 )
        goto LABEL_106;
      v53 = (v48 & 2) == 0;
    }
    if ( v53 )
      goto LABEL_107;
    goto LABEL_106;
  }
  if ( (unsigned int)EBRUSHOBJ::bIsCMYKColor(a2) )
    goto LABEL_86;
  v19 = *((unsigned int *)a2 + 6);
  if ( (v19 & 0x1000000) != 0 )
  {
    LODWORD(v19) = rgbFromColorref(*((_QWORD *)a2 + 11), *((_QWORD *)a2 + 12), v19);
    *((_DWORD *)a2 + 6) = v19;
  }
  v20 = hdev;
  if ( ((_DWORD)hdev[452] & 0x200000) != 0 && a3 != EngRealizeBrush )
  {
    if ( (unsigned int)a3(
                         (struct _BRUSHOBJ *)a2,
                         (struct _SURFOBJ *)((*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL)),
                         0LL,
                         0LL,
                         0LL,
                         (unsigned int)v19 | 0x80000000) )
    {
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v67);
      if ( v69 )
        GreReleaseSemaphoreShared<1,>(v68);
LABEL_89:
      SURFMEM::~SURFMEM((SURFMEM *)&v76);
      EXLATEOBJ::vAltUnlock(&Xlate);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v91);
      return v9;
    }
    v20 = hdev;
  }
  v21 = *((_QWORD *)a2 + 10);
  v84 = 0;
  v87 = 0;
  v81 = *(_DWORD *)(v21 + 96) == 1 ? 1 : *((_DWORD *)v20 + 523);
  if ( !*((_WORD *)v20 + 1048) )
    goto LABEL_86;
  if ( !*((_WORD *)v20 + 1049) )
    goto LABEL_86;
  v82 = *((unsigned __int16 *)v20 + 1048);
  v83 = *((unsigned __int16 *)v20 + 1049);
  v85 = 0LL;
  v86 = 1;
  if ( !SURFMEM::bCreateDIB((SURFMEM *)&v76, (struct _DEVBITMAPINFO *)&v81, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    goto LABEL_86;
  v22 = hdev;
  v23 = *((unsigned int *)a2 + 6);
  v24 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 10) + 96LL) == 1) + 1;
  v25 = *(ULONG **)(v76 + 72);
  if ( *((_QWORD *)hdev + 348) )
  {
    if ( ((_DWORD)hdev[10] & 0x8000) == 0 )
      v22 = (HDEV)*((_QWORD *)hdev + 223);
    v26 = (*((__int64 (__fastcall **)(HDEV, __int64, __int64, ULONG *))hdev + 348))(v22, v24, v23, v25);
  }
  else
  {
    v26 = EngDitherColor(hdev, v24, v23, v25);
  }
  v27 = v26 - 1;
  if ( v27 )
  {
    if ( v27 == 1 )
    {
      if ( a3 != EngRealizeBrush
        || (v28 = GrepIsLockOwnedByCurrentThread<1,Gre::Base::SESSION_GLOBALS>(v6), v29 = 1, v28) )
      {
        v29 = 0;
      }
      NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v74, v29);
      v70 = a3 == EngRealizeBrush;
      HTSEMOBJ::vAcquire((HTSEMOBJ *)&v70);
      if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&hdev, 0LL) )
        goto LABEL_84;
      v30 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&hdev);
      LODWORD(v79) = *((_DWORD *)a2 + 6);
      v31 = v30;
      LODWORD(v71) = 0;
      v90 = &v79;
      v32 = hdev;
      v89 = 1LL;
      v88[0] = 262400;
      v88[1] = 255;
      v33 = (_DWORD)hdev[591] & 0x100;
      v34 = *((_DWORD *)a2 + 18);
      LODWORD(v71) = v33 == 0 ? 2 : 0;
      if ( (v34 & 4) != 0 || (v34 & 0x20) == 0 && (v34 & 3) != 0 )
        LOBYTE(v71) = v33 != 0 ? 16 : 18;
      if ( *((unsigned __int16 *)v31 + 4) != v82 || *((unsigned __int16 *)v31 + 5) != v83 )
      {
        SURFACE::bDeleteSurface(v76, 0LL, 0LL);
        v82 = *((unsigned __int16 *)v31 + 4);
        v83 = *((unsigned __int16 *)v31 + 5);
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v76, (struct _DEVBITMAPINFO *)&v81, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          goto LABEL_84;
        v32 = hdev;
      }
      v35 = *((_DWORD *)v32 + 590);
      if ( v35 )
      {
        v36 = v35 - 2;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( v37 )
          {
            v38 = v37 - 1;
            if ( v38 )
            {
              v39 = v38 - 1;
              if ( v39 )
              {
                if ( v39 != 2 )
                  goto LABEL_84;
              }
              else
              {
                v13 = -3;
              }
            }
            else
            {
              v13 = -2;
            }
          }
          else
          {
            v13 = -1;
          }
        }
        else
        {
          v13 = 2;
        }
      }
      else
      {
        v13 = 1;
      }
      v40 = *((_BYTE *)v32 + 2352);
      v41 = (__int128 *)*((_QWORD *)a2 + 7);
      BYTE3(v71) = v40;
      BYTE1(v71) = v13;
      v42 = *v41;
      BYTE2(v71) = 4;
      v93 = v42;
      v43 = *((_QWORD *)v41 + 2);
      WORD5(v93) = 10000;
      v94 = v43;
      *(_DWORD *)((char *)&v93 + 6) = 655370000;
      if ( v13 != v81 && (v13 != 0xFF || v81 != 2) && (v13 != 0xFE || v81 != 3) && (v13 != 0xFD || v81 != 4) )
        TraceLoggingWriteUnsupportedGdiUsage(24LL, v81, v13, 0LL, 0LL);
      HalftoneBrush = HT_CreateHalftoneBrush((_DWORD)v31, (unsigned int)&v93, (unsigned int)v88, v71, 0LL);
      v45 = v76;
      if ( HalftoneBrush > *(_DWORD *)(v76 + 64) )
      {
        v46 = (void *)PALLOCMEM(HalftoneBrush, 1835167815LL);
        if ( !v46 )
          goto LABEL_84;
        SURFACE::bDeleteSurface(v76, 0LL, 0LL);
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v76, (struct _DEVBITMAPINFO *)&v81, v46, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        {
          Win32FreePool(v46);
          goto LABEL_84;
        }
        *(_BYTE *)(v76 + 688) = 1;
        v45 = v76;
      }
      if ( (int)HT_CreateHalftoneBrush((_DWORD)v31, (unsigned int)&v93, (unsigned int)v88, v71, *(_QWORD *)(v45 + 72)) > 0 )
      {
        if ( ((_DWORD)hdev[10] & 0x200) != 0 )
        {
          v18 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v6 + 4552);
        }
        else
        {
          EPALOBJ::EPALOBJ((EPALOBJ *)&v71, *v31);
          if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                (Gre::Base *)&Xlate,
                                *((_QWORD *)a2 + 8),
                                *((_DWORD *)a2 + 18),
                                v71,
                                *(_QWORD *)(*((_QWORD *)a2 + 10) + 128LL),
                                *((_QWORD *)a2 + 12),
                                *((_QWORD *)a2 + 12),
                                *((_DWORD *)a2 + 12),
                                *((_DWORD *)a2 + 13),
                                0xFFFFFF,
                                0) )
          {
            EPALOBJ::~EPALOBJ((EPALOBJ *)&v71);
            goto LABEL_84;
          }
          v18 = Xlate;
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v71);
        }
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v70);
        if ( v75 )
          GreReleaseSemaphoreShared<1,>(v74);
        goto LABEL_134;
      }
LABEL_84:
      HTSEMOBJ::vRelease((HTSEMOBJ *)&v70);
      if ( v75 )
        GreReleaseSemaphoreShared<1,>(v74);
    }
LABEL_86:
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v67);
    if ( v69 )
      GreReleaseSemaphoreShared<1,>(v68);
    v9 = 0;
    goto LABEL_89;
  }
  v18 = (struct Gre::Base::SESSION_GLOBALS *)((char *)v6 + 4552);
LABEL_134:
  v55 = v92;
LABEL_135:
  if ( !v55 )
  {
    if ( v76 )
    {
      v63 = v76 + 24;
      v64 = v76 != 0;
      goto LABEL_139;
    }
    if ( a3 != EngRealizeBrush )
    {
      v65 = 0LL;
      goto LABEL_142;
    }
    goto LABEL_145;
  }
  v63 = v55 + 24;
  v64 = v55 != 0;
LABEL_139:
  v65 = v63 & -(__int64)v64;
LABEL_142:
  v66 = a3(
          (struct _BRUSHOBJ *)a2,
          (struct _SURFOBJ *)((*((_QWORD *)a2 + 10) + 24LL) & -(__int64)(*((_QWORD *)a2 + 10) != 0LL)),
          (struct _SURFOBJ *)v65,
          v7,
          (struct _XLATEOBJ *)v18,
          v80);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v67);
  if ( v69 )
    GreReleaseSemaphoreShared<1,>(v68);
  SURFMEM::~SURFMEM((SURFMEM *)&v76);
  EXLATEOBJ::vAltUnlock(&Xlate);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v91);
  return v66;
}
