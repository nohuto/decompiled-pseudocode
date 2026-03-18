/*
 * XREFs of ?Create@CubicBezierInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@MMMMPEAPEAVKeyframeInterpolation@@@Z @ 0x1801D689C
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18029E040 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CubicBezierInterpolation::Create(int a1, float a2, float a3, float a4, float a5, float **a6)
{
  float v7; // xmm7_4
  float v8; // xmm9_4
  float v9; // xmm8_4
  float v10; // xmm6_4
  HANDLE ProcessHeap; // rax
  char *v12; // rax
  float *v13; // rbx
  void *retaddr; // [rsp+68h] [rbp+0h]

  v7 = a3;
  if ( a2 < 0.0 )
    v8 = 0.0;
  else
    v8 = fminf(1.0, a2);
  if ( a4 < 0.0 )
    v9 = 0.0;
  else
    v9 = fminf(1.0, a4);
  if ( !_finite(a3) )
    v7 = 0.0;
  v10 = a5;
  if ( !_finite(a5) )
    v10 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  ProcessHeap = GetProcessHeap();
  v12 = (char *)HeapAlloc(ProcessHeap, 8u, 0x28uLL);
  v13 = (float *)v12;
  if ( !v12 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *(_QWORD *)(v12 + 12) = 0LL;
  *(_QWORD *)(v12 + 20) = 0LL;
  *(_QWORD *)(v12 + 28) = 0LL;
  *((_DWORD *)v12 + 9) = 0;
  *((_DWORD *)v12 + 2) = 0;
  *(_QWORD *)v12 = &CubicBezierInterpolation::`vftable';
  ((void (__fastcall *)(char *))CubicBezierInterpolation::`vftable')(v12);
  v13[6] = v8;
  v13[7] = v7;
  v13[8] = v9;
  v13[9] = v10;
  *((_DWORD *)v13 + 4) = a1;
  *a6 = v13;
  return 0LL;
}
