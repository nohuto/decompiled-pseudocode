/*
 * XREFs of xxxEnumDisplayMonitors @ 0x140042F90
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1400417E0 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     GetStyleWindow @ 0x14000F1FC (GetStyleWindow.c)
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x140010910 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 *     GreIntersectClipRect @ 0x14001DA50 (GreIntersectClipRect.c)
 *     GreUnlockVisRgn @ 0x140021330 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140021770 (GreLockVisRgn.c)
 *     ReleaseCacheDC @ 0x1400225A0 (ReleaseCacheDC.c)
 *     GreGetClipBox @ 0x140039310 (GreGetClipBox.c)
 *     _HMPheFromObject @ 0x140042A90 (_HMPheFromObject.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x140043D80 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140045170 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140045260 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     GetCurrentThreadCompositedDpi @ 0x140045288 (GetCurrentThreadCompositedDpi.c)
 *     GetMonitorRectForDpi @ 0x1400458A8 (GetMonitorRectForDpi.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x140047880 (TransformRectBetweenCoordinateSpaces.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1400923C0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ @ 0x1400960F0 (--1-$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14009702C (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1401285E8 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxEnumDisplayMonitors(
        HDC a1,
        int *a2,
        __int64 (__fastcall *a3)(struct tagMONITOR *, __int64, struct tagRECT *, __int64),
        __int64 a4,
        int a5)
{
  HDC v6; // r12
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v8; // rcx
  ULONG_PTR v9; // r13
  __int64 (__fastcall *StyleWindow)(__int64, __int64); // rdi
  unsigned __int16 CurrentThreadCompositedDpi; // di
  __int64 v12; // rcx
  __int64 *v13; // rbx
  __int64 x; // rcx
  __m128i v15; // xmm2
  unsigned int v16; // ebx
  ULONG_PTR v17; // rcx
  struct tagMONITOR *j; // r15
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v20; // rcx
  unsigned int v21; // ebx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rax
  unsigned __int16 v27; // bx
  __int64 v28; // rax
  __int128 v29; // xmm0
  unsigned int v30; // ecx
  unsigned __int64 v31; // rsi
  int v32; // rcx^4
  int v33; // eax
  signed int v34; // r9d
  unsigned __int64 v35; // rax
  __int128 v36; // rtt
  int v37; // r10d
  signed int v38; // r11d
  int v39; // edx
  unsigned __int64 v40; // rax
  int v41; // r9d
  unsigned __int64 v42; // r11
  int v43; // esi
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdi
  int v46; // ecx
  signed int v47; // r8d
  unsigned __int64 v48; // rax
  __int64 v49; // r10
  int v50; // ecx
  signed int v51; // r9d
  unsigned __int64 v52; // r8
  int v53; // ecx
  signed int v54; // r9d
  unsigned __int64 v55; // r8
  LONG v56; // edx
  unsigned __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // rbx
  int v60; // r15d
  int v61; // r13d
  int v62; // r12d
  __m128i *MonitorRectForDpi; // rax
  __int32 v64; // edx
  __m128i v65; // xmm1
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // xmm1_8
  unsigned __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rcx
  ULONG_PTR i; // rbx
  int v73; // eax
  __int64 v74; // rax
  PERESOURCE *v75; // rcx
  ULONG_PTR *v76; // rax
  ULONG_PTR v77; // rcx
  __int64 v78; // rax
  bool v79; // zf
  struct tagTHREADINFO *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rcx
  ULONG_PTR k; // rbx
  int v86; // eax
  __int64 v87; // rax
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *v89; // rax
  __int64 v90; // rdi
  __int64 v91; // rcx
  int v92; // eax
  __int64 v93; // rcx
  __int64 v94; // rax
  char *v95; // rbx
  tagDomLock *v96; // rcx
  char v97; // bl
  __int64 v98; // rax
  int (*v99)(void); // rax
  __int64 v100; // rbx
  __int64 (__fastcall *v101)(__int64, __int64, struct tagRECT *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD)); // rax
  __int64 v102; // rax
  struct tagMONITOR *v103; // rax
  HDC MonitorDC; // rax
  __int64 v105; // rcx
  __int64 v106; // rcx
  int y; // edx
  int v108; // ecx
  int v109; // edx
  int v110; // eax
  int v111; // edx
  int v112; // eax
  int v113; // edx
  int v114; // eax
  int v115; // edx
  int v116; // eax
  __int64 v117; // rax
  __int64 v118; // rax
  int v119; // [rsp+30h] [rbp-D0h]
  int v120; // [rsp+30h] [rbp-D0h]
  struct _POINTL v121; // [rsp+40h] [rbp-C0h] BYREF
  HDC v122; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-B0h] BYREF
  struct tagMONITOR *v124; // [rsp+58h] [rbp-A8h]
  __int64 v125; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall *v126)(struct tagMONITOR *, __int64, struct tagRECT *, __int64); // [rsp+68h] [rbp-98h]
  __int64 v127; // [rsp+70h] [rbp-90h]
  __int64 v128; // [rsp+78h] [rbp-88h]
  __m128i v129; // [rsp+80h] [rbp-80h] BYREF
  __int128 v130; // [rsp+90h] [rbp-70h] BYREF
  __m128i v131; // [rsp+A0h] [rbp-60h]
  __int128 v132; // [rsp+B0h] [rbp-50h]
  char v133[16]; // [rsp+C0h] [rbp-40h] BYREF
  char v134[16]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v135; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v136; // [rsp+F0h] [rbp-10h] BYREF
  PERESOURCE *DomainLockRef; // [rsp+100h] [rbp+0h]
  char v138; // [rsp+108h] [rbp+8h] BYREF
  __int64 v139; // [rsp+110h] [rbp+10h]
  char v140; // [rsp+118h] [rbp+18h]
  __int64 v141; // [rsp+120h] [rbp+20h]
  char v142; // [rsp+128h] [rbp+28h]
  char v143; // [rsp+130h] [rbp+30h]

  v127 = a4;
  v126 = a3;
  v135 = 0LL;
  v121 = 0LL;
  v136 = 0LL;
  v6 = a1;
  v122 = a1;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1);
  if ( CurrentThreadNonPaged )
    v125 = *CurrentThreadNonPaged;
  else
    v125 = 0LL;
  BugCheckParameter3 = 0LL;
  v9 = 0LL;
  v128 = 0LL;
  StyleWindow = 0LL;
  if ( !v6 )
  {
    CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
    v13 = *(__int64 **)(W32GetUserSessionState(v12) + 57008);
    x = *v13;
    if ( CurrentThreadCompositedDpi )
    {
      if ( *(_DWORD *)x == 1 )
      {
        UserSessionState = W32GetUserSessionState(x);
        v15 = *(__m128i *)GetMonitorRectForDpi(
                            v133,
                            *(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 104LL),
                            CurrentThreadCompositedDpi);
      }
      else
      {
        v59 = v13[14];
        v15 = 0LL;
        v129 = 0LL;
        if ( v59 )
        {
          v120 = _mm_cvtsi128_si32((__m128i)0LL);
          v60 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
          v61 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
          v62 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
          do
          {
            x = *(unsigned int *)(*(_QWORD *)(v59 + 40) + 24LL);
            if ( (x & 1) != 0 )
            {
              MonitorRectForDpi = (__m128i *)GetMonitorRectForDpi(v134, v59, CurrentThreadCompositedDpi);
              v64 = v120;
              v65 = *MonitorRectForDpi;
              v66 = MonitorRectForDpi->m128i_i64[0];
              v67 = _mm_srli_si128(v65, 8).m128i_u64[0];
              if ( v120 >= (int)v66 )
                v64 = v66;
              v68 = HIDWORD(v66);
              v129.m128i_i32[0] = v64;
              v120 = v64;
              if ( v61 >= (int)v68 )
                v61 = v68;
              v129.m128i_i32[1] = v61;
              if ( v62 <= (int)v67 )
                v62 = v67;
              v129.m128i_i32[2] = v62;
              if ( v60 <= SHIDWORD(v67) )
                v60 = HIDWORD(v67);
              v129.m128i_i32[3] = v60;
              v15 = _mm_load_si128(&v129);
            }
            v59 = *(_QWORD *)(v59 + 56);
          }
          while ( v59 );
          v6 = v122;
          v9 = BugCheckParameter3;
        }
      }
    }
    else
    {
      v15 = *(__m128i *)(x + 24);
    }
    v131 = v15;
    v135 = v15;
    if ( a2 )
    {
      v108 = v135.m128i_i32[2];
      v109 = v135.m128i_i32[0];
      if ( v131.m128i_i32[0] <= *a2 )
        v109 = *a2;
      v110 = a2[2];
      v135.m128i_i32[0] = v109;
      if ( v135.m128i_i32[2] >= v110 )
        v108 = v110;
      v135.m128i_i32[2] = v108;
      if ( v109 >= v108 )
        return 1LL;
      v111 = v135.m128i_i32[1];
      x = v135.m128i_u32[3];
      if ( v135.m128i_i32[1] <= a2[1] )
        v111 = a2[1];
      v112 = a2[3];
      v135.m128i_i32[1] = v111;
      if ( v135.m128i_i32[3] >= v112 )
        x = (unsigned int)v112;
      v135.m128i_i32[3] = x;
      if ( v111 >= (int)x )
        return 1LL;
    }
    goto LABEL_7;
  }
  v69 = W32GetUserSessionState(v8);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v69 + 57008) + 48LL));
  v71 = *(_QWORD *)(W32GetUserSessionState(v70) + 57008);
  for ( i = *(_QWORD *)(v71 + 24); ; i = *(_QWORD *)i )
  {
    v71 = *(_QWORD *)(W32GetUserSessionState(v71) + 57008) + 24LL;
    if ( i == v71 )
      break;
    v73 = *(_DWORD *)(i + 48);
    if ( (v73 & 0x400800) == 0 && *(HDC *)(i + 16) == v6 && (v73 & 0x1000) != 0 && !*(_QWORD *)(i + 72) )
    {
      v9 = i;
      break;
    }
  }
  if ( v9 )
  {
    v79 = (*(_DWORD *)(v9 + 48) & 0x4000) == 0;
    v105 = *(_QWORD *)(v9 + 80);
    v128 = v105;
    if ( !v79 )
      StyleWindow = GetStyleWindow(v105);
    if ( (unsigned int)GreGetClipBox(v6, (__int64)&v135, 0) == 1 )
      goto LABEL_185;
    if ( StyleWindow
      && (*(_WORD *)(*((_QWORD *)StyleWindow + 5) + 42LL) & 0x2FFF) == 0x29D
      && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
    {
      TransformRectBetweenCoordinateSpaces(&v135, &v135, 0LL, StyleWindow);
    }
    if ( a2 )
    {
      v113 = v135.m128i_i32[0];
      v106 = v135.m128i_u32[2];
      if ( v135.m128i_i32[0] <= *a2 )
        v113 = *a2;
      v114 = a2[2];
      v135.m128i_i32[0] = v113;
      if ( v135.m128i_i32[2] >= v114 )
        v106 = (unsigned int)v114;
      v135.m128i_i32[2] = v106;
      if ( v113 >= (int)v106 )
        goto LABEL_184;
      v115 = v135.m128i_i32[1];
      v106 = v135.m128i_u32[3];
      if ( v135.m128i_i32[1] <= a2[1] )
        v115 = a2[1];
      v116 = a2[3];
      v135.m128i_i32[1] = v115;
      if ( v135.m128i_i32[3] >= v116 )
        v106 = (unsigned int)v116;
      v135.m128i_i32[3] = v106;
      if ( v115 >= (int)v106 )
      {
LABEL_184:
        v135 = 0LL;
LABEL_185:
        v117 = W32GetUserSessionState(v106);
        GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v117 + 57008) + 48LL));
        return 1LL;
      }
    }
    if ( StyleWindow )
    {
      if ( (*(_WORD *)(*((_QWORD *)StyleWindow + 5) + 42LL) & 0x2FFF) != 0x29D )
      {
        GreGetDCPoint(v6, 32, &v121);
        x = (unsigned int)(*(_DWORD *)(*((_QWORD *)StyleWindow + 5) + 88LL) + v121.x);
        v121.x += *(_DWORD *)(*((_QWORD *)StyleWindow + 5) + 88LL);
        y = *(_DWORD *)(*((_QWORD *)StyleWindow + 5) + 92LL) + v121.y;
        v121.y = y;
        goto LABEL_162;
      }
    }
    else
    {
      GreGetDCPoint(v6, 32, &v121);
    }
    x = (unsigned int)v121.x;
    y = v121.y;
LABEL_162:
    v135.m128i_i32[0] += x;
    v135.m128i_i32[2] += x;
    v135.m128i_i32[3] += y;
    v135.m128i_i32[1] += y;
LABEL_7:
    v16 = 1;
    v119 = 1;
    v17 = *(_QWORD *)(W32GetUserSessionState(x) + 57008);
    for ( j = *(struct tagMONITOR **)(v17 + 112); ; j = (struct tagMONITOR *)*((_QWORD *)j + 7) )
    {
      if ( !j )
      {
        if ( v6 )
        {
          v102 = W32GetUserSessionState(v17);
          GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v102 + 57008) + 48LL));
        }
        return v16;
      }
      v17 = *(unsigned int *)(*((_QWORD *)j + 5) + 24LL);
      if ( (v17 & 1) != 0 )
        break;
LABEL_63:
      ;
    }
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v20 = CurrentThreadDpiAwarenessContext;
    v21 = CurrentThreadDpiAwarenessContext;
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
    {
      LOBYTE(v20) = CurrentThreadDpiAwarenessContext & 0xF;
      v22 = (_QWORD *)W32GetCurrentThreadNonPaged(v20);
      v24 = v22 ? *v22 : 0LL;
      if ( !*(_QWORD *)(v24 + 496)
        || ((v25 = (__int64 *)W32GetCurrentThreadNonPaged(v23)) == 0LL ? (v26 = 0LL) : (v26 = *v25),
            (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v26 + 496) + 8LL) + 64LL) & 1) == 0) )
      {
        v21 = 18;
      }
    }
    v27 = (v21 >> 8) & 0x1FF;
    v28 = *((_QWORD *)j + 5);
    v29 = *(_OWORD *)(v28 + 28);
    v30 = *(unsigned __int16 *)(v28 + 62);
    v31 = *(unsigned __int16 *)(v28 + 60);
    v130 = v29;
    if ( v27 )
    {
      v32 = DWORD1(v130);
      v33 = -(int)v130;
      v34 = ((int)v130 >> 31) & 0xFFFFFFFE;
      if ( (int)v130 >= 0 )
        v33 = v130;
      if ( v30
        && (v36 = (__int64)(((unsigned __int64)v30 >> 1) + v27 * (__int64)v33),
            v35 = (__int64)(((unsigned __int64)v30 >> 1) + v27 * (__int64)v33) / (int)v30,
            v37 = v36 / (int)v30,
            v35 <= 0x7FFFFFFF) )
      {
        if ( v34 <= -1 )
          v37 = -(int)v35;
      }
      else
      {
        v37 = 0x80000000;
        if ( v34 > -1 )
          v37 = 0x7FFFFFFF;
      }
      v38 = (SDWORD1(v130) >> 31) & 0xFFFFFFFE;
      v39 = -DWORD1(v130);
      if ( SDWORD1(v130) > 0 )
        v39 = DWORD1(v130);
      if ( v30
        && (v40 = (__int64)(((unsigned __int64)v30 >> 1) + v39 * (unsigned __int64)v27) / v30,
            v41 = v40,
            v40 <= 0x7FFFFFFF) )
      {
        if ( v38 <= -1 )
          v41 = -(int)v40;
      }
      else
      {
        v41 = 0x80000000;
        if ( v38 > -1 )
          v41 = 0x7FFFFFFF;
      }
      v42 = v31;
      v132 = v29;
      v43 = 0;
      v122 = (HDC)&v130;
      if ( (_DWORD)v42 )
      {
        v44 = (v42 >> 1) / (int)v42;
        if ( v44 > 0x7FFFFFFF )
          LODWORD(v44) = 0x7FFFFFFF;
      }
      else
      {
        LODWORD(v44) = 0x7FFFFFFF;
      }
      v45 = DWORD1(v132);
      *(_DWORD *)v122 = v37 + v44;
      v46 = v32 - v45;
      v47 = (((int)v45 - v32) >> 31) & 0xFFFFFFFE;
      if ( (int)v45 - v32 >= 0 )
        v46 = v45 - v32;
      if ( (_DWORD)v42 && (v48 = (__int64)((v42 >> 1) + v46 * (unsigned __int64)v27) / (int)v42, v48 <= 0x7FFFFFFF) )
      {
        if ( v47 <= -1 )
          LODWORD(v48) = -(int)v48;
      }
      else
      {
        LODWORD(v48) = 0x80000000;
        if ( v47 > -1 )
          LODWORD(v48) = 0x7FFFFFFF;
      }
      v49 = *((_QWORD *)&v132 + 1);
      *((_DWORD *)v122 + 1) = v41 + v48;
      v50 = v132 - v49;
      v51 = (((int)v49 - (int)v132) >> 31) & 0xFFFFFFFE;
      if ( (int)v49 - (int)v132 >= 0 )
        v50 = v49 - v132;
      if ( (_DWORD)v42 )
      {
        v52 = (__int64)((v42 >> 1) + v50 * (unsigned __int64)v27) / (int)v42;
        if ( v52 > 0x7FFFFFFF )
        {
          LODWORD(v52) = 0x80000000;
          if ( v51 > -1 )
            LODWORD(v52) = 0x7FFFFFFF;
        }
        else if ( v51 <= -1 )
        {
          LODWORD(v52) = -(int)v52;
        }
      }
      else
      {
        LODWORD(v52) = 0x80000000;
        if ( v51 > -1 )
          LODWORD(v52) = 0x7FFFFFFF;
      }
      v53 = v45 - HIDWORD(v49);
      v54 = ((HIDWORD(v49) - (int)v45) >> 31) & 0xFFFFFFFE;
      *((_DWORD *)v122 + 2) = v52 + *(_DWORD *)v122;
      if ( HIDWORD(v49) - (int)v45 >= 0 )
        v53 = HIDWORD(v49) - v45;
      if ( (_DWORD)v42 )
      {
        v55 = (__int64)((v42 >> 1) + v53 * (unsigned __int64)v27) / (__int64)v42;
        if ( v55 > 0x7FFFFFFF )
        {
          LODWORD(v55) = 0x80000000;
          if ( v54 > -1 )
            LODWORD(v55) = 0x7FFFFFFF;
        }
        else if ( v54 <= -1 )
        {
          LODWORD(v55) = -(int)v55;
        }
      }
      else
      {
        LODWORD(v55) = 0x80000000;
        if ( v54 > -1 )
          LODWORD(v55) = 0x7FFFFFFF;
      }
      *((_DWORD *)v122 + 3) = v55 + *((_DWORD *)v122 + 1);
    }
    else
    {
      v43 = 0;
    }
    v56 = v130;
    if ( v135.m128i_i32[0] > (int)v130 )
      v56 = v135.m128i_i32[0];
    v17 = DWORD2(v130);
    v136.left = v56;
    if ( v135.m128i_i32[2] < SDWORD2(v130) )
      v17 = v135.m128i_u32[2];
    v136.right = v17;
    if ( v56 >= (int)v17 )
      goto LABEL_62;
    v57 = DWORD1(v130);
    if ( v135.m128i_i32[1] > SDWORD1(v130) )
      LODWORD(v57) = v135.m128i_i32[1];
    v58 = HIDWORD(*((_QWORD *)&v130 + 1));
    v136.top = v57;
    if ( v135.m128i_i32[3] < SHIDWORD(v130) )
      LODWORD(v58) = v135.m128i_i32[3];
    v136.bottom = v58;
    if ( (int)v57 >= (int)v58 )
    {
LABEL_62:
      v16 = v119;
      v136 = 0LL;
      goto LABEL_63;
    }
    if ( v6 )
    {
      v103 = AdjustDisplayMonitor(j, &v136);
      MonitorDC = (HDC)GetMonitorDC(v9, v103, v103 != j);
      v90 = (__int64)MonitorDC;
      if ( !MonitorDC )
        goto LABEL_87;
      v136.left -= v121.x;
      v136.right -= v121.x;
      v136.bottom -= v121.y;
      v136.top -= v121.y;
      GreIntersectClipRect(MonitorDC, v136.left, v136.top, v136.right, v136.bottom);
    }
    else
    {
      v90 = 0LL;
    }
    v91 = v125;
    v124 = j;
    BugCheckParameter3 = *(_QWORD *)(v125 + 456);
    *(_QWORD *)(v125 + 456) = &BugCheckParameter3;
    _InterlockedAdd((volatile signed __int32 *)j + 2, 1u);
    if ( v6 )
    {
      v98 = W32GetUserSessionState(v91);
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v98 + 57008) + 48LL));
    }
    if ( a5 )
    {
      v92 = v126(j, v90, &v136, v127);
    }
    else
    {
      v99 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2704LL);
      if ( !v99 || v99() < 0 )
        goto LABEL_126;
      v100 = *(_QWORD *)j;
      v101 = *(__int64 (__fastcall **)(__int64, __int64, struct tagRECT *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD)))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2712LL);
      if ( !v101 )
      {
        v119 = 0;
LABEL_126:
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(14LL);
        v138 = 0;
        v94 = W32GetUserSessionState(v93);
        v140 = 0;
        v139 = v94 + 42424;
        v141 = 0LL;
        v142 = 0;
        v143 = 0;
        if ( IS_USERCRIT_OWNED_SHAREDONLY() )
        {
          v143 = 1;
          if ( !v142 )
          {
            v95 = &v138;
            do
            {
              v96 = (tagDomLock *)*((_QWORD *)v95 - 1);
              if ( v96 )
              {
                if ( *v95 )
                  tagDomLock::LockExclusive(v96);
                else
                  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v96);
              }
              ++v43;
              v95 += 16;
            }
            while ( !v43 );
            v142 = 1;
          }
        }
        v97 = *(_BYTE *)(HMPheFromObject((int *)j) + 25) & 1;
        if ( v142 )
        {
          if ( v143 )
          {
            v75 = DomainLockRef;
            if ( DomainLockRef )
              ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
        v76 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v75);
        if ( v76 )
          v77 = *v76;
        else
          v77 = 0LL;
        v78 = Win32HM_UnlockFromThread<0>(v77, (ULONG_PTR)&BugCheckParameter3);
        v17 = -1LL;
        v124 = 0LL;
        BugCheckParameter3 = -1LL;
        if ( !v78 || v97 )
        {
          v16 = 0;
          v119 = 0;
        }
        else
        {
          v16 = v119;
        }
        if ( v90 )
        {
          ReleaseCacheDC(v90, 0);
          v17 = BugCheckParameter3;
        }
        if ( !v16 )
        {
          v79 = v17 == -1LL;
          goto LABEL_100;
        }
        if ( v6 )
        {
          v82 = W32GetUserSessionState(v17);
          GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v82 + 57008) + 48LL));
          v9 = 0LL;
          v84 = *(_QWORD *)(W32GetUserSessionState(v83) + 57008);
          for ( k = *(_QWORD *)(v84 + 24); ; k = *(_QWORD *)k )
          {
            v84 = *(_QWORD *)(W32GetUserSessionState(v84) + 57008) + 24LL;
            if ( k == v84 )
              break;
            v86 = *(_DWORD *)(k + 48);
            if ( (v86 & 0x400800) == 0 && *(HDC *)(k + 16) == v6 && (v86 & 0x1000) != 0 && !*(_QWORD *)(k + 72) )
            {
              v9 = k;
              break;
            }
          }
          if ( !v9 )
          {
            v118 = W32GetUserSessionState(v84);
            GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v118 + 57008) + 48LL));
            Win32HMThreadLockBase<tagMONITOR,0,1>::~Win32HMThreadLockBase<tagMONITOR,0,1>((ULONG_PTR)&BugCheckParameter3);
            return 0LL;
          }
          if ( *(_QWORD *)(v9 + 80) != v128 )
          {
            v87 = W32GetUserSessionState(v84);
            GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v87 + 57008) + 48LL));
            v79 = BugCheckParameter3 == -1LL;
LABEL_100:
            if ( !v79 )
            {
              v81 = PtiCurrent();
              Win32HM_UnlockFromThread<0>((ULONG_PTR)v81, (ULONG_PTR)&BugCheckParameter3);
            }
            return 0LL;
          }
          v17 = BugCheckParameter3;
          v16 = v119;
        }
        if ( v17 != -1LL )
        {
          v89 = PtiCurrent();
          Win32HM_UnlockFromThread<0>((ULONG_PTR)v89, (ULONG_PTR)&BugCheckParameter3);
        }
        goto LABEL_63;
      }
      v92 = v101(v100, v90, &v136, v127, (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v126);
    }
    v119 = v92;
    goto LABEL_126;
  }
LABEL_87:
  v74 = W32GetUserSessionState(v71);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v74 + 57008) + 48LL));
  return 0LL;
}
