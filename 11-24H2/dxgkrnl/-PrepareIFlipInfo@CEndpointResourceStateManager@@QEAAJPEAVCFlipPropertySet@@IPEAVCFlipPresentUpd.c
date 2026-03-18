/*
 * XREFs of ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14001A264
 * Callers:
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14001A590 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x140019094 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x140036F00 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     ?FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z @ 0x1400432F0 (-FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z.c)
 *     ??$FindProperty@UPresentParametersInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentParametersInfo@@@Z @ 0x140048024 (--$FindProperty@UPresentParametersInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentParametersInfo.c)
 *     ??$FindProperty@UPresentedContentUpdateInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContentUpdateInfo@@@Z @ 0x14004C204 (--$FindProperty@UPresentedContentUpdateInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContent.c)
 *     ?IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z @ 0x140050248 (-IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z.c)
 *     ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x1400502B8 (--_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z.c)
 *     Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x140073F20 (Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FindProperty@CFlipPropertySetBase@@QEAAXAEBU_GUID@@PEAIPEAPEBX@Z @ 0x14009F79C (-FindProperty@CFlipPropertySetBase@@QEAAXAEBU_GUID@@PEAIPEAPEBX@Z.c)
 *     memset @ 0x1400A2000 (memset.c)
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
  void *v10; // rdi
  CEndpointResourceStateManager *v11; // rcx
  struct CFlipResourceState *ResourceState; // rax
  __int64 v13; // r11
  CFlipPropertySetBase *v14; // rsi
  struct CFlipResourceState *v15; // r12
  void *v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // r15
  __int128 v20; // xmm0
  __int64 v21; // rdx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 v24; // r11
  __int128 v25; // xmm1
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  struct _LIST_ENTRY *v28; // r11
  __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  bool v31; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v32; // [rsp+24h] [rbp-5Ch] BYREF
  __int64 v33; // [rsp+28h] [rbp-58h] BYREF
  _BYTE *v34; // [rsp+30h] [rbp-50h] BYREF
  void *v35[9]; // [rsp+38h] [rbp-48h] BYREF

  v5 = 0;
  v34 = 0LL;
  v33 = 0LL;
  v8 = 0LL;
  Pool2 = (void *)ExAllocatePool2(257LL, 112LL, 1768506182LL);
  v10 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memset(Pool2, 0, 0x70uLL);
  *((_QWORD *)v10 + 4) = this[2].Flink;
  *((_QWORD *)v10 + 6) = this[2].Blink;
  if ( !CEndpointResourceStateManager::IsSimpleUpdatePresent(a4) )
    goto LABEL_24;
  ResourceState = CEndpointResourceStateManager::FindResourceState(
                    v11,
                    *(_QWORD *)(*((_QWORD *)a4 + 6) + 8LL),
                    this + 1);
  v14 = *(CFlipPropertySetBase **)(v13 + 24);
  v15 = ResourceState;
  if ( !v14 )
    goto LABEL_24;
  CFlipPropertySetBase::FindProperty<PresentedContentUpdateInfo>(*(_QWORD *)(v13 + 24), &v34);
  if ( v34 )
  {
    if ( (*v34 & 8) == 0 )
    {
      v33 = *((_QWORD *)v15 + 6);
      if ( v33 )
        v8 = *(CompositionSurfaceObject **)(*((_QWORD *)v15 + 3) + 48LL);
    }
  }
  if ( (unsigned int)Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline() )
  {
    v32 = 0;
    v35[0] = 0LL;
    CFlipPropertySetBase::FindProperty(v14, &stru_14013A238, &v32, (const void **)v35);
    v16 = v35[0];
    if ( v35[0] )
    {
      if ( (v32 & 0xF) == 0 )
      {
        *((_DWORD *)v10 + 6) = v32 >> 4;
        *((_QWORD *)v10 + 2) = v16;
      }
    }
  }
  if ( !v8 )
  {
LABEL_24:
    *a5 = (struct FlipManagerTokenIFlipInfo *)v10;
    return v5;
  }
  v18 = ExAllocatePool2(65LL, 64LL, 1767981894LL);
  if ( v18 )
  {
    memset(&v35[1], 0, 0x40uLL);
    v20 = *(_OWORD *)&v35[1];
    v21 = v33;
    v22 = *(_OWORD *)&v35[3];
    *((_QWORD *)v10 + 6) = *((_QWORD *)v15 + 7);
    *(_OWORD *)v18 = v20;
    *((_BYTE *)v10 + 92) = 1;
    v23 = *(_OWORD *)&v35[5];
    v24 = *((_QWORD *)v8 + 3);
    *(_OWORD *)(v18 + 16) = v22;
    *((_QWORD *)v10 + 4) = v24;
    v25 = *(_OWORD *)&v35[7];
    v26 = *(_QWORD *)(v21 + 40);
    *(_OWORD *)(v18 + 32) = v23;
    *(_OWORD *)(v18 + 48) = v25;
    *(_QWORD *)v18 = 64LL;
    *((_DWORD *)v10 + 10) = CEndpointResourceStateManager::FindPoolBufferIndex(
                              (CEndpointResourceStateManager *)this,
                              v26);
    *(_QWORD *)v10 = v34;
    v27 = *((_QWORD *)v15 + 3);
    v33 = 0LL;
    *((_QWORD *)v10 + 12) = *(_QWORD *)(v27 + 40);
    *((_QWORD *)v10 + 13) = v18;
    this[2].Flink = v28;
    *(_DWORD *)(v18 + 8) = a3;
    this[2].Blink = (struct _LIST_ENTRY *)*((_QWORD *)v10 + 6);
    v29 = 0LL;
    if ( a2 )
    {
      CFlipPropertySetBase::FindProperty<PresentParametersInfo>(a2, &v33);
      v29 = v33;
      if ( v33 )
      {
        *(_DWORD *)(v18 + 12) = *(_DWORD *)(v33 + 8);
        if ( *(_BYTE *)(v29 + 12) )
        {
          v30 = *((_QWORD *)v10 + 6);
          v31 = 0;
          if ( (int)CompositionSurfaceObject::GetIndependentFlipNotifyDwm(v8, v30, &v31) >= 0 && v31 )
            *(_WORD *)(v29 + 12) = 0;
        }
      }
    }
    *((_QWORD *)v10 + 1) = v29;
    goto LABEL_24;
  }
  FlipManagerTokenIFlipInfo::`scalar deleting destructor'(v10, v17);
  return (unsigned int)-1073741801;
}
