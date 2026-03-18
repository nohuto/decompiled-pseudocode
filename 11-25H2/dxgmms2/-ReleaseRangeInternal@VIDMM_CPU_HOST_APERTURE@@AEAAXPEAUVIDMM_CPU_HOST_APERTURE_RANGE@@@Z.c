/*
 * XREFs of ?ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE@@AEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400F6C30
 * Callers:
 *     ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x14008FA50 (-ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::ReleaseRangeInternal(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE *a2)
{
  int v2; // r10d
  __int64 v3; // rax
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // rcx

  v2 = *((_DWORD *)a2 + 6);
  v3 = *((unsigned int *)a2 + 7);
  if ( v2 == -1 || (_DWORD)v3 == -1 )
  {
    WdLogSingleEntry1(1LL, this);
    WdLogGlobalForLineNumber = 583;
    DxgkLogInternalTriageEvent(v7, 0x40000LL);
  }
  else
  {
    v5 = *((_QWORD *)this + 5);
    v6 = *(_DWORD *)(v5 + 4 * v3);
    *(_DWORD *)(v5 + 4LL * (unsigned int)v3) = *((_DWORD *)this + 16);
    *((_DWORD *)this + 15) += v6;
    *((_DWORD *)this + 16) = v2;
    *((_DWORD *)a2 + 6) = -1;
    *((_DWORD *)a2 + 7) = -1;
  }
}
