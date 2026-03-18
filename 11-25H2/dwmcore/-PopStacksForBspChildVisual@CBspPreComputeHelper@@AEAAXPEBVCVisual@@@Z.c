/*
 * XREFs of ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801DE534
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x18010ACD0 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 */

void __fastcall CBspPreComputeHelper::PopStacksForBspChildVisual(CBspPreComputeHelper *this, const struct CVisual *a2)
{
  CBspPreComputeHelper *v2; // r8
  __int64 v3; // rcx
  float v4; // xmm1_4
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 i; // rcx

  v2 = this;
  if ( (*((_BYTE *)a2 + 105) & 0x10) != 0 )
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((__int64)this + 216);
  v3 = *((_QWORD *)a2 + 28);
  if ( (*(_DWORD *)(v3 + 4) & 0x8000000) != 0 )
  {
    for ( i = v3 + 12; (*(_DWORD *)i & 0x7F000000) != 0x5000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    v4 = *(float *)(i + 4);
  }
  else
  {
    v4 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v4 - 1.0) & _xmm) >= 0.0000011920929 )
  {
    v5 = *((_DWORD *)v2 + 50);
    if ( v5 )
      *((_DWORD *)v2 + 50) = v5 - 1;
  }
  if ( (*((_DWORD *)a2 + 24) & 0x8000000) != 0 )
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((__int64)v2 + 168);
  if ( (*((_DWORD *)a2 + 24) & 0x4000000) != 0 )
  {
    v9 = *((_DWORD *)v2 + 38);
    if ( v9 )
      *((_DWORD *)v2 + 38) = v9 - 1;
  }
  if ( (*((_DWORD *)a2 + 24) & 0x2000000) != 0 )
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((__int64)v2 + 120);
  if ( (*((_DWORD *)a2 + 24) & 0x20000000) != 0 )
  {
    v8 = *((_DWORD *)v2 + 26);
    if ( v8 )
      *((_DWORD *)v2 + 26) = v8 - 1;
  }
  v6 = *((_DWORD *)v2 + 20);
  if ( v6 )
    *((_DWORD *)v2 + 20) = v6 - 1;
  v7 = *((_DWORD *)v2 + 62);
  if ( v7 )
    *((_DWORD *)v2 + 62) = v7 - 1;
}
