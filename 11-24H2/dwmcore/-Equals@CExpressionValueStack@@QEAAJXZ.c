/*
 * XREFs of ?Equals@CExpressionValueStack@@QEAAJXZ @ 0x1801F9C1C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015B3A0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     memcmp_0 @ 0x1802DF6C8 (memcmp_0.c)
 */

__int64 __fastcall CExpressionValueStack::Equals(CExpressionValueStack *this)
{
  struct CExpressionValue *v2; // rbx
  struct CExpressionValue *v3; // rax
  int v4; // ecx
  unsigned int v5; // esi
  struct CExpressionValue *v6; // rdx
  int v7; // ecx
  int v8; // ecx
  bool v9; // zf
  char v10; // al
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rax
  bool v16; // zf
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  unsigned __int64 v20; // rcx
  __m128 v21; // xmm2
  __m128 v22; // xmm3
  unsigned int v23; // [rsp+20h] [rbp-18h]

  if ( *((_DWORD *)this + 2) < 2u )
  {
    v23 = 1239;
LABEL_12:
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v23,
      0LL);
    return v5;
  }
  v2 = CExpressionValueStack::PeekStackValue(this, -1);
  v3 = CExpressionValueStack::PeekStackValue(this, 0);
  v4 = *((_DWORD *)v2 + 18);
  v5 = 0;
  v6 = v3;
  if ( v4 != *((_DWORD *)v3 + 18) )
  {
    v23 = 1267;
    goto LABEL_12;
  }
  v7 = v4 - 17;
  if ( !v7 )
  {
    v16 = *(_BYTE *)v2 == *(_BYTE *)v3;
    goto LABEL_19;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = *(float *)v2 == *(float *)v3;
    goto LABEL_6;
  }
  v12 = v8 - 17;
  if ( !v12 )
  {
    v16 = *(_QWORD *)v2 == *(_QWORD *)v3;
    goto LABEL_19;
  }
  v13 = v12 - 17;
  if ( !v13 )
  {
    v20 = *(_QWORD *)v2 - *(_QWORD *)v3;
    if ( *(_QWORD *)v2 == *(_QWORD *)v3 )
      v20 = *((unsigned int *)v2 + 2) - (unsigned __int64)*((unsigned int *)v3 + 2);
    v16 = v20 == 0;
    goto LABEL_19;
  }
  v14 = v13 - 17;
  if ( !v14 )
    goto LABEL_16;
  v17 = v14 - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( !v18 )
    {
LABEL_16:
      v15 = *(_QWORD *)v2 - *(_QWORD *)v3;
      if ( *(_QWORD *)v2 == *(_QWORD *)v6 )
        v15 = *((_QWORD *)v2 + 1) - *((_QWORD *)v6 + 1);
      v16 = v15 == 0;
      goto LABEL_19;
    }
    v19 = v18 - 33;
    if ( v19 )
    {
      if ( v19 != 161 )
      {
        v23 = 1329;
        goto LABEL_12;
      }
      v16 = memcmp_0(v2, v3, 0x40uLL) == 0;
LABEL_19:
      v10 = v16;
      goto LABEL_8;
    }
    if ( *(float *)v2 != *(float *)v3
      || *((float *)v2 + 1) != *((float *)v3 + 1)
      || *((float *)v2 + 2) != *((float *)v3 + 2)
      || *((float *)v2 + 3) != *((float *)v3 + 3)
      || *((float *)v2 + 4) != *((float *)v3 + 4) )
    {
      goto LABEL_10;
    }
    v9 = *((float *)v2 + 5) == *((float *)v3 + 5);
  }
  else
  {
    v21 = (__m128)_mm_loadu_si128((const __m128i *)v2);
    v22 = (__m128)_mm_loadu_si128((const __m128i *)v3);
    if ( v21.m128_f32[0] != v22.m128_f32[0]
      || _mm_shuffle_ps(v21, v21, 85).m128_f32[0] != _mm_shuffle_ps(v22, v22, 85).m128_f32[0]
      || _mm_shuffle_ps(v21, v21, 170).m128_f32[0] != _mm_shuffle_ps(v22, v22, 170).m128_f32[0] )
    {
      goto LABEL_10;
    }
    v9 = _mm_shuffle_ps(v21, v21, 255).m128_f32[0] == _mm_shuffle_ps(v22, v22, 255).m128_f32[0];
  }
LABEL_6:
  if ( !v9 )
  {
LABEL_10:
    v10 = 0;
    goto LABEL_8;
  }
  v10 = 1;
LABEL_8:
  *((_DWORD *)v2 + 18) = 17;
  *(_BYTE *)v2 = v10;
  --*((_DWORD *)this + 2);
  return v5;
}
