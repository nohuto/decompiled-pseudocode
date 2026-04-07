/*
 * XREFs of ?StartExpressionAnimationHelper@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIExpressionAnimation@Composition@34@@Z @ 0x1800C128C
 * Callers:
 *     ?AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z @ 0x1800CDEA0 (-AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AttachExpressionAnimationToRevealSpotLight@CGlobalLightSet@@AEBAJPEAUISpotLight@Composition@UI@Windows@@PEAUIExpressionAnimation@345@@Z @ 0x1800C0EA8 (-AttachExpressionAnimationToRevealSpotLight@CGlobalLightSet@@AEBAJPEAUISpotLight@Composition@UI@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CGlobalLightSet::StartExpressionAnimationHelper(
        __int64 a1,
        int a2,
        __int64 (__fastcall ***a3)(struct Windows::UI::Composition::IExpressionAnimation *, GUID *, __int64 *))
{
  _QWORD *v4; // rax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct Windows::UI::Composition::ISpotLight **); // rdi
  __int64 (__fastcall *v6)(_QWORD, GUID *, struct Windows::UI::Composition::ISpotLight **); // rbx
  int v7; // eax
  CGlobalLightSet *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  _DWORD v12[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::UI::Composition::ISpotLight *v14; // [rsp+40h] [rbp+8h] BYREF

  v12[0] = a2;
  v4 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 16), v12);
  if ( v4 )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::UI::Composition::ISpotLight **))v4[1];
    if ( v5 )
    {
      v14 = 0LL;
      v6 = **v5;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
      v7 = v6(v5, &GUID_5a9fe273_44a1_4f95_a422_8fa5116bdb44, &v14);
      v9 = v7;
      if ( v7 < 0 )
      {
        v10 = 444LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
          (const char *)(unsigned int)v7);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
        return v9;
      }
      v7 = CGlobalLightSet::AttachExpressionAnimationToRevealSpotLight(
             v8,
             (__int64 (__fastcall ***)(struct Windows::UI::Composition::ISpotLight *, GUID *, __int64 *))v14,
             a3);
      v9 = v7;
      if ( v7 < 0 )
      {
        v10 = 447LL;
        goto LABEL_7;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    }
  }
  return 0LL;
}
