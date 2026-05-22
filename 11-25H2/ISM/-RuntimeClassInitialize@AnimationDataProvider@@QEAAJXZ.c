/*
 * XREFs of ?RuntimeClassInitialize@AnimationDataProvider@@QEAAJXZ @ 0x18000E7D8
 * Callers:
 *     ??$MakeAndInitialize@VAnimationDataProvider@@UIAnimationDataProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAnimationDataProvider@@@Z @ 0x18000CFF0 (--$MakeAndInitialize@VAnimationDataProvider@@UIAnimationDataProvider@@$$V@Details@WRL@Microsoft@.c)
 * Callees:
 *     ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x18000BCA4 (--$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180097698 (-InternalRelease@-$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AnimationDataProvider::RuntimeClassInitialize(AnimationDataProvider *this)
{
  int v2; // eax
  const char *v3; // r9
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rcx
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  v2 = CoreUICreate(&v10);
  if ( v2 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      (const char *)(unsigned int)v2,
      v8[0]);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v3);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    Microsoft::WRL::ComPtr<AnimationDataProviderConnection>::InternalRelease((char *)this + 16);
    v8[2] = 1;
    *(_QWORD *)v8 = 0LL;
    v5 = Microsoft::Bamo::BaseBamoConnection::CreateClient<AnimationDataProviderConnection>(
           v10,
           v8,
           v4,
           (_QWORD *)this + 2);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x54,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
        (const char *)(unsigned int)v5,
        v8[0]);
    *(_QWORD *)(*((_QWORD *)this + 2) + 248LL) = this;
  }
  v6 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 0LL;
}
