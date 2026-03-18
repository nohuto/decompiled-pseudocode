/*
 * XREFs of ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800B6FD0
 * Callers:
 *     ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z @ 0x180009D78 (-GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800193E0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x18001BD40 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?ProcessVisuals@CPreWalkVisual@@SAXXZ @ 0x18001E4A0 (-ProcessVisuals@CPreWalkVisual@@SAXXZ.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800963E0 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B42D0 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B5890 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B6CE0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x18010ACEC (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1801362F0 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x180169268 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18016F850 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 * Callees:
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x18001E1C0 (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180024D70 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ??9CMILMatrix@@QEBA_NAEBV0@@Z @ 0x180096900 (--9CMILMatrix@@QEBA_NAEBV0@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasInteraction@CVisual@@QEBA_NXZ @ 0x1800FA870 (-HasInteraction@CVisual@@QEBA_NXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180137C40 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180139730 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801EB924 (McTemplateU0x_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVisual::EnsureWorldTransform(CVisual *this, const struct CVisualTree *a2, RTL_SRWLOCK *a3)
{
  const struct CTreeData *ParentTreeData; // rax
  const struct CTreeData *v7; // rsi
  PVOID v8; // rbx
  const struct CMILMatrix *v9; // rbx
  bool v10; // zf
  struct CMILMatrix *v11; // rax
  _BOOL8 v12; // r8
  _BYTE *v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rcx
  _QWORD *v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct CInteraction *InteractionInternal; // rax
  HANDLE ProcessHeap; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  HANDLE v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  bool v30; // [rsp+30h] [rbp-D0h] BYREF
  bool v31; // [rsp+31h] [rbp-CFh] BYREF
  CVisual *v32; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v33[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+80h] [rbp-80h]
  _BYTE v35[64]; // [rsp+90h] [rbp-70h] BYREF
  int v36; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+E0h] [rbp-20h] BYREF
  CVisual **v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  void *retaddr; // [rsp+148h] [rbp+48h]

  v30 = 0;
  ParentTreeData = CVisual::GetParentTreeData(this, a2, (struct CTreeData *)a3, &v30);
  v7 = ParentTreeData;
  if ( ParentTreeData )
  {
    v8 = (PVOID)*((_QWORD *)ParentTreeData + 28);
  }
  else
  {
    v8 = 0LL;
    if ( g_pComposition )
      v8 = (PVOID)*((_QWORD *)g_pComposition + 111);
  }
  if ( a3[28].Ptr < v8 )
  {
    AcquireSRWLockExclusive(a3 + 30);
    if ( a3[28].Ptr < v8 )
    {
      v9 = 0LL;
      if ( v7 )
        v9 = (const struct CTreeData *)((char *)v7 + 272);
      v10 = *((_QWORD *)this + 31) == 0LL;
      v11 = (struct CMILMatrix *)v35;
      v34 = 0;
      if ( v10 )
        v11 = 0LL;
      v36 = 0;
      v31 = 0;
      CVisual::CalcTransform(this, (CVisual **)a2, v9, &v31, (struct CMILMatrix *)v33, v11);
      if ( v30 || !v9 )
      {
        LOBYTE(v12) = 1;
      }
      else if ( v31 )
      {
        v12 = CMILMatrix::operator!=((float *)v9, (float *)v33);
      }
      else
      {
        LOBYTE(v12) = 0;
      }
      v13 = v35;
      if ( !*((_QWORD *)this + 31) )
        v13 = 0LL;
      if ( (*((unsigned __int8 (__fastcall **)(RTL_SRWLOCK *, _OWORD *, _BOOL8, _BYTE *))a3->Ptr + 6))(
             a3,
             v33,
             v12,
             v13) )
      {
        if ( CVisual::HasInteraction(this) && (*((_BYTE *)this + 105) & 0x20) != 0 )
        {
          v14 = *((_QWORD *)this + 3);
          v15 = *(_QWORD *)(v14 + 640);
          if ( v15 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
            v16 = *(_QWORD **)(v14 + 640);
            if ( v16 )
            {
              v17 = v16[2];
              if ( GetCurrentThreadId() == *(_DWORD *)(v17 + 5712) )
              {
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
                {
                  v32 = this;
                  v38 = &v32;
                  v39 = 8LL;
                  McGenEventWrite_EventWriteTransfer(
                    &Microsoft_Windows_Dwm_Core_Provider_Context,
                    &MIDMANIPULATION_UPDATE_VISUAL_PROP,
                    v19,
                    2u,
                    &v37);
                }
                InteractionInternal = CVisual::GetInteractionInternal(this);
                if ( InteractionInternal )
                {
                  *((_OWORD *)InteractionInternal + 8) = v33[0];
                  *((_OWORD *)InteractionInternal + 9) = v33[1];
                  *((_OWORD *)InteractionInternal + 10) = v33[2];
                  *((_OWORD *)InteractionInternal + 11) = v33[3];
                  *((_DWORD *)InteractionInternal + 48) = v34;
                }
              }
              else
              {
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
                  McTemplateU0x_EventWriteTransfer(v18, &MIDMANIPULATION_UPDATE_VISUAL_PROP, this);
                ProcessHeap = GetProcessHeap();
                v22 = HeapAlloc(ProcessHeap, 0, 0x48uLL);
                v23 = v22;
                if ( v22 )
                {
                  *v22 = 4LL;
                  v22[3] = 0LL;
                  v22[4] = 0LL;
                  v22[5] = 0LL;
                  v22[6] = 0LL;
                  v22[7] = 0LL;
                  v22[8] = 0LL;
                  v22[1] = 0LL;
                  v22[2] = 0LL;
                  Microsoft::WRL::ComPtr<CVisual>::operator=(v22 + 1, this);
                  Microsoft::WRL::ComPtr<CVisual>::operator=(v23 + 2, 0LL);
                  *((_DWORD *)v23 + 6) = 0;
                  v23[4] = 0LL;
                  EnterCriticalSection(&stru_180405178);
                  if ( byte_180405174 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147023781, 0x97u, 0LL);
                    LeaveCriticalSection(&stru_180405178);
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147023781, 0x253u, 0LL);
                    v24 = v23[2];
                    if ( v24 )
                    {
                      v23[2] = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
                    }
                    v25 = v23[1];
                    if ( v25 )
                    {
                      v23[1] = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
                    }
                    operator delete(v23, 0x48uLL);
                  }
                  else
                  {
                    v26 = GetProcessHeap();
                    v27 = HeapAlloc(v26, 0, 0x18uLL);
                    if ( !v27 )
                      ModuleFailFastForHRESULT(-2147024882, retaddr);
                    *v27 = 0LL;
                    v27[1] = 0LL;
                    v27[2] = v23;
                    v28 = off_180405168;
                    if ( *off_180405168 != (_UNKNOWN *)&CManipulationManager::s_InteractionUpdateQueue )
                      __fastfail(3u);
                    v27[1] = off_180405168;
                    *v27 = &CManipulationManager::s_InteractionUpdateQueue;
                    *v28 = v27;
                    ++dword_180405170;
                    off_180405168 = (_UNKNOWN **)v27;
                    LeaveCriticalSection(&stru_180405178);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x23Fu, 0LL);
                }
              }
              (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
            }
          }
        }
      }
    }
    if ( a3 != (RTL_SRWLOCK *)-240LL )
      ReleaseSRWLockExclusive(a3 + 30);
  }
  return a3[28].Ptr == *(PVOID *)(*((_QWORD *)a3[31].Ptr + 3) + 888LL);
}
