/*
 * XREFs of ?PopulateCacheFromInitialValue@CExpression@@AEAAJIPEBXI@Z @ 0x18029AEF4
 * Callers:
 *     ?ProcessSetPersistentCache@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETPERSISTENTCACHE@@PEBXI@Z @ 0x18029AFC0 (-ProcessSetPersistentCache@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETPER.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AdjustPropertyTypeWithMask@CExpression@@AEBA?AW4DCOMPOSITION_EXPRESSION_TYPE@@W42@@Z @ 0x18029A5D4 (-AdjustPropertyTypeWithMask@CExpression@@AEBA-AW4DCOMPOSITION_EXPRESSION_TYPE@@W42@@Z.c)
 *     ?GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18029A654 (-GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

__int64 __fastcall CExpression::PopulateCacheFromInitialValue(
        CExpression *this,
        int a2,
        const void *a3,
        unsigned int a4)
{
  __int64 v6; // rdx
  __int64 v8; // r9
  unsigned int v9; // edx
  unsigned int ExpressionTypeByteSize; // eax
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a4 >= *((_DWORD *)this + 93) )
  {
    v6 = 1559LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v8 = *((_QWORD *)this + 44) + 28LL * a4;
  v9 = *(_DWORD *)(v8 + 4);
  if ( *(_DWORD *)(v8 + 12) == 1 )
    v9 = CExpression::AdjustPropertyTypeWithMask((__int64)this, v9);
  ExpressionTypeByteSize = GetExpressionTypeByteSize(v9);
  if ( ExpressionTypeByteSize != a2 )
  {
    v6 = 1566LL;
    goto LABEL_3;
  }
  v13 = *(unsigned int *)(v11 + 20);
  if ( (unsigned int)v13 + ExpressionTypeByteSize > *(_DWORD *)(v12 + 364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x620,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
      (const char *)v11);
  if ( !*(_BYTE *)(v11 + 24) )
  {
    *(_BYTE *)(v11 + 24) = 1;
    memcpy_0((void *)(*(_QWORD *)(v12 + 336) + v13), a3, ExpressionTypeByteSize);
  }
  return 0LL;
}
