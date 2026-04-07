/*
 * XREFs of ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x1800491B4
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800484B0 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x180049010 (-SendSetOpacity@CVisual@@MEAAJN@Z.c)
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A5868 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BE9A8 (-ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVisualProxy::SetEffect(CVisualProxy *this, struct CResourceProxy *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(__int64, _QWORD, GUID *, __int64); // r10
  __int64 v6; // r11
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 80LL))(*((_QWORD *)this + 3), 0LL);
  v13 = 0LL;
  v3 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v13);
  v7 = v5(v6, *(unsigned int *)(*(_QWORD *)(v4 + 16) + 24LL), &GUID_ec81b08f_bfcb_4e8d_b193_a915587999e8, v3);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualproxy.cpp",
      (const char *)(unsigned int)v7,
      v11);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    return v8;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 80LL))(*((_QWORD *)this + 3), v13);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    return v9;
  }
}
