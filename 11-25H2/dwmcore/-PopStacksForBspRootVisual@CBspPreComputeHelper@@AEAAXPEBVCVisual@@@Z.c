/*
 * XREFs of ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801B4C20
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x18010ACD0 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBspPreComputeHelper::PopStacksForBspRootVisual(CBspPreComputeHelper *this, const struct CVisual *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rcx

  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((__int64)this + 240);
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v2 + 216);
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v3 + 192);
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v4 + 168);
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v5 + 144);
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v6 + 120);
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v7 + 96);
  v9 = *(_DWORD *)(v8 + 80);
  if ( v9 )
    *(_DWORD *)(v8 + 80) = v9 - 1;
  v10 = *(_DWORD *)(v8 + 56);
  if ( v10 )
    *(_DWORD *)(v8 + 56) = v10 - 1;
  v11 = *(_DWORD *)(v8 + 32);
  if ( v11 )
    *(_DWORD *)(v8 + 32) = v11 - 1;
  v12 = *(_DWORD *)(v8 + 8);
  if ( v12 )
  {
    v13 = v12 - 1;
    *(_DWORD *)(v8 + 8) = v13;
    v14 = *(_QWORD *)(*(_QWORD *)v8 + 8LL * v13);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  }
}
