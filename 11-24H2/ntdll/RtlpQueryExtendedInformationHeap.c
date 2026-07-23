/*
 * XREFs of RtlpQueryExtendedInformationHeap @ 0x180114970
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x1801144DC (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpHpSegWalk @ 0x18002B478 (RtlpHpSegWalk.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180059400 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpWalkHeap @ 0x18005E780 (RtlpWalkHeap.c)
 *     RtlpHpEnvAcquireGlobalLockExclusive @ 0x1800D0AD4 (RtlpHpEnvAcquireGlobalLockExclusive.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryExtendedInformationHeap(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 (__fastcall *v3)(__int64 *, __int64, __int64, __int64); // r15
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r14
  unsigned int v6; // eax
  unsigned __int64 v7; // r12
  char v8; // r13
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // ecx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  __int64 *v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // eax
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // rsi
  __int64 v33; // r9
  __int64 v34; // rbx
  int v35; // r12d
  unsigned int v36; // edx
  __int64 v37; // r8
  unsigned __int64 *v38; // r8
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  int v44; // edx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  int v54; // eax
  char v55; // cl
  __int64 v56; // rsi
  _QWORD *v57; // r9
  _QWORD *v58; // r10
  _QWORD *v59; // r11
  unsigned __int64 v60; // rdx
  bool v61; // zf
  int v62; // ecx
  unsigned __int8 *v63; // r14
  unsigned __int8 *v64; // rsi
  unsigned __int64 v65; // rax
  __int64 v66; // rcx
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  __int64 (__fastcall *v69)(__int64 *, __int64); // rsi
  bool v70; // zf
  __int64 v71; // r14
  int v72; // eax
  _QWORD *v73; // rdx
  _QWORD *v74; // r8
  _QWORD *v75; // r9
  int v76; // ecx
  __int64 v77; // rax
  int v78; // eax
  __int64 *v79; // rcx
  __int64 v80; // rax
  int v81; // eax
  int v82; // eax
  char v83; // [rsp+20h] [rbp-E0h]
  unsigned int v84; // [rsp+24h] [rbp-DCh]
  __int128 v85; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v86; // [rsp+38h] [rbp-C8h]
  __int128 v87; // [rsp+48h] [rbp-B8h]
  __int64 v88; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v89; // [rsp+68h] [rbp-98h]
  unsigned __int64 v90; // [rsp+70h] [rbp-90h]
  __int128 v91; // [rsp+78h] [rbp-88h]
  _BYTE v92[136]; // [rsp+88h] [rbp-78h] BYREF
  __int64 (__fastcall *v93)(__int64 *, __int64, __int64, __int64); // [rsp+110h] [rbp+10h]
  __int64 v94; // [rsp+118h] [rbp+18h]
  unsigned __int64 v95; // [rsp+120h] [rbp+20h]
  unsigned __int64 v96; // [rsp+128h] [rbp+28h]
  unsigned __int64 v97; // [rsp+130h] [rbp+30h]
  __int128 v98; // [rsp+140h] [rbp+40h] BYREF
  __int128 v99; // [rsp+150h] [rbp+50h]
  __int128 v100; // [rsp+160h] [rbp+60h]
  __int128 v101; // [rsp+170h] [rbp+70h]
  __int128 v102; // [rsp+180h] [rbp+80h]
  __int64 v103; // [rsp+190h] [rbp+90h]

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(a2 + 8);
  v4 = 0LL;
  LODWORD(v103) = 0;
  v61 = *(_DWORD *)(a1 + 16) == -571548178;
  v5 = a1;
  v6 = *(_DWORD *)a2;
  v7 = 0LL;
  v84 = *(_DWORD *)a2;
  v95 = a1;
  v98 = 0LL;
  v94 = v2;
  v99 = 0LL;
  v93 = v3;
  v100 = 0LL;
  v97 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  if ( v61 )
  {
    v8 = 1;
    v96 = a1;
    v83 = 1;
    v9 = a1;
  }
  else
  {
    v8 = 0;
    v96 = 0LL;
    v9 = 0LL;
    v83 = 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return 3221225474LL;
  }
  if ( v6 == 0x80000000 )
  {
    memset_thunk_772440563353939046(&v88, 0, 0xB0uLL);
    LODWORD(v88) = 0x80000000;
    v89 = 176LL;
    if ( v8 )
    {
      v10 = *(_QWORD *)(v9 + 128);
      v11 = *(_QWORD *)(v9 + 136);
      *(_QWORD *)&v92[104] = *(_QWORD *)(v9 + 408) + *(_QWORD *)(v9 + 600);
      *(_QWORD *)&v92[120] = *(_QWORD *)(v9 + 88) << 12;
      *(_QWORD *)&v92[128] = *(_QWORD *)(v9 + 96) << 12;
      LODWORD(v91) = *(unsigned __int16 *)(v9 + 28);
      v12 = v10 << 12;
      *(_QWORD *)&v92[112] = ((v11 - 2LL * *(_QWORD *)&v92[104]) << 12) - 4096;
      *(_QWORD *)&v92[40] = *(_QWORD *)&v92[112];
      *(_QWORD *)&v92[88] = v12;
      *(_QWORD *)&v92[96] = v11 << 12;
      *((_QWORD *)&v91 + 1) = v9;
      HIDWORD(v90) = 2;
      v13 = NtCurrentPeb()->NumberOfHeaps - 1;
      *(_DWORD *)&v92[64] = *(_DWORD *)&v92[120];
      *(_QWORD *)&v92[80] = *(_QWORD *)(v9 + 104);
      DWORD1(v91) = v13;
      *(_QWORD *)&v92[8] = v11 << 12;
      *(_DWORD *)&v92[60] = 0;
    }
    else
    {
      LODWORD(v91) = *(unsigned __int16 *)(v5 + 208);
      HIDWORD(v90) = 1;
      *((_QWORD *)&v91 + 1) = v5;
      v15 = *(_QWORD *)(v5 + 568);
      DWORD1(v91) = NtCurrentPeb()->NumberOfHeaps - 1;
      v16 = *(_QWORD *)(v5 + 576);
      *(_QWORD *)v92 = v15;
      v17 = *(_QWORD *)(v5 + 192);
      *(_QWORD *)&v92[8] = v16 - *(_QWORD *)(v5 + 672);
      v18 = *(_QWORD *)(v5 + 576) - 16 * v17;
      if ( *(_BYTE *)(v5 + 418) == 2 )
      {
        v19 = *(_QWORD *)(v5 + 408);
        if ( v19 )
          v18 -= *(_QWORD *)(v19 + 72);
      }
      *(_QWORD *)&v92[48] = 16LL * *(_QWORD *)(v5 + 192);
      *(_DWORD *)&v92[32] = *(_DWORD *)(v5 + 612);
      *(_DWORD *)&v92[64] = *(_QWORD *)(v5 + 592);
      *(_QWORD *)&v92[24] = *(_QWORD *)(v5 + 584);
      *(_DWORD *)&v92[16] = *(_DWORD *)(v5 + 608);
      *(_DWORD *)&v92[68] = *(_DWORD *)(v5 + 616);
      *(_DWORD *)&v92[72] = *(_DWORD *)&v92[68];
      v20 = *(__int64 **)(v5 + 312);
      *(_QWORD *)&v92[40] = v18;
      *(_QWORD *)&v92[80] = 0LL;
      if ( v20 )
      {
        v21 = *((_DWORD *)v20 + 4);
        *(_DWORD *)&v92[56] = v21;
        v22 = *v20;
        if ( v22 )
          *(_DWORD *)&v92[56] = *(_DWORD *)(v22 + 16) + v21;
      }
      v23 = *(__int64 **)(v5 + 352);
      v24 = *(_DWORD *)(v5 + 628);
      *(_DWORD *)&v92[60] = v24;
      if ( v23 )
      {
        v25 = *v23;
        if ( v25 != -1 )
          LODWORD(v4) = *(_DWORD *)(v25 + 36);
        *(_DWORD *)&v92[60] = v24 + v4;
      }
      v12 = *(_QWORD *)v92;
      if ( *(_QWORD *)v92 < *(_QWORD *)&v92[8] )
        v12 = *(_QWORD *)&v92[8];
    }
    *(_QWORD *)v92 = v12;
    return ((unsigned int (__fastcall *)(__int64 *, __int64))v3)(&v88, v2);
  }
  v88 = 2LL;
  DWORD1(v91) = 0;
  v89 = 64LL;
  v90 = a1;
  memset(v92, 0, sizeof(v92));
  if ( v8 )
  {
    *((_QWORD *)&v91 + 1) = (*(_QWORD *)(v9 + 88) << 12) + (*(_QWORD *)(v9 + 128) << 12);
    *(_QWORD *)v92 = (*(_QWORD *)(v9 + 96) << 12) + (*(_QWORD *)(v9 + 136) << 12);
    LODWORD(v91) = 0;
  }
  else
  {
    v61 = (*(_DWORD *)(a1 + 116) & 0x1000000) == 0;
    LODWORD(v91) = *(unsigned __int8 *)(a1 + 418);
    if ( !v61 )
      return (unsigned int)-1073741822;
    v27 = *(_QWORD *)(a1 + 576);
    *((_QWORD *)&v91 + 1) = *(_QWORD *)(a1 + 592) + *(_QWORD *)(a1 + 568);
    v28 = *(_QWORD *)(a1 + 600) - *(_QWORD *)(a1 + 672);
    *(_QWORD *)v92 = v28 + v27;
    if ( *((_QWORD *)&v91 + 1) < (unsigned __int64)(v28 + v27) )
      *((_QWORD *)&v91 + 1) = v28 + v27;
  }
  v26 = ((__int64 (__fastcall *)(__int64 *, __int64))v3)(&v88, v2);
  if ( v26 >= 0 )
  {
    v29 = v84;
    if ( v84 >= 3 )
    {
      v30 = 0LL;
      v85 = 0LL;
      v31 = 0LL;
      v86 = 0LL;
      v87 = 0LL;
LABEL_31:
      v32 = v85;
      v33 = 4096LL;
      while ( 1 )
      {
        if ( *(_DWORD *)(v5 + 16) == -571548178 )
        {
          v34 = *(_QWORD *)(v5 + 56);
          if ( (*(_BYTE *)(v34 + 24) & 4) == 0 )
          {
            if ( (unsigned int)NtCurrentTeb()->ClientId.UniqueThread == *(_DWORD *)(v34 + 36) )
            {
              RtlpHpEnvAcquireGlobalLockExclusive((void *)(v5 + 20));
              *(_DWORD *)(v5 + 224) = NtCurrentTeb()->ClientId.UniqueThread;
              v33 = 4096LL;
              *(_DWORD *)(v34 + 24) |= 4u;
            }
            v32 = v85;
          }
          v4 = 0LL;
          v35 = 0;
          if ( v32 )
          {
            if ( *(_DWORD *)(v5 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
            {
              v35 = 1;
              RtlEnterCriticalSection(&RtlpProcessHeapsLock);
            }
            if ( (_QWORD)v85 == v5 )
            {
              *(_QWORD *)&v85 = 0LL;
              goto LABEL_43;
            }
            if ( (_WORD)v85
              || (v41 = RtlCSparseBitmapBitmaskRead(
                          (__int64)&BaseAddress,
                          2 * ((unsigned __int64)(v85 - qword_1801CD918) >> 20))) != 0
              && (LODWORD(v4) = v41 - 1, (int)v41 - 1 < 2) )
            {
LABEL_43:
              while ( 1 )
              {
                v26 = RtlpHpSegWalk((__int64 *)(v95 + 320 + 192LL * (int)v4), (__int64 *)&v85, v84 > 3, v33);
                if ( v26 != -2147483622 )
                  break;
                v33 = 0LL;
                LODWORD(v4) = v4 + 1;
                *(_QWORD *)&v85 = 0LL;
                v32 = 0LL;
                if ( (int)v4 >= 2 )
                {
                  v5 = v95;
                  goto LABEL_46;
                }
              }
              v32 = v85;
              v5 = v95;
LABEL_84:
              v37 = WORD1(v86);
              goto LABEL_85;
            }
            v32 = v85;
            v33 = 0LL;
LABEL_46:
            v38 = (unsigned __int64 *)(v5 + 72);
            if ( !v32 )
            {
              if ( (*(_BYTE *)(v5 + 80) & 1) != 0 )
              {
                v39 = *v38;
                if ( *v38 )
                {
                  v40 = (unsigned __int64)v38 ^ v39;
                  goto LABEL_55;
                }
                goto LABEL_56;
              }
              v40 = *v38;
              v39 = *v38;
LABEL_55:
              if ( !v40 )
              {
LABEL_56:
                v26 = -2147483622;
                goto LABEL_84;
              }
LABEL_78:
              v37 = 16385LL;
              v32 = *(_QWORD *)(v39 + 24) & 0xFFFFFFFFFFFF0000uLL;
              *(_QWORD *)&v85 = v32;
              v48 = *(unsigned __int16 *)(v39 + 24);
              v49 = *(_QWORD *)(v39 + 32);
              BYTE1(v86) = 64;
              v50 = (v49 & 0xFFFFFFFFFFFFF000uLL) - v48;
              WORD1(v86) = 16385;
              *((_QWORD *)&v85 + 1) = v50;
              LOBYTE(v86) = *(_BYTE *)(v39 + 24);
              *(_QWORD *)((char *)&v87 + 4) = *(unsigned __int16 *)(v39 + 24);
              if ( (*(_BYTE *)(v39 + 32) & 1) != 0 )
              {
                v51 = v50 + v32;
                v52 = v50 + v32 + 16;
                if ( (*(_DWORD *)(v5 + 20) & 0x2000) == 0 )
                  v52 = v51;
                v53 = (v52 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
                *((_QWORD *)&v86 + 1) = *(_QWORD *)(v53 + 8);
                WORD1(v86) = 16401;
                WORD1(v86) = (*(_BYTE *)(v53 + 2) >> 4 << 8) | 0x4011;
                v37 = WORD1(v86);
                LOWORD(v87) = *(_WORD *)v53;
              }
              v26 = 0;
LABEL_85:
              if ( v35 )
              {
                RtlLeaveCriticalSection(&RtlpProcessHeapsLock);
                v36 = DWORD2(v86);
                v4 = 0LL;
                v37 = WORD1(v86);
                v32 = v85;
              }
              else
              {
                v36 = DWORD2(v86);
                v4 = 0LL;
              }
              v7 = v97;
              goto LABEL_90;
            }
            v42 = *(_QWORD *)(v5 + 80);
            v43 = *v38;
            if ( (v42 & 1) != 0 )
            {
              if ( v43 )
              {
                v43 ^= (unsigned __int64)v38;
                goto LABEL_60;
              }
            }
            else
            {
LABEL_60:
              v44 = v42 & 1;
              while ( v43 )
              {
                v45 = *(_QWORD *)(v43 + 24) & 0xFFFFFFFFFFFF0000uLL;
                if ( v32 >= v45 )
                {
                  if ( v32 <= v45 )
                    break;
                  v46 = *(_QWORD *)(v43 + 8);
                }
                else
                {
                  v46 = *(_QWORD *)v43;
                }
                if ( v44 && v46 )
                  v43 ^= v46;
                else
                  v43 = v46;
              }
            }
            v39 = 0LL;
            if ( v43 )
            {
              v39 = *(_QWORD *)v43;
              if ( !*(_QWORD *)v43 )
              {
                v39 = *(_QWORD *)(v43 + 8);
                if ( !v39 )
                {
                  v47 = *v38;
                  while ( v43 != v47 )
                  {
                    v39 = *(_QWORD *)((*(_QWORD *)(v43 + 16) & 0xFFFFFFFFFFFFFFFCuLL) + 8);
                    if ( v43 != v39 && v39 )
                      goto LABEL_78;
                    v43 = *(_QWORD *)(v43 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                  }
                  goto LABEL_56;
                }
              }
            }
            goto LABEL_78;
          }
          v7 = v97;
          v36 = 4096;
          *(_QWORD *)&v87 = v5;
          v32 = v5;
          *((_QWORD *)&v86 + 1) = 4096LL;
          v37 = 32770LL;
          *(_QWORD *)&v85 = v5;
          v26 = 0;
          *((_QWORD *)&v85 + 1) = 4096LL;
          WORD1(v86) = -32766;
          BYTE1(v86) = 0;
          *((_QWORD *)&v87 + 1) = v5;
          LOWORD(v87) = v5;
        }
        else
        {
          v54 = RtlpWalkHeap(v5, (__int64)&v85, v29 > 3);
          v36 = DWORD2(v86);
          v26 = v54;
          v37 = WORD1(v86);
          v32 = v85;
        }
LABEL_90:
        if ( v26 == -2147483622 )
          return 0LL;
        if ( v26 < 0 )
          return (unsigned int)v26;
        v55 = v37;
        if ( (v37 & 2) != 0 )
        {
          if ( !v83 && (v37 & 0x8000) == 0 )
          {
            v97 = v32;
            v7 = v32;
            if ( v32 + 24 == *(_QWORD *)(v5 + 288) )
              v32 = v5;
          }
          v90 = v32;
          v56 = v94;
          *((_QWORD *)&v91 + 1) = v36;
          *(_QWORD *)&v91 = v36 + (unsigned __int64)HIDWORD(v86);
          v88 = 3LL;
          memset(v92, 0, sizeof(v92));
          v89 = 56LL;
          v26 = v93(&v88, v94, v37, v33);
          if ( v26 >= 0 )
          {
            if ( v83 )
            {
              v30 = v85;
              v31 = v85 + DWORD2(v86);
              v61 = (*(_DWORD *)(v96 + 20) & 0x40000000) == 0;
            }
            else if ( (WORD1(v86) & 0x8000) != 0 )
            {
              v30 = v85;
              v31 = v85 + DWORD2(v86);
              v61 = (*(_DWORD *)(v5 + 112) & 0x40000) == 0;
            }
            else
            {
              v57 = *(_QWORD **)(v7 + 96);
              v58 = 0LL;
              v59 = 0LL;
              if ( v57 == (_QWORD *)(v7 + 96) )
              {
LABEL_113:
                v30 = v7;
                if ( v7 + 24 == *(_QWORD *)(*(_QWORD *)(v7 + 40) + 288LL) )
                  v30 = *(_QWORD *)(v7 + 40);
              }
              else
              {
                do
                {
                  v60 = v57[2];
                  if ( v7 < v60 )
                  {
                    if ( !v59 || v59[4] > v60 )
                      v59 = v57 - 2;
                  }
                  else
                  {
                    if ( v7 < v60 + v57[3] )
                    {
                      _mm_lfence();
                      v30 = v57[2];
                      v31 = v30 + v57[3];
                      v61 = (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 112LL) & 0x40000) == 0;
                      goto LABEL_121;
                    }
                    if ( !v58 || v58[4] < v60 )
                      v58 = v57 - 2;
                  }
                  v57 = (_QWORD *)*v57;
                }
                while ( v57 != (_QWORD *)(v7 + 96) );
                if ( !v58 )
                  goto LABEL_113;
                v30 = v58[4] + v58[5];
              }
              v31 = v59 ? v59[4] : v30 + ((unsigned __int64)*(unsigned int *)(v7 + 56) << 12);
              v61 = (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 112LL) & 0x40000) == 0;
            }
LABEL_121:
            v89 = 56LL;
            v90 = v30;
            v88 = 4LL;
            v62 = 64;
            if ( v61 )
              v62 = 4;
            HIDWORD(v91) = v62;
            DWORD2(v91) = 1;
            *(_QWORD *)&v91 = v31 - v30;
            memset(v92, 0, sizeof(v92));
            v26 = ((__int64 (__fastcall *)(__int64 *, __int64))v93)(&v88, v56);
            if ( v26 >= 0 )
            {
              v29 = v84;
              v4 = 0LL;
              goto LABEL_31;
            }
          }
          return (unsigned int)v26;
        }
        if ( (v37 & 0x4000) != 0 )
        {
          memset_thunk_772440563353939046(&v88, 0, 0xB0uLL);
          v63 = 0LL;
          LODWORD(v88) = 3;
          v89 = 56LL;
          if ( !v83 )
          {
            v64 = (unsigned __int8 *)(v32 - 16);
            _m_prefetchw(v64);
            if ( v64[15] == 5 )
              v64 -= 16 * v64[14];
            v63 = v64 - 48;
            v90 = (unsigned __int64)(v64 - 48) & 0xFFFFFFFFFFFF0000uLL;
            *(_QWORD *)&v91 = *((_QWORD *)v64 - 1);
            v65 = *((_QWORD *)v64 - 2);
LABEL_144:
            v69 = (__int64 (__fastcall *)(__int64 *, __int64))v93;
            *((_QWORD *)&v91 + 1) = v65;
            v26 = ((__int64 (__fastcall *)(__int64 *, __int64))v93)(&v88, v94);
            if ( v26 < 0 )
              return (unsigned int)v26;
            v88 = 4LL;
            v89 = 56LL;
            v91 = 0LL;
            memset(v92, 0, sizeof(v92));
            if ( v83 )
            {
              v90 = v85;
              *(_QWORD *)&v91 = *(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFF000uLL;
              v70 = (*(_DWORD *)(v96 + 20) & 0x40000000) == 0;
            }
            else
            {
              v90 = (unsigned __int64)v63;
              *(_QWORD *)&v91 = *((_QWORD *)v63 + 4);
              v70 = (*(_DWORD *)(v95 + 112) & 0x40000) == 0;
            }
            v71 = v94;
            v72 = 64;
            if ( v70 )
              v72 = 4;
            HIDWORD(v91) = v72;
            DWORD2(v91) = 1;
            v26 = v69(&v88, v94);
            if ( v26 < 0 )
              return (unsigned int)v26;
            LOWORD(v37) = WORD1(v86);
            v32 = v85;
            v55 = BYTE2(v86);
LABEL_183:
            if ( (v55 & 0xF0) != 0 )
            {
              v103 = 0LL;
              *(_QWORD *)&v98 = 5LL;
              *((_QWORD *)&v98 + 1) = 88LL;
              v100 = *((unsigned __int64 *)&v85 + 1);
              v77 = *(_QWORD *)((char *)&v87 + 4);
              v99 = v32;
              v101 = 0LL;
              v102 = 0LL;
              if ( (v55 & 2) != 0 )
                v77 = (unsigned __int8)v86;
              *((_QWORD *)&v100 + 1) = v77;
              v78 = 2;
              if ( (v37 & 0x4000) != 0 )
                v78 = 6;
              DWORD2(v99) = v78;
              if ( (v55 & 1) != 0 )
                DWORD2(v99) = v78 | 1;
              v79 = (__int64 *)&v98;
              *((_QWORD *)&v102 + 1) = *((_QWORD *)&v86 + 1);
              LODWORD(v103) = v87;
              HIDWORD(v101) = 1;
              *(_QWORD *)&v102 = 32LL;
              goto LABEL_201;
            }
            *(_QWORD *)&v91 = 0LL;
            *((_QWORD *)&v91 + 1) = *((_QWORD *)&v85 + 1);
            v80 = *(_QWORD *)((char *)&v87 + 4);
            v88 = 5LL;
            memset(&v92[8], 0, 128);
            v89 = 56LL;
            v90 = v32;
            if ( (v55 & 2) != 0 )
              v80 = (unsigned __int8)v86;
            *(_QWORD *)v92 = v80;
            v81 = v91;
            if ( (v55 & 1) != 0 )
              v81 = 1;
            LODWORD(v91) = v81;
            if ( (v37 & 0x4000) != 0 )
            {
              v82 = v81 | 4;
              goto LABEL_199;
            }
            if ( (v37 & 0x8000u) != 0LL )
            {
              v82 = v81 | 8;
LABEL_199:
              LODWORD(v91) = v82;
            }
            v79 = &v88;
LABEL_201:
            v26 = ((__int64 (__fastcall *)(__int64 *, __int64))v93)(v79, v71);
            if ( v26 < 0 )
              return (unsigned int)v26;
            v5 = v95;
            v4 = 0LL;
            v29 = v84;
            goto LABEL_31;
          }
          v90 = v32;
          v66 = *(_QWORD *)(v96 + 80);
          v4 = *(_QWORD *)(v96 + 72);
          if ( (v66 & 1) != 0 )
          {
            if ( v4 )
            {
              v4 ^= v96 + 72;
              goto LABEL_133;
            }
          }
          else
          {
LABEL_133:
            while ( v4 )
            {
              v67 = *(_QWORD *)(v4 + 24) & 0xFFFFFFFFFFFF0000uLL;
              if ( v32 >= v67 )
              {
                if ( v32 <= v67 )
                  break;
                v68 = *(_QWORD *)(v4 + 8);
              }
              else
              {
                v68 = *(_QWORD *)v4;
              }
              if ( (v66 & 1) != 0 && v68 )
                v4 ^= v68;
              else
                v4 = v68;
            }
          }
          *(_QWORD *)&v91 = (*(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFF000uLL) + 4096;
          v65 = *(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFF000uLL;
          goto LABEL_144;
        }
        v33 = 4096LL;
        if ( (v37 & 0x1000) != 0 )
        {
          v29 = v84;
          if ( v84 >= 4 )
          {
            v88 = 4LL;
            *(_QWORD *)&v91 = *((_QWORD *)&v85 + 1);
            memset(v92, 0, sizeof(v92));
            v89 = 56LL;
            v90 = v32;
            *((_QWORD *)&v91 + 1) = 0x100000002LL;
            v26 = ((__int64 (__fastcall *)(__int64 *, __int64))v93)(&v88, v94);
            if ( v26 < 0 )
              return (unsigned int)v26;
            v29 = v84;
            goto LABEL_31;
          }
        }
        else if ( v83 || v32 >= v30 && v32 <= v31 )
        {
LABEL_181:
          v29 = v84;
          if ( v84 >= 4 )
          {
            v71 = v94;
            goto LABEL_183;
          }
        }
        else
        {
          v73 = *(_QWORD **)(v7 + 96);
          v74 = 0LL;
          v75 = 0LL;
          if ( v73 == (_QWORD *)(v7 + 96) )
            goto LABEL_171;
          do
          {
            v30 = v73[2];
            if ( v32 < v30 )
            {
              if ( !v75 || v75[4] > v30 )
                v75 = v73 - 2;
            }
            else
            {
              v31 = v30 + v73[3];
              if ( v32 < v31 )
                goto LABEL_176;
              if ( !v74 || v74[4] < v30 )
                v74 = v73 - 2;
            }
            v73 = (_QWORD *)*v73;
          }
          while ( v73 != (_QWORD *)(v7 + 96) );
          if ( !v74 )
          {
LABEL_171:
            v30 = v7;
            if ( v7 + 24 == *(_QWORD *)(*(_QWORD *)(v7 + 40) + 288LL) )
              v30 = *(_QWORD *)(v7 + 40);
          }
          else
          {
            v30 = v74[4] + v74[5];
          }
          if ( v75 )
            v31 = v75[4];
          else
            v31 = v30 + ((unsigned __int64)*(unsigned int *)(v7 + 56) << 12);
LABEL_176:
          v76 = 64;
          v33 = 4096LL;
          v29 = v84;
          if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 112LL) & 0x40000) == 0 )
            v76 = 4;
          if ( v84 >= 4 )
          {
            DWORD2(v91) = 1;
            HIDWORD(v91) = v76;
            *(_QWORD *)&v91 = v31 - v30;
            v88 = 4LL;
            memset(v92, 0, sizeof(v92));
            v89 = 56LL;
            v90 = v30;
            v26 = v93(&v88, v94, 4LL, 4096LL);
            if ( v26 < 0 )
              return (unsigned int)v26;
            LOWORD(v37) = WORD1(v86);
            v33 = 4096LL;
            v32 = v85;
            v55 = BYTE2(v86);
            goto LABEL_181;
          }
        }
      }
    }
  }
  return (unsigned int)v26;
}
