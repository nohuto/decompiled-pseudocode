/*
 * XREFs of ?Initialize@DesktopSystemCursorService@@QEAAJXZ @ 0x18008EBB0
 * Callers:
 *     ?InitializeDesktopCursorService@SystemCursorController2@@QEAAJXZ @ 0x18008EAAC (-InitializeDesktopCursorService@SystemCursorController2@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeBase@SystemCursorServiceBase@@IEAAJXZ @ 0x180093064 (-InitializeBase@SystemCursorServiceBase@@IEAAJXZ.c)
 *     ??$?4U?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@$0A@@?$unique_ptr@VHardwareCursorVisual@SystemCursors@@U?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009A46C (--$-4U-$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@$0A@@-$unique_ptr@VHardwareCur.c)
 *     ??1?$unique_ptr@VHardwareCursorVisual@SystemCursors@@U?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@@std@@QEAA@XZ @ 0x18009BED8 (--1-$unique_ptr@VHardwareCursorVisual@SystemCursors@@U-$default_delete@VHardwareCursorVisual@Sys.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x1800F1228 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DesktopSystemCursorService::Initialize(DesktopSystemCursorService *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // rbx
  _QWORD *v6; // rax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = SystemCursorServiceBase::InitializeBase(this);
  if ( v2 < 0 )
  {
    v3 = 20LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                    "desktopsystemcursorservice.cpp",
      (const char *)(unsigned int)v2,
      v7);
    return (unsigned int)v2;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
  {
    v5 = *((_QWORD *)this + 2);
    v6 = operator new(0x40uLL);
    v6[1] = v5;
    v6[2] = 0LL;
    v6[3] = 0LL;
    *((_WORD *)v6 + 16) = 257;
    *v6 = &SystemCursors::HardwareCursorVisual::`vftable';
    v6[5] = 0LL;
    v6[6] = 1LL;
    *((_BYTE *)v6 + 56) = 0;
    *((_BYTE *)v6 + 33) = 1;
    v9 = v6;
    std::unique_ptr<SystemCursors::HardwareCursorVisual>::operator=<std::default_delete<SystemCursors::HardwareCursorVisual>,0>(
      (char *)this + 24,
      &v9);
    std::unique_ptr<SystemCursors::HardwareCursorVisual>::~unique_ptr<SystemCursors::HardwareCursorVisual>(&v9);
    v2 = (***((__int64 (__fastcall ****)(_QWORD))this + 3))(*((_QWORD *)this + 3));
    if ( v2 < 0 )
    {
      v3 = 35LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
