/*
 * XREFs of ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x140103934
 * Callers:
 *     ?PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDMM_PURGE_STATISTICS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400E06B8 (-PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDM.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400A9BBC (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400A9C6C (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E05F4 (-VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_A.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1400E1624 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x140103C94 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEA.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(__int64 a1, char a2, _QWORD *a3)
{
  _QWORD *v6; // rsi
  struct VIDMM_GLOBAL_ALLOC *v7; // rdx
  _QWORD *v8; // r15
  _QWORD *v9; // rsi
  _QWORD *v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rsi
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v17; // rdx
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  if ( (*(_DWORD *)(a1 + 104) & 0x6004) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a1;
      WdLogGlobalForLineNumber = 3375;
    }
    v6 = *(_QWORD **)(a1 + 8);
    while ( v6 != (_QWORD *)(a1 + 8) )
    {
      v7 = (struct VIDMM_GLOBAL_ALLOC *)(v6 - 31);
      v6 = (_QWORD *)*v6;
      if ( (*((_BYTE *)v7 + 36) & 1) != 0 )
        VidMmSuspendAccessToAllocation(**(VIDMM_GLOBAL ****)(a1 + 24), v7);
    }
    v8 = *(_QWORD **)(a1 + 216);
    while ( v8 != (_QWORD *)(a1 + 216) )
    {
      v9 = v8 - 31;
      v8 = (_QWORD *)*v8;
      v10 = v9 + 39;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v9 + 39, 0LL);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      v9[40] = KeGetCurrentThread();
      if ( *((int *)v9 + 46) <= 0 )
      {
        if ( (*((_BYTE *)v9 + 36) & 1) != 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v9;
            WdLogGlobalForLineNumber = 3435;
          }
          v13 = v9[6];
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(**(PRKPROCESS **)(v13 + 8), &ApcState);
          v14 = VIDMM_GLOBAL::Rotate(*(_QWORD *)(a1 + 24), v9, 3LL);
          v15 = v14;
          if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741558 )
            goto LABEL_26;
          *((_BYTE *)v9 + 36) &= ~1u;
          KeUnstackDetachProcess(&ApcState);
          v16 = *v9;
          v17 = *(struct VIDMM_CPU_HOST_APERTURE_RANGE **)(v16 + 192);
          if ( v17 )
          {
            VIDMM_CPU_HOST_APERTURE::UnmapRange(*(VIDMM_CPU_HOST_APERTURE **)(a1 + 552), v17);
            VIDMM_CPU_HOST_APERTURE::ReleaseRange(
              *(VIDMM_CPU_HOST_APERTURE **)(a1 + 552),
              *(struct VIDMM_CPU_HOST_APERTURE_RANGE **)(v16 + 192));
            *(_QWORD *)(v16 + 192) = 0LL;
          }
        }
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        v10[1] = 0LL;
        ExReleasePushLockExclusiveEx(v10, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        v9[40] = 0LL;
        ExReleasePushLockExclusiveEx(v9 + 39, 0LL);
        KeLeaveCriticalRegion();
        if ( g_IsInternalReleaseOrDbg )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v12) + 24) = v9;
          WdLogGlobalForLineNumber = 3424;
        }
        if ( (v9[3] & 0x100) != 0 && g_IsInternalRelease )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 195;
LABEL_26:
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v15, 0LL);
          WdLogGlobalForLineNumber = 195;
          JUMPOUT(0x140103C8ELL);
        }
        VIDMM_GLOBAL::PurgeAllocation(*(VIDMM_GLOBAL **)(a1 + 24), v9, a2, a3);
      }
    }
  }
}
