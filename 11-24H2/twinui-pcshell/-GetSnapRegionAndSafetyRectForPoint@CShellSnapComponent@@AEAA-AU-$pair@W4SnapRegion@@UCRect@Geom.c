/*
 * XREFs of ?GetSnapRegionAndSafetyRectForPoint@CShellSnapComponent@@AEAA?AU?$pair@W4SnapRegion@@UCRect@Geometry@@@std@@AEBUCRect@Geometry@@0AEBUtagPOINT@@_NW4SnapRegionFlags@SnapLayoutHelpers@@@Z @ 0x18059EE24
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180270510 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 * Callees:
 *     ?ComputeDefaultSafetyRectForRegion@CustomDragout@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU34@1HHHH@Z @ 0x1801DFEB4 (-ComputeDefaultSafetyRectForRegion@CustomDragout@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SnapR.c)
 *     ?DetermineSnapRegionFromPoint@CustomDragout@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCPoint@Geometry@@AEBUCRect@5@HHHHW4SnapRegionFlags@2@@Z @ 0x1805AA750 (-DetermineSnapRegionFromPoint@CustomDragout@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCPoint@Geom.c)
 */

__int64 __fastcall CShellSnapComponent::GetSnapRegionAndSafetyRectForPoint(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        int *a5,
        char a6)
{
  __int128 v9; // xmm6
  __m128i v10; // xmm0
  int v11; // eax
  unsigned int v12; // r8d
  int v13; // ebx
  int v14; // edi
  unsigned int v15; // ecx
  unsigned int v16; // r12d
  int v17; // r13d
  int v18; // ebx
  int v19; // ebp
  __int128 *v20; // rax
  int v21; // eax
  __int64 result; // rax
  int v23; // [rsp+40h] [rbp-68h]
  int v24; // [rsp+48h] [rbp-60h] BYREF
  int v25; // [rsp+4Ch] [rbp-5Ch]

  v9 = 0LL;
  if ( a6 )
  {
    v10 = _mm_cvtsi32_si128(a3[2] - *a3);
    v11 = a3[3] - a3[1];
    v12 = *(_DWORD *)(a1 + 1176);
    v13 = (int)(float)(_mm_cvtepi32_ps(v10).m128_f32[0] * 0.1);
    v14 = (int)(float)((float)v11 * 0.1);
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 1164);
    v13 = 138;
    v14 = 138;
  }
  if ( *(_BYTE *)(a1 + 1156) )
  {
    v15 = v14;
    if ( v14 < (int)HIBYTE(v12) )
      v15 = HIBYTE(v12);
    v16 = BYTE2(v12);
    v23 = v15;
    if ( v13 >= BYTE2(v12) )
      v16 = v13;
    v17 = BYTE1(v12);
    v24 = *a5;
    if ( v13 >= BYTE1(v12) )
      v17 = v13;
    v18 = (unsigned __int8)v12;
    v25 = a5[1];
    if ( v14 >= (unsigned __int8)v12 )
      v18 = v14;
    v19 = SnapLayoutHelpers::CustomDragout::DetermineSnapRegionFromPoint(&v24, a4, v15, v16, v17, v18);
    if ( v19 )
    {
      v20 = (__int128 *)SnapLayoutHelpers::CustomDragout::ComputeDefaultSafetyRectForRegion(
                          (__int64)&v24,
                          v19,
                          a3,
                          a4,
                          v23,
                          v16,
                          v17,
                          v18);
LABEL_17:
      v9 = *v20;
    }
  }
  else
  {
    v24 = *a5;
    v25 = a5[1];
    v21 = SnapLayoutHelpers::CustomDragout::DetermineSnapRegionFromPoint(
            &v24,
            a4,
            (unsigned int)v14,
            (unsigned int)v13,
            v13,
            v14);
    v19 = v21;
    if ( v21 )
    {
      v20 = (__int128 *)SnapLayoutHelpers::CustomDragout::ComputeDefaultSafetyRectForRegion(
                          (__int64)&v24,
                          v21,
                          a3,
                          a4,
                          v14,
                          v13,
                          v13,
                          v14);
      goto LABEL_17;
    }
  }
  result = a2;
  *(_OWORD *)(a2 + 4) = v9;
  *(_DWORD *)a2 = v19;
  return result;
}
