/*
 * XREFs of ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180006730
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x1800067AC (-Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000BD30 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A6278 (--1-$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAtlasedRectsVisual::CloneVisualTree(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CAtlasedRectsVisual *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0LL;
  *a2 = 0LL;
  v6 = CAtlasedRectsVisual::Create(&v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 263LL;
  }
  else
  {
    v6 = CAtlasedRectsVisual::InitializeVisualTreeClone(a1, v12, a3);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *a2 = v12;
      return 0LL;
    }
    v9 = 264LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\atlasedrectsvisual.cpp",
    (const char *)(unsigned int)v6,
    v10);
  Microsoft::WRL::ComPtr<CDCompositionInteropVisual>::~ComPtr<CDCompositionInteropVisual>(&v12);
  return v7;
}
