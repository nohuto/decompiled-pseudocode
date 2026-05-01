/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VHotTrackingElement@@UIMultitaskingViewGridElement@@UISwitchItemElement@@UIGlyphButtonHost@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VHotTrackingElement@@UIMultitaskingViewGridElement@@UISwitchItemElement@@UIGlyphButtonHost@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1804B6F58
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VHotTrackingElement@@UIMultitaskingViewGridElement@@UISwitchItemElement@@UIGlyphButtonHost@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804B8140 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VHotTracki.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,HotTrackingElement,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>>(
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
  const struct _GUID *v12; // rcx
  _QWORD *v13; // r8
  __int64 v14; // r9

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v3, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861)
      || InlineIsEqualGUID(v6, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d)
      || InlineIsEqualGUID(v9, &GUID_dda13508_825c_43f9_bcd8_7d0dc0e5d932) )
    {
      *v7 = v8;
      v11 = 0;
      goto LABEL_12;
    }
    if ( !InlineIsEqualGUID(v10, &GUID_201ffda2_74a1_4fc8_a4a6_a65a1636d3fe) )
    {
      if ( !InlineIsEqualGUID(v12, &GUID_b09cbbc9_d9b8_46fe_b3d5_2cd3bb04dda8) )
      {
        v11 = -2147467262;
        v8 = 0LL;
LABEL_11:
        if ( v11 < 0 )
          return (unsigned int)v11;
LABEL_12:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        return (unsigned int)v11;
      }
      v8 = v14 + 8;
    }
    *v13 = v8;
    v11 = 0;
    goto LABEL_11;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
