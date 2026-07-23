/*
 * XREFs of AnFwDisplayFade @ 0x140BB56EC
 * Callers:
 *     BgDisplayFade @ 0x140BB56A4 (BgDisplayFade.c)
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 *     KeInitializeTimer @ 0x14044A0E0 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     BgpGxConvertRectangleEx @ 0x1404553DC (BgpGxConvertRectangleEx.c)
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 *     BgpGetBitsPerPixel @ 0x14047D508 (BgpGetBitsPerPixel.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404B0FB4 (BgpFwQueryPerformanceCounter.c)
 *     BgpGxRectangleSize @ 0x1404B1B30 (BgpGxRectangleSize.c)
 *     GxpBitsToBytes @ 0x1404B73A0 (GxpBitsToBytes.c)
 *     BgpClearScreen @ 0x140698EA8 (BgpClearScreen.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140BB208C (AnFwDisableBackgroundUpdateTimer.c)
 *     BgpGxParseBitmap @ 0x140BB20B8 (BgpGxParseBitmap.c)
 *     AnFwpDisableProgressTimer @ 0x140BB5CB4 (AnFwpDisableProgressTimer.c)
 *     BgpGxReadRectangle @ 0x140BB5D18 (BgpGxReadRectangle.c)
 *     BgpTxtGetRegionContext @ 0x140BB5D94 (BgpTxtGetRegionContext.c)
 *     BgpGxRectangleCreate @ 0x140BB5E78 (BgpGxRectangleCreate.c)
 *     BgpGxRectangleDestroy @ 0x140BB5F04 (BgpGxRectangleDestroy.c)
 *     BgpGxFindSubRectangle @ 0x140BB6168 (BgpGxFindSubRectangle.c)
 *     LogFwStat @ 0x140BB6790 (LogFwStat.c)
 */

