/*
 * XREFs of ?Swizzle@CExpressionValueStack@@QEAAJPEBUExpressionNode@@@Z @ 0x1802B4084
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x180039EA0 (-CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015F7F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180195980 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::Swizzle(CExpressionValueStack *this, const struct ExpressionNode *a2)
{
  __int64 v3; // r14
  struct CExpressionValue *v4; // rbx
  unsigned int ExpressionTypeChannelCount; // eax
  unsigned int v6; // edi
  unsigned int v7; // r12d
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // esi
  unsigned int i; // r8d
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // edi
  unsigned int v18; // edi
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  int v23; // xmm4_4
  int v24; // xmm5_4
  __int128 v25; // xmm0
  int v26; // xmm0_4
  int v27; // xmm1_4
  int v28; // xmm2_4
  int v29; // xmm1_4
  unsigned int v31; // [rsp+28h] [rbp-79h]
  __int128 v32; // [rsp+48h] [rbp-59h] BYREF
  __int128 v33; // [rsp+58h] [rbp-49h]
  __int128 v34; // [rsp+68h] [rbp-39h]
  __int128 v35; // [rsp+78h] [rbp-29h]
  float v36[16]; // [rsp+88h] [rbp-19h] BYREF

  if ( !*((_DWORD *)this + 2) )
  {
    v31 = 7555;
    goto LABEL_34;
  }
  if ( *(_DWORD *)a2 == 101 )
  {
    v3 = 4LL;
  }
  else
  {
    if ( *(_DWORD *)a2 != 102 )
    {
      v31 = 7580;
LABEL_34:
      v10 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147467259,
        v31,
        0LL);
      return v10;
    }
    v3 = 8LL;
  }
  v4 = CExpressionValueStack::PeekStackValue(this, 0);
  memset_0(v36, 0, sizeof(v36));
  memset_0(&v32, 0, 0x40uLL);
  ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((_DWORD *)v4 + 18));
  v6 = *((unsigned __int8 *)a2 + v3 + 4);
  v7 = ExpressionTypeChannelCount;
  v9 = CExpressionValue::CopyIntoFloatArray(v4, v8, v36);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v9,
      0x1DB1u,
      0LL);
  }
  else
  {
    for ( i = 0; i < v6; *((float *)&v32 + v13) = v36[v12] )
    {
      if ( *(_DWORD *)((char *)a2 + v3) == 1 )
      {
        v12 = (*((unsigned __int8 *)a2 + v3 + 8) >> (2 * (*((_BYTE *)a2 + v3 + 4) - i) - 2)) & 3;
      }
      else
      {
        if ( *(_DWORD *)((char *)a2 + v3) != 2 )
        {
          v31 = 7627;
          goto LABEL_34;
        }
        v12 = (*(_QWORD *)((char *)a2 + v3 + 8) >> (4 * (*((_BYTE *)a2 + v3 + 4) - (unsigned __int8)i) - 4)) & 0xFLL;
      }
      if ( (unsigned int)v12 >= v7 )
      {
        v31 = 7638;
        goto LABEL_34;
      }
      if ( i >= 0x10 )
      {
        v31 = 7649;
        goto LABEL_34;
      }
      v13 = i++;
    }
    v14 = v6 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 2;
            if ( v18 )
            {
              if ( v18 != 10 )
              {
                v31 = 7695;
                goto LABEL_34;
              }
              v19 = v33;
              *(_OWORD *)v4 = v32;
              *((_DWORD *)v4 + 18) = 265;
              v20 = v34;
              *((_OWORD *)v4 + 1) = v19;
              v21 = v35;
              *((_OWORD *)v4 + 2) = v20;
              *((_OWORD *)v4 + 3) = v21;
            }
            else
            {
              v22 = v32;
              v23 = v33;
              v24 = DWORD1(v33);
              *((_DWORD *)v4 + 18) = 104;
              *(_OWORD *)v4 = v22;
              *((_DWORD *)v4 + 4) = v23;
              *((_DWORD *)v4 + 5) = v24;
            }
          }
          else
          {
            v25 = v32;
            *((_DWORD *)v4 + 18) = 69;
            *(_OWORD *)v4 = v25;
          }
        }
        else
        {
          v26 = v32;
          v27 = DWORD1(v32);
          v28 = DWORD2(v32);
          *((_DWORD *)v4 + 18) = 52;
          *(_DWORD *)v4 = v26;
          *((_DWORD *)v4 + 1) = v27;
          *((_DWORD *)v4 + 2) = v28;
        }
      }
      else
      {
        v29 = DWORD1(v32);
        *(_DWORD *)v4 = v32;
        *((_DWORD *)v4 + 1) = v29;
        *((_DWORD *)v4 + 18) = 35;
      }
    }
    else
    {
      *(_DWORD *)v4 = v32;
      *((_DWORD *)v4 + 18) = 18;
    }
  }
  return v10;
}
