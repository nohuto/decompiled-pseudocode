/*
 * XREFs of ?CreateSolidColorBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Composition@34@@Z @ 0x180055B14
 * Callers:
 *     ?Initialize@CCompositionEffectCache@@AEAAJXZ @ 0x18009987C (-Initialize@CCompositionEffectCache@@AEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A44DC (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CCompositionEffectCache::CreateSolidColorBrush(unsigned int a1, _QWORD *a2)
{
  __int64 *v3; // r9
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 (__fastcall *v10)(__int64, GUID *, __int64); // r10
  int v11; // eax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = *(__int64 **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
  v14 = 0LL;
  v4 = *v3;
  v14 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v4 + 64))(v3, a1, &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)a2);
    v11 = v10(v9, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, v8);
    if ( v11 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xE5,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
        (const char *)(unsigned int)v11,
        v12);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE4,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
      (const char *)(unsigned int)v5,
      v12);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    return v6;
  }
}
