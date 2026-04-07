/*
 * XREFs of ?CloneVisualTree@CDCompositionInteropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800B33E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000C2A0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Create@CDCompositionInteropVisual@@SAJPEAPEAV1@@Z @ 0x18002C03C (-Create@CDCompositionInteropVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A6278 (--1-$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDCompositionInteropVisual::CloneVisualTree(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  *a2 = 0LL;
  v6 = CDCompositionInteropVisual::Create(&v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 13LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"clientcore\\windows\\dwm\\udwm\\dcompositioninteropvisual.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<CDCompositionInteropVisual>::~ComPtr<CDCompositionInteropVisual>(&v11);
    return v7;
  }
  v6 = CVisual::InitializeVisualTreeClone(a1, (__int64 *)v11, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 14LL;
    goto LABEL_5;
  }
  *a2 = v11;
  return 0LL;
}
