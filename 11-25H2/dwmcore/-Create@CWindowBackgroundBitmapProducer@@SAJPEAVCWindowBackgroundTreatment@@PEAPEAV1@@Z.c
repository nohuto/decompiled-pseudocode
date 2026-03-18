/*
 * XREFs of ?Create@CWindowBackgroundBitmapProducer@@SAJPEAVCWindowBackgroundTreatment@@PEAPEAV1@@Z @ 0x1801DBB0C
 * Callers:
 *     ?GenerateBitmapForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801DB480 (-GenerateBitmapForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CCachedImageProducer@@IEAA@XZ @ 0x1800DD9D4 (--0CCachedImageProducer@@IEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CWindowBackgroundBitmapProducer::Create(
        struct CWindowBackgroundTreatment *a1,
        struct CWindowBackgroundBitmapProducer **a2,
        double a3)
{
  CCachedImageProducer *v5; // rax
  CCachedImageProducer *v6; // rbx
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  float v11; // [rsp+40h] [rbp+18h]
  float v12; // [rsp+40h] [rbp+18h]
  __int64 v13; // [rsp+48h] [rbp+20h]

  v5 = (CCachedImageProducer *)MIDL_user_allocate(0x50uLL);
  v6 = v5;
  if ( v5 )
  {
    CCachedImageProducer::CCachedImageProducer(v5);
    *((_QWORD *)v6 + 9) = a1;
    *(_QWORD *)v6 = &CWindowBackgroundBitmapProducer::`vftable'{for `CMILCOMBaseT<IBitmapResource,IBitmapResource,CMilObjectDeleter>'};
    *((_QWORD *)v6 + 2) = &CWindowBackgroundBitmapProducer::`vftable'{for `IBitmapRealization'};
    CMILRefCountImpl::AddReference((CCachedImageProducer *)((char *)v6 + 8));
    v7 = (__m128i)*((unsigned int *)a1 + 24);
    *(float *)v7.m128i_i32 = *(float *)v7.m128i_i32 - *((float *)a1 + 22);
    if ( (_mm_cvtsi128_si32(v7) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)*(float *)v7.m128i_i32 - *(float *)v7.m128i_i32;
      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
      LODWORD(v13) = (int)*(float *)v7.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
    }
    else
    {
      v11 = *(float *)v7.m128i_i32 + 6291456.25;
      LODWORD(v13) = (int)(LODWORD(v11) << 10) >> 11;
    }
    v8 = (__m128i)*((unsigned int *)a1 + 25);
    *(float *)v8.m128i_i32 = *(float *)v8.m128i_i32 - *((float *)a1 + 23);
    if ( (_mm_cvtsi128_si32(v8) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)*(float *)v8.m128i_i32 - *(float *)v8.m128i_i32;
      HIDWORD(v13) = (int)*(float *)v8.m128i_i32
                   - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)));
    }
    else
    {
      v12 = *(float *)v8.m128i_i32 + 6291456.25;
      HIDWORD(v13) = (int)(LODWORD(v12) << 10) >> 11;
    }
    *((_QWORD *)v6 + 3) = v13;
    result = 0LL;
    *a2 = v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x182,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windowbackgroundtreatment.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
