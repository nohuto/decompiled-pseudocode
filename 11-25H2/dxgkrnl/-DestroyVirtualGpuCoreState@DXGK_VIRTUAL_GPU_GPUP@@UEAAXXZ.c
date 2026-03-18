/*
 * XREFs of ?DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x1402124F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x140033498 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?Destroy@DXGK_DIRTY_BITPLANE@@QEAAXXZ @ 0x14007A85C (-Destroy@DXGK_DIRTY_BITPLANE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?DestroyLiveMigrationState@DXGK_VIRTUAL_GPU_GPUP@@QEAAXXZ @ 0x1401884FC (-DestroyLiveMigrationState@DXGK_VIRTUAL_GPU_GPUP@@QEAAXXZ.c)
 *     ?DdiDestroyMemoryBasis@ADAPTER_RENDER@@QEAAJQEAX@Z @ 0x1401A1D10 (-DdiDestroyMemoryBasis@ADAPTER_RENDER@@QEAAJQEAX@Z.c)
 *     ?DdiStopDirtyTracking@ADAPTER_RENDER@@QEAAJQEAX@Z @ 0x1401A74C0 (-DdiStopDirtyTracking@ADAPTER_RENDER@@QEAAJQEAX@Z.c)
 *     ?DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x14020B4E0 (-DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140333A6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_GPUP::DestroyVirtualGpuCoreState(DXGK_VIRTUAL_GPU_GPUP *this, __int64 a2, __int64 a3)
{
  ULONG v4; // eax
  ADAPTER_RENDER *v5; // rcx
  __int64 v6; // rcx
  unsigned int i; // ebp
  __int64 v8; // rsi
  struct DXGALLOCATION **v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rbx
  void *v13; // rdx
  int v14; // eax
  __int64 v15; // rbx
  char *v16; // rcx
  char *v17; // rbx
  __int64 v18; // rcx
  void *v19; // rcx
  _DXGKARG_DESTROYVIRTUALGPU v20; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v21[24]; // [rsp+58h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-58h] BYREF

  if ( *((_BYTE *)this + 192) )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = (ADAPTER_RENDER *)*((_QWORD *)this + 1);
    v20.PartitionId = v4;
    ADAPTER_RENDER::DdiDestroyVirtualGpu(v5, &v20, a3);
    *((_BYTE *)this + 192) = 0;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v21, (struct _KTHREAD **)this + 25);
  DXGK_VIRTUAL_GPU_GPUP::DestroyLiveMigrationState(this);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
  if ( *((_QWORD *)this + 23) )
  {
    v6 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 167);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v6 + 56), &ApcState);
    for ( i = 0; i < *((_DWORD *)this + 42); ++i )
    {
      v8 = 112LL * i;
      v9 = (struct DXGALLOCATION **)(v8 + *((_QWORD *)this + 23));
      if ( *v9 )
      {
        DXGDEVICE::DestroyAllocationInternal(
          *((DXGDEVICE **)this + 22),
          1u,
          v9,
          0LL,
          0LL,
          (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)3);
        *(_QWORD *)(v8 + *((_QWORD *)this + 23)) = 0LL;
      }
      v10 = *((_QWORD *)this + 23);
      if ( *(_DWORD *)(v8 + v10 + 104) )
      {
        if ( *(_DWORD *)(v8 + v10 + 88) )
        {
          v11 = ADAPTER_RENDER::DdiStopDirtyTracking(
                  *((ADAPTER_RENDER **)this + 1),
                  *(void *const *)(v8 + v10 + 96),
                  (__int64)v9);
          *(_DWORD *)(v8 + *((_QWORD *)this + 23) + 88) = 0;
          if ( v11 < 0 )
          {
            v12 = v11;
            WdLogSingleEntry1(2LL, v11);
            WdLogGlobalForLineNumber = 1231;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"DxgkDdiStopDirtyTracking failed. Status: 0x%I64x",
              v12,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        v13 = *(void **)(v8 + *((_QWORD *)this + 23) + 96);
        if ( v13 )
        {
          v14 = ADAPTER_RENDER::DdiDestroyMemoryBasis(*((ADAPTER_RENDER **)this + 1), v13, (__int64)v9);
          if ( v14 < 0 )
          {
            v15 = v14;
            WdLogSingleEntry1(2LL, v14);
            WdLogGlobalForLineNumber = 1240;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"DxgkDdiDestroyMemoryBasis failed. Status: 0x%I64x",
              v15,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        DXGK_DIRTY_BITPLANE::Destroy((DXGK_DIRTY_BITPLANE *)(v8 + *((_QWORD *)this + 23) + 32LL));
      }
    }
    KeUnstackDetachProcess(&ApcState);
    v16 = (char *)*((_QWORD *)this + 23);
    if ( v16 )
    {
      v17 = v16 - 8;
      `vector destructor iterator'(
        v16,
        112LL,
        *((_QWORD *)v16 - 1),
        (void (__fastcall *)(char *))DXGK_GPUP_ALLOCATION_INFO::~DXGK_GPUP_ALLOCATION_INFO);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
    }
    *((_QWORD *)this + 23) = 0LL;
    *((_DWORD *)this + 42) = 0;
  }
  v18 = *((_QWORD *)this + 20);
  if ( v18 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(v18 + 32));
    *(_QWORD *)(*((_QWORD *)this + 20) + 32LL) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
  v19 = (void *)*((_QWORD *)this + 43);
  if ( v19 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v19);
    *((_QWORD *)this + 43) = 0LL;
    *((_DWORD *)this + 84) = 0;
  }
}
