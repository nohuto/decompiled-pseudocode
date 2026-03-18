/*
 * XREFs of ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1401E7800
 * Callers:
 *     xxxSetWindowPlacement @ 0x140086334 (xxxSetWindowPlacement.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x14002699C (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetMonitorWorkRectForDpi @ 0x1400269FC (GetMonitorWorkRectForDpi.c)
 */

void __fastcall CheckPlacementBounds(
        struct tagRECT *a1,
        struct tagPOINT *a2,
        struct tagPOINT *a3,
        struct tagMONITOR *a4)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax
  LONG v9; // esi
  int v10; // ebp
  LONG top; // r13d
  __int32 v12; // ebx
  unsigned __int64 v13; // r14
  int v14; // r8d
  __int64 bottom; // rcx
  int v16; // r10d
  LONG left; // r11d
  int v18; // r9d
  __int64 right; // rdx
  __int32 v20; // edi
  __int32 v21; // r14d
  __int64 v22; // rcx
  int v23; // ebp
  __int64 v24; // rdx
  __int64 v25; // rcx
  LONG y; // eax
  int v27; // r8d
  __int32 v28; // edx
  int v29; // ecx
  LONG x; // eax
  int v31; // edx
  int v32; // eax
  __m128i v33; // [rsp+20h] [rbp-38h] BYREF

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  GetMonitorWorkRectForDpi(&v33, (__int64)a4, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  v9 = v33.m128i_i32[0];
  v10 = -1;
  top = a1->top;
  v12 = v33.m128i_i32[2];
  v13 = HIDWORD(v33.m128i_i64[0]);
  if ( top < v33.m128i_i32[1] )
    v14 = -1;
  else
    v14 = top > v33.m128i_i32[3];
  bottom = (unsigned int)a1->bottom;
  if ( (int)bottom < v33.m128i_i32[1] )
    v16 = -1;
  else
    v16 = (int)bottom > v33.m128i_i32[3];
  left = a1->left;
  if ( a1->left < v33.m128i_i32[0] )
    v18 = -1;
  else
    v18 = left > v33.m128i_i32[2];
  right = (unsigned int)a1->right;
  if ( (int)right >= v33.m128i_i32[0] )
    v10 = (int)right > v33.m128i_i32[2];
  if ( v14 * v16 > 0 || v18 * v10 > 0 )
  {
    if ( v14 >= 0 )
    {
      if ( v16 <= 0 )
        goto LABEL_38;
      bottom = (unsigned int)(bottom - top);
      if ( v33.m128i_i32[3] - (int)bottom > v33.m128i_i32[1] )
        LODWORD(v13) = v33.m128i_i32[3] - bottom;
      a1->bottom = v13 + bottom;
    }
    else
    {
      bottom = (unsigned int)(bottom - top);
      a1->bottom = bottom;
    }
    a1->top = v13;
LABEL_38:
    if ( v18 >= 0 )
    {
      if ( v10 > 0 )
      {
        right = (unsigned int)(right - left);
        bottom = (unsigned int)v9;
        if ( v12 - (int)right > v9 )
          bottom = (unsigned int)(v12 - right);
        a1->left = bottom;
        a1->right = bottom + right;
      }
    }
    else
    {
      right = (unsigned int)(right - left);
      a1->left = v9;
      a1->right = right;
    }
  }
  v20 = v33.m128i_i32[3];
  v21 = v33.m128i_i32[1];
  if ( a2->x != -1 )
  {
    v22 = *(_QWORD *)(W32GetUserSessionState(bottom, right) + 19928);
    v23 = *(_DWORD *)(v22 + 2084);
    v25 = *(_QWORD *)(W32GetUserSessionState(v22, v24) + 19928);
    y = a2->y;
    v27 = y >= v21 ? y > v20 : -1;
    v28 = y + *(_DWORD *)(v25 + 2088);
    v29 = v28 >= v21 ? v28 > v20 : -1;
    x = a2->x;
    v31 = a2->x >= v9 ? x > v12 : -1;
    v32 = x + v23 >= v9 ? x + v23 > v12 : -1;
    if ( v27 * v29 > 0 || v31 * v32 > 0 )
    {
      a2->y = -1;
      a2->x = -1;
    }
  }
  if ( a3->x != -1 && (v9 + a3->x >= v12 || v21 + a3->y >= v20) )
  {
    a3->x = 0;
    a3->y = 0;
  }
}
