/*
 * XREFs of ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAXPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1400CE2A0
 * Callers:
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EEEW4VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1400CE680 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EEEW4VIDMM_PLACEMENT_RESTR.c)
 *     MapInCpuHostAperture @ 0x14011493C (MapInCpuHostAperture.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DiscardCpuHostApertureRange@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400CE500 (-DiscardCpuHostApertureRange@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_CPU_HOST_APERTURE::AcquireRange(
        VIDMM_CPU_HOST_APERTURE *this,
        void *a2,
        struct VIDMM_CPU_HOST_APERTURE_RANGE **a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 Pool2; // rbx
  unsigned __int64 v9; // rax
  unsigned int v10; // esi
  unsigned int v11; // ecx
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int *v14; // rdx
  __int64 result; // rax
  unsigned int *v16; // rdx
  VIDMM_PHYSICAL_ADAPTER *v17; // r13
  VIDMM_CPU_HOST_APERTURE *v18; // r15
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v19; // r8
  __int64 v20; // rcx

  Pool2 = *(unsigned int *)(*((_QWORD *)this + 6) + 416LL);
  v9 = (~(unsigned __int64)(unsigned int)(Pool2 - 1) & (a5
                                                      + a4
                                                      + (unsigned int)(Pool2 - 1)
                                                      - (a4 & ~(unsigned __int64)(unsigned int)(Pool2 - 1))))
     / Pool2;
  v10 = v9;
  if ( !(_DWORD)v9 && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    v12 = WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
    do
    {
LABEL_9:
      LODWORD(v12) = *(_DWORD *)(*((_QWORD *)this + 5) + 4 * v12);
      --v13;
    }
    while ( v13 );
LABEL_6:
    *(_DWORD *)(Pool2 + 28) = v12;
    v14 = (unsigned int *)(*((_QWORD *)this + 5) + 4LL * (unsigned int)v12);
    *((_DWORD *)this + 16) = *v14;
    *v14 = v10;
    *((_DWORD *)this + 15) -= v10;
    result = 0LL;
    *(_QWORD *)(Pool2 + 16) = a2;
    *a3 = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)Pool2;
    return result;
  }
  v11 = *((_DWORD *)this + 15);
  if ( v11 < (unsigned int)v9 )
  {
    v16 = (unsigned int *)*((_QWORD *)this + 2);
    if ( v16 == (unsigned int *)((char *)this + 16) )
    {
LABEL_14:
      WdLogSingleEntry3(4LL, (unsigned int)v9, v11, Pool2);
      result = 3221225495LL;
      WdLogGlobalForLineNumber = 471;
      return result;
    }
    while ( 1 )
    {
      v11 += *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v16[7]);
      if ( v11 >= (unsigned int)v9 )
        break;
      v16 = *(unsigned int **)v16;
      if ( v16 == (unsigned int *)((char *)this + 16) )
        goto LABEL_14;
    }
  }
  Pool2 = ExAllocatePool2(256LL, 4LL * (unsigned int)(v9 - 1) + 40, 1630824790LL);
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 8) = 0LL;
    *(_DWORD *)(Pool2 + 36) = 0;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 24) = -1LL;
    *(_DWORD *)(Pool2 + 32) = -1;
    if ( *((_DWORD *)this + 15) < v10 )
    {
      v17 = *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 6) + 32LL);
      v18 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 2);
      do
      {
        if ( v18 == (VIDMM_CPU_HOST_APERTURE *)((char *)this + 16) )
          break;
        v19 = v18;
        v18 = *(VIDMM_CPU_HOST_APERTURE **)v18;
        VIDMM_PHYSICAL_ADAPTER::DiscardCpuHostApertureRange(v17, this, v19);
      }
      while ( *((_DWORD *)this + 15) < v10 );
    }
    v12 = *((unsigned int *)this + 16);
    v13 = v10 - 1;
    *(_DWORD *)(Pool2 + 24) = v12;
    if ( v10 == 1 )
      goto LABEL_6;
    goto LABEL_9;
  }
  _InterlockedIncrement(&dword_1400817D8);
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 372;
  DxgkLogInternalTriageEvent(v20, 262145LL);
  return 3221225495LL;
}
