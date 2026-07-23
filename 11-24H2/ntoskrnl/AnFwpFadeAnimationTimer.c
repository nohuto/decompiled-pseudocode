/*
 * XREFs of AnFwpFadeAnimationTimer @ 0x140BB4F50
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     BgpGxDrawRectangle @ 0x14047D084 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x14047D508 (BgpGetBitsPerPixel.c)
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404B0FB4 (BgpFwQueryPerformanceCounter.c)
 */

void __fastcall AnFwpFadeAnimationTimer(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        __int64 SystemArgument1,
        __int64 SystemArgument2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v8; // rdi
  char v9; // r13
  char v10; // r12
  char v11; // bp
  __int64 v12; // r14
  unsigned int v13; // r15d
  int *v14; // r9
  __int64 v15; // r10
  __int64 v16; // r11
  int v17; // esi
  int v18; // edi
  __int64 v19; // rbx
  __int64 v20; // r9
  __int64 n; // r11
  __int64 v22; // rdx
  int v23; // r8d
  unsigned int v24; // eax
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // rax
  LARGE_INTEGER v32; // rax
  __int64 v33; // r9
  __int64 v34; // r10
  __int64 ii; // r11
  __int64 v36; // rdx
  int v37; // r8d
  unsigned int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // eax
  unsigned int v42; // ecx
  __int64 v43; // r11
  __int64 v44; // r9
  __int64 v45; // rdi
  __int64 m; // rbx
  __int64 v47; // rdx
  int v48; // r8d
  unsigned int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rcx
  unsigned int v52; // eax
  unsigned int v53; // ecx
  __int64 v54; // rdx
  unsigned int v55; // ecx
  __int64 v56; // r11
  __int64 i; // r9
  int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // ecx
  __int64 v61; // r8
  __int64 j; // r9
  int v63; // eax
  unsigned int v64; // eax
  __int64 v65; // r8
  __int64 v66; // rcx
  __int64 k; // r9
  int v68; // eax
  unsigned int v69; // eax
  int v70; // [rsp+20h] [rbp-58h]
  int *v71; // [rsp+28h] [rbp-50h]
  __int64 v72; // [rsp+30h] [rbp-48h]
  __int64 v73; // [rsp+38h] [rbp-40h] BYREF
  LARGE_INTEGER v74; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0;
  v73 = 0LL;
  BgpFwAcquireLock((__int64)Dpc, DeferredContext, SystemArgument1, SystemArgument2);
  if ( byte_140EEFD20 )
  {
    qword_140EEFDD8 = BgpFwQueryPerformanceCounter(0LL).QuadPart;
    qword_140E65190 = qword_140EEFDD8;
    PerformanceCounter = BgpFwQueryPerformanceCounter(0LL);
    v8 = qword_140E0EF48;
    v9 = byte_140E0EF00;
    v10 = byte_140E0EF01;
    v11 = byte_140E0EF02;
    v12 = qword_140E0EF78;
    qword_140EEFDD8 = PerformanceCounter.QuadPart;
    qword_140E65180 = PerformanceCounter.QuadPart;
    v73 = qword_140E0EEF8;
    v70 = dword_140E0EEF4;
    v71 = (int *)qword_140E0EF38;
    v74.QuadPart = qword_140E0EF48;
    v72 = qword_140E0EF80;
    v13 = 10 * (dword_140E0EEF0 - dword_140E0EEF0 / (unsigned int)(dword_140EF0274 - dword_140E0EEF4));
    if ( (unsigned int)BgpGetBitsPerPixel() == 24 )
    {
      v17 = 0;
      if ( !v11 )
      {
        v54 = qword_140E0EF40;
        v55 = 0;
        v56 = *(_QWORD *)(v8 + 24);
        for ( i = *(_QWORD *)(qword_140E0EF40 + 24); v55 < *(_DWORD *)(v54 + 12); ++v55 )
        {
          v58 = *(unsigned __int8 *)(v55 + i);
          if ( (_BYTE)v58 )
          {
            v59 = (v13 * v58) >> 10;
            *(_BYTE *)(v55 + v56) = v59;
            if ( v59 )
              ++v17;
          }
        }
        v16 = v72;
        v14 = v71;
      }
      v18 = 0;
      if ( !v9 )
      {
        v60 = 0;
        v61 = *(_QWORD *)(v15 + 24);
        for ( j = *((_QWORD *)v14 + 3); v60 < *(_DWORD *)(v15 + 12); ++v60 )
        {
          v63 = *(unsigned __int8 *)(v60 + v61);
          if ( (_BYTE)v63 )
          {
            v64 = (v13 * v63) >> 10;
            *(_BYTE *)(v60 + j) = v64;
            if ( v64 )
              ++v18;
          }
        }
      }
      if ( !v10 )
      {
        v65 = *(_QWORD *)(v12 + 24);
        v66 = 0LL;
        for ( k = *(_QWORD *)(v16 + 24); (unsigned int)v66 < *(_DWORD *)(v12 + 12); v66 = (unsigned int)(v66 + 1) )
        {
          v68 = *(unsigned __int8 *)(v66 + v65);
          if ( (_BYTE)v68 )
          {
            v69 = (v13 * v68) >> 10;
            *(_BYTE *)(v66 + k) = v69;
            if ( v69 )
              ++v4;
          }
        }
      }
    }
    else
    {
      v17 = 0;
      if ( !v11 )
      {
        v43 = qword_140E0EF40;
        v44 = 0LL;
        v45 = *(_QWORD *)(v8 + 24);
        for ( m = *(_QWORD *)(qword_140E0EF40 + 24);
              (unsigned int)v44 < *(_DWORD *)(v43 + 12);
              v44 = (unsigned int)(v44 + 4) )
        {
          if ( *(_DWORD *)(v44 + m) )
          {
            v47 = (unsigned int)(v44 + 2);
            v48 = v17 + 1;
            v49 = (v13 * *(unsigned __int8 *)(v44 + m)) >> 10;
            v25 = v49 == 0;
            *(_BYTE *)(v44 + v45) = v49;
            v50 = (unsigned int)(v44 + 1);
            if ( v25 )
              v48 = v17;
            v51 = (unsigned int)v50;
            v17 = v48 + 1;
            v52 = (v13 * *(unsigned __int8 *)(v50 + m)) >> 10;
            *(_BYTE *)(v51 + v45) = v52;
            if ( !v52 )
              v17 = v48;
            v53 = (v13 * *(unsigned __int8 *)(v47 + m)) >> 10;
            *(_BYTE *)(v47 + v45) = v53;
            if ( v53 )
              ++v17;
          }
        }
        v14 = v71;
      }
      v18 = 0;
      if ( !v9 )
      {
        v19 = *((_QWORD *)v14 + 3);
        v20 = 0LL;
        for ( n = *(_QWORD *)(v15 + 24); (unsigned int)v20 < *(_DWORD *)(v15 + 12); v20 = (unsigned int)(v20 + 4) )
        {
          if ( *(_DWORD *)(v20 + n) )
          {
            v22 = (unsigned int)(v20 + 2);
            v23 = v18 + 1;
            v24 = (v13 * *(unsigned __int8 *)(v20 + n)) >> 10;
            v25 = v24 == 0;
            *(_BYTE *)(v20 + v19) = v24;
            v26 = (unsigned int)(v20 + 1);
            if ( v25 )
              v23 = v18;
            v27 = (unsigned int)v26;
            v18 = v23 + 1;
            v28 = (v13 * *(unsigned __int8 *)(v26 + n)) >> 10;
            *(_BYTE *)(v27 + v19) = v28;
            if ( !v28 )
              v18 = v23;
            v29 = (v13 * *(unsigned __int8 *)(v22 + n)) >> 10;
            *(_BYTE *)(v22 + v19) = v29;
            if ( v29 )
              ++v18;
          }
        }
      }
      v4 = 0;
      if ( !v10 )
      {
        v33 = 0LL;
        v34 = *(_QWORD *)(v12 + 24);
        for ( ii = *(_QWORD *)(v72 + 24); (unsigned int)v33 < *(_DWORD *)(v12 + 12); v33 = (unsigned int)(v33 + 4) )
        {
          if ( *(_DWORD *)(v33 + v34) )
          {
            v36 = (unsigned int)(v33 + 2);
            v37 = v4 + 1;
            v38 = (v13 * *(unsigned __int8 *)(v33 + v34)) >> 10;
            v25 = v38 == 0;
            *(_BYTE *)(v33 + ii) = v38;
            v39 = (unsigned int)(v33 + 1);
            if ( v25 )
              v37 = v4;
            v40 = (unsigned int)v39;
            v4 = v37 + 1;
            v41 = (v13 * *(unsigned __int8 *)(v39 + v34)) >> 10;
            *(_BYTE *)(v40 + ii) = v41;
            if ( !v41 )
              v4 = v37;
            v42 = (v13 * *(unsigned __int8 *)(v36 + v34)) >> 10;
            *(_BYTE *)(v36 + ii) = v42;
            if ( v42 )
              ++v4;
          }
        }
      }
    }
    qword_140EEFDD8 = BgpFwQueryPerformanceCounter(0LL).QuadPart;
    v30 = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E65180;
    qword_140EEFD78 += v30;
    qword_140EEFD80 = v30;
    qword_140EEFDD8 = BgpFwQueryPerformanceCounter(0LL).QuadPart;
    qword_140E65178 = qword_140EEFDD8;
    if ( !v11 )
    {
      BgpGxDrawRectangle((int *)v74.QuadPart, (__int64)&v73);
      v11 = v17 == 0;
    }
    if ( !v9 )
    {
      if ( !v70 && !v18 || (BgpGxDrawRectangle(v71, (__int64)&xmmword_140E0EF10), !v18) )
        v9 = 1;
    }
    if ( !v10 )
    {
      if ( !v70 && !v4 || (BgpGxDrawRectangle((int *)v72, (__int64)&xmmword_140E0EF50), !v4) )
        v10 = 1;
    }
    qword_140EEFDD8 = BgpFwQueryPerformanceCounter(0LL).QuadPart;
    v31 = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E65178;
    qword_140EEFD70 += v31;
    qword_140EEFD80 = v31;
    qword_140EEFDD8 = BgpFwQueryPerformanceCounter(&v74).QuadPart;
    v32.QuadPart = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E65190;
    qword_140EEFD80 = v32.QuadPart;
    if ( v32.QuadPart < qword_140E0F150 )
      qword_140E0F150 = v32.QuadPart;
    if ( v32.QuadPart > qword_140EEFD50 )
      qword_140EEFD50 = v32.QuadPart;
    qword_140EEFDC8 += v32.QuadPart;
    qword_140EEFDE0 += v32.QuadPart;
    ++dword_140EEFD58;
    if ( v17 || v4 || v18 )
    {
      byte_140E0EF00 = v9;
      byte_140E0EF01 = v10;
      v5 = v13 / 0xA;
      dword_140E0EEF0 = v13 / 0xA;
      dword_140E0EEF4 = v70 + 1;
      byte_140E0EF02 = v11;
    }
    else
    {
      byte_140EEFD20 = 0;
      KeCancelTimer(&stru_140E650C0);
      KeSetEvent(&stru_140E65140, 0, 0);
    }
  }
  BgpFwReleaseLock(v6, v5);
}
