/*
 * XREFs of ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1800F1C04
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1800F20B0 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1800EFE88 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?Attach@?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z @ 0x180210908 (-Attach@-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x180223624 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x180237A34 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker::ScrollToPosition(
        CInteractionTracker *this,
        const struct D2DVector3 *a2,
        float a3)
{
  unsigned int v5; // xmm1_4
  int v6; // xmm0_4
  int started; // eax
  unsigned int v8; // ebx
  struct CResource *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi
  struct CResource *v13; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+38h] [rbp-30h] BYREF
  __int64 v15; // [rsp+3Ch] [rbp-2Ch]
  int v16; // [rsp+44h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !CInteractionTracker::TransitionToInertia((__int64)this, 1) )
    return 0LL;
  *((_DWORD *)this + 49) = 0;
  CInteractionTracker::DestroyDefaultAnimations(this, 1);
  v5 = *((_DWORD *)a2 + 1);
  v16 = 0;
  v6 = *(_DWORD *)a2;
  v13 = 0LL;
  v14 = v6;
  v15 = v5;
  started = CInteractionTracker::CreateAndStartKeyframeAnimation(this, 1LL, 52LL, &v14, LODWORD(a3), &v13);
  v8 = started;
  if ( started < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18D4,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
      (const char *)(unsigned int)started);
    if ( v13 )
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v13 + 16LL))(v13);
    return v8;
  }
  v10 = v13;
  v11 = CResource::RegisterNotifier(this, v13);
  v12 = v11;
  if ( v11 >= 0 )
  {
    Microsoft::WRL::ComPtr<CManipulation>::Attach((char *)this + 464, v10);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18DB,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
    (const char *)(unsigned int)v11);
  if ( v10 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v10 + 16LL))(v10);
  return v12;
}
