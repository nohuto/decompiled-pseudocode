/*
 * XREFs of ?Push@CBaseClipStack@@IEAAJAEBUD2D_RECT_F@@@Z @ 0x1801B4CD0
 * Callers:
 *     ?PushClipInternal@COcclusionContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@AEBVCMILMatrix@@@Z @ 0x18023DE80 (-PushClipInternal@COcclusionContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@AEBVCMILMatrix@@@Z.c)
 *     ?Push@COccluderClipStack@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShapePtr@@AEBVCMILMatrix@@@Z @ 0x180272704 (-Push@COccluderClipStack@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall CBaseClipStack::Push(const void **this, __m128 *a2)
{
  __int64 v2; // r8
  __m128 v4; // xmm6
  __m128 v5; // xmm1
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  __m128 v9; // xmm6
  float v10; // xmm4_4
  float v11; // xmm0_4
  __m128 v12; // xmm6
  float v13; // xmm1_4
  float v14; // xmm0_4
  __m128 v15; // xmm6
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int v19; // edi
  __int64 v20; // rdx
  unsigned int v21; // ebx
  unsigned int v22; // esi
  HANDLE ProcessHeap; // rax
  void *v24; // rax
  const void *v25; // rbp
  void *v26; // rsi
  HANDLE v27; // rax
  __m128 v28; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((unsigned int *)this + 2);
  if ( (_DWORD)v2 )
    v4 = *((__m128 *)*this + (unsigned int)(v2 - 1));
  else
    v4 = (__m128)_xmm;
  v5 = *a2;
  v28 = v4;
  v6 = v4.m128_f32[0];
  if ( COERCE_FLOAT(*a2) > v4.m128_f32[0] )
  {
    v4.m128_f32[0] = v5.m128_f32[0];
    LODWORD(v6) = *(__m128 *)a2->m128_f32;
    v28 = v4;
  }
  v7 = _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
  v8 = _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  if ( v8 > v7 )
  {
    v7 = v8;
    v9 = _mm_shuffle_ps(v28, v28, 225);
    v9.m128_f32[0] = v8;
    v4 = _mm_shuffle_ps(v9, v9, 225);
    v28 = v4;
  }
  v10 = _mm_shuffle_ps(v4, v4, 170).m128_f32[0];
  v11 = _mm_shuffle_ps(v5, v5, 170).m128_f32[0];
  if ( v10 > v11 )
  {
    v10 = v11;
    v12 = _mm_shuffle_ps(v28, v28, 210);
    v12.m128_f32[0] = v11;
    v4 = _mm_shuffle_ps(v12, v12, 201);
    v28 = v4;
  }
  v13 = _mm_shuffle_ps(v5, v5, 255).m128_f32[0];
  v14 = _mm_shuffle_ps(v4, v4, 255).m128_f32[0];
  if ( v14 > v13 )
  {
    v14 = v13;
    v15 = _mm_shuffle_ps(v28, v28, 147);
    v15.m128_f32[0] = v13;
    v4 = _mm_shuffle_ps(v15, v15, 57);
  }
  if ( v10 <= v6 || v14 <= v7 )
    v4 = 0uLL;
  v16 = *((unsigned int *)this + 3);
  if ( (_DWORD)v2 != (_DWORD)v16 )
    goto LABEL_14;
  v19 = 2 * v16;
  if ( (unsigned __int64)(2 * v16) > 0xFFFFFFFF )
  {
    v20 = 98LL;
LABEL_19:
    v21 = -2147024362;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v21);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v21);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x31u, 0LL);
    return v21;
  }
  if ( v19 <= 8 )
    v19 = 8;
  v22 = 16 * v2;
  if ( (unsigned __int64)(16 * v2) > 0xFFFFFFFF )
  {
    v20 = 101LL;
    goto LABEL_19;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v19 <= 0x10 )
  {
    v21 = -2147024809;
    goto LABEL_28;
  }
  ProcessHeap = GetProcessHeap();
  v24 = HeapAlloc(ProcessHeap, 0, 16LL * v19);
  v25 = v24;
  if ( !v24 )
  {
    v21 = -2147024882;
LABEL_28:
    v20 = 104LL;
    goto LABEL_20;
  }
  memcpy_0(v24, *this, v22);
  v26 = (void *)*this;
  if ( *this )
  {
    v27 = GetProcessHeap();
    HeapFree(v27, 0, v26);
  }
  *this = v25;
  *((_DWORD *)this + 3) = v19;
LABEL_14:
  *((__m128 *)*this + (unsigned int)(*((_DWORD *)this + 2))++) = v4;
  v17 = *((_DWORD *)this + 5);
  if ( v17 <= *((_DWORD *)this + 2) )
    v17 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 5) = v17;
  return 0LL;
}
