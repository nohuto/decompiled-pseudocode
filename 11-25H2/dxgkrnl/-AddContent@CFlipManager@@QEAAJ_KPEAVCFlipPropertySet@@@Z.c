/*
 * XREFs of ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1400580A8
 * Callers:
 *     ?AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x140058038 (-AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x140009B60 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?AddResourceState@CEndpointResourceStateManager@@AEAAXPEAVCFlipResourceState@@PEAU_LIST_ENTRY@@@Z @ 0x140050CC8 (-AddResourceState@CEndpointResourceStateManager@@AEAAXPEAVCFlipResourceState@@PEAU_LIST_ENTRY@@@.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x140078D98 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009C454 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@PEAUPresentationSurfaceInfo@@@Z @ 0x14009E208 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@PEAUPresentat.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::AddContent(CFlipManager *this, __int64 a2, struct CFlipPropertySet *a3)
{
  unsigned __int64 v5; // r11
  unsigned int v6; // ebp
  int v7; // eax
  struct CFlipResourceState *v8; // rsi
  CEndpointResourceStateManager *v9; // rcx
  __int64 Win32kImportTable; // rax
  __int64 v11; // rbx
  void (__fastcall *v12)(__int64, _QWORD, __int64); // rdi
  unsigned int TracingId; // eax
  __int64 v14; // rax
  __int64 v15; // r9
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  struct CFlipResourceState *v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  if ( CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 72)) )
    return (unsigned int)-1073741811;
  v7 = CContentResource::Create(v5, a3, &v18, (struct PresentationSurfaceInfo *)&v17);
  v8 = v18;
  v6 = v7;
  if ( v7 >= 0 )
  {
    v9 = (CEndpointResourceStateManager *)*((_QWORD *)v18 + 3);
    if ( !*((_QWORD *)v9 + 6) )
      goto LABEL_9;
    Win32kImportTable = DxgkGetWin32kImportTable();
    v11 = *((_QWORD *)v8 + 3);
    v12 = *(void (__fastcall **)(__int64, _QWORD, __int64))(Win32kImportTable + 288);
    TracingId = CFlipManager::GetTracingId(this);
    v12(1LL, TracingId, v11);
    v14 = *((_QWORD *)this + 6);
    if ( !v14 )
    {
      *((_QWORD *)this + 6) = 1LL;
      if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline(v9) )
        *((_QWORD *)this + 41) = *((_QWORD *)&v17 + 1);
      *((_QWORD *)this + 3) = ExAllocatePool2(257LL, 22536LL, 1752187718LL, v15);
      goto LABEL_9;
    }
    if ( v14 == 1 )
    {
LABEL_9:
      CEndpointResourceStateManager::AddResourceState(v9, v8, (struct _LIST_ENTRY *)((char *)this + 72));
      v8 = 0LL;
      goto LABEL_10;
    }
    v6 = -1073741790;
  }
LABEL_10:
  if ( v8 )
    (*(void (__fastcall **)(struct CFlipResourceState *, __int64))(*(_QWORD *)v8 + 32LL))(v8, 1LL);
  return v6;
}
