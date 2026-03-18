/*
 * XREFs of ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18000E7D0
 * Callers:
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18000CD84 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18000ED10 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z @ 0x180036520 (-ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18008F850 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x180182CC0 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CVisual::GetOpacityInternal(CVisual *this)
{
  __int64 v1; // rax
  int v3; // edx
  float *v4; // rcx

  v1 = *((_QWORD *)this + 28);
  if ( (*(_DWORD *)(v1 + 4) & 0x8000000) == 0 )
    return *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v3 = *(_DWORD *)(v1 + 12);
  v4 = (float *)(v1 + 12);
  if ( (v3 & 0x7F000000) != 0x5000000 )
  {
    do
    {
      v4 = (float *)((char *)v4 + (v3 & 0xFFFFFF) + 4);
      v3 = *(_DWORD *)v4;
    }
    while ( (*(_DWORD *)v4 & 0x7F000000) != 0x5000000 );
  }
  return v4[1];
}
