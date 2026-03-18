/*
 * XREFs of ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x180092F70
 * Callers:
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18007BC84 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180091730 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A5180 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetParentInputSink@CInputSinkContext@@KAPEAXPEBVCVisual@@@Z @ 0x180199294 (-GetParentInputSink@CInputSinkContext@@KAPEAXPEBVCVisual@@@Z.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180231240 (-SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall CVisual::GetInputHandle(CVisual *this)
{
  _DWORD *v1; // r9
  void *result; // rax
  __int64 v3; // rcx
  _BYTE *v4; // r8
  __int64 i; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v1 = (_DWORD *)*((_QWORD *)this + 29);
  result = 0LL;
  if ( (*v1 & 0x1000000) != 0 )
  {
    v3 = (unsigned int)v1[1];
    v4 = v1 + 2;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v3; ++v4 )
    {
      if ( *v4 == 8 )
        break;
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)i >= (unsigned int)v3 )
      v6 = 0LL;
    else
      v6 = (__int64 *)((char *)v1 + 8 * i - (((_BYTE)v3 + 15) & 7) + v3 + 15);
    v7 = *v6;
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 112);
      if ( v8 )
        return *(void **)(v8 + 64);
    }
  }
  return result;
}
