/*
 * XREFs of ?Matrix4x4FromPerspectiveFieldOfView@CExpressionValueStack@@QEAAJXZ @ 0x18024D3F8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015B3A0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?D2DMatrixPerspectiveFieldOfView@@YAPEAUD2DMatrix@@PEAU1@MMMM@Z @ 0x1802B5178 (-D2DMatrixPerspectiveFieldOfView@@YAPEAUD2DMatrix@@PEAU1@MMMM@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromPerspectiveFieldOfView(CExpressionValueStack *this)
{
  unsigned int v2; // ebx
  struct CExpressionValue *v3; // rbx
  struct CExpressionValue *v4; // rsi
  struct CExpressionValue *v5; // rbp
  struct CExpressionValue *v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-58h]
  _OWORD v9[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( *((_DWORD *)this + 2) >= 4u )
  {
    v3 = CExpressionValueStack::PeekStackValue(this, -3);
    v4 = CExpressionValueStack::PeekStackValue(this, -2);
    v5 = CExpressionValueStack::PeekStackValue(this, -1);
    v6 = CExpressionValueStack::PeekStackValue(this, 0);
    if ( *((_DWORD *)v3 + 18) == 18 )
    {
      if ( *((_DWORD *)v4 + 18) == 18 )
      {
        if ( *((_DWORD *)v5 + 18) == 18 )
        {
          if ( *((_DWORD *)v6 + 18) == 18 )
          {
            if ( D2DMatrixPerspectiveFieldOfView(
                   (struct D2DMatrix *)v9,
                   *(float *)v3,
                   *(float *)v4,
                   *(float *)v5,
                   *(float *)v6) )
            {
              *((_DWORD *)v3 + 18) = 265;
              *(_OWORD *)v3 = v9[0];
              *((_OWORD *)v3 + 1) = v9[1];
              *((_OWORD *)v3 + 2) = v9[2];
              *((_OWORD *)v3 + 3) = v9[3];
              *((_DWORD *)this + 2) -= 3;
              return 0;
            }
            v8 = 6451;
          }
          else
          {
            v8 = 6426;
          }
        }
        else
        {
          v8 = 6425;
        }
      }
      else
      {
        v8 = 6424;
      }
    }
    else
    {
      v8 = 6423;
    }
  }
  else
  {
    v8 = 6415;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    20,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v8,
    0LL);
  return v2;
}
