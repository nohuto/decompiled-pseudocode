/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIWindowingEnvironmentManager@@UIWindowingEnvironmentManagerInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18022919C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIWindowingEnvironmentManager@@UIWindowingEnvironmentManagerInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9E20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800D9E20.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180038D10 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  BOOL IsEqualGUID; // eax
  _QWORD *v5; // r8
  __int64 v6; // r10
  unsigned int v7; // ecx

  if ( *a2 == -1672839388
    && a2[1] == *(_DWORD *)&GUID_9c4a7f24_303d_47a7_994e_503f26217d06.Data2
    && a2[2] == *(_DWORD *)GUID_9c4a7f24_303d_47a7_994e_503f26217d06.Data4
    && a2[3] == *(_DWORD *)&GUID_9c4a7f24_303d_47a7_994e_503f26217d06.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(a2, &GUID_b72dd12e_3712_4eda_b5fb_5b77ceaa1179);
    v7 = 0;
    if ( IsEqualGUID )
      *v5 = v6 + 8;
    else
      return (unsigned int)-2147467262;
    return v7;
  }
}