__int64 AnFwDisplayFade()
{
  __int64 v0; // rdi
  int *v1; // r12
  int *v2; // r13
  __int64 v3; // rsi
  int SubRectangle; // r14d
  unsigned int v5; // r15d
  __int64 RegionContext; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int v9; // esi
  LARGE_INTEGER v10; // r9
  int v11; // eax
  int v12; // r8d
  int v13; // eax
  int v14; // eax
  unsigned int v15; // r10d
  unsigned int v16; // r11d
  ULONG v17; // eax
  ULONG v18; // r11d
  int v19; // eax
  int v20; // eax
  __int64 v21; // rsi
  int v22; // edi
  int v23; // r14d
  unsigned int v24; // edi
  int v25; // ecx
  __int64 Memory; // rcx
  int v27; // eax
  size_t v28; // r8
  _QWORD *v29; // rsi
  __int64 v30; // r15
  unsigned int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // edx
  int v38; // eax
  char v39; // [rsp+38h] [rbp-59h] BYREF
  char v40; // [rsp+39h] [rbp-58h]
  char v41; // [rsp+3Ah] [rbp-57h]
  char v42; // [rsp+3Bh] [rbp-56h]
  int *v43; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v44; // [rsp+48h] [rbp-49h]
  unsigned int v45; // [rsp+4Ch] [rbp-45h]
  __int64 v46; // [rsp+50h] [rbp-41h] BYREF
  int *v47; // [rsp+58h] [rbp-39h]
  unsigned int BitsPerPixel; // [rsp+60h] [rbp-31h]
  int *v49; // [rsp+68h] [rbp-29h] BYREF
  __int64 v50; // [rsp+70h] [rbp-21h] BYREF
  __int64 v51; // [rsp+78h] [rbp-19h] BYREF
  int v52; // [rsp+80h] [rbp-11h]
  __int64 v53; // [rsp+88h] [rbp-9h] BYREF
  int *v54; // [rsp+90h] [rbp-1h] BYREF
  int *v55; // [rsp+98h] [rbp+7h] BYREF
  __int64 v56; // [rsp+A0h] [rbp+Fh]
  _OWORD v57[2]; // [rsp+A8h] [rbp+17h] BYREF

  v39 = 0;
  v46 = 0LL;
  v0 = 0LL;
  v49 = 0LL;
  v1 = 0LL;
  v53 = 0LL;
  v2 = 0LL;
  v56 = 0LL;
  v3 = 0LL;
  v44 = 0;
  v51 = 0LL;
  SubRectangle = 0;
  v52 = 0;
  v5 = 0;
  v47 = 0LL;
  v54 = 0LL;
  v43 = 0LL;
  v55 = 0LL;
  v50 = 0LL;
  memset(v57, 0, sizeof(v57));
  if ( (dword_140EF0270 & 0x2000) != 0 )
    return (unsigned int)SubRectangle;
  if ( (dword_140EF0270 & 0x200000) == 0 )
  {
    RegionContext = BgpTxtGetRegionContext(qword_140EF0330);
    v7 = BgpTxtGetRegionContext(qword_140EF0338);
    v8 = v7;
    if ( !RegionContext || !v7 )
    {
LABEL_57:
      v3 = v50;
      goto LABEL_58;
    }
    xmmword_140E0EF10 = *(_OWORD *)RegionContext;
    xmmword_140E0EF20 = *(_OWORD *)(RegionContext + 16);
    dword_140E0EF30 = *(_DWORD *)(RegionContext + 32);
    xmmword_140E0EF50 = *(_OWORD *)v7;
    xmmword_140E0EF60 = *(_OWORD *)(v7 + 16);
    dword_140E0EF70 = *(_DWORD *)(v7 + 32);
    BgpFwFreeMemory(RegionContext);
    BgpFwFreeMemory(v8);
    AnFwpDisableProgressTimer();
    AnFwDisableBackgroundUpdateTimer();
    v40 = 0;
    v41 = 0;
    BitsPerPixel = BgpGetBitsPerPixel();
    v9 = BitsPerPixel;
    qword_140EEFDD8 = BgpFwQueryPerformanceCounter(0LL).QuadPart;
    qword_140E65188 = qword_140EEFDD8;
    if ( !qword_140EF02B8 )
    {
      v42 = 1;
LABEL_61:
      LODWORD(v43) = v5;
      v35 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))BgpGxReadRectangle)(
              &v54,
              &xmmword_140E0EF10,
              (char *)&xmmword_140E0EF10 + 8,
              (LARGE_INTEGER)v10.QuadPart);
      v0 = (__int64)v54;
      SubRectangle = v35;
      if ( v35 < 0 )
        goto LABEL_26;
      v36 = *v54;
      v37 = v54[1];
      v47 = v54;
      v38 = BgpGxRectangleSize(v36, v37, v9);
      v5 = (_DWORD)v43 + 2 * (((v38 + 15) & 0xFFFFFFF0) + 32) + ((v38 + 15) & 0xFFFFFFF0) + 32;
