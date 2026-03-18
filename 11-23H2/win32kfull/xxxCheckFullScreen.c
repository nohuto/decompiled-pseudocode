/*
 * XREFs of xxxCheckFullScreen @ 0x1C00621AC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C01246F0 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1C0062604 (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     xxxAddFullScreen @ 0x1C0062640 (xxxAddFullScreen.c)
 *     RECTFromSIZERECT @ 0x1C0078D8C (RECTFromSIZERECT.c)
 *     xxxSetTrayWindow @ 0x1C00A4F7C (xxxSetTrayWindow.c)
 *     GetMonitorRectForWindow @ 0x1C00ABC60 (GetMonitorRectForWindow.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     _MonitorFromRect @ 0x1C00AE960 (_MonitorFromRect.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     GetDpiDependentMetric @ 0x1C00E91E0 (GetDpiDependentMetric.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1C00E963C (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     GetWindowDpiLastNotify @ 0x1C00EDCC0 (GetWindowDpiLastNotify.c)
 *     xxxRemoveFullScreen @ 0x1C00F4314 (xxxRemoveFullScreen.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     GetScreenRectForWindow @ 0x1C01571C4 (GetScreenRectForWindow.c)
 */

__int64 __fastcall xxxCheckFullScreen(struct tagWND *a1, struct tagSIZERECT *a2, __int64 a3)
{
  struct tagSIZERECT *v3; // rbx
  unsigned int v5; // r12d
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i v14; // xmm7
  int v15; // eax
  __int32 v16; // esi
  __int32 v17; // edi
  _QWORD *v18; // rbx
  __m128i v20; // xmm6
  INT v21; // ebx
  INT v22; // r15d
  INT v23; // eax
  INT v24; // r8d
  INT v25; // ebx
  INT v26; // edi
  INT v27; // esi
  INT v28; // r14d
  int v29; // eax
  int v30; // edi
  int v31; // ebx
  INT v32; // eax
  INT v33; // eax
  struct tagRECT v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // ecx
  unsigned int WindowDpiLastNotify; // eax
  int DpiDependentMetric; // eax
  int WindowBordersWithDpiAwareness; // eax
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  int v44; // [rsp+28h] [rbp-79h]
  struct tagRECT v45; // [rsp+30h] [rbp-71h] BYREF
  INT a[4]; // [rsp+40h] [rbp-61h] BYREF
  __int64 v47; // [rsp+50h] [rbp-51h]
  __int64 v48; // [rsp+58h] [rbp-49h]
  struct tagSIZERECT *v49; // [rsp+60h] [rbp-41h]
  __int128 v50; // [rsp+68h] [rbp-39h] BYREF
  __int64 v51; // [rsp+78h] [rbp-29h]
  __m128i v52; // [rsp+88h] [rbp-19h] BYREF

  v49 = a2;
  v3 = a2;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)(GetDispInfo(a1, a2, a3) + 96);
  *(_QWORD *)&v45.left = v6;
  if ( *(_DWORD *)*gpDispInfo <= 1u )
  {
    v7 = v6;
LABEL_3:
    v48 = v7;
    ThreadLockAlways(v7, &v50);
    v9 = *((_QWORD *)a1 + 2);
    v10 = 18;
    v11 = *(_QWORD *)(v9 + 456);
    if ( v11 )
    {
      v9 = **(_QWORD **)(v11 + 8);
      if ( (*(_DWORD *)(v9 + 64) & 1) != 0 )
        v10 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
    }
    v12 = v10 >> 8;
    LOWORD(v12) = v12 & 0x1FF;
    v13 = *(_QWORD *)(v7 + 40);
    v14 = *(__m128i *)(v13 + 44);
    v52 = v14;
    if ( (_WORD)v12 )
    {
      v21 = *(unsigned __int16 *)(v13 + 62);
      v22 = (unsigned __int16)v12;
      *(_OWORD *)a = *(_OWORD *)(v13 + 28);
      v20 = *(__m128i *)a;
      v23 = EngMulDiv(a[0], (unsigned __int16)v12, v21);
      v24 = v21;
      v25 = _mm_cvtsi128_si32(_mm_srli_si128(v20, 4));
      v26 = v23;
      v27 = EngMulDiv(v25, v22, v24);
      v28 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 60LL);
      v29 = v26 + EngMulDiv(_mm_cvtsi128_si32(v14) - a[0], v22, v28);
      v30 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 4));
      v52.m128i_i32[0] = v29;
      v31 = EngMulDiv(v30 - v25, v22, v28) + v27;
      v52.m128i_i32[1] = v31;
      v32 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v14, 8)) - _mm_cvtsi128_si32(v14), v22, v28);
      v16 = v52.m128i_i32[0] + v32;
      v52.m128i_i32[2] = v52.m128i_i32[0] + v32;
      v33 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v14, 12)) - v30, v22, v28);
      v7 = v48;
      v15 = v31 + v33;
      v3 = v49;
      v6 = *(_QWORD *)&v45.left;
      v52.m128i_i32[3] = v15;
    }
    else
    {
      v15 = v52.m128i_i32[3];
      v16 = v52.m128i_i32[2];
    }
    v17 = v52.m128i_i32[0];
    v44 = v15;
    if ( *(_DWORD *)v3 > v52.m128i_i32[0]
      || (v9 = HIDWORD(v52.m128i_i64[0]), *((_DWORD *)v3 + 1) > v52.m128i_i32[1])
      || *((_DWORD *)v3 + 2) < v16 - v52.m128i_i32[0]
      || *((_DWORD *)v3 + 3) < v52.m128i_i32[3] - v52.m128i_i32[1] )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
        SetOrClrWF(0LL, a1, 832LL, 1LL);
      v18 = (_QWORD *)*((_QWORD *)a1 + 3);
      if ( v18 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
        {
          v9 = gpsi;
          if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
          {
            v9 = **(_QWORD **)(gptiCurrent + 464LL);
            v12 = (unsigned int)(*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(v9 + 16));
            if ( ((*(_WORD *)(gptiCurrent + 680LL) | *(_WORD *)(v9 + 16)) & 0x800) != 0 || *(_QWORD *)(v18[1] + 192LL) )
            {
              SetOrClrWF(0LL, a1, 1088LL, 1LL);
              v9 = gpDispInfo;
              v12 = *(unsigned __int16 *)(gpDispInfo + 160LL);
              *(_WORD *)(gpDispInfo + 160LL) = v12 - 1;
              if ( !(_WORD)v12 )
              {
                v47 = 0LL;
                *(_OWORD *)a = 0LL;
                PushW32ThreadLock(v18, a, UserDereferenceObject);
                ObfReferenceObject(v18);
                xxxSetTrayWindow(v18, 1LL);
                PopAndFreeW32ThreadLock(a);
                v5 = 1;
              }
            }
          }
        }
      }
      goto LABEL_15;
    }
    v34 = *(struct tagRECT *)GetMonitorRectForWindow(a, v7, a1);
    v35 = *((_QWORD *)a1 + 5);
    v45 = v34;
    if ( (*(_BYTE *)(v35 + 31) & 1) != 0 )
      SetOrClrWF(1LL, a1, 832LL, 1LL);
    v36 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v36 + 31) & 1) != 0 && (((*(_BYTE *)(v36 + 30) & 0xC0) == 0xC0) & *(_BYTE *)(v36 + 30)) != 0 )
    {
      v37 = *(_DWORD *)(v36 + 288) & 0xF;
      if ( v37 == 3 )
      {
        WindowDpiLastNotify = (*(_DWORD *)(v36 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v36 + 232) & 0x400) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
      }
      else if ( !v37
             && (v42 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v42 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      DpiDependentMetric = GetDpiDependentMetric(2LL, WindowDpiLastNotify);
      LODWORD(v12) = *(_DWORD *)v3;
      if ( *(_DWORD *)v3 + DpiDependentMetric > v45.right
        || (LODWORD(v12) = *((_DWORD *)v3 + 2) + v12, (int)v12 < v45.right)
        || (v9 = *((unsigned int *)v3 + 1), (int)v9 + DpiDependentMetric > v45.top)
        || (v12 = (unsigned int)(v9 + *((_DWORD *)v3 + 3)), (int)v12 < v45.bottom) )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
          v5 = xxxRemoveFullScreen(a1);
        WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v12, 0, 0);
        *(_DWORD *)v3 = v17 - WindowBordersWithDpiAwareness;
        v9 = (unsigned int)(v52.m128i_i32[1] - WindowBordersWithDpiAwareness);
        WindowBordersWithDpiAwareness *= 2;
        v12 = (unsigned int)(v44 + WindowBordersWithDpiAwareness - v52.m128i_i32[1]);
        *((_DWORD *)v3 + 1) = v9;
        *((_DWORD *)v3 + 2) = v16 + WindowBordersWithDpiAwareness - v17;
        if ( v7 == v6 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
        {
          v43 = *((_DWORD *)v3 + 3);
          if ( (int)v12 < v43 )
            v43 = v12;
          *((_DWORD *)v3 + 3) = v43;
        }
        else
        {
          *((_DWORD *)v3 + 3) = v12;
        }
        goto LABEL_15;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) == 0 )
        goto LABEL_22;
    }
    else if ( (unsigned int)IsMaxedRect(&v45, v3) )
    {
LABEL_22:
      v5 = xxxAddFullScreen(a1);
    }
LABEL_15:
    ThreadUnlock1(v9, v12, v8);
    return v5;
  }
  *(_OWORD *)a = *(_OWORD *)GetScreenRectForWindow(a, a1);
  if ( !(unsigned int)IsMaxedRect((struct tagRECT *)a, v3) )
  {
    RECTFromSIZERECT(&v52, v41);
    v7 = MonitorFromRect(&v52, 1LL);
    goto LABEL_3;
  }
  return 0LL;
}
