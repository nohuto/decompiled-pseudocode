/*
 * XREFs of ??1CAdapter@@IEAA@XZ @ 0x140098F40
 * Callers:
 *     ??_GCAdapter@@IEAAPEAXI@Z @ 0x140099048 (--_GCAdapter@@IEAAPEAXI@Z.c)
 * Callees:
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x140078D98 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ??_GCFlipAwayFence@@QEAAPEAXI@Z @ 0x140099070 (--_GCFlipAwayFence@@QEAAPEAXI@Z.c)
 *     ?FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z @ 0x140099588 (-FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z.c)
 *     DxgkDestroyContextInternal @ 0x14018A308 (DxgkDestroyContextInternal.c)
 *     DxgkCloseAdapterInternal @ 0x1401A99F0 (DxgkCloseAdapterInternal.c)
 *     DxgkDestroyDeviceInternal @ 0x1401BA698 (DxgkDestroyDeviceInternal.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x14033D4F0 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 */

void __fastcall CAdapter::~CAdapter(CAdapter *this)
{
  void *v2; // rcx
  void *v3; // rcx
  struct CAdapter::FlipManagerSyncContext *v4; // rax
  unsigned int v5; // edx
  CFlipAwayFence **v6; // rdi
  CFlipAwayFence *v7; // rcx
  PVOID RestartKey; // [rsp+30h] [rbp+10h] BYREF

  *(_QWORD *)this = &CAdapter::`vftable';
  if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline() )
  {
    while ( 1 )
    {
      RestartKey = 0LL;
      v4 = (struct CAdapter::FlipManagerSyncContext *)RtlEnumerateGenericTableWithoutSplaying(
                                                        (PRTL_GENERIC_TABLE)((char *)this + 120),
                                                        &RestartKey);
      if ( !v4 )
        break;
      CAdapter::FreeFlipManagerSyncContext(this, v4);
    }
    v6 = (CFlipAwayFence **)((char *)this + 104);
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 == (CFlipAwayFence *)v6 )
        break;
      if ( v7 )
        CFlipAwayFence::`scalar deleting destructor'(v7, v5);
    }
  }
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 != (void *)-1LL )
    ObCloseHandle(v2, 1);
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( *((_DWORD *)this + 14) )
  {
    LODWORD(RestartKey) = *((_DWORD *)this + 14);
    DxgkCddDestroySynchronizationObject((const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)&RestartKey);
  }
  if ( *((_DWORD *)this + 18) )
  {
    LODWORD(RestartKey) = *((_DWORD *)this + 18);
    DxgkDestroyContextInternal(&RestartKey);
  }
  if ( *((_DWORD *)this + 11) )
  {
    LODWORD(RestartKey) = *((_DWORD *)this + 11);
    DxgkDestroyDeviceInternal(&RestartKey);
  }
  if ( *((_DWORD *)this + 10) )
  {
    LODWORD(RestartKey) = *((_DWORD *)this + 10);
    DxgkCloseAdapterInternal(&RestartKey);
  }
  *((_QWORD *)this + 4) = 0LL;
}
