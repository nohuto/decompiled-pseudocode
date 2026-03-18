/*
 * XREFs of ?EnumerateBrushes@CEmptyRegionDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180201C10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ @ 0x1800492C0 (_lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_--_lambda_invoker_cdecl_.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180084294 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEmptyRegionDrawListBrush::EnumerateBrushes(
        CEmptyRegionDrawListBrush *this,
        const struct CDrawingContext *a2,
        __int64 (__fastcall *a3)(volatile signed __int32 **a1, unsigned int *a2),
        unsigned int *a4)
{
  __int64 v4; // rax
  __int64 v8; // rax
  volatile signed __int32 **v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  int v15; // r14d
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rbp
  __int64 v18; // rax
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  int v21; // eax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // [rsp+30h] [rbp-88h]
  __int128 v25; // [rsp+38h] [rbp-80h]
  _BYTE v26[8]; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-68h]
  unsigned __int64 v28; // [rsp+58h] [rbp-60h]
  unsigned __int64 v29; // [rsp+60h] [rbp-58h]
  int v30; // [rsp+68h] [rbp-50h]
  int v31; // [rsp+6Ch] [rbp-4Ch]

  v4 = *((_QWORD *)this + 10);
  if ( v4 )
  {
    *(_OWORD *)(v4 + 8) = *(_OWORD *)((char *)this + 8);
    *(_QWORD *)(v4 + 24) = *((_QWORD *)this + 3);
    FastRegion::CRegion::BeginIterator((int **)this + 11, (__int64)v26);
    v13 = v29;
    LODWORD(v14) = v31;
    v15 = v30;
    v16 = v28;
    v24 = v29;
LABEL_8:
    while ( v16 < v27 )
    {
      v17 = v16 + 8;
      v18 = *((_QWORD *)this + 10);
      *((float *)&v25 + 1) = (float)*(int *)v16;
      v19 = _mm_cvtsi32_si128(*(_DWORD *)(v16 + 8));
      *(float *)&v25 = (float)*(int *)(v13 + 8LL * v15);
      v20 = _mm_cvtsi32_si128(*(_DWORD *)(v13 + 8LL * v15 + 4));
      *(_DWORD *)(v18 + 48) = 0;
      *(_BYTE *)(v18 + 52) = 1;
      *((_QWORD *)&v25 + 1) = __PAIR64__(_mm_cvtepi32_ps(v19).m128_u32[0], _mm_cvtepi32_ps(v20).m128_u32[0]);
      *(_OWORD *)(v18 + 32) = v25;
      v21 = a3(*((volatile signed __int32 ***)this + 10), a4);
      v11 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x8Fu, 0LL);
        return v11;
      }
      v13 = v24;
      if ( ++v15 >= (int)v14 )
      {
        while ( 1 )
        {
          v22 = v17;
          v13 = v17 + *(int *)(v17 + 4);
          v23 = *(int *)(v17 + 12) - v13;
          v24 = v13;
          v16 = v17;
          v17 += 8LL;
          v14 = (__int64)(v17 + v23) >> 3;
          if ( (_DWORD)v14 )
            break;
          if ( v22 >= v27 )
            goto LABEL_8;
        }
        v15 = 0;
      }
    }
  }
  v8 = *((_QWORD *)this + 9);
  *(_OWORD *)(v8 + 8) = *(_OWORD *)((char *)this + 8);
  *(_QWORD *)(v8 + 24) = *((_QWORD *)this + 3);
  v9 = (volatile signed __int32 **)*((_QWORD *)this + 9);
  if ( a3 == lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ )
    v10 = lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_(v9, a4);
  else
    v10 = a3(v9, a4);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x95u, 0LL);
  return v11;
}
