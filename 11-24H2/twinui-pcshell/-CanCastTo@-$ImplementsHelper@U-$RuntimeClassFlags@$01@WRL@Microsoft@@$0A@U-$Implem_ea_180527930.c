/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCAppLayoutOperation@@U?$ChainInterfaces@UIBackOperation@@UIAppLayoutOperationBuilder@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180527930
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@VCAppLayoutOperation@@U?$ChainInterfaces@UIBackOperation@@UIAppLayoutOperationBuilder@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180527A00 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180527A00.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CAppLayoutOperation,Microsoft::WRL::ChainInterfaces<IBackOperation,IAppLayoutOperationBuilder,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  BOOL IsEqualGUID; // eax
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r11
  unsigned int v6; // r9d
  const struct _GUID *v7; // rcx
  _QWORD *v8; // r8
  unsigned int v9; // r9d
  __int64 v10; // r11
  unsigned int v11; // eax
  __int64 v12; // rbx
  const struct _GUID *v13; // rcx
  _QWORD *v14; // r8
  unsigned int v15; // r9d
  const struct _GUID *v16; // r10
  _QWORD *v17; // r8
  const struct _GUID *v18; // rcx

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352);
  v6 = 0;
  if ( !IsEqualGUID )
  {
    if ( InlineIsEqualGUID(v3, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9) )
      goto LABEL_4;
    v12 = v10 + 8;
    if ( InlineIsEqualGUID(v7, &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb) )
    {
      *v14 = v12;
    }
    else
    {
      if ( !InlineIsEqualGUID(v13, &GUID_521214fe_07d7_470b_b6f3_b9d2354cae32) )
      {
        v11 = -2147467262;
        goto LABEL_11;
      }
      *v17 = v12 + 8;
    }
    v11 = v15;
LABEL_11:
    if ( v11 != -2147467262 )
      return v11;
    if ( !InlineIsEqualGUID(v16, &GUID_d59c14a7_71c6_488b_abea_b37fed59db6c)
      && !InlineIsEqualGUID(v18, &GUID_521214fe_07d7_470b_b6f3_b9d2354cae32) )
    {
      return (unsigned int)-2147467262;
    }
LABEL_4:
    *v8 = v10;
    return v9;
  }
  *v4 = v5;
  return v6;
}
