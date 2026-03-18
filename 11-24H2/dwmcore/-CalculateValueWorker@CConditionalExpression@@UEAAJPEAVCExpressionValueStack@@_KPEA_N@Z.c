/*
 * XREFs of ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802380B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x18000E840 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800E4868 (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800E4974 (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x180298C30 (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConditionalExpression::CalculateValueWorker(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        bool *a4)
{
  unsigned int v4; // r15d
  int v9; // ecx
  char v10; // r13
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // rcx
  int v17; // eax
  CConditionalExpression *v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  int IsAnyConditionSatisfied; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  bool v30; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v31[64]; // [rsp+40h] [rbp-49h] BYREF
  CPathData *v32; // [rsp+80h] [rbp-9h] BYREF
  int v33; // [rsp+88h] [rbp-1h]

  v4 = 0;
  *a4 = 0;
  v9 = *((_DWORD *)this + 90) - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      memset_0(v31, 0, sizeof(v31));
      v10 = 1;
      v11 = (__int64)(*((_QWORD *)this + 42) - *((_QWORD *)this + 41)) >> 4;
      v32 = 0LL;
      v33 = 0;
      if ( v11 )
      {
        do
        {
          v30 = 0;
          v12 = CConditionalExpression::CalculateConditionValue(this, v4, a2, a3, &v30);
          v15 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x120u, 0LL);
            goto LABEL_17;
          }
          if ( v30 )
          {
            v10 = 0;
            v16 = *(_QWORD *)(*((_QWORD *)this + 41) + 16LL * v4 + 8);
            v17 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v16 + 248LL))(
                    v16,
                    a2,
                    a3,
                    a4);
            v15 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x127u, 0LL);
              goto LABEL_17;
            }
            if ( v17 != 1 )
            {
              v19 = CConditionalExpression::AddStackValueToSum(v18, (struct CExpressionValue *)v31, a2);
              v15 = v19;
              if ( v19 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x131u, 0LL);
                goto LABEL_17;
              }
            }
          }
          ++v4;
        }
        while ( v4 < (unsigned __int64)((__int64)(*((_QWORD *)this + 42) - *((_QWORD *)this + 41)) >> 4) );
        if ( v10 )
          goto LABEL_18;
        if ( v33 )
        {
          v20 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)v31, v13, v14);
          v15 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x149u, 0LL);
          goto LABEL_17;
        }
      }
      else
      {
LABEL_18:
        v21 = *((_QWORD *)this + 44);
        if ( v21 )
        {
          v22 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v21 + 248LL))(
                  v21,
                  a2,
                  a3,
                  a4);
          v15 = v22;
          if ( v22 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x13Bu, 0LL);
          goto LABEL_17;
        }
      }
      v15 = 1;
LABEL_17:
      Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v32);
      return v15;
    }
    return 1;
  }
  IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(this, a2, a3, 0LL);
  v15 = IsAnyConditionSatisfied;
  if ( IsAnyConditionSatisfied < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, IsAnyConditionSatisfied, 0xF5u, 0LL);
    return v15;
  }
  v24 = *((int *)this + 91);
  if ( (int)v24 < 0 )
  {
    v27 = *((_QWORD *)this + 44);
    if ( !v27 )
      return 1;
    v28 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v27 + 248LL))(
            v27,
            a2,
            a3,
            a4);
    v15 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0xFDu, 0LL);
  }
  else
  {
    v25 = *(_QWORD *)(*((_QWORD *)this + 41) + 16 * v24 + 8);
    v26 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, unsigned __int64, bool *))(*(_QWORD *)v25 + 248LL))(
            v25,
            a2,
            a3,
            a4);
    v15 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0xF9u, 0LL);
  }
  return v15;
}
