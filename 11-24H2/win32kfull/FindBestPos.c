/*
 * XREFs of FindBestPos @ 0x140098F94
 * Callers:
 *     NtUserCalculatePopupWindowPosition @ 0x140098D20 (NtUserCalculatePopupWindowPosition.c)
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140026844 (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x14002699C (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetMonitorWorkRectForDpi @ 0x1400269FC (GetMonitorWorkRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140026B70 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x140098A48 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x140202E58 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall FindBestPos(
        int a1,
        int a2,
        int a3,
        int a4,
        struct tagRECT *a5,
        unsigned int a6,
        unsigned int ***a7,
        struct tagMONITOR *a8,
        __int64 a9)
{
  int v10; // r14d
  unsigned int **v12; // rax
  unsigned int CurrentThreadCompositedDpiContext; // eax
  unsigned int v15; // eax
  __m128i v16; // xmm6
  unsigned int v17; // eax
  unsigned int *v18; // rcx
  __m128i v19; // xmm0
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  int v24; // r14d
  unsigned int v25; // eax
  LONG v26; // r8d
  int v27; // r9d
  LONG v28; // eax
  LONG v29; // ecx
  LONG v30; // eax
  __int32 v32; // r10d
  LONG v33; // edx
  __int32 v34; // ecx
  __int32 v35; // edx
  __int64 v36; // r8
  int v37; // ecx
  __int64 v38; // r15
  unsigned int v39; // r14d
  BOOL v40; // edx
  unsigned int *v41; // rcx
  const struct tagWND *v42; // r14
  unsigned int WindowCompositedDpiContext; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  __int64 CurrentProcessWin32Process; // rax
  struct tagRECT *v47; // rax
  __m128i v48; // xmm0
  unsigned int **v49; // rax
  unsigned int v50; // r14d
  unsigned int v51; // r14d
  unsigned int *v52; // rcx
  unsigned int v53; // eax
  __m128i v54; // [rsp+48h] [rbp-B1h] BYREF
  int v55; // [rsp+58h] [rbp-A1h]
  struct tagPOINT v56; // [rsp+60h] [rbp-99h] BYREF
  struct tagMONITOR *v57; // [rsp+68h] [rbp-91h]
  _QWORD v58[3]; // [rsp+70h] [rbp-89h] BYREF
  __m128i v59; // [rsp+88h] [rbp-71h] BYREF
  __m128i v60; // [rsp+98h] [rbp-61h] BYREF
  __m128i v61; // [rsp+A8h] [rbp-51h] BYREF
  struct tagRECT v62; // [rsp+B8h] [rbp-41h] BYREF
  unsigned int v63[2]; // [rsp+C8h] [rbp-31h]
  _BYTE v64[4]; // [rsp+D0h] [rbp-29h]
  _BYTE v65[4]; // [rsp+D4h] [rbp-25h]

  v10 = a3;
  v55 = a3;
  v12 = *a7;
  v57 = a8;
  v54 = 0LL;
  if ( *v12 )
  {
    v41 = **a7;
    if ( *((_QWORD *)v41 + 7) )
      v42 = (const struct tagWND *)*((_QWORD *)v41 + 7);
    else
      v42 = (const struct tagWND *)*((_QWORD *)v41 + 2);
    WindowCompositedDpiContext = GetWindowCompositedDpiContext(v42);
    GetMonitorMenuRectForDpi((struct tagRECT *)&v58[1], a8, (WindowCompositedDpiContext >> 8) & 0x1FF);
    v62 = *(struct tagRECT *)&v58[1];
    v44 = GetWindowCompositedDpiContext(v42);
    GetMonitorWorkRectForDpi(&v61, (__int64)a8, (v44 >> 8) & 0x1FF);
    v16 = v61;
    v45 = GetWindowCompositedDpiContext(v42);
    GetMonitorRectForDpi(&v59, (__int64)a8, (v45 >> 8) & 0x1FF);
    v19 = v59;
    v10 = v55;
  }
  else
  {
    CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
    GetMonitorMenuRectForDpi(&v62, a8, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
    v15 = GetCurrentThreadCompositedDpiContext();
    GetMonitorWorkRectForDpi(&v61, (__int64)a8, (v15 >> 8) & 0x1FF);
    v16 = v61;
    v17 = GetCurrentThreadCompositedDpiContext();
    GetMonitorRectForDpi((__m128i *)&v58[1], (__int64)a8, (v17 >> 8) & 0x1FF);
    v19 = *(__m128i *)&v58[1];
  }
  v61 = v19;
  if ( (a6 & 0x10000) == 0
    && ((int)a9 < v16.m128i_i32[0]
     || (int)a9 >= _mm_cvtsi128_si32(_mm_srli_si128(v16, 8))
     || SHIDWORD(a9) < _mm_cvtsi128_si32(_mm_srli_si128(v16, 4))
     || SHIDWORD(a9) >= _mm_cvtsi128_si32(_mm_srli_si128(v16, 12))
     || **a7 && (v18 = **a7, (*v18 & 0x10000000) != 0)) )
  {
    if ( **a7 )
    {
      v40 = ***a7 >> 31;
    }
    else
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
      v40 = CurrentProcessWin32Process
         && *(_QWORD *)CurrentProcessWin32Process
         && (*(_BYTE *)(CurrentProcessWin32Process + 816) & 0x30) == 0;
    }
    v47 = (struct tagRECT *)&v61;
    if ( v40 )
      v47 = &v62;
    v48 = *(__m128i *)v47;
    v49 = *a7;
    v61 = v48;
    if ( *v49 )
      ***a7 |= 0x10000000u;
  }
  else
  {
    v61 = v16;
  }
  v20 = v61.m128i_u64[1];
  v21 = v61.m128i_i64[0];
  if ( a5 )
  {
    v54 = *(__m128i *)a5;
    v32 = v54.m128i_i32[2];
    v33 = _mm_cvtsi128_si32(v54);
    if ( v33 <= v61.m128i_i32[0] )
      v33 = v61.m128i_i32[0];
    v54.m128i_i32[0] = v33;
    if ( v54.m128i_i32[2] >= v61.m128i_i32[2] )
      v32 = v61.m128i_i32[2];
    v54.m128i_i32[2] = v32;
    if ( v33 >= v32 )
      goto LABEL_34;
    v34 = v54.m128i_i32[1];
    v35 = v54.m128i_i32[3];
    if ( v54.m128i_i32[1] <= v61.m128i_i32[1] )
      v34 = v61.m128i_i32[1];
    v54.m128i_i32[1] = v34;
    if ( v54.m128i_i32[3] >= v61.m128i_i32[3] )
      v35 = v61.m128i_i32[3];
    v54.m128i_i32[3] = v35;
    if ( v34 >= v35 )
    {
LABEL_34:
      v54.m128i_i32[3] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
      v54.m128i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
      v54.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
      v54.m128i_i32[0] = _mm_cvtsi128_si32((__m128i)0LL);
    }
  }
  else
  {
    v54.m128i_i32[0] = a1;
    v54.m128i_i32[1] = a2;
    v54.m128i_i32[2] = a1;
    v54.m128i_i32[3] = a2;
  }
  if ( v10 + a1 > v61.m128i_i32[2] )
  {
    a1 = v61.m128i_i32[2] - v10;
    if ( **a7 )
    {
      if ( (***a7 & 0x1800000) != 0 )
        ***a7 ^= (***a7 ^ 0xFF7FFFFF) & 0x1800000;
    }
  }
  if ( a1 < (int)v21 )
  {
    a1 = v21;
    if ( **a7 )
    {
      if ( (***a7 & 0x1800000) != 0 )
        ***a7 ^= (***a7 ^ 0x800000) & 0x1800000;
    }
  }
  if ( (a6 & 8) != 0 && v10 + a1 > (int)v20 )
    a1 = v20 - v10;
  v22 = HIDWORD(v20);
  if ( a2 + a4 > (int)v22 )
  {
    if ( (a6 & 0x20010) != 0 || a2 - a4 < SHIDWORD(v21) || a2 >= (int)v22 )
      a2 = v22 - a4;
    else
      a2 -= a4;
    if ( **a7 && (***a7 & 0x6000000) != 0 )
      ***a7 ^= (***a7 ^ 0xFDFFFFFF) & 0x6000000;
  }
  v23 = HIDWORD(v21);
  if ( a2 < (int)v23 )
  {
    a2 = v23;
    if ( **a7 )
    {
      if ( (***a7 & 0x6000000) != 0 )
        ***a7 ^= (***a7 ^ 0x2000000) & 0x6000000;
    }
  }
  v24 = a6 & 0x20;
  if ( (a6 & 0x20) != 0 && a2 + a4 > (int)v22 && (a6 & 0x20000) != 0 )
    a2 = v22 - a4;
  v25 = GetCurrentThreadCompositedDpiContext();
  GetMonitorWorkRectForDpi(&v60, (__int64)v57, (v25 >> 8) & 0x1FF);
  v26 = a2 + a4;
  v27 = v55;
  v28 = a1;
  if ( a1 <= v54.m128i_i32[0] )
    v28 = v54.m128i_i32[0];
  v56.x = a1;
  v56.y = a2;
  v29 = v55 + a1;
  if ( v55 + a1 >= v54.m128i_i32[2] )
    v29 = v54.m128i_i32[2];
  if ( v28 < v29 )
  {
    v30 = a2;
    if ( a2 <= v54.m128i_i32[1] )
      v30 = v54.m128i_i32[1];
    if ( v26 >= v54.m128i_i32[3] )
      v26 = v54.m128i_i32[3];
    if ( v30 < v26 )
    {
      v36 = (a6 >> 5) & 2;
      v37 = (a6 & 8) == 0 ? 2 : 0;
      v63[v36 + 1] = 2 - v37;
      v63[v36] = v37;
      *(_DWORD *)&v64[-4 * v36] = v24 != 0 ? 1 : 3;
      v38 = 0LL;
      *(_DWORD *)&v65[-4 * v36] = v24 != 0 ? 3 : 1;
      while ( 1 )
      {
        if ( v38 >= 4 )
          return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
        v39 = v63[v38];
        if ( (unsigned int)TryRect(v39, a1, a2, v27, a4, (struct tagRECT *)&v54, &v56, v57) )
          break;
        v27 = v55;
        ++v38;
      }
      if ( **a7 )
      {
        if ( !v39 )
        {
          v52 = **a7;
          v53 = *v52 & 0xF07FFFFF | 0x1000000;
          goto LABEL_90;
        }
        v50 = v39 - 1;
        if ( !v50 )
        {
          v52 = **a7;
          v53 = *v52 & 0xF07FFFFF | 0x4000000;
          goto LABEL_90;
        }
        v51 = v50 - 1;
        if ( !v51 )
        {
          v52 = **a7;
          v53 = *v52 & 0xF07FFFFF | 0x800000;
          goto LABEL_90;
        }
        if ( v51 == 1 )
        {
          v52 = **a7;
          v53 = *v52 & 0xF07FFFFF | 0x2000000;
LABEL_90:
          *v52 = v53;
        }
      }
      LOWORD(a1) = v56.x;
      LOWORD(a2) = v56.y;
    }
  }
  return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
}
