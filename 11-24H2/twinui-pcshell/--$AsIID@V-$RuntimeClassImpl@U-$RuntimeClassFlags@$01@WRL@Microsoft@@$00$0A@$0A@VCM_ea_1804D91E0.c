/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UIGlyphButtonHost@@UIScrollButtonContainer@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UIGlyphButtonHost@@UIScrollButtonContainer@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1804D91E0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UIGlyphButtonHost@@UIScrollButtonContainer@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804D96E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1804D96E0.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewElementBase,IGlyphButtonHost,IScrollButtonContainer>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  const struct _GUID *v9; // rcx
  const struct _GUID *v10; // rcx
  int v11; // ebx
  _QWORD *v12; // r8
  __int64 v13; // r9

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v3, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861)
      || InlineIsEqualGUID(v6, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d)
      || InlineIsEqualGUID(v9, &GUID_b09cbbc9_d9b8_46fe_b3d5_2cd3bb04dda8) )
    {
      *v7 = v8;
      v11 = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v10, &GUID_f1a65999_aef4_4756_bc64_79adacbe9f8b) )
      {
        v8 = v13 + 8;
        *v12 = v8;
        v11 = 0;
      }
      else
      {
        v11 = -2147467262;
        v8 = 0LL;
      }
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    return (unsigned int)v11;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
