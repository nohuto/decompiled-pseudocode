/*
 * XREFs of ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14000AD24
 * Callers:
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14000B060 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x140009B60 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x140037510 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     ?FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z @ 0x140043614 (-FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z.c)
 *     ??$FindProperty@UPresentParametersInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentParametersInfo@@@Z @ 0x1400487F4 (--$FindProperty@UPresentParametersInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentParametersInfo.c)
 *     ??$FindProperty@UPresentedContentUpdateInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContentUpdateInfo@@@Z @ 0x14004C754 (--$FindProperty@UPresentedContentUpdateInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContent.c)
 *     ?IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z @ 0x1400507C8 (-IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z.c)
 *     ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x140050838 (--_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z.c)
 *     Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x140073430 (Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x140073484 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FindProperty@CFlipPropertySetBase@@QEAAXAEBU_GUID@@PEAIPEAPEBX@Z @ 0x14009D43C (-FindProperty@CFlipPropertySetBase@@QEAAXAEBU_GUID@@PEAIPEAPEBX@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareIFlipInfo(
        struct _LIST_ENTRY *this,
        struct CFlipPropertySet *a2,
        int a3,
        struct CFlipPresentUpdate *a4,
        struct FlipManagerTokenIFlipInfo **a5)
{
  unsigned int v5; // ebx
  CompositionSurfaceObject *v8; // r13
  void *Pool2; // rax
  void *v10; // rsi
  CEndpointResourceStateManager *v11; // rcx
  struct CFlipResourceState *ResourceState; // rax
  __int64 v13; // r11
  CFlipPropertySetBase *v14; // r14
  struct CFlipResourceState *v15; // r12
  __int64 v16; // r9
  void *v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // r15
  __int128 v21; // xmm0
  __int64 v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // r11
  __int128 v26; // xmm1
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  struct _LIST_ENTRY *v29; // r11
  __int64 v30; // r14
  unsigned __int64 v31; // rdx
  bool v32; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v33; // [rsp+24h] [rbp-5Ch] BYREF
  __int64 v34; // [rsp+28h] [rbp-58h] BYREF
  _BYTE *v35; // [rsp+30h] [rbp-50h] BYREF
  void *v36[9]; // [rsp+38h] [rbp-48h] BYREF

  v5 = 0;
  v35 = 0LL;
  v34 = 0LL;
  v8 = 0LL;
  Pool2 = (void *)ExAllocatePool2(257LL, 112LL, 1768506182LL, a4);
  v10 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memset(Pool2, 0, 0x70uLL);
  *((_QWORD *)v10 + 4) = this[2].Flink;
  *((_QWORD *)v10 + 6) = this[2].Blink;
  if ( !CEndpointResourceStateManager::IsSimpleUpdatePresent(a4) )
    goto LABEL_25;
  ResourceState = CEndpointResourceStateManager::FindResourceState(
                    v11,
                    *(_QWORD *)(*((_QWORD *)a4 + 6) + 8LL),
                    this + 1);
  v14 = *(CFlipPropertySetBase **)(v13 + 24);
  v15 = ResourceState;
  if ( !v14 )
    goto LABEL_25;
  CFlipPropertySetBase::FindProperty<PresentedContentUpdateInfo>(*(_QWORD *)(v13 + 24), &v35);
  if ( v35 )
  {
    if ( (*v35 & 8) == 0 )
    {
      v34 = *((_QWORD *)v15 + 6);
      if ( v34 )
        v8 = *(CompositionSurfaceObject **)(*((_QWORD *)v15 + 3) + 48LL);
    }
  }
  if ( (unsigned int)Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline() )
  {
    v33 = 0;
    v36[0] = 0LL;
    CFlipPropertySetBase::FindProperty(v14, &stru_1401376F8, &v33, (const void **)v36);
    v17 = v36[0];
    if ( v36[0] )
    {
      if ( (v33 & 0xF) == 0 )
      {
        *((_DWORD *)v10 + 6) = v33 >> 4;
        *((_QWORD *)v10 + 2) = v17;
      }
    }
  }
  if ( !v8 )
  {
LABEL_25:
    *a5 = (struct FlipManagerTokenIFlipInfo *)v10;
    return v5;
  }
  v19 = ExAllocatePool2(65LL, 64LL, 1767981894LL, v16);
  if ( v19 )
  {
    memset(&v36[1], 0, 0x40uLL);
    v21 = *(_OWORD *)&v36[1];
    v22 = v34;
    v23 = *(_OWORD *)&v36[3];
    *((_QWORD *)v10 + 6) = *((_QWORD *)v15 + 7);
    *(_OWORD *)v19 = v21;
    *((_BYTE *)v10 + 92) = 1;
    v24 = *(_OWORD *)&v36[5];
    v25 = *((_QWORD *)v8 + 3);
    *(_OWORD *)(v19 + 16) = v23;
    *((_QWORD *)v10 + 4) = v25;
    v26 = *(_OWORD *)&v36[7];
    v27 = *(_QWORD *)(v22 + 40);
    *(_OWORD *)(v19 + 32) = v24;
    *(_OWORD *)(v19 + 48) = v26;
    *(_QWORD *)v19 = 64LL;
    *((_DWORD *)v10 + 10) = CEndpointResourceStateManager::FindPoolBufferIndex(
                              (CEndpointResourceStateManager *)this,
                              v27);
    *(_QWORD *)v10 = v35;
    v28 = *((_QWORD *)v15 + 3);
    v34 = 0LL;
    *((_QWORD *)v10 + 12) = *(_QWORD *)(v28 + 40);
    *((_QWORD *)v10 + 13) = v19;
    this[2].Flink = v29;
    *(_DWORD *)(v19 + 8) = a3;
    this[2].Blink = (struct _LIST_ENTRY *)*((_QWORD *)v10 + 6);
    v30 = 0LL;
    if ( a2 )
    {
      CFlipPropertySetBase::FindProperty<PresentParametersInfo>(a2, &v34);
      v30 = v34;
      if ( v34 )
      {
        *(_DWORD *)(v19 + 12) = *(_DWORD *)(v34 + 8);
        if ( *(_BYTE *)(v30 + 12) )
        {
          v31 = *((_QWORD *)v10 + 6);
          v32 = 0;
          if ( (int)CompositionSurfaceObject::GetIndependentFlipNotifyDwm(v8, v31, &v32) >= 0 && v32 )
          {
            *(_BYTE *)(v30 + 12) = 0;
            if ( (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() )
              *(_BYTE *)(v30 + 13) = 0;
          }
        }
      }
    }
    *((_QWORD *)v10 + 1) = v30;
    goto LABEL_25;
  }
  FlipManagerTokenIFlipInfo::`scalar deleting destructor'(v10, v18);
  return (unsigned int)-1073741801;
}
