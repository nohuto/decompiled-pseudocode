/*
 * XREFs of ?AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x140050650
 * Callers:
 *     ?AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1400505D0 (-AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x140019094 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?AddResourceState@CEndpointResourceStateManager@@AEAAXPEAVCFlipResourceState@@PEAU_LIST_ENTRY@@@Z @ 0x140050738 (-AddResourceState@CEndpointResourceStateManager@@AEAAXPEAVCFlipResourceState@@PEAU_LIST_ENTRY@@@.c)
 *     ?Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x14005076C (-Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAV.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009E7B4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::AddPoolBuffer(
        CFlipManager *this,
        __int64 a2,
        void *a3,
        const struct _LUID *a4,
        struct CFlipPropertySet *a5)
{
  __int64 v6; // rdi
  unsigned __int64 v8; // rdx
  const struct _LUID *v9; // r11
  CEndpointResourceStateManager *v10; // rcx
  int v11; // esi
  struct CFlipResourceState *v12; // rbx
  __int64 Win32kImportTable; // rax
  __int64 v14; // rbx
  void (__fastcall *v15)(_QWORD, __int64, __int64); // r14
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int TracingId; // eax
  struct CFlipResourceState *v21; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  v21 = 0LL;
  if ( CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 56)) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v11 = CPoolBufferResource::Create(this, v8, a3, v9, a5, &v21);
    if ( v11 >= 0 )
    {
      v12 = v21;
      CEndpointResourceStateManager::AddResourceState(v10, v21, (struct _LIST_ENTRY *)((char *)this + 56));
      Win32kImportTable = DxgkGetWin32kImportTable();
      v14 = *((_QWORD *)v12 + 3);
      v15 = *(void (__fastcall **)(_QWORD, __int64, __int64))(Win32kImportTable + 248);
      v16 = *(_QWORD *)(v14 + 56);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 16);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 136);
          if ( v18 != v17 + 136 && v18 == *(_QWORD *)(v17 + 144) )
            v6 = *(_QWORD *)(v18 - 40);
        }
      }
      TracingId = CFlipManager::GetTracingId(this);
      v15(TracingId, v14, v6);
    }
  }
  return (unsigned int)v11;
}
