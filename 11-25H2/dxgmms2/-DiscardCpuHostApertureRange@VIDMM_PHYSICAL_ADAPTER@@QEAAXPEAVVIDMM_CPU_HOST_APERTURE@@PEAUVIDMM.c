/*
 * XREFs of ?DiscardCpuHostApertureRange@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400D28C0
 * Callers:
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400BABA0 (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_DRIVER_UPDATE_A.c)
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAXPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1400D2660 (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAXPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400A9BBC (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400A9C6C (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x140103C94 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEA.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PHYSICAL_ADAPTER::DiscardCpuHostApertureRange(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_CPU_HOST_APERTURE *a2,
        struct VIDMM_CPU_HOST_APERTURE_RANGE *a3)
{
  _QWORD *v3; // r14
  __int64 v7; // rdi
  __int64 v8; // r15
  int v9; // eax
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  v3 = (_QWORD *)*((_QWORD *)a3 + 2);
  v7 = *v3;
  if ( (*(_BYTE *)(*v3 + 36LL) & 1) != 0 )
  {
    v8 = *(_QWORD *)(v7 + 48);
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this);
      WdLogGlobalForLineNumber = 4270;
    }
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(**(PRKPROCESS **)(v8 + 8), &ApcState);
    v9 = VIDMM_GLOBAL::Rotate(*((_QWORD *)this + 6), v7, 3LL);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741558 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v9, 0LL);
      WdLogGlobalForLineNumber = 195;
    }
    *(_BYTE *)(v7 + 36) &= ~1u;
    KeUnstackDetachProcess(&ApcState);
  }
  VIDMM_CPU_HOST_APERTURE::UnmapRange(a2, a3);
  VIDMM_CPU_HOST_APERTURE::ReleaseRange(a2, a3);
  v3[24] = 0LL;
}
