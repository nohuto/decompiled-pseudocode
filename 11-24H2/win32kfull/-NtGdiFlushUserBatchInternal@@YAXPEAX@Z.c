/*
 * XREFs of ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x140172FB0
 * Callers:
 *     NtGdiFlushUserBatch @ 0x140172F50 (NtGdiFlushUserBatch.c)
 * Callees:
 *     ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x140016D8C (-GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x140017510 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x140037860 (-GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400C3880 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ?GrepBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@KAEBUTag@RFONTOBJ@@@Z @ 0x1400C45F4 (-GrepBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@KAEBUTag@RFONTOBJ@@@Z.c)
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1400CE13C (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?GrepBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@KAEBUTag@RFONTOBJ@@@Z @ 0x140163800 (-GrepBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@KAEBUTag@RFONTOBJ@@@Z.c)
 *     ??0GdiBatchProcessingStatus@@QEAA@PEAU_TEB@@@Z @ 0x1401769F0 (--0GdiBatchProcessingStatus@@QEAA@PEAU_TEB@@@Z.c)
 *     ??1GdiBatchProcessingStatus@@QEAA@XZ @ 0x14017CDF0 (--1GdiBatchProcessingStatus@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x14031D494 (Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall NtGdiFlushUserBatchInternal(void *a1, __int64 a2, __int64 a3)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r9
  struct _TEB *v7; // rbx
  ULONG *Buffer; // r13
  __int64 v9; // r8
  __int64 v10; // r9
  HDC v11; // rdx
  int *v12; // rcx
  ULONG Offset; // eax
  ULONG v14; // edi
  __int64 v15; // rdx
  int v16; // ecx
  __int64 SessionState; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 bottom; // r8
  int v32; // ecx
  __int64 v33; // rbx
  __int64 v34; // rcx
  ULONG v35; // eax
  int v36; // r9d
  int v37; // ecx
  int v38; // eax
  HFONT v39; // rax
  int v40; // r9d
  DC *v41; // rdx
  __int64 v42; // rax
  int v43; // edi
  unsigned int v44; // r10d
  unsigned int v45; // r11d
  unsigned int v46; // esi
  unsigned int v47; // r14d
  unsigned int v48; // r15d
  ULONG v49; // r8d
  __int64 v50; // r8
  __int64 v51; // rbx
  int v52; // rax^4
  __int64 v53; // rcx
  __int64 v54; // rcx
  LONG left; // edi
  LONG v56; // esi
  int v57; // r14d
  ROP4 v58; // r15d
  DC *v59; // r9
  __int64 v60; // rcx
  ULONG v61; // edx
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // edx
  __int64 v65; // r8
  LONG top; // rax^4
  _DWORD *v67; // rcx
  int v68; // edi
  int v69; // esi
  int v70; // r14d
  int v71; // r15d
  unsigned __int64 right; // rdx
  DC *v73; // r14
  int v74; // eax
  unsigned int v75; // eax
  LONG v76; // eax
  int v77; // eax
  DC *v78; // rcx
  int v79; // eax
  DC *v80; // rcx
  struct SURFACE *v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rdx
  GDI_TEB_BATCH *v85; // rcx
  __int64 *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  int v89; // ecx
  __int64 v90; // rbx
  int v91; // ecx
  __int64 v92; // rcx
  struct SURFACE *v93; // [rsp+20h] [rbp-3B8h]
  int v94; // [rsp+28h] [rbp-3B0h]
  char v95; // [rsp+70h] [rbp-368h]
  ULONG GdiBatchCount; // [rsp+84h] [rbp-354h]
  int v97; // [rsp+88h] [rbp-350h]
  int v98; // [rsp+88h] [rbp-350h]
  unsigned int v99; // [rsp+8Ch] [rbp-34Ch]
  unsigned int v100; // [rsp+8Ch] [rbp-34Ch]
  int v101; // [rsp+A0h] [rbp-338h]
  unsigned int v102; // [rsp+A4h] [rbp-334h]
  unsigned int v103; // [rsp+A8h] [rbp-330h]
  unsigned int v104; // [rsp+ACh] [rbp-32Ch]
  unsigned int v105; // [rsp+B0h] [rbp-328h]
  int v106; // [rsp+B4h] [rbp-324h]
  int v107; // [rsp+B8h] [rbp-320h]
  unsigned __int64 v108; // [rsp+C0h] [rbp-318h]
  int v109; // [rsp+C8h] [rbp-310h]
  DC *v110[14]; // [rsp+D0h] [rbp-308h] BYREF
  int v111; // [rsp+140h] [rbp-298h]
  ROP4 v112; // [rsp+144h] [rbp-294h]
  int v113; // [rsp+148h] [rbp-290h]
  int v114; // [rsp+14Ch] [rbp-28Ch]
  _DWORD v115[2]; // [rsp+150h] [rbp-288h] BYREF
  GDI_TEB_BATCH *p_GdiTebBatch; // [rsp+158h] [rbp-280h]
  struct _TEB *Self; // [rsp+160h] [rbp-278h]
  int v118; // [rsp+168h] [rbp-270h]
  HDC HDC; // [rsp+170h] [rbp-268h]
  __int64 v120; // [rsp+178h] [rbp-260h]
  __int64 v121; // [rsp+180h] [rbp-258h]
  HFONT v122; // [rsp+188h] [rbp-250h]
  __int64 v123; // [rsp+190h] [rbp-248h]
  __int64 v124; // [rsp+198h] [rbp-240h]
  __int64 v125; // [rsp+1A0h] [rbp-238h]
  ULONG *p_GdiBatchCount; // [rsp+1A8h] [rbp-230h]
  __int64 v127; // [rsp+1B0h] [rbp-228h]
  unsigned int v128; // [rsp+1B8h] [rbp-220h]
  unsigned int v129; // [rsp+1BCh] [rbp-21Ch]
  unsigned int v130; // [rsp+1C0h] [rbp-218h]
  unsigned int v131; // [rsp+1C4h] [rbp-214h]
  ULONG v132; // [rsp+1C8h] [rbp-210h]
  ULONG v133; // [rsp+1CCh] [rbp-20Ch]
  ULONG v134; // [rsp+1D0h] [rbp-208h]
  int v135; // [rsp+1D4h] [rbp-204h]
  int v136; // [rsp+1D8h] [rbp-200h]
  unsigned int v137; // [rsp+1DCh] [rbp-1FCh]
  unsigned int v138; // [rsp+1E0h] [rbp-1F8h]
  unsigned int v139; // [rsp+1E4h] [rbp-1F4h]
  unsigned int v140; // [rsp+1E8h] [rbp-1F0h]
  unsigned int v141; // [rsp+1ECh] [rbp-1ECh]
  unsigned int v142; // [rsp+1F0h] [rbp-1E8h]
  ULONG v143; // [rsp+1F4h] [rbp-1E4h]
  ULONG v144; // [rsp+1F8h] [rbp-1E0h]
  unsigned int v145; // [rsp+1FCh] [rbp-1DCh]
  LONG v146; // [rsp+200h] [rbp-1D8h]
  LONG v147; // [rsp+204h] [rbp-1D4h]
  int v148; // [rsp+208h] [rbp-1D0h]
  __int64 v149; // [rsp+210h] [rbp-1C8h] BYREF
  int v150; // [rsp+218h] [rbp-1C0h]
  __int64 v151; // [rsp+220h] [rbp-1B8h]
  ULONG v152; // [rsp+228h] [rbp-1B0h]
  _BYTE v153[16]; // [rsp+230h] [rbp-1A8h] BYREF
  __int64 v154; // [rsp+240h] [rbp-198h]
  _BYTE v155[56]; // [rsp+248h] [rbp-190h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v156[16]; // [rsp+280h] [rbp-158h] BYREF
  HDC v157[18]; // [rsp+300h] [rbp-D8h] BYREF
  RECTL v158; // [rsp+390h] [rbp-48h] BYREF
  struct _RECTL v159; // [rsp+3A0h] [rbp-38h] BYREF

  Self = (struct _TEB *)KeGetPcr()->NtTib.Self;
  v107 = 1;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    v4 = *CurrentThreadWin32Thread;
  else
    v4 = 0LL;
  v5 = 0LL;
  if ( v4 )
    v5 = v4 + 8;
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 336);
  else
    v6 = 0LL;
  if ( v6 && *(_BYTE *)(v6 + 80) )
  {
    v94 = 0;
    v93 = 0LL;
    GrepCaptureLiveMemoryDump(400LL, 52LL, 4LL);
  }
  v7 = Self;
  p_GdiBatchCount = &Self->GdiBatchCount;
  GdiBatchCount = Self->GdiBatchCount;
  Buffer = Self->GdiTebBatch.Buffer;
  Self->GdiBatchCount = 0;
  p_GdiTebBatch = &v7->GdiTebBatch;
  v7->GdiTebBatch.Offset &= 0xC0000000;
  v108 = (unsigned __int64)(Buffer + 310);
  if ( GdiBatchCount - 1 > 0x134 )
    goto LABEL_161;
  HDC = 0LL;
  GdiBatchProcessingStatus::GdiBatchProcessingStatus((GdiBatchProcessingStatus *)v153, v7);
  HDC = (HDC)v7->GdiTebBatch.HDC;
  v11 = HDC;
  v12 = (int *)p_GdiTebBatch;
  Offset = p_GdiTebBatch->Offset;
  v14 = p_GdiTebBatch->Offset >> 31;
  v7->GdiTebBatch.HDC = 0LL;
  *v12 = Offset & 0x7FFFFFFF;
  if ( v11 )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v110, v11);
    if ( v110[0] )
    {
      SessionState = W32GetSessionState(v16, v15);
      EUDCCountRegion::EUDCCountRegion(
        (EUDCCountRegion *)v155,
        (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
      if ( (unsigned int)Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline(v19, v18) && !v155[48] )
      {
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v155);
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v110);
        GdiBatchProcessingStatus::~GdiBatchProcessingStatus((GdiBatchProcessingStatus *)v153);
        return;
      }
      v20 = *((unsigned __int16 *)v110[0] + 6);
      v115[0] = 23;
      v115[1] = v20;
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v157);
      v95 = 0;
      if ( (unsigned int)UserIsCurrentProcessImmersiveAppContainer(v22, v21) && !(_BYTE)v14 )
      {
        v95 = 1;
        v26 = (__int64 *)PsGetCurrentThreadWin32Thread(v24, v23, v25);
        if ( v26 )
          v27 = *v26;
        else
          v27 = 0LL;
        v28 = 0LL;
        if ( v27 )
          v28 = v27 + 8;
        if ( v28 )
          *(_DWORD *)(v28 + 344) |= 4u;
      }
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v157, (struct XDCOBJ *)v110, 0) )
      {
        v107 = 0;
        v151 = *(_QWORD *)(*((_QWORD *)v110[0] + 122) + 160LL);
        do
        {
          v29 = 1LL;
          v32 = *((unsigned __int16 *)Buffer + 1);
          v136 = v32;
          v33 = *(unsigned __int16 *)Buffer;
          v106 = *(unsigned __int16 *)Buffer;
          if ( (unsigned __int64)Buffer + v33 > v108 )
            break;
          switch ( v32 )
          {
            case 0:
              if ( (unsigned int)v33 >= 0x48 && !v95 )
              {
                left = Buffer[1];
                v114 = left;
                v146 = left;
                v56 = Buffer[2];
                v113 = v56;
                v147 = v56;
                v57 = Buffer[3];
                v118 = v57;
                v148 = v57;
                v101 = Buffer[4];
                v150 = v101;
                v152 = Buffer[8];
                v105 = Buffer[9];
                v128 = v105;
                v104 = Buffer[10];
                v129 = v104;
                v103 = Buffer[15];
                v130 = v103;
                v102 = Buffer[16];
                v131 = v102;
                v58 = (BYTE2(v152) << 8) | BYTE2(v152);
                v112 = v58;
                if ( ((BYTE2(v152) ^ (unsigned __int8)(4 * BYTE2(v152))) & 0xCC) == 0 )
                {
                  v127 = *(_QWORD *)(*((_QWORD *)v110[0] + 122) + 160LL);
                  v98 = 0;
                  v100 = 0;
                  v154 = *((_QWORD *)Buffer + 3);
                  GreDCSelectBrush(v110[0], v154);
                  v59 = v110[0];
                  v60 = *((_QWORD *)v110[0] + 122);
                  v111 = *(_DWORD *)(v60 + 192);
                  v109 = *(_DWORD *)(v60 + 196);
                  v132 = Buffer[11];
                  v61 = Buffer[17];
                  v133 = v61;
                  if ( v111 != v132 )
                  {
                    *(_DWORD *)(v60 + 192) = v132;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 196LL) = v61;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 152LL) |= 1u;
                    v59 = v110[0];
                  }
                  if ( (*((_DWORD *)v59 + 30) & 1) != 0 )
                  {
                    v62 = *((_QWORD *)v59 + 122);
                    if ( *(_QWORD *)(v62 + 248) )
                    {
                      v100 = *(_DWORD *)(v62 + 152) & 0x40000;
                      *(_DWORD *)(v62 + 152) |= 0x40000u;
                      v59 = v110[0];
                      v63 = *((_QWORD *)v110[0] + 122);
                      v64 = *(_DWORD *)(v63 + 256);
                      v98 = v64;
                      v134 = Buffer[12];
                      if ( v64 != v134 )
                      {
                        *(_DWORD *)(v63 + 256) = v134;
                        *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 152LL) |= 1u;
                        v59 = v110[0];
                      }
                    }
                  }
                  v65 = *((_QWORD *)v59 + 122);
                  v123 = *(_QWORD *)(v65 + 324);
                  LODWORD(v51) = v123;
                  *(_QWORD *)&v159.left = *(_QWORD *)(Buffer + 13);
                  top = v159.top;
                  if ( v123 != *(_QWORD *)&v159.left )
                  {
                    *(_DWORD *)(v65 + 324) = v159.left;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 328LL) = top;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 340LL) |= 0x2010u;
                    v59 = v110[0];
                  }
                  DC::QuickInitXform(v59, &v149, 516LL);
                  if ( (*(_BYTE *)(v149 + 32) & 1) != 0 )
                  {
                    v158.left = left;
                    v158.top = v56;
                    right = (unsigned int)(v57 + left);
                    v158.right = v57 + left;
                    v158.bottom = v56 + v101;
                    v73 = v110[0];
                    if ( (*(_BYTE *)(v149 + 32) & 0x43) == 0x43
                      || (v74 = bCvtPts1(v149, (__int64)&v158, 2LL),
                          right = (unsigned int)v158.right,
                          v56 = v158.top,
                          left = v158.left,
                          v74) )
                    {
                      LOBYTE(v74) = 1;
                    }
                    if ( (_BYTE)v74 && (*(_DWORD *)(*((_QWORD *)v73 + 122) + 108LL) & 1) != 0 )
                    {
                      v158.left = ++left;
                      right = (unsigned int)(right + 1);
                      v158.right = right;
                    }
                    if ( left > (int)right )
                    {
                      v75 = left;
                      left = right;
                      v158.left = right;
                      right = v75;
                      v158.right = v75;
                    }
                    bottom = (unsigned int)v158.bottom;
                    if ( v56 > v158.bottom )
                    {
                      v76 = v56;
                      v56 = v158.bottom;
                      v158.top = v158.bottom;
                      v158.bottom = v76;
                    }
                    if ( left == (_DWORD)right || (v77 = 0, v56 == v158.bottom) )
                      v77 = 1;
                    if ( !v77 )
                    {
                      v78 = v110[0];
                      v79 = *((_DWORD *)v110[0] + 9);
                      if ( (v79 & 0xE0) != 0 )
                      {
                        if ( (v79 & 0x20) != 0 )
                        {
                          if ( left < *((_DWORD *)v110[0] + 266) )
                          {
                            *((_DWORD *)v110[0] + 266) = left;
                            right = (unsigned int)v158.right;
                            v56 = v158.top;
                            left = v158.left;
                          }
                          if ( v56 < *((_DWORD *)v78 + 267) )
                          {
                            *((_DWORD *)v78 + 267) = v56;
                            right = (unsigned int)v158.right;
                            v56 = v158.top;
                            left = v158.left;
                          }
                          if ( (int)right > *((_DWORD *)v78 + 268) )
                          {
                            *((_DWORD *)v78 + 268) = right;
                            right = (unsigned int)v158.right;
                            v56 = v158.top;
                            left = v158.left;
                          }
                          bottom = (unsigned int)v158.bottom;
                          if ( v158.bottom > *((_DWORD *)v78 + 269) )
                          {
                            *((_DWORD *)v78 + 269) = v158.bottom;
                            right = (unsigned int)v158.right;
                            v56 = v158.top;
                            left = v158.left;
                          }
                        }
                        v80 = v110[0];
                        if ( (*((_DWORD *)v110[0] + 9) & 0x80u) != 0 )
                        {
                          if ( left < *((_DWORD *)v110[0] + 274) )
                          {
                            *((_DWORD *)v110[0] + 274) = left;
                            right = (unsigned int)v158.right;
                            v56 = v158.top;
                          }
                          if ( v56 < *((_DWORD *)v80 + 275) )
                          {
                            *((_DWORD *)v80 + 275) = v56;
                            right = (unsigned int)v158.right;
                          }
                          if ( (int)right > *((_DWORD *)v80 + 276) )
                            *((_DWORD *)v80 + 276) = right;
                          bottom = (unsigned int)v158.bottom;
                          if ( v158.bottom > *((_DWORD *)v80 + 277) )
                            *((_DWORD *)v80 + 277) = v158.bottom;
                        }
                      }
                      v81 = (struct SURFACE *)*((_QWORD *)v110[0] + 62);
                      if ( v81 )
                        GrePatBltLockedDC(
                          (struct XDCOBJ *)v110,
                          (struct EXFORMOBJ *)right,
                          &v158,
                          v58,
                          v81,
                          v105,
                          v104,
                          v103,
                          v102);
                    }
                  }
                  else
                  {
                    v67 = (_DWORD *)*((_QWORD *)v110[0] + 122);
                    v68 = v67[46];
                    v69 = v67[44];
                    v70 = v67[47];
                    v71 = v67[45];
                    v67[46] = v105;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 176LL) = v104;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 188LL) = v103;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 180LL) = v102;
                    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v156, 0LL);
                    GrepMaskBlt(v110, v114, v113, v118, v101, v156, 0, 0, 0LL, 0, 0, v112 << 16, 0);
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 184LL) = v68;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 176LL) = v69;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 188LL) = v70;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 180LL) = v71;
                    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v156);
                  }
                  v82 = *((_QWORD *)v110[0] + 122);
                  if ( *(_QWORD *)(v82 + 160) != v127 )
                  {
                    *(_QWORD *)(v82 + 160) = v127;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 152LL) |= 0x1000u;
                  }
                  v83 = *((_QWORD *)v110[0] + 122);
                  if ( v111 != *(_DWORD *)(v83 + 192) )
                  {
                    *(_DWORD *)(v83 + 192) = v111;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 196LL) = v109;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 152LL) |= 1u;
                  }
                  if ( (*((_DWORD *)v110[0] + 30) & 1) != 0 )
                  {
                    v84 = *((_QWORD *)v110[0] + 122);
                    if ( *(_QWORD *)(v84 + 248) )
                    {
                      if ( v98 != *(_DWORD *)(v84 + 256) )
                      {
                        *(_DWORD *)(v84 + 256) = v98;
                        *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 152LL) |= 1u;
                      }
                      if ( !v100 )
                        *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 152LL) &= ~0x40000u;
                    }
                  }
                  v29 = HIDWORD(v123);
                  goto LABEL_75;
                }
              }
              break;
            case 1:
              if ( !v95 && (unsigned int)v33 >= 0x38 )
              {
                GreProbeUntrustedVaRange(Buffer, v108 - (_QWORD)Buffer, 1uLL, 8uLL);
                v137 = Buffer[3];
                v40 = v137;
                v29 = (unsigned int)(v33 - 48);
                if ( v137 < 0xAAAAAAA && 24 * (unsigned __int64)v137 <= (unsigned int)v29 )
                {
                  v41 = v110[0];
                  v42 = *((_QWORD *)v110[0] + 122);
                  v43 = *(_DWORD *)(v42 + 192);
                  v97 = *(_DWORD *)(v42 + 196);
                  v44 = Buffer[2];
                  v138 = v44;
                  v45 = Buffer[4];
                  v139 = v45;
                  v46 = Buffer[5];
                  v140 = v46;
                  v47 = Buffer[7];
                  v141 = v47;
                  v48 = Buffer[8];
                  v142 = v48;
                  v143 = Buffer[6];
                  v49 = Buffer[9];
                  v144 = v49;
                  v99 = Buffer[1];
                  v145 = v99;
                  if ( v43 != v143 )
                  {
                    *(_DWORD *)(v42 + 192) = v143;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 196LL) = v49;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 152LL) |= 1u;
                    v41 = v110[0];
                  }
                  v50 = *((_QWORD *)v41 + 122);
                  v51 = *(_QWORD *)(v50 + 324);
                  v127 = *((_QWORD *)Buffer + 5);
                  v52 = HIDWORD(v127);
                  if ( v51 != v127 )
                  {
                    *(_DWORD *)(v50 + 324) = v127;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 328LL) = v52;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 340LL) |= 0x2010u;
                  }
                  GrepPolyPatBlt(
                    (struct XDCOBJ *)v110,
                    v99,
                    (struct _POLYPATBLT *)(Buffer + 12),
                    v40,
                    v44,
                    v45,
                    v46,
                    v47,
                    v48);
                  v53 = *((_QWORD *)v110[0] + 122);
                  if ( v43 != *(_DWORD *)(v53 + 192) )
                  {
                    *(_DWORD *)(v53 + 192) = v43;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 196LL) = v97;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 152LL) |= 1u;
                  }
                  v29 = HIDWORD(v51);
LABEL_75:
                  v54 = *((_QWORD *)v110[0] + 122);
                  if ( (_DWORD)v51 != *(_DWORD *)(v54 + 324) || (_DWORD)v29 != *(_DWORD *)(v54 + 328) )
                  {
                    *(_DWORD *)(v54 + 324) = v51;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 328LL) = v29;
                    *(_DWORD *)(*((_QWORD *)v110[0] + 122) + 340LL) |= 0x2010u;
                  }
                }
              }
              break;
            case 2:
              if ( !v95 )
                GrepBatchTextOut(v110, (struct _BATCHTEXTOUT *)Buffer, v33, (const struct RFONTOBJ::Tag *)v115);
              break;
            case 3:
              if ( !v95 )
                GrepBatchTextOutRect(
                  (struct XDCOBJ *)v110,
                  (struct _BATCHTEXTOUTRECT *)Buffer,
                  v33,
                  (const struct RFONTOBJ::Tag *)v115);
              break;
            case 4:
              v35 = 0;
              bottom = 0LL;
              if ( (unsigned int)v33 >= 0xC )
              {
                v35 = Buffer[1];
                bottom = Buffer[2];
              }
              else
              {
                v29 = 0LL;
              }
              if ( (_DWORD)v29 )
              {
                v29 = (__int64)v110[0];
                *((_DWORD *)v110[0] + 31) = v35;
                *(_DWORD *)(v29 + 128) = bottom;
                v36 = *(_DWORD *)(v29 + 40) & 1;
                if ( v36 )
                  v37 = *(_DWORD *)(v29 + 1024);
                else
                  v37 = *(_DWORD *)(v29 + 1016);
                *(_DWORD *)(v29 + 1192) = v35 + v37;
                if ( v36 )
                  v38 = *(_DWORD *)(v29 + 1028);
                else
                  v38 = *(_DWORD *)(v29 + 1020);
                *(_DWORD *)(v29 + 1196) = bottom + v38;
              }
              break;
            case 5:
              v159 = 0LL;
              bottom = 0LL;
              if ( (unsigned int)v33 >= 0x18 )
              {
                v159 = *(struct _RECTL *)(Buffer + 2);
                bottom = Buffer[1];
              }
              else
              {
                v29 = 0LL;
              }
              if ( (_DWORD)v29 )
                GreExtSelectClipRgnLocked(v110, &v159, bottom);
              break;
            case 6:
              v39 = 0LL;
              v122 = 0LL;
              if ( (unsigned int)v33 >= 0x10 )
              {
                v39 = (HFONT)*((_QWORD *)Buffer + 1);
                v122 = v39;
              }
              else
              {
                v29 = 0LL;
              }
              if ( (_DWORD)v29 )
                GrepSelectFont((struct XDCOBJ *)v110, v39, 0);
              break;
            case 7:
              v34 = 0LL;
              v120 = 0LL;
              if ( (unsigned int)v33 >= 0x10 )
              {
                v34 = *((_QWORD *)Buffer + 1);
                v120 = v34;
              }
              else
              {
                v29 = 0LL;
              }
              goto LABEL_43;
            case 8:
              v34 = 0LL;
              v121 = 0LL;
              if ( (unsigned int)v33 >= 0x10 )
              {
                v34 = *((_QWORD *)Buffer + 1);
                v121 = v34;
              }
              else
              {
                v29 = 0LL;
              }
LABEL_43:
              if ( (_DWORD)v29 )
                NtGdiDeleteObjectApp(v34, v29, bottom, 0x140000000uLL, v93, v94);
              break;
            default:
              break;
          }
          --GdiBatchCount;
          Buffer = (ULONG *)((char *)Buffer + ((v106 + 7) & 0xFFFFFFF8));
          if ( !GdiBatchCount )
            break;
        }
        while ( (unsigned __int64)(Buffer + 1) < v108 );
        *p_GdiBatchCount = 0;
        v85 = p_GdiTebBatch;
        p_GdiTebBatch->Offset &= 0xC0000000;
        v85->Offset &= ~0x80000000;
        *(_QWORD *)(*((_QWORD *)v110[0] + 122) + 160LL) = v151;
        v30 = *((_QWORD *)v110[0] + 122);
        *(_DWORD *)(v30 + 152) |= 0x1000u;
      }
      if ( v95 )
      {
        v86 = (__int64 *)PsGetCurrentThreadWin32Thread(v30, v29, bottom);
        if ( v86 )
          v87 = *v86;
        else
          v87 = 0LL;
        v88 = 0LL;
        if ( v87 )
          v88 = v87 + 8;
        if ( v88 )
          *(_DWORD *)(v88 + 344) &= ~4u;
      }
      DEVLOCKOBJ::~DEVLOCKOBJ(v157);
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v155);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v110);
  }
  if ( !v107 )
    goto LABEL_160;
  do
  {
    v89 = *((unsigned __int16 *)Buffer + 1);
    v135 = v89;
    v90 = *(unsigned __int16 *)Buffer;
    if ( (unsigned __int64)Buffer + v90 > v108 )
      break;
    v91 = v89 - 7;
    if ( v91 )
    {
      if ( v91 != 1 )
        goto LABEL_157;
      v124 = 0LL;
      v92 = *((_QWORD *)Buffer + 1);
      v124 = v92;
    }
    else
    {
      v125 = 0LL;
      v92 = *((_QWORD *)Buffer + 1);
      v125 = v92;
    }
    NtGdiDeleteObjectApp(v92, 1LL, v9, v10, v93, v94);
LABEL_157:
    --GdiBatchCount;
    Buffer = (ULONG *)((char *)Buffer + (((_DWORD)v90 + 7) & 0xFFFFFFF8));
  }
  while ( GdiBatchCount && (unsigned __int64)(Buffer + 1) < v108 );
  *p_GdiBatchCount = 0;
  p_GdiTebBatch->Offset &= 0xC0000000;
LABEL_160:
  GdiBatchProcessingStatus::~GdiBatchProcessingStatus((GdiBatchProcessingStatus *)v153);
LABEL_161:
  Self->GdiTebBatch.HDC = 0LL;
}