LABEL_13:
      LODWORD(v43) = v5;
      if ( !v41 )
      {
        v19 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))BgpGxReadRectangle)(
                &v55,
                &xmmword_140E0EF50,
                (char *)&xmmword_140E0EF50 + 8,
                (LARGE_INTEGER)v10.QuadPart);
        v2 = v55;
        SubRectangle = v19;
        if ( v19 < 0 )
          goto LABEL_26;
        v20 = BgpGxRectangleSize(*v55, v55[1], v9);
        v5 = (_DWORD)v43 + 2 * (((v20 + 15) & 0xFFFFFFF0) + 32) + ((v20 + 15) & 0xFFFFFFF0) + 32;
      }
      v21 = qword_140EF02CC;
      v22 = HIDWORD(qword_140EF03F0);
      v43 = (int *)qword_140EF02CC;
      if ( !v42 )
      {
        SubRectangle = BgpGxFindSubRectangle(
                         (_DWORD)v1,
                         HIDWORD(qword_140EF03F0),
                         (unsigned int)&v49,
                         (unsigned int)&v46,
                         (__int64)&v39);
        if ( SubRectangle >= 0 )
        {
          v32 = v44;
          *((_QWORD *)v57 + v44) = v1;
          v44 = v32 + 1;
          if ( v39 )
          {
            v42 = 1;
            v1 = 0LL;
          }
          else
          {
            LODWORD(v43) = v46 + (_DWORD)v43;
            HIDWORD(v43) += HIDWORD(v46);
            v21 = (__int64)v43;
            v1 = v49;
          }
        }
      }
      if ( !v40 )
      {
        SubRectangle = BgpGxFindSubRectangle((_DWORD)v47, v22, (unsigned int)&v49, (unsigned int)&v46, (__int64)&v39);
        if ( SubRectangle >= 0 )
        {
          v33 = v44;
          *((_QWORD *)v57 + v44) = v47;
          v44 = v33 + 1;
          if ( v39 )
          {
            v47 = 0LL;
            v40 = 1;
          }
          else
          {
            v47 = v49;
            LODWORD(xmmword_140E0EF10) = v46 + xmmword_140E0EF10;
            DWORD1(xmmword_140E0EF10) += HIDWORD(v46);
          }
        }
      }
      if ( !v41 )
      {
        SubRectangle = BgpGxFindSubRectangle((_DWORD)v2, v22, (unsigned int)&v49, (unsigned int)&v46, (__int64)&v39);
        if ( SubRectangle >= 0 )
        {
          v34 = v44;
          *((_QWORD *)v57 + v44) = v2;
          v44 = v34 + 1;
          if ( v39 )
          {
            v41 = 1;
            v2 = 0LL;
          }
          else
          {
            LODWORD(xmmword_140E0EF50) = v46 + xmmword_140E0EF50;
            DWORD1(xmmword_140E0EF50) += HIDWORD(v46);
            v2 = v49;
          }
        }
      }
      if ( !v42 )
      {
        v23 = v1[1];
        v24 = BitsPerPixel;
        v25 = v23 * *v1;
        LODWORD(v43) = *v1;
        v45 = GxpBitsToBytes(BitsPerPixel * v25);
        Memory = BgpFwAllocateMemory(v45 + 72);
        if ( !Memory )
        {
          v0 = (__int64)v47;
          SubRectangle = -1073741801;
          goto LABEL_26;
        }
        v27 = (int)v43;
        *(_DWORD *)(Memory + 16) = 0;
        *(_DWORD *)Memory = v27;
        *(_DWORD *)(Memory + 12) = v45;
        *(_DWORD *)(Memory + 4) = v23;
        SubRectangle = 0;
        *(_QWORD *)(Memory + 24) = Memory + 72;
        *(_DWORD *)(Memory + 8) = v24;
        v28 = *(unsigned int *)(Memory + 12);
        v56 = Memory;
        memset_0((void *)(Memory + 72), 0, v28);
      }
      v0 = (__int64)v47;
      if ( !v40 )
      {
        LODWORD(v51) = v47[1];
        HIDWORD(v51) = *v47;
        SubRectangle = BgpGxRectangleCreate(&v51, BitsPerPixel, &v53);
        if ( SubRectangle < 0 )
          goto LABEL_26;
        memset_0(*(void **)(v53 + 24), 0, *(unsigned int *)(v53 + 12));
      }
      if ( !v41 )
      {
        LODWORD(v51) = v2[1];
        HIDWORD(v51) = *v2;
        SubRectangle = BgpGxRectangleCreate(&v51, BitsPerPixel, &v50);
        if ( SubRectangle < 0 )
          goto LABEL_26;
        memset_0(*(void **)(v50 + 24), 0, *(unsigned int *)(v50 + 12));
      }
      LogFwStat(0LL, 5LL);
      dword_140E0EEF4 = 0;
      byte_140E0EF00 = v40;
      byte_140E0EF01 = v41;
      byte_140E0EF02 = v42;
      qword_140E0EF38 = v53;
      qword_140E0EF48 = v56;
      qword_140E0EF80 = v50;
      dword_140E0EEF0 = 100;
      qword_140E0EEF8 = v21;
      qword_140E0EF08 = v0;
      qword_140E0EF40 = (__int64)v1;
      qword_140E0EF78 = (__int64)v2;
      KeResetEvent(&stru_140E65140);
      KeInitializeTimer(&stru_140E650C0);
      KeInitializeDpc(&stru_140E65000, (PKDEFERRED_ROUTINE)AnFwpFadeAnimationTimer, 0LL);
      byte_140EEFD20 = 1;
      LogFwStat(1LL, 7LL);
      KeSetCoalescableTimer(&stru_140E650C0, 0LL, 0x1Eu, 0, &stru_140E65000);
      dword_140EF0270 |= 0x2000u;
      dword_140EF028C = v5;
