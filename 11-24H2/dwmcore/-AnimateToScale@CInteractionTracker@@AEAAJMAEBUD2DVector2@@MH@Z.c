/*
 * XREFs of ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x18029D0C0
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1800E663C (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800E700C (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801E05CC (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x18022BCE4 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker::AnimateToScale(
        CInteractionTracker *this,
        float a2,
        const struct D2DVector2 *a3,
        float a4)
{
  int started; // eax
  unsigned int v7; // ebx
  struct CResource *v9; // rbx
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // xmm0_8
  struct CResource *v14; // [rsp+30h] [rbp-48h] BYREF
  char v15[24]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( !CInteractionTracker::TransitionToInertia((__int64)this, 1) )
    return 0LL;
  *((_DWORD *)this + 49) = 0;
  CInteractionTracker::DestroyDefaultAnimations(this, 1);
  v14 = 0LL;
  *(_OWORD *)v15 = LODWORD(a2);
  started = CInteractionTracker::CreateAndStartKeyframeAnimation(
              (struct CComposition **)this,
              2u,
              0x12u,
              v15,
              SLODWORD(a4),
              (__int64 *)&v14);
  v7 = started;
  if ( started < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x190F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
      (const char *)(unsigned int)started);
    if ( v14 )
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v14 + 16LL))(v14);
    return v7;
  }
  v9 = v14;
  v10 = CResource::RegisterNotifier(this, v14);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = *((_QWORD *)this + 59);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = *(_QWORD *)a3;
    *((_QWORD *)this + 59) = v9;
    *((_QWORD *)v9 + 90) = v13;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1916,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
    (const char *)(unsigned int)v10);
  if ( v9 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v9 + 16LL))(v9);
  return v11;
}
