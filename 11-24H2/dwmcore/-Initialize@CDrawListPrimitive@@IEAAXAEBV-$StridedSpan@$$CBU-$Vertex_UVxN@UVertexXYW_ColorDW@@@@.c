/*
 * XREFs of ?Initialize@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@_N@Z @ 0x18016EF10
 * Callers:
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18016E020 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x18016F1D0 (-Create@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV.c)
 * Callees:
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

__int64 __fastcall CDrawListPrimitive::Initialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        void *Src,
        unsigned int a6,
        _QWORD *a7,
        char a8)
{
  bool v8; // zf
  __int64 v10; // rbx
  __int64 result; // rax
  float v14; // xmm6_4
  float v15; // xmm7_4
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rdi
  unsigned int v20; // r13d
  unsigned int v21; // r14d
  size_t v22; // r12
  __int64 v23; // rbp
  float *v24; // rdi
  __int64 v25; // rbx
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  size_t v32; // rbp
  __int64 v33; // r12
  __int64 v34; // rcx
  const void *v35; // r14
  const void *v36; // r15
  __int64 v37; // rbx
  __int64 v38; // [rsp+20h] [rbp-68h]
  __int64 v39; // [rsp+28h] [rbp-60h]
  __int64 v40; // [rsp+90h] [rbp+8h]
  unsigned int v42; // [rsp+C0h] [rbp+38h]
  int v43; // [rsp+C8h] [rbp+40h]

  v8 = *(_DWORD *)(a1 + 20) == 0;
  v10 = a3;
  *(_BYTE *)(a1 + 81) = a8;
  result = (__int64)a7;
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = *a7;
  if ( v8 )
  {
    *(_OWORD *)(a1 + 56) = 0LL;
  }
  else
  {
    memcpy_0(*(void **)(a1 + 48), Src, 2LL * a6);
    v14 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v15 = 1.0 / *(float *)(a1 + 72);
    v16 = *(_QWORD *)(a1 + 40);
    v17 = *(_QWORD *)(a1 + 24);
    v18 = 8 * *(_DWORD *)(a1 + 16) + 16;
    v19 = *(_QWORD *)(a1 + 32);
    v20 = *(_DWORD *)(a2 + 12);
    v39 = v16;
    v40 = v17;
    v43 = v18;
    v38 = v19;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 1.0) & _xmm) <= 0.000081380211 )
      v15 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(1.0 / *(float *)(a1 + 76)) - 1.0) & _xmm) > 0.000081380211 )
      v14 = 1.0 / *(float *)(a1 + 76);
    result = (unsigned int)(8 * a4);
    v21 = 0;
    *(_OWORD *)(a1 + 56) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    if ( v20 )
    {
      v42 = 8 * a4;
      v22 = (unsigned int)(result + 16);
      v23 = v16 + 4;
      do
      {
        v24 = (float *)(*(_QWORD *)v10 + (int)(*(_DWORD *)(v10 + 8) * v21));
        v25 = (int)(v21 * v18);
        memcpy_0((void *)(v25 + v17), (const void *)(*(_QWORD *)a2 + (int)(*(_DWORD *)(a2 + 8) * v21)), v22);
        memcpy_0((void *)(v25 + v38), v24, v22);
        v10 = a3;
        v23 += 8LL;
        v17 = v40;
        v26 = v15 * *v24;
        ++v21;
        v18 = v43;
        v27 = v14 * v24[1];
        *(float *)(v23 - 12) = v26;
        *(float *)(v23 - 8) = v27;
        v28 = fminf(*(float *)(a1 + 56), v26);
        v29 = *(float *)(a1 + 60);
        *(float *)(a1 + 56) = v28;
        v30 = *(float *)(a1 + 64);
        *(float *)(a1 + 60) = fminf(v29, *(float *)(v23 - 8));
        v31 = *(float *)(a1 + 68);
        *(float *)(a1 + 64) = fmaxf(v30, *(float *)(v23 - 12));
        *(float *)(a1 + 68) = fmaxf(v31, *(float *)(v23 - 8));
      }
      while ( v21 < v20 );
      v19 = v38;
      result = v42;
    }
    if ( v20 < *(_DWORD *)(a1 + 8) )
    {
      v32 = (unsigned int)(result + 16);
      v33 = v20 - 1;
      v34 = (int)(v18 * (v20 - 1));
      v35 = (const void *)(v34 + v17);
      v36 = (const void *)(v34 + v19);
      do
      {
        v37 = (int)(v20 * v18);
        memcpy_0((void *)(v37 + v17), v35, v32);
        memcpy_0((void *)(v37 + v19), v36, v32);
        v17 = v40;
        v18 = v43;
        result = v20++;
        *(_QWORD *)(v39 + 8 * result) = *(_QWORD *)(v39 + 8 * v33);
      }
      while ( v20 < *(_DWORD *)(a1 + 8) );
    }
  }
  return result;
}
