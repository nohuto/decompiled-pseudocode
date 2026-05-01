/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180549DB4
 * Callers:
 *     ?CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z @ 0x18054A4E4 (-CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ElementProviderFromPoint@CDragVisualAcc@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z @ 0x18054A630 (-ElementProviderFromPoint@CDragVisualAcc@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z.c)
 *     ?GetGrabbedItems@CDragVisualAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x18054A940 (-GetGrabbedItems@CDragVisualAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z.c)
 *     ?GetPatternProvider@CDragVisualAcc@@UEAAJHPEAPEAUIUnknown@@@Z @ 0x18054A9D0 (-GetPatternProvider@CDragVisualAcc@@UEAAJHPEAPEAUIUnknown@@@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18054B6F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18054B6F0.c)
 *     ?get_FragmentRoot@CDragVisualAcc@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z @ 0x18054BD50 (-get_FragmentRoot@CDragVisualAcc@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>>(
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
  int v9; // ebx
  const struct _GUID *v10; // rcx
  const struct _GUID *v11; // rcx
  __int64 v12; // r9
  const struct _GUID *v13; // rcx
  __int64 v14; // r9

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v3, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c)
      || InlineIsEqualGUID(v6, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87) )
    {
      *v7 = v8;
      v9 = 0;
      goto LABEL_13;
    }
    if ( InlineIsEqualGUID(v10, &GUID_620ce2a5_ab8f_40a9_86cb_de3c75599b58)
      || InlineIsEqualGUID(v11, &GUID_6aa7bbbb_7ff9_497d_904f_d20b897929d8) )
    {
      *v7 = v12;
    }
    else
    {
      if ( !InlineIsEqualGUID(v13, &GUID_959cb746_add4_483a_8acd_059d06f3798a) )
      {
        v9 = -2147467262;
LABEL_12:
        if ( v9 < 0 )
          return (unsigned int)v9;
LABEL_13:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
        return (unsigned int)v9;
      }
      *v7 = v14 + 8;
    }
    v9 = 0;
    goto LABEL_12;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
