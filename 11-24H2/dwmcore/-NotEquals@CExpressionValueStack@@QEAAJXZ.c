/*
 * XREFs of ?NotEquals@CExpressionValueStack@@QEAAJXZ @ 0x18024CC4C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015B3A0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     memcmp_0 @ 0x1802DF6C8 (memcmp_0.c)
 */

__int64 __fastcall CExpressionValueStack::NotEquals(CExpressionValueStack *this)
{
  unsigned int v2; // ebp
  struct CExpressionValue *v3; // rbx
  struct CExpressionValue *v4; // rax
  int v5; // ecx
  bool v6; // di
  struct CExpressionValue *v7; // rdx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  bool v16; // zf
  bool v17; // zf
  __int64 v18; // rax
  __m128 v19; // xmm2
  __m128 v20; // xmm3
  unsigned __int64 v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-18h]

  if ( *((_DWORD *)this + 2) >= 2u )
  {
    v3 = CExpressionValueStack::PeekStackValue(this, -1);
    v4 = CExpressionValueStack::PeekStackValue(this, 0);
    v5 = *((_DWORD *)v3 + 18);
    v6 = 0;
    v7 = v4;
    v2 = 0;
    if ( v5 != *((_DWORD *)v4 + 18) )
    {
      v23 = 1390;
      goto LABEL_3;
    }
    v8 = v5 - 17;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
      {
        v17 = *(float *)v3 == *(float *)v4;
        goto LABEL_23;
      }
      v10 = v9 - 17;
      if ( v10 )
      {
        v11 = v10 - 17;
        if ( !v11 )
        {
          v21 = *(_QWORD *)v3 - *(_QWORD *)v4;
          if ( *(_QWORD *)v3 == *(_QWORD *)v4 )
            v21 = *((unsigned int *)v3 + 2) - (unsigned __int64)*((unsigned int *)v4 + 2);
          v16 = v21 == 0;
          goto LABEL_38;
        }
        v12 = v11 - 17;
        if ( !v12 )
          goto LABEL_25;
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 33;
            if ( v15 )
            {
              if ( v15 != 161 )
              {
                v23 = 1451;
                goto LABEL_3;
              }
              v16 = memcmp_0(v3, v4, 0x40uLL) == 0;
              goto LABEL_38;
            }
            if ( *(float *)v3 != *(float *)v4
              || *((float *)v3 + 1) != *((float *)v4 + 1)
              || *((float *)v3 + 2) != *((float *)v4 + 2)
              || *((float *)v3 + 3) != *((float *)v4 + 3)
              || *((float *)v3 + 4) != *((float *)v4 + 4) )
            {
              goto LABEL_24;
            }
            v17 = *((float *)v3 + 5) == *((float *)v4 + 5);
            goto LABEL_23;
          }
LABEL_25:
          v18 = *(_QWORD *)v3 - *(_QWORD *)v4;
          if ( *(_QWORD *)v3 == *(_QWORD *)v7 )
            v18 = *((_QWORD *)v3 + 1) - *((_QWORD *)v7 + 1);
          v16 = v18 == 0;
          goto LABEL_38;
        }
        v19 = (__m128)_mm_loadu_si128((const __m128i *)v3);
        v20 = (__m128)_mm_loadu_si128((const __m128i *)v4);
        if ( v19.m128_f32[0] != v20.m128_f32[0]
          || _mm_shuffle_ps(v19, v19, 85).m128_f32[0] != _mm_shuffle_ps(v20, v20, 85).m128_f32[0]
          || _mm_shuffle_ps(v19, v19, 170).m128_f32[0] != _mm_shuffle_ps(v20, v20, 170).m128_f32[0] )
        {
          goto LABEL_24;
        }
        v17 = _mm_shuffle_ps(v19, v19, 255).m128_f32[0] == _mm_shuffle_ps(v20, v20, 255).m128_f32[0];
LABEL_23:
        if ( v17 )
        {
LABEL_39:
          *((_DWORD *)v3 + 18) = 17;
          *(_BYTE *)v3 = v6;
          --*((_DWORD *)this + 2);
          return v2;
        }
LABEL_24:
        v6 = 1;
        goto LABEL_39;
      }
      v16 = *(_QWORD *)v3 == *(_QWORD *)v4;
    }
    else
    {
      v16 = *(_BYTE *)v3 == *(_BYTE *)v4;
    }
LABEL_38:
    v6 = !v16;
    goto LABEL_39;
  }
  v23 = 1362;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    20,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v23,
    0LL);
  return v2;
}
