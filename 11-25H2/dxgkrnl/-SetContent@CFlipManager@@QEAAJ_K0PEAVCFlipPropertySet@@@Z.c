/*
 * XREFs of ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x140009A40
 * Callers:
 *     ?SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x140009CD4 (-SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x140009B60 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x140009FBC (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x14000A86C (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z @ 0x140043614 (-FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009C454 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::SetContent(
        CFlipManager *this,
        __int64 a2,
        unsigned __int64 a3,
        struct CFlipPropertySet *a4)
{
  unsigned int v7; // ebp
  struct CFlipResourceState *ResourceState; // rbx
  CEndpointResourceStateManager *v9; // rcx
  unsigned __int64 v10; // r11
  struct CFlipResourceState *v11; // rdi
  struct CPoolBufferResource *v12; // rbx
  __int64 Win32kImportTable; // rax
  unsigned int PoolBufferIndex; // r14d
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdi
  void (__fastcall *v19)(_QWORD, __int64, __int64, _QWORD); // rsi
  unsigned int TracingId; // eax

  v7 = 0;
  ResourceState = CEndpointResourceStateManager::FindResourceState(this, a3, (struct _LIST_ENTRY *)((char *)this + 56));
  v11 = CEndpointResourceStateManager::FindResourceState(v9, v10, (struct _LIST_ENTRY *)((char *)this + 72));
  if ( v11 && (*((_QWORD *)this + 6) == 1LL || ResourceState && !*(_DWORD *)(*((_QWORD *)ResourceState + 3) + 80LL)) )
  {
    if ( ResourceState )
      v12 = (struct CPoolBufferResource *)*((_QWORD *)ResourceState + 3);
    else
      v12 = 0LL;
    CContentResourceState::SetBoundBuffer(v11, v12);
    CContentResourceState::SetBoundPropertySet(v11, a4);
    Win32kImportTable = DxgkGetWin32kImportTable();
    if ( (*(unsigned int (**)(void))(Win32kImportTable + 232))() )
    {
      if ( v12 )
        PoolBufferIndex = CEndpointResourceStateManager::FindPoolBufferIndex((CFlipManager *)((char *)this + 56), a3);
      else
        PoolBufferIndex = -1;
      v16 = DxgkGetWin32kImportTable();
      v17 = *((_QWORD *)v11 + 6);
      v18 = *((_QWORD *)v11 + 3);
      v19 = *(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v16 + 224);
      TracingId = CFlipManager::GetTracingId(this);
      v19(TracingId, v18, v17, PoolBufferIndex);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
