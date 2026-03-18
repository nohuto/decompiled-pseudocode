/*
 * XREFs of ?InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z @ 0x18017E91C
 * Callers:
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18017CD1C (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 *     ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x18017CF3C (-TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 * Callees:
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x18017FC44 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

// local variable allocation has failed, the output may be wrong!
struct Path::Segment *__fastcall CTrimPathOperation::InterpolateSegment(
        CTrimPathOperation *this,
        const struct Path::Segment *a2,
        double a3,
        float a4,
        struct D2D_POINT_2F *a5)
{
  float v6; // xmm6_4
  char *v8; // rdi
  float *v10; // rax
  float v11; // xmm1_4
  __m128 v12; // xmm3
  float v13; // xmm5_4
  __m128 v14; // xmm4
  float v15; // xmm2_4
  __m128 v16; // xmm1
  __m128 v17; // xmm2
  void *retaddr; // [rsp+48h] [rbp+0h]

  v6 = *(float *)&a3;
  if ( *(_BYTE *)a2 == 5 )
  {
    v8 = (char *)this + 80;
    *((_QWORD *)this + 10) = *(_QWORD *)a2;
    *((_QWORD *)this + 11) = *((_QWORD *)a2 + 1);
    *((_QWORD *)this + 12) = *((_QWORD *)a2 + 2);
    *((_QWORD *)this + 13) = *((_QWORD *)a2 + 3);
    if ( CTrimPathOperation::InterpolateBezier(this, *(float *)&a3, a4, a5 != 0LL) )
    {
      *(_OWORD *)((char *)this + 88) = *(_OWORD *)((char *)this + 120);
      *((_QWORD *)this + 13) = *((_QWORD *)this + 17);
      if ( a5 )
        *a5 = *(struct D2D_POINT_2F *)((char *)this + 112);
    }
    else
    {
      v12 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v8 = (char *)this + 64;
      *((_BYTE *)this + 65) = *((_BYTE *)this + 81);
      v13 = *((float *)this + 9);
      v14 = (__m128)*((unsigned int *)this + 26);
      v15 = (float)((float)(1.0 - a4) * *((float *)this + 10)) + (float)(a4 * *((float *)this + 27));
      *((float *)this + 18) = (float)(*((float *)this + 26) * a4) + (float)(v13 * (float)(1.0 - a4));
      *((float *)this + 19) = v15;
      if ( a5 )
      {
        v12.m128_f32[0] = (float)((float)(1.0 - v6) * *((float *)this + 10)) + (float)(v6 * *((float *)this + 27));
        v14.m128_f32[0] = (float)(v14.m128_f32[0] * v6) + (float)((float)(1.0 - v6) * v13);
        *a5 = (struct D2D_POINT_2F)_mm_unpacklo_ps(v14, v12).m128_u64[0];
      }
    }
  }
  else
  {
    if ( *(_BYTE *)a2 != 2 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    v8 = (char *)this + 64;
    *((_QWORD *)this + 8) = *(_QWORD *)a2;
    v10 = (float *)((char *)this + 72);
    *((_QWORD *)this + 9) = *((_QWORD *)a2 + 1);
    if ( a5 )
    {
      v16 = *(__m128 *)&a3;
      v17 = (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v17.m128_f32[0] = (float)((float)(1.0 - v6) * *((float *)this + 10)) + (float)(v6 * *((float *)this + 19));
      v16.m128_f32[0] = (float)(v6 * *v10) + (float)((float)(1.0 - v6) * *((float *)this + 9));
      *a5 = (struct D2D_POINT_2F)_mm_unpacklo_ps(v16, v17).m128_u64[0];
    }
    v11 = (float)(a4 * *v10) + (float)((float)(1.0 - a4) * *((float *)this + 9));
    *((float *)this + 19) = (float)((float)(1.0 - a4) * *((float *)this + 10)) + (float)(a4 * *((float *)this + 19));
    *v10 = v11;
  }
  return (struct Path::Segment *)v8;
}
