/*
 * XREFs of TransformRectBetweenCoordinateSpaces @ 0x140047880
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x140042F90 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140045170 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     PhysicalToLogicalDPIRect @ 0x1400453C0 (PhysicalToLogicalDPIRect.c)
 *     Is_MonitorFromRectSupported @ 0x140045BA0 (Is_MonitorFromRectSupported.c)
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1400464E8 (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     LogicalToPhysicalDPIRect @ 0x140046540 (LogicalToPhysicalDPIRect.c)
 *     HMValidateSharedHandleNoRip @ 0x140046F28 (HMValidateSharedHandleNoRip.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x140047D4C (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140047EB8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _MonitorFromRect @ 0x140047ED8 (_MonitorFromRect.c)
 *     TransformOffscreenAdjacentRect @ 0x140110088 (TransformOffscreenAdjacentRect.c)
 *     _GetTopLevelWindow @ 0x14012BDFC (_GetTopLevelWindow.c)
 *     Is_GetTopLevelWindowSupported @ 0x140131E9C (Is_GetTopLevelWindowSupported.c)
 *     IsDpiAwarenessBoundaryInParentChain @ 0x1401B7030 (IsDpiAwarenessBoundaryInParentChain.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall TransformRectBetweenCoordinateSpaces(struct tagRECT *a1, struct tagRECT *a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // r12d
  unsigned int v9; // r14d
  struct tagRECT v10; // xmm1
  unsigned int v11; // edi
  __int64 v12; // rcx
  struct tagMONITOR *v13; // rax
  __int64 v14; // rdx
  int v15; // ebx
  int v16; // eax
  __int32 v18; // ebx
  int v19; // r15d
  int v20; // r13d
  struct tagRECT *v21; // rax
  __int32 left; // r9d
  int right; // r10d
  __m128i v24; // xmm0
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // xmm0_8
  int top; // ecx
  int bottom; // edx
  unsigned __int64 v29; // rax
  int v30; // ecx
  int v31; // ebx
  int v32; // eax
  int v33; // eax
  int v34; // ebx
  LONG v35; // esi
  __int64 v36; // rax
  int v37; // eax
  int v38; // eax
  __int64 TopLevelWindow; // rax
  __int64 v40; // rax
  int v41; // eax
  int v42; // eax
  __int32 v43; // eax
  __int32 v44; // eax
  __int32 v45; // eax
  int v46; // eax
  int v47; // [rsp+30h] [rbp-89h]
  int v48; // [rsp+38h] [rbp-81h]
  int v49; // [rsp+40h] [rbp-79h]
  __int64 v50; // [rsp+50h] [rbp-69h] BYREF
  __int64 v51; // [rsp+58h] [rbp-61h]
  __m128i *v52; // [rsp+60h] [rbp-59h]
  struct tagRECT v53; // [rsp+68h] [rbp-51h] BYREF
  __m128i v54; // [rsp+80h] [rbp-39h] BYREF
  __m128i v55; // [rsp+90h] [rbp-29h] BYREF
  __m128i v56; // [rsp+A0h] [rbp-19h] BYREF
  struct tagRECT v57; // [rsp+B0h] [rbp-9h] BYREF

  v52 = (__m128i *)a1;
  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((__int64)a1);
  if ( a4 )
    v9 = *(_DWORD *)(*(_QWORD *)(a4 + 40) + 288LL);
  else
    v9 = W32GetCurrentThreadDpiAwarenessContext((__int64)a1);
  v10 = *a2;
  v48 = 0;
  v11 = 0;
  v56 = 0LL;
  v57 = v10;
  v55 = 0LL;
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v9 >> 8)) & 0x1FF) == 0
    || (unsigned int)IsRectEmptyInl(a2) && !a2->left && !a2->top )
  {
    *a1 = v10;
    return 0LL;
  }
  if ( !a3
    || (int)Is_GetTopLevelWindowSupported() < 0
    || (TopLevelWindow = GetTopLevelWindow(a3)) == 0
    || TopLevelWindow == a3
    || !(unsigned int)IsDpiAwarenessBoundaryInParentChain(a3)
    || (v40 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(a3 + 40) + 256LL))) == 0 )
  {
    v13 = *(struct tagMONITOR **)(*(_QWORD *)(W32GetUserSessionState(v12) + 57008) + 112LL);
    v51 = (__int64)v13;
    if ( !v13 )
      goto LABEL_9;
    v18 = v55.m128i_i32[2];
    v19 = v55.m128i_i32[3];
    v20 = v55.m128i_i32[1];
    v47 = v55.m128i_i32[2];
    v49 = v55.m128i_i32[0];
    do
    {
      v54 = 0LL;
      v21 = ExpandedMonitorRect(&v53, v13, v9);
      left = a2->left;
      right = a2->right;
      v24 = *(__m128i *)v21;
      v25 = *(_QWORD *)&v21->left;
      v26 = _mm_srli_si128(v24, 8).m128i_u64[0];
      if ( (int)v25 > a2->left )
        left = v25;
      v54.m128i_i32[0] = left;
      if ( (int)v26 < right )
        right = v26;
      v54.m128i_i32[2] = right;
      if ( left >= right )
        goto LABEL_24;
      top = a2->top;
      bottom = a2->bottom;
      v29 = HIDWORD(v25);
      if ( (int)v29 > top )
        top = v29;
      v54.m128i_i32[1] = top;
      if ( SHIDWORD(v26) < bottom )
        bottom = HIDWORD(v26);
      v54.m128i_i32[3] = bottom;
      if ( top < bottom )
      {
        if ( v48 )
        {
          v42 = v49;
          if ( v49 >= left )
            v42 = left;
          v49 = v42;
          if ( v20 >= top )
            v20 = top;
          v55.m128i_i64[0] = __PAIR64__(v20, v42);
          if ( v18 <= right )
            v18 = right;
          v47 = v18;
          if ( v19 <= bottom )
            v19 = bottom;
          v55.m128i_i64[1] = __PAIR64__(v19, v18);
        }
        else
        {
          v55 = v54;
          v19 = _mm_cvtsi128_si32(_mm_srli_si128(v54, 12));
          v20 = _mm_cvtsi128_si32(_mm_srli_si128(v54, 4));
          v47 = _mm_cvtsi128_si32(_mm_srli_si128(v54, 8));
          v49 = _mm_cvtsi128_si32(v54);
        }
        v50 = v51;
        v31 = LogicalToPhysicalDPIRect((__int64)&v54, &v54, v9, &v50);
        v32 = PhysicalToLogicalDPIRect((__int64)&v54, &v54, CurrentThreadDpiAwarenessContext, &v50);
        v30 = v48;
        v33 = v31 | v32;
        v18 = v47;
        v11 |= v33;
        if ( v48 )
        {
          v43 = v56.m128i_i32[0];
          if ( v56.m128i_i32[0] >= v54.m128i_i32[0] )
            v43 = v54.m128i_i32[0];
          v56.m128i_i32[0] = v43;
          v44 = v56.m128i_i32[1];
          if ( v56.m128i_i32[1] >= v54.m128i_i32[1] )
            v44 = v54.m128i_i32[1];
          v56.m128i_i32[1] = v44;
          v45 = v56.m128i_i32[2];
          if ( v56.m128i_i32[2] <= v54.m128i_i32[2] )
            v45 = v54.m128i_i32[2];
          v56.m128i_i32[2] = v45;
          if ( v56.m128i_i32[3] <= v54.m128i_i32[3] )
            v56.m128i_i32[3] = v54.m128i_i32[3];
        }
        else
        {
          v30 = 1;
          v56 = v54;
          v48 = 1;
        }
      }
      else
      {
LABEL_24:
        v30 = v48;
        v54 = 0LL;
      }
      v13 = *(struct tagMONITOR **)(v51 + 56);
      v51 = (__int64)v13;
    }
    while ( v13 );
    if ( v30 )
    {
      v34 = v57.right;
      v35 = v57.left;
      v36 = v55.m128i_i64[0] - *(_QWORD *)&v57.left;
      if ( v55.m128i_i64[0] == *(_QWORD *)&v57.left )
        v36 = v55.m128i_i64[1] - *(_QWORD *)&v57.right;
      if ( !v36 )
        goto LABEL_12;
      if ( v49 > v57.left )
      {
        v54.m128i_i64[1] = __PAIR64__(v57.bottom, v49);
        v54.m128i_i64[0] = *(_QWORD *)&v57.left;
        v41 = TransformOffscreenAdjacentRect(&v55, &v56, &v54, CurrentThreadDpiAwarenessContext, v9);
        v19 = v55.m128i_i32[3];
        v11 |= v41;
        v37 = v55.m128i_i32[2];
        v20 = v55.m128i_i32[1];
      }
      else
      {
        v37 = v47;
      }
      if ( v37 < v34 )
      {
        v54.m128i_i64[0] = __PAIR64__(v57.top, v37);
        v54.m128i_i64[1] = __PAIR64__(v57.bottom, v34);
        v38 = TransformOffscreenAdjacentRect(&v55, &v56, &v54, CurrentThreadDpiAwarenessContext, v9);
        v19 = v55.m128i_i32[3];
        v11 |= v38;
        v20 = v55.m128i_i32[1];
      }
      if ( v20 > v57.top )
      {
        v54.m128i_i64[0] = __PAIR64__(v57.top, v35);
        v54.m128i_i64[1] = __PAIR64__(v20, v34);
        v46 = TransformOffscreenAdjacentRect(&v55, &v56, &v54, CurrentThreadDpiAwarenessContext, v9);
        v19 = v55.m128i_i32[3];
        v11 |= v46;
      }
      if ( v19 >= v57.bottom )
        goto LABEL_12;
      *(_QWORD *)&v57.left = __PAIR64__(v19, v35);
      v57.right = v34;
      v16 = TransformOffscreenAdjacentRect(&v55, &v56, &v57, CurrentThreadDpiAwarenessContext, v9);
    }
    else
    {
LABEL_9:
      if ( (int)Is_MonitorFromRectSupported() < 0 )
      {
LABEL_12:
        *v52 = v56;
        return v11;
      }
      v50 = MonitorFromRect(a2, v14, v9);
      v15 = LogicalToPhysicalDPIRect((__int64)&v56, a2, v9, &v50);
      v16 = v15 | PhysicalToLogicalDPIRect((__int64)&v56, &v56, CurrentThreadDpiAwarenessContext, &v50);
    }
    v11 |= v16;
    goto LABEL_12;
  }
  return TransformRectBetweenCoordinateSpacesPerMonitor(a1, (__int64)a2, CurrentThreadDpiAwarenessContext, v9, v40);
}
