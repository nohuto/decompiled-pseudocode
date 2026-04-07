/*
 * XREFs of ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x180039A4C
 * Callers:
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180019BA8 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001F970 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x180023D54 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180028130 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x180029978 (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x18002EDE4 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x1800359D4 (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x180037764 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x180051B84 (-_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?_UpdateClipRegion@CAccent@@IEAAXXZ @ 0x180065CC8 (-_UpdateClipRegion@CAccent@@IEAAXXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800792A8 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     wil::details::lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___::_lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___ @ 0x18007D8C4 (wil--details--lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___--_lambda_call__lambda_4014.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008ABF0 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A54EC (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVisualProxy::SetClip(CVisualProxy *this, struct CBaseGeometryProxy *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64, _QWORD, GUID *, __int64); // r10
  __int64 v7; // r11
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ebx
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 104LL))(*((_QWORD *)this + 3));
  v13 = 0LL;
  v4 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v13);
  v8 = v6(v7, *(unsigned int *)(*(_QWORD *)(v5 + 16) + 24LL), &GUID_64ac3703_9d3f_45ec_a109_7cac0e7a13a7, v4);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualproxy.cpp",
      (const char *)(unsigned int)v8,
      v11);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    return v9;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 104LL))(*((_QWORD *)this + 3), v13);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    return v10;
  }
}
