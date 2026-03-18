/*
 * XREFs of ?StoreValueToCache@CExpression@@AEBAXPEBUExpressionReferenceInfoWithCache@@PEBVCExpressionValue@@@Z @ 0x18029B2B0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180154670 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180154D20 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?GetValue@CExpressionValue@@QEBAPEBXXZ @ 0x1801BA4B0 (-GetValue@CExpressionValue@@QEBAPEBXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022AA04 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?AdjustPropertyTypeWithMask@CExpression@@AEBA?AW4DCOMPOSITION_EXPRESSION_TYPE@@W42@@Z @ 0x18029A5D4 (-AdjustPropertyTypeWithMask@CExpression@@AEBA-AW4DCOMPOSITION_EXPRESSION_TYPE@@W42@@Z.c)
 *     ?GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18029A654 (-GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExpression::StoreValueToCache(
        CExpression *this,
        const struct ExpressionReferenceInfoWithCache *a2,
        const struct CExpressionValue *a3)
{
  unsigned int v4; // edx
  int ExpressionTypeByteSize; // ebp
  char *v7; // r9
  unsigned int v8; // eax
  void *v9; // rsi
  CExpressionValue *Value; // rax
  size_t v11; // r8
  bool v12; // zf
  CNotificationResource *v13; // rcx
  unsigned int ChannelCallbackId; // eax
  int v15; // edx
  __int64 v16; // r10
  int v17; // eax
  _QWORD v18[2]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = *((_DWORD *)a2 + 1);
  if ( *((_DWORD *)a2 + 3) == 1 )
    v4 = CExpression::AdjustPropertyTypeWithMask((__int64)this, v4);
  if ( *((_DWORD *)a3 + 18) == v4 )
  {
    ExpressionTypeByteSize = GetExpressionTypeByteSize(v4);
    v8 = *((_DWORD *)a2 + 5);
    if ( v8 + ExpressionTypeByteSize > *((_DWORD *)this + 91) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x649,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
        v7);
    v9 = (void *)(*((_QWORD *)this + 42) + v8);
    Value = CExpressionValue::GetValue((CExpressionValue *)v7);
    memcpy_0(v9, Value, v11);
    if ( !*((_BYTE *)a2 + 24) )
    {
      v12 = *((_DWORD *)a2 + 2) == 1;
      *((_BYTE *)a2 + 24) = 1;
      if ( v12
        && (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 6392LL) + 72LL))(
             *(_QWORD *)(*((_QWORD *)this + 3) + 6392LL),
             0LL)
        && CNotificationResource::ShouldNotify(this) )
      {
        ChannelCallbackId = CNotificationResource::GetChannelCallbackId(v13);
        v18[1] = *((unsigned int *)this + 18);
        v18[0] = ChannelCallbackId;
        v17 = CoreUICallSend(v16, v18, 2LL, 0LL, 10, &unk_18032BF07, v15, v9, ExpressionTypeByteSize);
        if ( v17 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x660,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
            (const char *)(unsigned int)v17);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x644,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
      (const char *)0x8007029CLL);
  }
}
