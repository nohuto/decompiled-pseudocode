/*
 * XREFs of ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C004A2E0
 * Callers:
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C004C660 (UserSetDCVisRgn.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003F148 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C004B718 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C004B77C (--1DCOBJA@@QEAA@XZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004B888 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     IntersectRect @ 0x1C0059BB8 (IntersectRect.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0059C2C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GreSetRectRgn @ 0x1C008A530 (GreSetRectRgn.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00D2140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ResetOrg(HRGN a1, struct tagDCE *a2, int a3)
{
  __int64 v3; // rax
  HRGN v4; // rsi
  __int64 v6; // rcx
  int v7; // eax
  __int128 v8; // xmm0
  unsigned int v9; // r15d
  int v10; // r14d
  __int64 v11; // rcx
  int v12; // r13d
  int v13; // r12d
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // esi
  int v17; // ebx
  __int64 v18; // rax
  int v19; // ebx
  int v20; // esi
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r11
  __int64 v24; // rcx
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // r8
  int v28; // r8d
  unsigned int *i; // rax
  __int64 v30; // rdx
  _DWORD *v31; // rdx
  int v32; // ecx
  __int128 v33; // xmm0
  __int64 v34; // rcx
  int v35; // eax
  unsigned int *v36; // r9
  __int64 v37; // rax
  unsigned __int64 v38; // xmm0_8
  __int64 v39; // rax
  __int128 v40; // xmm0
  __int128 v41; // [rsp+38h] [rbp-49h] BYREF
  int v42; // [rsp+48h] [rbp-39h]
  HRGN v43; // [rsp+50h] [rbp-31h]
  _QWORD v44[7]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v45; // [rsp+90h] [rbp+Fh] BYREF

  v3 = *((_QWORD *)a2 + 2);
  v4 = a1;
  v43 = a1;
  v6 = *(_QWORD *)(v3 + 40);
  v42 = a3;
  v41 = 0LL;
  if ( (*(_WORD *)(v6 + 42) & 0x2FFF) == 0x29D )
  {
    v37 = *(_QWORD *)(*(_QWORD *)gpDispInfo + 24LL);
    v38 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)gpDispInfo + 24LL), 8).m128i_u64[0];
    v9 = v38 - v37;
    v10 = HIDWORD(v38) - HIDWORD(v37);
    DWORD2(v41) = v38 - v37;
    v7 = *((_DWORD *)a2 + 16);
    HIDWORD(v41) = HIDWORD(v38) - HIDWORD(v37);
  }
  else
  {
    v7 = *((_DWORD *)a2 + 16);
    if ( (v7 & 1) != 0 )
      v8 = *(_OWORD *)(v6 + 88);
    else
      v8 = *(_OWORD *)(v6 + 104);
    v41 = v8;
    v9 = DWORD2(v8);
    v10 = HIDWORD(v8);
  }
  v11 = *((_QWORD *)a2 + 11);
  if ( !v11 || (v7 & 0x4000) != 0 )
  {
    v12 = DWORD1(v41);
    v13 = v41;
  }
  else
  {
    v45 = *(_OWORD *)(*(_QWORD *)(v11 + 40) + 28LL);
    v13 = v41 - v45;
    LODWORD(v41) = v41 - v45;
    v10 -= DWORD1(v45);
    v12 = DWORD1(v41) - DWORD1(v45);
    v9 -= v45;
    *((_QWORD *)&v41 + 1) = __PAIR64__(v10, v9);
    DWORD1(v41) -= DWORD1(v45);
    if ( v4 )
      SetMonitorRegion((struct tagMONITOR *)v11, v4, v4);
  }
  if ( (*((_DWORD *)a2 + 16) & 0x4000000) != 0 )
    goto LABEL_49;
  if ( !qword_1C0295A88 || (int)qword_1C0295A88() < 0 )
    goto LABEL_37;
  v14 = qword_1C0295A90 ? qword_1C0295A90(*((_QWORD *)a2 + 2)) : 0LL;
  if ( !v14 )
    goto LABEL_37;
  if ( (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 24LL) & 0x20000000) != 0
    && qword_1C0295A98
    && (int)qword_1C0295A98() >= 0
    && qword_1C0295AA0
    && qword_1C0295AA0(v14) )
  {
    v15 = *(_QWORD *)(v14 + 40);
    v16 = *(_DWORD *)(v15 + 88);
    v17 = *(_DWORD *)(v15 + 92);
    v18 = *((_QWORD *)a2 + 11);
    if ( v18 && *((int *)a2 + 16) < 0 )
    {
      v39 = *(_QWORD *)(v18 + 40);
      LODWORD(v41) = v16 + v13;
      DWORD2(v41) = v16 + v9;
      v40 = *(_OWORD *)(v39 + 28);
      HIDWORD(v41) = v17 + v10;
      DWORD1(v41) = v17 + v12;
      v45 = v40;
      IntersectRect(&v41, &v41, &v45);
      v10 = HIDWORD(v41);
      v9 = DWORD2(v41);
      v12 = DWORD1(v41);
      v13 = v41;
    }
    v19 = -v17;
    v20 = -v16;
    v13 += v20;
    HIDWORD(v41) = v19 + v10;
    LODWORD(v41) = v13;
    v12 += v19;
    DWORD2(v41) = v20 + v9;
    DWORD1(v41) = v12;
    if ( v43 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v44, v43, 0, 0);
      if ( v44[0] )
      {
        if ( *(_DWORD *)(v44[0] + 52LL) != 1 )
        {
          v21 = *(int *)(v44[0] + 56LL);
          v22 = *(int *)(v44[0] + 64LL);
          v23 = *(int *)(v44[0] + 60LL);
          v24 = *(int *)(v44[0] + 68LL);
          LODWORD(v45) = v21;
          if ( (int)v21 < (int)v22 && (int)v23 < (int)v24 )
          {
            v25 = v20 + v21;
            if ( (unsigned __int64)(v25 + 0x80000000LL) > 0xFFFFFFFF
              || (LODWORD(v45) = v20 + v21, v26 = v19 + v24, (unsigned __int64)(v26 + 0x80000000LL) > 0xFFFFFFFF)
              || (v27 = v20 + v22, HIDWORD(v45) = v19 + v24, (unsigned __int64)(v27 + 0x80000000LL) > 0xFFFFFFFF)
              || (DWORD2(v45) = v27, (unsigned __int64)(v19 + v23 + 0x80000000LL) > 0xFFFFFFFF)
              || (DWORD1(v45) = v19 + v23, (((v25 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0)
              || (((v26 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
              || (((v27 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
              || ((((v19 + (_DWORD)v23) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
            {
              EngSetLastError(0x216u);
            }
            else
            {
              *(_OWORD *)(v44[0] + 56LL) = v45;
              v28 = *(_DWORD *)(v44[0] + 52LL);
              for ( i = *(unsigned int **)(v44[0] + 32LL); v28; i += *i + 4 )
              {
                i[1] += v19;
                --v28;
                i[2] += v19;
                v30 = *i;
                if ( (_DWORD)v30 )
                {
                  v36 = &i[v30 + 3];
                  do
                  {
                    *--v36 += v20;
                    LODWORD(v30) = v30 - 1;
                  }
                  while ( (_DWORD)v30 );
                }
              }
              i[-*(i - 1) - 2] = 0x7FFFFFFF;
              *(_DWORD *)(*(_QWORD *)(v44[0] + 32LL) + 4LL) = 0x80000000;
            }
          }
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v44);
      v4 = v43;
    }
    else
    {
      v4 = 0LL;
    }
  }
  else
  {
LABEL_49:
    if ( v4 )
      GreSetRectRgn(v4, 0);
  }
LABEL_37:
  DCOBJA::DCOBJA((DCOBJA *)v44, *((HDC *)a2 + 1));
  if ( v44[0] )
  {
    *(_DWORD *)(v44[0] + 8LL * (*(_DWORD *)(v44[0] + 40LL) & 1) + 1016) = v13;
    *(_DWORD *)(v44[0] + 8LL * (*(_DWORD *)(v44[0] + 40LL) & 1) + 1020) = v12;
    v31 = (_DWORD *)v44[0];
    if ( (*(_DWORD *)(v44[0] + 40LL) & 1) != 0 )
    {
      *(_DWORD *)(v44[0] + 1192LL) = *(_DWORD *)(v44[0] + 124LL) + *(_DWORD *)(v44[0] + 1024LL);
      v32 = v31[257];
    }
    else
    {
      *(_DWORD *)(v44[0] + 1192LL) = *(_DWORD *)(v44[0] + 124LL) + *(_DWORD *)(v44[0] + 1016LL);
      v32 = v31[255];
    }
    v33 = v41;
    v31[299] = v31[32] + v32;
    *(_OWORD *)(v44[0] + 1032LL) = v33;
    v34 = v44[0];
    v35 = *(_DWORD *)(v44[0] + 520LL);
    if ( (v35 & 1) != 0 && (v35 & 2) == 0 )
    {
      *(_DWORD *)(v44[0] + 36LL) |= 0x10u;
      *(_DWORD *)(v34 + 520) = v35 | 4;
    }
  }
  DCOBJA::~DCOBJA((DCOBJA *)v44);
  if ( v42 )
  {
    DCOBJA::DCOBJA((DCOBJA *)v44, *((HDC *)a2 + 1));
    GreSelectVisRgnInternal(v44, v4, 1LL);
    DCOBJA::~DCOBJA((DCOBJA *)v44);
  }
}
