/*
 * XREFs of ?GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEA_NPEAUD2D_POINT_3F@@@Z @ 0x1800829F4
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180041140 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsSnapshot@CAnimationComponent@@QEAA_NXZ @ 0x1800427FC (-IsSnapshot@CAnimationComponent@@QEAA_NXZ.c)
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ @ 0x18009B10C (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ.c)
 *     ?SetStagingVisual@CAnimationComponent@@QEAAXPEAVCVisual@@@Z @ 0x1800A702C (-SetStagingVisual@CAnimationComponent@@QEAAXPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::GetSurfaceFromExistingAnimationComponent(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2,
        const struct tagRECT *a3,
        char a4,
        struct CImageLegacyMilBrushProxy **a5,
        struct CCachedVisualImageProxy **a6,
        bool *a7,
        struct D2D_POINT_3F *a8)
{
  unsigned int v11; // ebp
  __int64 i; // r10
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *v15; // r11
  __int64 v16; // rdx
  int v17; // eax
  int v18; // ecx
  struct CCachedVisualImageProxy *v19; // rbx
  struct CImageLegacyMilBrushProxy *BrushNoRef; // rdi
  CAnimatedTransitionVisual *v21; // rcx
  __int64 v22; // rdx
  CAnimatedTransitionVisual *v23; // rcx
  CAnimationComponent *v24; // r8
  CMILRefCountBase *v25; // rax
  int v26; // r14d
  bool IsSnapshot; // al
  __int64 v28; // r8
  struct CVisual *v29; // rdx
  bool v30; // r15
  __int64 v32; // [rsp+40h] [rbp+8h]

  v11 = -2147467259;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 34); i = (unsigned int)(i + 1) )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8 * i) + 16LL);
    if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
      && v13 == *((_QWORD *)a2 + 2)
      && CAnimationComponent::IsSnapshot(*(CAnimationComponent **)(*((_QWORD *)this + 14) + 8 * i)) == a4
      && (((*(_DWORD *)(v14 + 24) >> 26) ^ (*((_DWORD *)a2 + 6) >> 26)) & 1) == 0
      && (((*(_DWORD *)(v14 + 24) >> 28) ^ (*((_DWORD *)a2 + 6) >> 28)) & 1) == 0 )
    {
      v16 = *(_QWORD *)(v14 + 40);
      if ( v16 && !*(_BYTE *)(v16 + 927) && !*(_BYTE *)(v14 + 74) )
      {
        v17 = 0;
        if ( v15[2] - *v15 >= 0 )
          v17 = v15[2] - *v15;
        if ( v17 == *(_DWORD *)(v16 + 904) )
        {
          v18 = 0;
          if ( v15[3] - v15[1] >= 0 )
            v18 = v15[3] - v15[1];
          if ( v18 == HIDWORD(*(_QWORD *)(v16 + 904)) )
          {
            v19 = *(struct CCachedVisualImageProxy **)(v16 + 536);
            if ( v19 )
              CMILRefCountBase::AddRef(*(CMILRefCountBase **)(v16 + 536));
            BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef((CAnimatedTransitionVisual *)v16);
            if ( CAnimatedTransitionVisual::GetBrushNoRef(v21) )
            {
              v25 = CAnimatedTransitionVisual::GetBrushNoRef(v23);
              CMILRefCountBase::AddRef(v25);
            }
            v26 = *(_DWORD *)(v22 + 772);
            v32 = *(_QWORD *)(v22 + 764);
            IsSnapshot = CAnimationComponent::IsSnapshot(v24);
            v29 = *(struct CVisual **)(v28 + 32);
            v30 = IsSnapshot;
            if ( v29 )
              CAnimationComponent::SetStagingVisual(a2, v29);
            v11 = 0;
            if ( *a5 )
              CBaseObject::Release(*a5);
            *a5 = BrushNoRef;
            if ( BrushNoRef )
              CMILRefCountBase::AddRef(BrushNoRef);
            if ( *a6 )
              CBaseObject::Release(*a6);
            *a6 = v19;
            if ( v19 )
              CMILRefCountBase::AddRef(v19);
            *a7 = v30;
            *(_QWORD *)a8 = v32;
            *((_DWORD *)a8 + 2) = v26;
            if ( BrushNoRef )
              CBaseObject::Release(BrushNoRef);
            if ( v19 )
              CBaseObject::Release(v19);
          }
        }
      }
      return v11;
    }
  }
  return v11;
}
