/*
 * XREFs of ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802311E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800345C0 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800F33E8 (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800F34F4 (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x1802A2CB0 (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConditionalExpression::CalculateValueWorker(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        bool *a4)
{
  unsigned int v4; // r15d
  unsigned int v9; // ebx
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  CConditionalExpression *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  int IsAnyConditionSatisfied; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  bool v29; // [rsp+30h] [rbp-59h] BYREF
  char v30; // [rsp+31h] [rbp-58h]
  _BYTE v31[64]; // [rsp+40h] [rbp-49h] BYREF
  CPathData *v32; // [rsp+80h] [rbp-9h] BYREF
  int v33; // [rsp+88h] [rbp-1h]

  v4 = 0;
  *a4 = 0;
  v9 = 0;
  v10 = *((_DWORD *)this + 90) - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      memset_0(v31, 0, sizeof(v31));
      v32 = 0LL;
      v33 = 0;
      v30 = 1;
      while ( v4 < (unsigned __int64)((__int64)(*((_QWORD *)this + 42) - *((_QWORD *)this + 41)) >> 4) )
      {
        v29 = 0;
        v13 = CConditionalExpression::CalculateConditionValue(this, v4, a2, a3, &v29);
        v9 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x120u, 0LL);
          goto LABEL_13;
        }
        if ( v29 )
        {
          v14 = *((_QWORD *)this + 41);
          v30 = 0;
          v15 = *(_QWORD *)(v14 + 16LL * v4 + 8);
          v16 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v15 + 248LL))(
                  v15,
                  a2,
                  a3,
                  a4);
          v9 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x127u, 0LL);
            goto LABEL_13;
          }
          v18 = CConditionalExpression::AddStackValueToSum(v17, (struct CExpressionValue *)v31, a2);
          v9 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x128u, 0LL);
            goto LABEL_13;
          }
        }
        ++v4;
      }
      if ( v30 )
      {
        v19 = *((_QWORD *)this + 44);
        if ( v19 )
        {
          v20 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v19 + 248LL))(
                  v19,
                  a2,
                  a3,
                  a4);
          v9 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x131u, 0LL);
        }
        else
        {
          v9 = 1;
        }
      }
      else
      {
        v21 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)v31, v11, v12);
        v9 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x13Cu, 0LL);
      }
LABEL_13:
      Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v32);
    }
  }
  else
  {
    IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(this, a2, a3, 0LL);
    v9 = IsAnyConditionSatisfied;
    if ( IsAnyConditionSatisfied < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, IsAnyConditionSatisfied, 0xF5u, 0LL);
    }
    else
    {
      v23 = *((int *)this + 91);
      if ( (int)v23 < 0 )
      {
        v26 = *((_QWORD *)this + 44);
        if ( v26 )
        {
          v27 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v26 + 248LL))(
                  v26,
                  a2,
                  a3,
                  a4);
          v9 = v27;
          if ( v27 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0xFDu, 0LL);
        }
        else
        {
          return 1;
        }
      }
      else
      {
        v24 = *(_QWORD *)(*((_QWORD *)this + 41) + 16 * v23 + 8);
        v25 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v24 + 248LL))(
                v24,
                a2,
                a3,
                a4);
        v9 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0xF9u, 0LL);
      }
    }
  }
  return v9;
}
