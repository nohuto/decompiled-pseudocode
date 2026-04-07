/*
 * XREFs of ?SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z @ 0x180048BB8
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800484B0 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x1800784DC (-UpdateTransform@CVisual@@AEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVisualProxy::SetTransform(CVisualProxy *this, struct CBaseTransformProxy *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(__int64, _QWORD, GUID *, __int64); // r10
  __int64 v6; // r11
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v3 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v12);
  v7 = v5(v6, *(unsigned int *)(*(_QWORD *)(v4 + 16) + 24LL), &GUID_fd55faa7_37e0_4c20_95d2_9be45bc33f55, v3);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualproxy.cpp",
      (const char *)(unsigned int)v7,
      v10);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 248LL))(*((_QWORD *)this + 3), v12);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v8;
}
