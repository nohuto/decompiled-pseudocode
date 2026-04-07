/*
 * XREFs of ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000660C
 * Callers:
 *     ?CloneVisualTree@CWindowBorder@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180006590 (-CloneVisualTree@CWindowBorder@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x1800066F0 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000C2A0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x1800325B4 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18003567C (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowBorder::InitializeVisualTreeClone(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  int v6; // esi
  __int64 v7; // r8
  int BorderStructure; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v6 = CVisual::InitializeVisualTreeClone(a1, a2, a3);
  if ( v6 < 0 )
  {
    v11 = 543LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v6,
      v12);
    return (unsigned int)v6;
  }
  v7 = *(unsigned int *)(a1 + 348);
  if ( (v3 & 8) != 0 )
    v7 = 1LL;
  v12 = a1 + 332;
  v6 = CWindowBorder::SetBorderParameters(a2, a1 + 304, v7, *(unsigned int *)(a1 + 324));
  if ( v6 < 0 )
  {
    v11 = 558LL;
    goto LABEL_13;
  }
  if ( *(_QWORD *)(a1 + 256) )
    Microsoft::WRL::ComPtr<CVisual>::operator=(a2 + 256, **(_QWORD **)(a2 + 48));
  if ( !*(_QWORD *)(a1 + 248) )
    return 0LL;
  if ( *(_QWORD *)(a2 + 248) )
    return 0LL;
  BorderStructure = CWindowBorder::CreateBorderStructure((CWindowBorder *)a2);
  v9 = BorderStructure;
  if ( BorderStructure >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE0,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)BorderStructure,
    v12);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x239,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)v9,
    v13);
  return v9;
}
