/*
 * XREFs of ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x14004309C
 * Callers:
 *     ?PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x140042F60 (-PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropert.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z @ 0x1400432F0 (-FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z.c)
 *     ?ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PEAVCFlipContentToken@@@Z @ 0x140047F38 (-ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PE.c)
 *     Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x140073F20 (Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FindProperty@CFlipPropertySetBase@@QEAAXAEBU_GUID@@PEAIPEAPEBX@Z @ 0x14009F79C (-FindProperty@CFlipPropertySetBase@@QEAAXAEBU_GUID@@PEAIPEAPEBX@Z.c)
 *     ?CreateCompleted@CFlipContentToken@@SAJ_KIPEBUtagRECT@@PEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1400A1548 (-CreateCompleted@CFlipContentToken@@SAJ_KIPEBUtagRECT@@PEAVCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CContentResourceState::CreateUpdateTokens(
        CContentResourceState *this,
        struct CEndpointResourceStateManager *a2,
        struct CFlipPropertySet *a3,
        char a4,
        struct _LIST_ENTRY *a5)
{
  const struct tagRECT *v5; // rbp
  struct CompositionSurfaceObject *v9; // r14
  unsigned int v10; // ebx
  unsigned int PoolBufferIndex; // esi
  __int64 v12; // rdx
  CFlipPropertySetBase *v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 Win32kImportTable; // rax
  struct CFlipContentToken *v16; // rbx
  struct CFlipContentToken *v17; // r8
  struct _LIST_ENTRY *v18; // rax
  struct _LIST_ENTRY *v19; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  void *v22; // [rsp+30h] [rbp-28h] BYREF
  struct CFlipContentToken *v23; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0LL;
  v9 = *(struct CompositionSurfaceObject **)(*((_QWORD *)this + 3) + 48LL);
  if ( v9 && *((_QWORD *)this + 7) && (*((_BYTE *)this + 64) & 1) != 0 )
  {
    v10 = 0;
    v22 = 0LL;
    if ( a4 )
    {
      PoolBufferIndex = 0;
    }
    else
    {
      v12 = *((_QWORD *)this + 6);
      if ( v12 )
        PoolBufferIndex = CEndpointResourceStateManager::FindPoolBufferIndex(a2, *(_QWORD *)(v12 + 40));
      else
        PoolBufferIndex = -1;
    }
    if ( (unsigned int)Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline() )
    {
      v13 = (CFlipPropertySetBase *)*((_QWORD *)this + 5);
      if ( v13 )
      {
        LODWORD(v23) = 0;
        CFlipPropertySetBase::FindProperty(v13, &stru_14013A258, (unsigned int *)&v23, (const void **)&v22);
        v5 = (const struct tagRECT *)v22;
        if ( v22 )
        {
          if ( ((unsigned __int8)v23 & 0xF) == 0 )
            v10 = (unsigned int)v23 >> 4;
        }
      }
    }
    v14 = *((_QWORD *)this + 7);
    v23 = 0LL;
    LODWORD(v5) = CFlipContentToken::CreateCompleted(v14, v10, v5, v9, &v23);
    Win32kImportTable = DxgkGetWin32kImportTable();
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(Win32kImportTable + 296))(
      *((_QWORD *)this + 3),
      *((_QWORD *)v9 + 3),
      *((_QWORD *)this + 7),
      PoolBufferIndex);
    if ( (int)v5 >= 0 )
    {
      v16 = v23;
      v17 = v23;
      *((_DWORD *)v23 + 28) = PoolBufferIndex;
      CContentResourceState::ApplyPresentAttributeMetadataToUpdateToken(this, a3, v17);
      v18 = a5;
      v19 = (struct _LIST_ENTRY *)((char *)v16 + 8);
      Blink = a5->Blink;
      if ( Blink->Flink != a5 )
        __fastfail(3u);
      v19->Flink = a5;
      v19->Blink = Blink;
      Blink->Flink = v19;
      v18->Blink = v19;
    }
  }
  return (unsigned int)v5;
}
