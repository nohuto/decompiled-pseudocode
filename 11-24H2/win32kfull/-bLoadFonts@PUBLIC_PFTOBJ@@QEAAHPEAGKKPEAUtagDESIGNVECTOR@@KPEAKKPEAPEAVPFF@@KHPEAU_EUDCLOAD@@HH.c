/*
 * XREFs of ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B7F2C
 * Callers:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1400B7A9C (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1400B7E20 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     bAddFlEntry @ 0x1400B8A30 (bAddFlEntry.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x14015212C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     ?GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x140199298 (-GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x140228D98 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14005EDEC (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     EngUnmapFontFileFD @ 0x1400B3DE0 (EngUnmapFontFileFD.c)
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1400B6DBC (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x1400B6EEC (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1400B72E8 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B764C (--0-$SEMOBJ@$0BJ@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     UmfdLoadFontFileView @ 0x1400B76D4 (UmfdLoadFontFileView.c)
 *     ??$GreReleaseSemaphoreCommon@$0BJ@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400B7A3C (--$GreReleaseSemaphoreCommon@$0BJ@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1400FDD28 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1400FE5E4 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1400FECC0 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCHECKSUM@@PEAPEAUFONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140113D2C (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAUFNTCH.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x140145FC8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x140146918 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x14019F58C (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?Remove@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x14019F660 (-Remove@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1401B7374 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?Contains@TrustedFontFileTable@@SA_NPEBG@Z @ 0x1401BAB64 (-Contains@TrustedFontFileTable@@SA_NPEBG@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1401FB214 (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadFonts(
        PUBLIC_PFTOBJ *this,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *Src,
        size_t a6,
        unsigned int *a7,
        unsigned int a8,
        struct PFF **a9,
        unsigned int a10,
        int a11,
        struct _EUDCLOAD *a12,
        int a13,
        int a14)
{
  unsigned int v14; // edi
  __int64 v15; // r14
  PUBLIC_PFTOBJ *v16; // r13
  unsigned int v17; // ebx
  struct PFF **v18; // r12
  unsigned int *v19; // r15
  struct PFF *v20; // rax
  struct PFF *v21; // rax
  char *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  struct FONTFILEVIEW **v26; // rsi
  WCHAR *v27; // rdx
  _DWORD *v28; // rbx
  __int64 v29; // r12
  char *v30; // r13
  __int64 v31; // r15
  bool v32; // al
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 SessionState; // rax
  __int64 v38; // r8
  HSEMAPHORE v39; // rdx
  unsigned __int64 v40; // rcx
  unsigned int v41; // eax
  struct PFF *v42; // rax
  int v43; // edx
  __int64 v44; // r15
  struct PFT *v45; // rcx
  struct PFF **v46; // rdx
  struct PFF *v47; // rcx
  _WORD *v48; // rcx
  struct FONTFILEVIEW **v49; // rdx
  __int64 v50; // r8
  struct PFF *v52; // rax
  __int64 v53; // rbx
  char v54; // r12
  unsigned int v56; // eax
  struct PFF *v57; // rax
  ULONG_PTR *v58; // rbx
  __int64 v59; // r15
  __int64 v60; // rax
  struct W32_PUSH_LOCK *v61; // rbx
  struct FONTFILEVIEW **v62; // rbx
  struct FONTFILEVIEW *v63; // rcx
  unsigned int v64; // esi
  struct PFF *v65; // rax
  unsigned int v66; // ebx
  __int64 v67; // r14
  int v68; // edx
  struct PFT *v69; // rcx
  struct PFF **v70; // rdx
  struct PFF *v71; // rcx
  __int64 v72; // r12
  struct FONTFILEVIEW **v73; // r15
  __int64 v74; // r14
  unsigned int v75; // eax
  unsigned int v76; // eax
  struct PFF *v77; // rax
  __int64 v78; // rbx
  size_t Size; // [rsp+38h] [rbp-E0h]
  unsigned __int64 v80; // [rsp+40h] [rbp-D8h]
  HDEV v81; // [rsp+48h] [rbp-D0h]
  struct PFT *v82; // [rsp+58h] [rbp-C0h]
  int v83; // [rsp+88h] [rbp-90h]
  char v84; // [rsp+98h] [rbp-80h]
  int v85; // [rsp+9Ch] [rbp-7Ch] BYREF
  unsigned int v86; // [rsp+A0h] [rbp-78h]
  __int64 v87; // [rsp+A8h] [rbp-70h] BYREF
  _QWORD v88[2]; // [rsp+B0h] [rbp-68h] BYREF
  __int16 v89; // [rsp+C0h] [rbp-58h]
  struct PFF **v90; // [rsp+C8h] [rbp-50h] BYREF
  HDEV v91; // [rsp+D0h] [rbp-48h] BYREF
  char v92[8]; // [rsp+D8h] [rbp-40h] BYREF
  char *v93; // [rsp+E0h] [rbp-38h] BYREF
  unsigned int v94[2]; // [rsp+E8h] [rbp-30h] BYREF
  char v95[8]; // [rsp+F0h] [rbp-28h]
  __int64 v96; // [rsp+F8h] [rbp-20h]
  char v97[8]; // [rsp+100h] [rbp-18h] BYREF
  unsigned __int64 v98; // [rsp+108h] [rbp-10h] BYREF
  HSEMAPHORE v99[9]; // [rsp+110h] [rbp-8h] BYREF
  unsigned int v102; // [rsp+178h] [rbp+60h]

  v102 = a3;
  v14 = 0;
  v15 = a4;
  v85 = 0;
  v16 = this;
  v90 = 0LL;
  v84 = 1;
  if ( a2 && a4 <= 3 )
  {
    v96 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 4872LL;
    SEMOBJ<17>::SEMOBJ<17>(v97, v96);
    v17 = a10;
    v18 = a9;
    v19 = a7;
    if ( !a11 )
    {
      *a7 = 0;
      v20 = PUBLIC_PFTOBJ::pPFFGet(v16, a2, v102, v15, Src, a6, &v90, a12 != 0LL);
      *a9 = v20;
      if ( v20 )
      {
        v56 = PFTOBJ::chpfeIncrPFF(v16, v20, &v85, a10, a12);
        *a7 = v56;
        if ( v56 )
        {
          if ( (a10 & 0x40) != 0 )
            *a7 = 0;
          v57 = *a9;
          if ( (a10 & 0x400) != 0 )
            *((_DWORD *)v57 + 13) |= 0x400u;
          if ( (a10 & 0x100) != 0 )
            *((_DWORD *)v57 + 13) |= 0x800u;
          goto LABEL_56;
        }
      }
      v21 = PUBLIC_PFTOBJ::pPFFGet(v16, a2, v102, v15, Src, a6, &v90, a12 == 0LL);
      *(_QWORD *)v92 = v21;
      if ( v21 )
      {
        if ( !a14 && !*((_QWORD *)v21 + 20) )
        {
          PFFMEMOBJ::PFFMEMOBJ((PFFMEMOBJ *)v88, v21, a8, a10, *(struct PFT **)v16);
          v64 = 0;
          v85 = 0;
          v86 = *(_DWORD *)(*(_QWORD *)v92 + 216LL);
          SEMOBJ<17>::vUnlock(v97);
          if ( !v88[0] )
          {
LABEL_104:
            PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v88);
            SEMOBJ<17>::vUnlock(v97);
            return v64;
          }
          if ( !(unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v88, a2, v86, 0LL, a12) )
          {
            *a7 = 0;
            goto LABEL_104;
          }
          SEMOBJ<17>::SEMOBJ<17>(v92, v96);
          LODWORD(v87) = a12 != 0LL;
          v65 = PUBLIC_PFTOBJ::pPFFGet(v16, a2, v102, v15, Src, a6, &v90, v87);
          *a9 = v65;
          if ( v65 )
          {
            v75 = PFTOBJ::chpfeIncrPFF(v16, v65, &v85, a10, a12);
            v64 = v85;
            v66 = v75;
            if ( v75 )
            {
              *a7 = v75;
LABEL_103:
              SEMOBJ<17>::vUnlock(v92);
              goto LABEL_104;
            }
          }
          else
          {
            v66 = v86;
          }
          v67 = v88[0];
          v68 = v87;
          *a9 = (struct PFF *)v88[0];
          if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v88, v68) )
          {
            v69 = *(struct PFT **)v16;
            if ( (*(_DWORD *)(v67 + 52) & 0x200) == 0 )
              ++*((_DWORD *)v69 + 8);
            ++*((_DWORD *)v69 + 7);
            v70 = v90;
            if ( *v90 )
              *((_QWORD *)*v90 + 2) = *a9;
            v71 = *a9;
            *((_QWORD *)v71 + 1) = *v70;
            *((_QWORD *)v71 + 2) = 0LL;
            *v70 = v71;
            PFFOBJ::vSetUniqueness((PFFOBJ *)v88);
            v89 |= 2u;
            PopThreadGuardedObject(v67 + 168);
            *a7 = v66;
            v64 = 1;
          }
          else
          {
            *a7 = 0;
            PFFOBJ::vRemoveHash((PFFOBJ *)v88);
          }
          goto LABEL_103;
        }
      }
    }
    v98 = 0LL;
    SEMOBJ<17>::vUnlock(v97);
    if ( !(12 * (_DWORD)v15)
      || (v22 = (char *)Win32AllocPoolZInit((unsigned int)(12 * v15), 1886221383LL), (v93 = v22) == 0LL) )
    {
      EngSetLastError(8u);
      goto LABEL_57;
    }
    *(_QWORD *)v92 = &v22[8 * v15];
    if ( (_DWORD)v15 << 7 )
    {
      v23 = Win32AllocPoolZInit((unsigned int)((_DWORD)v15 << 7), 1986422343LL);
      v26 = (struct FONTFILEVIEW **)v23;
      if ( v23 )
      {
        v27 = a2;
        v91 = (HDEV)a2;
        *(_QWORD *)v94 = v23 + (unsigned int)(8 * v15);
        *(_QWORD *)v95 = v93;
        if ( (_DWORD)v15 )
        {
          v28 = *(_DWORD **)v92;
          v29 = *(_QWORD *)v94;
          v30 = &v93[-v23];
          *(_QWORD *)v95 = v93;
          v31 = v23;
          do
          {
            *(_QWORD *)v31 = v29;
            *(_QWORD *)(v29 + 80) = v27;
            v32 = TrustedFontFileTable::Contains(v27);
            v27 = (WCHAR *)v91;
            *(_BYTE *)(*(_QWORD *)v31 + 44LL) = v32;
            v24 = 2LL;
            *(_QWORD *)&v30[v31] = 0LL;
            *v28 = 0;
            while ( *v27++ )
              ;
            v29 += 120LL;
            v91 = (HDEV)v27;
            v31 += 8LL;
            ++v28;
            --v15;
          }
          while ( v15 );
          v15 = a4;
          v17 = a10;
          v19 = a7;
          v18 = a9;
          v16 = this;
        }
        v91 = 0LL;
        LODWORD(v87) = 0;
        v86 = a13
           || PFTOBJ::bIsPrivatePFT(v16, (__int64)v27, v25)
           || (v17 & 0xFFFFFFFE) != 0
           || (_DWORD)a6
           || !v102
           || Src;
        UmfdHostLifeTimeManager::EnsureUmfdHost(v24, (__int64)v27, v25);
        SessionState = W32GetSessionState(v35, v34, v36);
        SEMOBJ<25>::SEMOBJ<25>(v99, *(_QWORD *)(SessionState + 96) + 4872LL);
        *(_QWORD *)v94 = 0LL;
        UmfdLoadFontFileView(a2, v102, v26, v15, v95[0], v92[0], Src, a6, (__int64 *)&v98, &v91, v94, v86, (int *)&v87);
        v39 = v99[0];
        if ( v99[0] )
          GreReleaseSemaphoreCommon<25,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            (__int64)v99[0]);
        v40 = v98;
        if ( v98
          && (v41 = (*((__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))v91 + 386))(v98, 2LL, 0LL),
              v86 = v41,
              (v40 = v41) != 0)
          && v41 != -1 )
        {
          if ( a12 && !*((_QWORD *)a12 + 1) && v41 > 2 )
          {
            AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v93);
LABEL_56:
            v14 = v85;
LABEL_57:
            SEMOBJ<17>::vUnlock(v97);
            return v14;
          }
          v83 = v87;
          v82 = *(struct PFT **)v16;
          v81 = v91;
          v80 = v98;
          LODWORD(Size) = a6;
          *v19 = v41;
          PFFMEMOBJ::PFFMEMOBJ(
            (PFFMEMOBJ *)v88,
            v41,
            a2,
            v102,
            v15,
            Src,
            Size,
            v80,
            v81,
            0LL,
            v82,
            a8,
            v17,
            (struct FNTCHECKSUM *)v94,
            v26,
            0LL,
            v83);
          if ( v88[0] )
          {
            v84 = 0;
            if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v88, a2, v86, 0LL, a12) )
            {
              SEMOBJ<17>::SEMOBJ<17>(v99, v96);
              LODWORD(v87) = a12 != 0LL;
              v42 = PUBLIC_PFTOBJ::pPFFGet(v16, a2, v102, v15, Src, a6, &v90, v87);
              *v18 = v42;
              if ( v42 && (v76 = PFTOBJ::chpfeIncrPFF(v16, v42, &v85, v17, a12)) != 0 )
              {
                if ( (v17 & 0x40) != 0 )
                  v76 = 0;
                *v19 = v76;
                v77 = *v18;
                if ( (v17 & 0x400) != 0 )
                  *((_DWORD *)v77 + 13) |= 0x400u;
                if ( (v17 & 0x100) != 0 )
                  *((_DWORD *)v77 + 13) |= 0x800u;
              }
              else
              {
                v43 = v87;
                *v18 = (struct PFF *)v88[0];
                if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v88, v43) )
                {
                  v44 = v88[0];
                  v45 = *(struct PFT **)v16;
                  if ( (*(_DWORD *)(v88[0] + 52LL) & 0x200) == 0 )
                    ++*((_DWORD *)v45 + 8);
                  ++*((_DWORD *)v45 + 7);
                  v46 = v90;
                  if ( *v90 )
                    *((_QWORD *)*v90 + 2) = *v18;
                  v47 = *v18;
                  *((_QWORD *)v47 + 1) = *v46;
                  *((_QWORD *)v47 + 2) = 0LL;
                  *v46 = v47;
                  PFFOBJ::vSetUniqueness((PFFOBJ *)v88);
                  v89 |= 2u;
                  PopThreadGuardedObject(v44 + 168);
                  v48 = *(_WORD **)(v44 + 24);
                  if ( (_DWORD)v15 )
                  {
                    v49 = v26;
                    v50 = (unsigned int)v15;
                    do
                    {
                      *((_QWORD *)*v49 + 10) = v48;
                      while ( *v48++ )
                        ;
                      ++v49;
                      --v50;
                    }
                    while ( v50 );
                  }
                  if ( (v17 & 0x40) != 0 )
                    *((_DWORD *)*v18 + 13) |= 0x80u;
                  v52 = *v18;
                  if ( (v17 & 0x400) != 0 )
                    *((_DWORD *)v52 + 13) |= 0x400u;
                  if ( (v17 & 0x100) != 0 )
                    *((_DWORD *)v52 + 13) |= 0x800u;
                  if ( (_DWORD)v15 )
                  {
                    v53 = (unsigned int)v15;
                    do
                    {
                      EngUnmapFontFileFD((ULONG_PTR)*v26++);
                      --v53;
                    }
                    while ( v53 );
                  }
                  v26 = 0LL;
                  v85 = 1;
                }
                else
                {
                  *v19 = 0;
                  PFFOBJ::vRemoveHash((PFFOBJ *)v88);
                }
              }
              SEMOBJ<17>::vUnlock(v99);
            }
            else
            {
              *v19 = 0;
            }
            if ( (v89 & 2) == 0 )
            {
              if ( (_DWORD)v15 )
              {
                v78 = (unsigned int)v15;
                do
                {
                  EngUnmapFontFileFD((ULONG_PTR)*v26++);
                  --v78;
                }
                while ( v78 );
              }
              PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v88);
              goto LABEL_54;
            }
          }
          v54 = v84;
          PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v88);
          if ( !v26 )
          {
LABEL_53:
            if ( v54 )
            {
              v60 = W32GetSessionState(v40, v39, v38);
              v61 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(v60 + 96) + 24248LL);
              if ( *(_QWORD *)(v60 + 96) != -24248LL )
                GreAcquirePushLockExclusive(v61);
              if ( *(_QWORD *)(v96 + 19296) && (_DWORD)v15 )
              {
                v72 = (unsigned int)v15;
                v73 = v26;
                v74 = v96;
                do
                {
                  NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::Remove(*(struct W32_PUSH_LOCK **)(v74 + 19296));
                  ++v73;
                  --v72;
                }
                while ( v72 );
                v15 = a4;
              }
              if ( v61 )
                GreReleasePushLockExclusive(v61);
              if ( (_DWORD)v15 )
              {
                v62 = v26;
                do
                {
                  v63 = *v62;
                  if ( !*((_BYTE *)*v62 + 44) && !*((_QWORD *)v63 + 2) && !*((_QWORD *)v63 + 1) )
                    vUnreferenceFileviewSection(v63);
                  ++v62;
                  --v15;
                }
                while ( v15 );
              }
              Win32FreePool(v26);
            }
LABEL_54:
            if ( v93 )
              Win32FreePool(v93);
            goto LABEL_56;
          }
        }
        else
        {
          v54 = 1;
        }
        if ( (_DWORD)v15 )
        {
          v58 = (ULONG_PTR *)v26;
          v59 = (unsigned int)v15;
          do
          {
            EngUnmapFontFileFD(*v58++);
            --v59;
          }
          while ( v59 );
        }
        goto LABEL_53;
      }
      v22 = v93;
    }
    Win32FreePool(v22);
    goto LABEL_57;
  }
  return 0LL;
}