LABEL_26:
      if ( v44 )
      {
        v29 = v57;
        v30 = v44;
        do
        {
          BgpGxRectangleDestroy(*v29++);
          --v30;
        }
        while ( v30 );
      }
LABEL_29:
      if ( SubRectangle >= 0 )
        return (unsigned int)SubRectangle;
      goto LABEL_57;
    }
    v42 = 0;
    v11 = BgpGxParseBitmap((__int64)qword_140EF02B8, &v43);
    v1 = v43;
    SubRectangle = v11;
    if ( v11 < 0 )
      goto LABEL_29;
    v12 = v43[2];
    if ( v9 != v12 )
    {
      v13 = BgpGxRectangleSize(*v43, v43[1], v12);
      v43 = 0LL;
      v5 = ((v13 + 15) & 0xFFFFFFF0) + 32;
      SubRectangle = BgpGxConvertRectangleEx(v1, v9, &v43, 0);
      if ( SubRectangle < 0 )
        goto LABEL_29;
      *(_QWORD *)&v57[0] = v1;
      v1 = v43;
      v44 = 1;
    }
    v14 = BgpGxRectangleSize(*v1, v1[1], v9);
    v15 = qword_140EF02CC + dword_140EF02D4;
    v10.QuadPart = (unsigned int)(HIDWORD(qword_140EF02CC) + dword_140EF02D8);
    v16 = xmmword_140E0EF10 + DWORD2(xmmword_140E0EF10);
    v45 = qword_140EF02CC;
    v5 += ((v14 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v14 + 15) & 0xFFFFFFF0) + 32);
    v17 = DWORD1(xmmword_140E0EF10) + HIDWORD(xmmword_140E0EF10);
    if ( (unsigned int)xmmword_140E0EF10 >= (unsigned int)qword_140EF02CC
      && (unsigned int)xmmword_140E0EF10 <= v15
      && DWORD1(xmmword_140E0EF10) >= HIDWORD(qword_140EF02CC)
      && DWORD1(xmmword_140E0EF10) <= v10.LowPart )
    {
      if ( v16 < (unsigned int)qword_140EF02CC || v16 > v15 || v17 < HIDWORD(qword_140EF02CC) || v17 > v10.LowPart )
        goto LABEL_60;
      v40 = 1;
    }
    LODWORD(v43) = xmmword_140E0EF50 + DWORD2(xmmword_140E0EF50);
    v18 = DWORD1(xmmword_140E0EF50) + HIDWORD(xmmword_140E0EF50);
    if ( (unsigned int)xmmword_140E0EF50 < v45
      || (unsigned int)xmmword_140E0EF50 > v15
      || DWORD1(xmmword_140E0EF50) < HIDWORD(qword_140EF02CC)
      || DWORD1(xmmword_140E0EF50) > v10.LowPart )
    {
LABEL_12:
      if ( v40 )
        goto LABEL_13;
      goto LABEL_61;
    }
    if ( (unsigned int)v43 >= v45 && (unsigned int)v43 <= v15 && v18 >= HIDWORD(qword_140EF02CC) && v18 <= v10.LowPart )
    {
      v41 = 1;
      goto LABEL_12;
    }
LABEL_60:
    SubRectangle = -1073741823;
    goto LABEL_26;
  }
LABEL_58:
  AnFwpDisableProgressTimer();
  AnFwDisableBackgroundUpdateTimer();
  SubRectangle = BgpClearScreen(0xFF000000);
  if ( v0 )
    BgpGxRectangleDestroy(v0);
  if ( v53 )
    BgpGxRectangleDestroy(v53);
  if ( v1 )
    BgpGxRectangleDestroy(v1);
  if ( v56 )
    BgpGxRectangleDestroy(v56);
  if ( v2 )
    BgpGxRectangleDestroy(v2);
  if ( v3 )
    BgpGxRectangleDestroy(v3);
  return (unsigned int)SubRectangle;
}
