/*
 * XREFs of ?Matrix4x4FromPerspectiveOffCenter@CExpressionValueStack@@QEAAJXZ @ 0x1802577E4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015F7F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?D2DMatrixPerspectiveOffCenter@@YAPEAUD2DMatrix@@PEAU1@MMMMMM@Z @ 0x1802BE8AC (-D2DMatrixPerspectiveOffCenter@@YAPEAUD2DMatrix@@PEAU1@MMMMMM@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromPerspectiveOffCenter(CExpressionValueStack *this)
{
  unsigned int v2; // ebx
  struct CExpressionValue *v3; // rbx
  struct CExpressionValue *v4; // r15
  struct CExpressionValue *v5; // r14
  struct CExpressionValue *v6; // rbp
  struct CExpressionValue *v7; // rsi
  struct CExpressionValue *v8; // rax
  unsigned int v10; // [rsp+20h] [rbp-78h]
  _OWORD v11[4]; // [rsp+40h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 2) >= 6u )
  {
    v3 = CExpressionValueStack::PeekStackValue(this, -5);
    v4 = CExpressionValueStack::PeekStackValue(this, -4);
    v5 = CExpressionValueStack::PeekStackValue(this, -3);
    v6 = CExpressionValueStack::PeekStackValue(this, -2);
    v7 = CExpressionValueStack::PeekStackValue(this, -1);
    v8 = CExpressionValueStack::PeekStackValue(this, 0);
    if ( *((_DWORD *)v3 + 18) == 18 )
    {
      if ( *((_DWORD *)v4 + 18) == 18 )
      {
        if ( *((_DWORD *)v5 + 18) == 18 )
        {
          if ( *((_DWORD *)v6 + 18) == 18 )
          {
            if ( *((_DWORD *)v7 + 18) == 18 )
            {
              if ( *((_DWORD *)v8 + 18) == 18 )
              {
                if ( D2DMatrixPerspectiveOffCenter(
                       (struct D2DMatrix *)v11,
                       *(float *)v3,
                       *(float *)v4,
                       *(float *)v5,
                       *(float *)v6,
                       *(float *)v7,
                       *(float *)v8) )
                {
                  *((_DWORD *)v3 + 18) = 265;
                  *(_OWORD *)v3 = v11[0];
                  *((_OWORD *)v3 + 1) = v11[1];
                  *((_OWORD *)v3 + 2) = v11[2];
                  *((_OWORD *)v3 + 3) = v11[3];
                  *((_DWORD *)this + 2) -= 5;
                  return 0;
                }
                v10 = 6532;
              }
              else
              {
                v10 = 6504;
              }
            }
            else
            {
              v10 = 6503;
            }
          }
          else
          {
            v10 = 6502;
          }
        }
        else
        {
          v10 = 6501;
        }
      }
      else
      {
        v10 = 6500;
      }
    }
    else
    {
      v10 = 6499;
    }
  }
  else
  {
    v10 = 6489;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    20,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v10,
    0LL);
  return v2;
}
