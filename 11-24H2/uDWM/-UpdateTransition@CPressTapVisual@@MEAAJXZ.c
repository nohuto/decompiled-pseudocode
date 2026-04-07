/*
 * XREFs of ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x1800CAA40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18000F80C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18000F87C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x18002237C (-Hide@CVisual@@QEAAXXZ.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094FF0 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 *     ?SetOpacity@CImage@@UEAAXN@Z @ 0x1800C5970 (-SetOpacity@CImage@@UEAAXN@Z.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x1800CA970 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CPressTapVisual::UpdateTransition(CPressTapVisual *this)
{
  float v1; // xmm0_4
  float v3; // xmm7_4
  float v4; // xmm7_4
  float v5; // xmm2_4
  int v6; // esi
  LONG v7; // edi
  int v8; // ebp
  CVisual *v9; // rcx
  LONG v10; // ebx
  CVisualProxy **v11; // rcx
  float v12; // xmm8_4
  float v13; // xmm1_4
  float v14; // xmm7_4
  float v15; // xmm2_4
  float v16; // xmm6_4
  __m128i v17; // xmm0
  CVisual *v18; // rcx
  LONG v19; // edi
  LONG v20; // ebx
  struct tagSIZE v22; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((float *)this + 81);
  v22 = 0LL;
  v3 = *(double *)(*((_QWORD *)this + 45) + 48LL);
  if ( v1 < v3 )
  {
    v13 = (float)*((int *)this + 73);
    v14 = (float)(v3 - v1) / *((float *)this + 82);
    v15 = (float)((float)(*((float *)this + 84) - *((float *)this + 83)) * v14) + *((float *)this + 83);
    v16 = (float)(1.0 - *((float *)this + 88)) * v14;
    v17 = _mm_cvtsi32_si128(*((_DWORD *)this + 72));
    v18 = (CVisual *)*((_QWORD *)this + 38);
    v19 = (int)(float)(v13 * v15);
    v20 = (int)(float)(_mm_cvtepi32_ps(v17).m128_f32[0] * v15);
    if ( v20 < 1 )
      v20 = 1;
    v22.cx = v20;
    if ( v19 < 1 )
      v19 = 1;
    v22.cy = v19;
    CVisual::SetSize(v18, &v22);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 38), *((_DWORD *)this + 66) - v20 / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 38), *((_DWORD *)this + 67) - v19 / 2);
    CVisual::Hide(*((CVisual **)this + 39));
    v11 = (CVisualProxy **)*((_QWORD *)this + 38);
    v12 = 1.0 - v16;
  }
  else
  {
    v4 = v3 / v1;
    v5 = (float)((float)(*((float *)this + 86) - *((float *)this + 85)) * v4) + *((float *)this + 85);
    v6 = *((_DWORD *)this + 68) + (int)(float)((float)(*((_DWORD *)this + 70) - *((_DWORD *)this + 68)) * v4);
    v7 = (int)(float)((float)*((int *)this + 75) * v5);
    v8 = *((_DWORD *)this + 69) + (int)(float)((float)(*((_DWORD *)this + 71) - *((_DWORD *)this + 69)) * v4);
    v9 = (CVisual *)*((_QWORD *)this + 39);
    v10 = (int)(float)((float)*((int *)this + 74) * v5);
    if ( v10 < 1 )
      v10 = 1;
    v22.cx = v10;
    if ( v7 < 1 )
      v7 = 1;
    v22.cy = v7;
    CVisual::SetSize(v9, &v22);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 39), v6 - v10 / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 39), v8 - v7 / 2);
    v11 = (CVisualProxy **)*((_QWORD *)this + 39);
    v12 = 1.0 - (float)((float)(1.0 - *((float *)this + 87)) * v4);
  }
  CImage::SetOpacity(v11, v12);
  if ( *(_BYTE *)(*((_QWORD *)this + 45) + 72LL) )
    CPressTapVisual::Stop(this);
  return 0LL;
}
