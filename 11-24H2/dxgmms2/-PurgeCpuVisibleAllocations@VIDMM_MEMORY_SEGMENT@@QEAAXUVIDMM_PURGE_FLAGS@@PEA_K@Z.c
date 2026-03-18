/*
 * XREFs of ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x140102974
 * Callers:
 *     ?PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDMM_PURGE_STATISTICS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400D644C (-PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDM.c)
 * Callees:
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400B1FBC (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400B206C (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D5B8C (-VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_A.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1400D7384 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1401027B4 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEA.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(__int64 a1, char a2, _QWORD *a3)
{
  _QWORD *v6; // rsi
  struct VIDMM_GLOBAL_ALLOC *v7; // rdx
  _QWORD *v8; // r15
  __int64 v9; // rsi
  __int64 v10; // r14
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
      v7 = (struct VIDMM_GLOBAL_ALLOC *)(v6 - 33);
      v6 = (_QWORD *)*v6;
      if ( (*((_BYTE *)v7 + 36) & 1) != 0 )
        VidMmSuspendAccessToAllocation(**(VIDMM_GLOBAL ****)(a1 + 24), v7);
    }
    v8 = *(_QWORD **)(a1 + 216);
    while ( v8 != (_QWORD *)(a1 + 216) )
    {
      v9 = (__int64)(v8 - 33);
      v8 = (_QWORD *)*v8;
      v10 = v9 + 328;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v9 + 328, 0LL);
      *(_QWORD *)(v9 + 336) = KeGetCurrentThread();
      if ( *(int *)(v9 + 184) <= 0 )
      {
        if ( (*(_BYTE *)(v9 + 36) & 1) != 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v9;
            WdLogGlobalForLineNumber = 3435;
          }
          v13 = *(_QWORD *)(v9 + 48);
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(**(PRKPROCESS **)(v13 + 8), &ApcState);
          v14 = VIDMM_GLOBAL::Rotate(*(_QWORD *)(a1 + 24), v9, 3u, 0LL, 0LL, 0LL, 0LL, 1, *(_QWORD *)v9);
          v15 = v14;
          if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741558 )
            goto LABEL_26;
          *(_BYTE *)(v9 + 36) &= ~1u;
          KeUnstackDetachProcess(&ApcState);
          v16 = *(_QWORD *)v9;
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
        *(_QWORD *)(v10 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v10, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        *(_QWORD *)(v9 + 336) = 0LL;
        ExReleasePushLockExclusiveEx(v9 + 328, 0LL);
        KeLeaveCriticalRegion();
        if ( g_IsInternalReleaseOrDbg )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v12) + 24) = v9;
          WdLogGlobalForLineNumber = 3424;
        }
        if ( (*(_DWORD *)(v9 + 24) & 0x100) != 0 && g_IsInternalRelease )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 195;
LABEL_26:
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v15, 0LL);
          WdLogGlobalForLineNumber = 195;
          JUMPOUT(0x140102CA3LL);
        }
        VIDMM_GLOBAL::PurgeAllocation(*(VIDMM_GLOBAL **)(a1 + 24), (_DWORD *)v9, a2, a3);
      }
    }
  }
}
