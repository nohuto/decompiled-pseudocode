/*
 * XREFs of ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAXPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400F1810
 * Callers:
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400BA350 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?DdiUnmapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_UNMAPCPUHOSTAPERTURE@@@Z @ 0x14003AEE4 (-DdiUnmapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_UNMAPCPUHOSTAPERTURE@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct VIDMM_GLOBAL *a2,
        void *a3,
        struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *a4)
{
  __int64 *v6; // r9
  struct VIDMM_GLOBAL *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rbx
  int v10; // eax
  void ***v11; // rsi
  __int64 v12; // rbx
  void **v13; // rcx
  void **v14; // rax
  UINT64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v23; // rcx
  struct _DXGKARG_UNMAPCPUHOSTAPERTURE v24; // [rsp+50h] [rbp-38h] BYREF

  v6 = (__int64 *)*((_QWORD *)this + 2);
  v7 = a2;
  v8 = *v6;
  v9 = *(_QWORD *)(*v6 + 64);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 104);
    if ( (v10 & 0x1000) != 0 || (v10 & 1) != 0 )
      return;
    if ( (v10 & 4) == 0 )
    {
      v11 = (void ***)*((_QWORD *)a4 + 1);
      v12 = *(_QWORD *)(v9 + 552);
      v13 = *v11;
      if ( (*v11)[1] != v11 || (v14 = v11[1], *v14 != v11) )
        __fastfail(3u);
      *v14 = v13;
      v13[1] = v14;
      *v11 = 0LL;
      v11[1] = 0LL;
      v15 = *(unsigned int *)(*(_QWORD *)(v12 + 40) + 4LL * *((unsigned int *)v11 + 7));
      v16 = *(_QWORD *)(v12 + 48);
      *(_DWORD *)(&v24.PhysicalAdapterIndex + 1) = 0;
      v24.NumberOfPages = v15;
      v24.pCpuHostAperturePages = (UINT32 *)(v11 + 4);
      if ( _bittest((const signed __int32 *)(v16 + 104), 0xCu) )
        v24.SegmentId = 0;
      else
        v24.SegmentId = *(_WORD *)(v16 + 40) + 1;
      v24.PhysicalAdapterIndex = *(_WORD *)(v16 + 420);
      if ( (int)ADAPTER_RENDER::DdiUnmapCpuHostAperture(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v16 + 24) + 24LL) + 3128LL),
                  &v24) < 0 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 46LL, v12, v11, &v24);
        WdLogGlobalForLineNumber = 195;
      }
      else
      {
        *((_DWORD *)v11 + 8) = -1;
        v11 = (void ***)*((_QWORD *)a4 + 1);
        v17 = *((_DWORD *)v11 + 6);
        v18 = *((unsigned int *)v11 + 7);
        if ( v17 != -1 && (_DWORD)v18 != -1 )
        {
          v19 = *(_QWORD *)(v12 + 40);
          v20 = *(_DWORD *)(v19 + 4 * v18);
          *(_DWORD *)(v19 + 4LL * (unsigned int)v18) = *(_DWORD *)(v12 + 64);
          *(_DWORD *)(v12 + 60) += v20;
          *(_DWORD *)(v12 + 64) = v17;
          *((_DWORD *)v11 + 6) = -1;
          *((_DWORD *)v11 + 7) = -1;
LABEL_14:
          ExFreePoolWithTag(v11, 0);
          v21 = *(_QWORD *)a4;
          *((_QWORD *)a4 + 1) = 0LL;
          VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
          (*((void (__fastcall **)(void *, __int64))VirtualMemoryInterface + 6))(a3, v21);
          ExFreePoolWithTag(*(PVOID *)a4, 0);
          *(_QWORD *)a4 = 0LL;
          return;
        }
      }
      WdLogSingleEntry1(1LL, v12);
      WdLogGlobalForLineNumber = 583;
      DxgkLogInternalTriageEvent(v23, 0x40000LL);
      goto LABEL_14;
    }
  }
  else
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 74LL, this, v6, a3);
    WdLogGlobalForLineNumber = 195;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v7 + 3) + 444LL) & 8) == 0 )
    MmUnmapIoSpace(a3, *(_QWORD *)(v8 + 16));
}
