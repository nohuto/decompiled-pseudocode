/*
 * XREFs of ?Create@StepInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@HHH_N1PEAPEAVKeyframeInterpolation@@@Z @ 0x1801D6DFC
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18029E040 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall StepInterpolation::Create(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        _QWORD *a7)
{
  int v8; // ebp
  unsigned __int8 v9; // si
  unsigned __int8 v10; // bl
  int v11; // r14d
  int v12; // r15d
  HANDLE ProcessHeap; // rax
  _OWORD *v14; // rax
  _OWORD *v15; // rdi
  void *retaddr; // [rsp+48h] [rbp+0h]

  v8 = 1;
  if ( a2 >= 1 )
    v8 = a2;
  if ( a3 < 0 )
  {
    a3 = 0;
  }
  else if ( v8 < a3 )
  {
    a3 = v8;
  }
  if ( a4 < a3 )
  {
    a4 = a3;
  }
  else if ( v8 < a4 )
  {
    a4 = v8;
  }
  v9 = a5;
  if ( a4 - a3 == 1 )
  {
    v10 = a6;
    if ( a5 && a6 )
      goto LABEL_12;
  }
  else if ( a4 == a3 )
  {
    if ( a5 || (v10 = a6) != 0 )
    {
      v9 = 0;
LABEL_12:
      v10 = 0;
    }
  }
  else
  {
    v10 = a6;
  }
  v11 = a3 + 1;
  v12 = a4 - 1;
  if ( !v9 )
    v11 = a3;
  if ( !v10 )
    v12 = a4;
  ProcessHeap = GetProcessHeap();
  v14 = HeapAlloc(ProcessHeap, 8u, 0x30uLL);
  v15 = v14;
  if ( !v14 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *v14 = 0LL;
  v14[1] = 0LL;
  v14[2] = 0LL;
  *(_QWORD *)v14 = &StepInterpolation::`vftable';
  ((void (__fastcall *)(_OWORD *))StepInterpolation::`vftable')(v14);
  *((_DWORD *)v15 + 9) = v9;
  *((_DWORD *)v15 + 10) = v10;
  *((float *)v15 + 11) = 1.0 / (float)(v12 - v11 + 1);
  *((_DWORD *)v15 + 6) = v8;
  *((_DWORD *)v15 + 4) = a1;
  *((_DWORD *)v15 + 7) = v11;
  *((_DWORD *)v15 + 8) = v12;
  *a7 = v15;
  return 0LL;
}
