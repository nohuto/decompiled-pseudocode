/*
 * XREFs of ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800F34F4
 * Callers:
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800F33E8 (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802311E0 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015F7F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConditionalExpression::CalculateConditionValue(
        CConditionalExpression *this,
        unsigned int a2,
        struct CExpressionValueStack *a3,
        __int64 a4,
        bool *a5)
{
  __int64 v5; // rax
  int v7; // eax
  unsigned int v8; // ebx
  struct CExpressionValue *v9; // rax
  char v10; // cl
  bool *v11; // rax
  char v13; // [rsp+48h] [rbp+10h] BYREF

  v5 = *((_QWORD *)this + 41);
  v13 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, struct CExpressionValueStack *, __int64, char *))(**(_QWORD **)(v5 + 16LL * a2)
                                                                                          + 248LL))(
         *(_QWORD *)(v5 + 16LL * a2),
         a3,
         a4,
         &v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x15Eu, 0LL);
  }
  else
  {
    v9 = CExpressionValueStack::PeekStackValue(a3, 0);
    if ( *((_DWORD *)v9 + 18) == 17 )
    {
      v10 = *(_BYTE *)v9;
      v11 = a5;
      --*((_DWORD *)a3 + 2);
      v8 = 0;
      *v11 = v10;
    }
    else
    {
      v8 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x164u, 0LL);
    }
  }
  return v8;
}
