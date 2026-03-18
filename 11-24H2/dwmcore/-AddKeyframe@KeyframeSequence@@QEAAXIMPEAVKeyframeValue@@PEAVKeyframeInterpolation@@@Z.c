/*
 * XREFs of ?AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z @ 0x18017EDAC
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18029E040 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F020 (-InternalRelease@-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall KeyframeSequence::AddKeyframe(
        KeyframeSequence *this,
        unsigned int a2,
        double a3,
        struct KeyframeValue *a4,
        struct KeyframeInterpolation *a5)
{
  int v7; // ecx
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rbp
  struct KeyframeInterpolation *v11; // rdi
  __int64 v12; // rcx
  int v13; // ecx
  __m128 v14; // rt1
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  float v16; // [rsp+48h] [rbp+10h]

  *(float *)&a3 = *(float *)&a3 * 1000.0;
  if ( (_mm_cvtsi128_si32(*(__m128i *)&a3) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v13 = (int)*(float *)&a3;
    *(float *)&a3 = (float)(int)*(float *)&a3 - *(float *)&a3;
    v14.m128_f32[0] = FLOAT_N0_5;
    v7 = v13 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, v14));
  }
  else
  {
    v16 = *(float *)&a3 + 6291456.25;
    v7 = (int)(LODWORD(v16) << 10) >> 11;
  }
  v8 = 3LL * a2;
  *(_DWORD *)(*((_QWORD *)this + 13) + 24LL * a2) = v7;
  v9 = *((_QWORD *)this + 13);
  if ( *(struct KeyframeValue **)(v9 + 24LL * a2 + 8) != a4 )
  {
    if ( a4 )
      CMILRefCountImpl::AddReference((struct KeyframeValue *)((char *)a4 + 8));
    v15 = *(_QWORD *)(v9 + 8 * v8 + 8);
    *(_QWORD *)(v9 + 8 * v8 + 8) = a4;
    Microsoft::WRL::ComPtr<CLinkedShader>::InternalRelease(&v15);
  }
  v10 = *((_QWORD *)this + 13);
  v11 = a5;
  if ( *(struct KeyframeInterpolation **)(v10 + 8 * v8 + 16) != a5 )
  {
    if ( a5 )
      (**(void (__fastcall ***)(struct KeyframeInterpolation *))a5)(a5);
    v12 = *(_QWORD *)(v10 + 8 * v8 + 16);
    *(_QWORD *)(v10 + 8 * v8 + 16) = v11;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  }
  *((_BYTE *)this + 140) |= 4u;
}
