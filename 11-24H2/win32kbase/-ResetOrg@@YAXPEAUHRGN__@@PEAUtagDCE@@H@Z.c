/*
 * XREFs of ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14000F604
 * Callers:
 *     UserSetDCVisRgn @ 0x14000F460 (UserSetDCVisRgn.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400101A0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x140010220 (--1DCOBJA@@QEAA@XZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x140010520 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?RegionCore_iComplexity@Win32kRS@@YAJPEBVREGION_CORE@@@Z @ 0x140010888 (-RegionCore_iComplexity@Win32kRS@@YAJPEBVREGION_CORE@@@Z.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x140010DA0 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140029D30 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14002B150 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14002D0C0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14002D140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall ResetOrg(HRGN a1, struct tagDCE *a2, int a3)
{
  __int64 v3; // rax
  int *v4; // rsi
  HRGN v5; // r15
  __int64 v7; // rcx
  int v8; // eax
  __m128i v9; // xmm6
  int v10; // edi
  int v11; // ebx
  __int64 v12; // rcx
  LONG left; // r13d
  LONG top; // r12d
  int (*v15)(void); // rax
  __int64 v16; // r14
  __int64 (__fastcall *v17)(__int64); // rax
  __int64 v18; // r14
  int (*v19)(void); // rax
  __int64 (__fastcall *v20)(__int64); // rax
  __int64 v21; // rax
  int v22; // r15d
  int v23; // r14d
  __int64 v24; // rax
  int v25; // r14d
  int v26; // r15d
  __int64 v27; // rdx
  __int64 *SystemArgument1; // rdi
  char *v29; // rbx
  unsigned __int64 v30; // rsi
  __int64 v31; // rdi
  int v32; // r14d
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r11
  __int64 v36; // r10
  __int64 v37; // r9
  __int64 v38; // r8
  struct tagDCE *v39; // rbx
  struct REGION_CORE *v40; // rdx
  int v41; // r8d
  int v42; // ecx
  int v43; // ecx
  struct REGION_CORE *v44; // rcx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // r9
  __int64 v48; // r8
  __int64 v49; // rcx
  unsigned __int64 v50; // xmm0_8
  int v51; // ebx
  __int64 v52; // rcx
  unsigned int *v53; // r8
  unsigned int *i; // rdx
  __m128i v55; // [rsp+58h] [rbp-89h]
  __m128i v56; // [rsp+58h] [rbp-89h]
  _DWORD v60[2]; // [rsp+78h] [rbp-69h] BYREF
  struct tagDCE *v61; // [rsp+80h] [rbp-61h]
  struct REGION_CORE *v62[10]; // [rsp+88h] [rbp-59h] BYREF
  struct _RECTL v63; // [rsp+D8h] [rbp-9h] BYREF

  v3 = *((_QWORD *)a2 + 10);
  v4 = (int *)((char *)a2 + 48);
  v5 = a1;
  v61 = a2;
  v7 = *(_QWORD *)(v3 + 40);
  v55.m128i_i64[0] = 0LL;
  if ( (*(_WORD *)(v7 + 42) & 0x2FFF) == 0x29D )
  {
    v33 = *(_QWORD *)(W32GetUserSessionState() + 57008);
    v34 = *(_QWORD *)(*(_QWORD *)v33 + 24LL);
    v10 = *(_QWORD *)(*(_QWORD *)v33 + 32LL) - v34;
    v11 = HIDWORD(*(_QWORD *)(*(_QWORD *)v33 + 32LL)) - HIDWORD(v34);
    v55.m128i_i64[1] = __PAIR64__(v11, v10);
    v8 = *v4;
    v9 = v55;
  }
  else
  {
    v8 = *v4;
    if ( (*v4 & 1) != 0 )
    {
      v9 = *(__m128i *)(v7 + 88);
      v10 = *(_DWORD *)(v7 + 96);
    }
    else
    {
      v9 = *(__m128i *)(v7 + 104);
      v10 = *(_DWORD *)(v7 + 112);
    }
    v11 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12));
    v55.m128i_i64[0] = v9.m128i_i64[0];
  }
  v12 = *((_QWORD *)a2 + 9);
  if ( !v12 || (v8 & 0x4000) != 0 )
  {
    left = _mm_cvtsi128_si32(v9);
    top = _mm_cvtsi128_si32(_mm_srli_si128(v9, 4));
  }
  else
  {
    v63 = *(struct _RECTL *)(*(_QWORD *)(v12 + 40) + 28LL);
    left = v55.m128i_i32[0] - v63.left;
    v55.m128i_i32[0] -= v63.left;
    v11 -= v63.top;
    top = v55.m128i_i32[1] - v63.top;
    v10 -= v63.left;
    v55.m128i_i64[1] = __PAIR64__(v11, v10);
    v55.m128i_i32[1] -= v63.top;
    if ( v5 )
      SetMonitorRegion((struct tagMONITOR *)v12, v5, v5);
    v9 = v55;
  }
  if ( (*v4 & 0x4000000) == 0 )
  {
    v15 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2560LL);
    if ( !v15 || v15() < 0 )
      goto LABEL_39;
    v16 = *((_QWORD *)a2 + 10);
    v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2568LL);
    v18 = v17 ? v17(v16) : 0LL;
    if ( !v18 )
      goto LABEL_39;
    if ( (*(_DWORD *)(*(_QWORD *)(v18 + 40) + 24LL) & 0x20000000) != 0 )
    {
      v19 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2576LL);
      if ( v19 )
      {
        if ( v19() >= 0 )
        {
          v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2584LL);
          if ( v20 )
          {
            if ( v20(v18) )
            {
              v21 = *(_QWORD *)(v18 + 40);
              v22 = *(_DWORD *)(v21 + 88);
              v23 = *(_DWORD *)(v21 + 92);
              v24 = *((_QWORD *)v61 + 9);
              if ( v24 && *v4 < 0 )
              {
                left += v22;
                v10 += v22;
                v11 += v23;
                top += v23;
                v63 = *(struct _RECTL *)(*(_QWORD *)(v24 + 40) + 28LL);
                v50 = _mm_srli_si128((__m128i)v63, 8).m128i_u64[0];
                if ( left <= v63.left )
                  left = v63.left;
                if ( v10 >= (int)v50 )
                  v10 = v50;
                if ( left >= v10 )
                  goto LABEL_72;
                if ( top <= v63.top )
                  top = v63.top;
                if ( v11 >= SHIDWORD(v50) )
                  v11 = HIDWORD(v50);
                if ( top >= v11 )
                {
LABEL_72:
                  v11 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
                  top = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
                  v10 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
                  left = _mm_cvtsi128_si32((__m128i)0LL);
                }
              }
              v25 = -v23;
              v26 = -v22;
              left += v26;
              v56.m128i_i32[3] = v25 + v11;
              v56.m128i_i32[0] = left;
              top += v25;
              v56.m128i_i32[2] = v26 + v10;
              v56.m128i_i32[1] = top;
              if ( !a1 )
              {
                v9 = v56;
                v5 = 0LL;
                goto LABEL_39;
              }
              RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v62, a1, 0, 0);
              v27 = (__int64)v62[0];
              if ( !v62[0] )
                goto LABEL_38;
              SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
              v60[0] = v26;
              v60[1] = v25;
              if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
              {
                v29 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
                v30 = ((unsigned __int64)v62[0] + 24) & -(__int64)(v62[0] != 0LL);
                KeEnterCriticalRegion();
                ExAcquirePushLockSharedEx(SystemArgument1 + 1, 2LL);
                v31 = *SystemArgument1;
                v32 = (*(__int64 (__fastcall **)(unsigned __int64, _DWORD *))(v31 + 136))(v30, v60);
                if ( !(*(unsigned int (__fastcall **)(unsigned __int64))(v31 + 216))(v30) )
                  DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v30, 0LL, 0LL, 0LL, 0LL, 0);
                ExReleasePushLockSharedEx(v29, 2LL);
                KeLeaveCriticalRegion();
                if ( !v32 )
                  goto LABEL_38;
                SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
              }
              else
              {
                if ( *((_DWORD *)v62[0] + 12) == 1
                  || (v46 = *((int *)v62[0] + 13),
                      v47 = *((int *)v62[0] + 15),
                      v48 = *((int *)v62[0] + 14),
                      v49 = *((int *)v62[0] + 16),
                      v63.left = v46,
                      (int)v46 >= (int)v47)
                  || (int)v48 >= (int)v49 )
                {
LABEL_54:
                  if ( SystemArgument1 )
                  {
                    Win32kRS::RegionCore_iComplexity(
                      (Win32kRS *)((v27 + 24) & -(__int64)(v27 != 0)),
                      (const struct REGION_CORE *)-v27);
                  }
                  else if ( *(_DWORD *)(v27 + 48) != 1 )
                  {
                    REGION_CORE::get_sizeScan((REGION_CORE *)(v27 + 24));
                  }
                  goto LABEL_38;
                }
                v35 = v26 + v46;
                if ( (unsigned __int64)(v35 + 0x80000000LL) > 0xFFFFFFFF
                  || (v63.left = v26 + v46, v36 = v25 + v49, (unsigned __int64)(v36 + 0x80000000LL) > 0xFFFFFFFF)
                  || (v37 = v26 + v47, v63.bottom = v25 + v49, (unsigned __int64)(v37 + 0x80000000LL) > 0xFFFFFFFF)
                  || (v38 = v25 + v48, v63.right = v37, (unsigned __int64)(v38 + 0x80000000LL) > 0xFFFFFFFF)
                  || (v63.top = v38, (v35 & 0xF8000000) != 0 && (v35 & 0xF8000000) != -134217728)
                  || (((v36 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
                  || (((v37 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
                  || (((v38 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
                {
                  EngSetLastError(0x216u);
LABEL_38:
                  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v62);
                  v9 = v56;
                  v5 = a1;
                  goto LABEL_39;
                }
                *(struct _RECTL *)((char *)v62[0] + 52) = v63;
                v51 = *((_DWORD *)v62[0] + 12);
                for ( i = (unsigned int *)*((_QWORD *)v62[0] + 3); v51; i += *i + 4 )
                {
                  i[1] += v25;
                  --v51;
                  i[2] += v25;
                  v52 = *i;
                  if ( (_DWORD)v52 )
                  {
                    v53 = &i[v52 + 3];
                    do
                    {
                      *--v53 += v26;
                      LODWORD(v52) = v52 - 1;
                    }
                    while ( (_DWORD)v52 );
                  }
                }
                i[-*(i - 1) - 2] = 0x7FFFFFFF;
                *(_DWORD *)(*((_QWORD *)v62[0] + 3) + 4LL) = 0x80000000;
              }
              v27 = (__int64)v62[0];
              goto LABEL_54;
            }
          }
        }
      }
    }
  }
  if ( v5 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v62, v5, 0, 0);
    if ( v62[0] )
    {
      v63 = 0LL;
      RGNOBJ::vSet((RGNOBJ *)v62, &v63);
    }
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v62);
  }
LABEL_39:
  v39 = v61;
  DCOBJA::DCOBJA((DCOBJA *)v62, *((HDC *)v61 + 2));
  if ( v62[0] )
  {
    *((_DWORD *)v62[0] + 2 * (*((_DWORD *)v62[0] + 10) & 1) + 254) = left;
    *((_DWORD *)v62[0] + 2 * (*((_DWORD *)v62[0] + 10) & 1) + 255) = top;
    v40 = v62[0];
    v41 = *((_DWORD *)v62[0] + 10) & 1;
    v42 = v41 ? *((_DWORD *)v62[0] + 256) : *((_DWORD *)v62[0] + 254);
    *((_DWORD *)v62[0] + 298) = *((_DWORD *)v62[0] + 31) + v42;
    v43 = v41 ? *((_DWORD *)v40 + 257) : *((_DWORD *)v40 + 255);
    *((_DWORD *)v40 + 299) = *((_DWORD *)v40 + 32) + v43;
    *(__m128i *)((char *)v62[0] + 1032) = v9;
    v44 = v62[0];
    v45 = *((_DWORD *)v62[0] + 130);
    if ( (v45 & 1) != 0 && (v45 & 2) == 0 )
    {
      *((_DWORD *)v62[0] + 9) |= 0x10u;
      *((_DWORD *)v44 + 130) = v45 | 4;
    }
  }
  DCOBJA::~DCOBJA((DCOBJA *)v62);
  if ( a3 )
  {
    DCOBJA::DCOBJA((DCOBJA *)v62, *((HDC *)v39 + 2));
    if ( v62[0] )
      GreSelectVisRgnInternal(v62, v5, 1LL);
    DCOBJA::~DCOBJA((DCOBJA *)v62);
  }
}
