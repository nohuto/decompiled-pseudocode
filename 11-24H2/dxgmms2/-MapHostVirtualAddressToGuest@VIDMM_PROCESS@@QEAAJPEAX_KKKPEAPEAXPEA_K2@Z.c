/*
 * XREFs of ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x14008FD04
 * Callers:
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C5100 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1400CCC08 (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     MapChildVaSpace @ 0x14004B7D4 (MapChildVaSpace.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1400A8DEC (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1400A8F40 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400BC21C (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS::MapHostVirtualAddressToGuest(
        VIDMM_PROCESS *this,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5,
        void **a6,
        unsigned __int64 *a7,
        void **a8)
{
  CVirtualAddressAllocator *CpuVisibleBufferAllocator; // rsi
  unsigned __int64 v13; // r8
  int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  unsigned __int64 v20; // r14
  __int64 v21; // rbp
  __int64 v22; // rcx
  unsigned __int64 v23; // [rsp+50h] [rbp-28h] BYREF

  CpuVisibleBufferAllocator = VIDMM_PROCESS::GetCpuVisibleBufferAllocator(this);
  if ( !CpuVisibleBufferAllocator )
    return 3221225495LL;
  v23 = 0LL;
  v15 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
          CpuVisibleBufferAllocator,
          a3,
          v13,
          0LL,
          0LL,
          0x1000u,
          &v23);
  if ( v15 >= 0 )
  {
    v17 = *((_QWORD *)this + 4);
    v18 = *(_DWORD *)(v17 + 408);
    if ( (v18 & 0x100) != 0 )
      v19 = *(_QWORD *)(v17 + 592);
    else
      v19 = v17 & -(__int64)((v18 & 0x80u) != 0);
    v20 = v23;
    v21 = v23 + *(_QWORD *)(*(_QWORD *)(v19 + 592) + 256LL);
    v15 = MapChildVaSpace(v17, a2, v21, a3, a4, a5, (__int64)a6, (__int64)a8);
    if ( v15 >= 0 )
    {
      *a7 = v21;
    }
    else
    {
      WdLogSingleEntry1(1LL, a3);
      WdLogGlobalForLineNumber = 2292;
      DxgkLogInternalTriageEvent(v22, 0x40000LL);
      CVirtualAddressAllocator::FreeVirtualAddressRange(CpuVisibleBufferAllocator, v20);
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, a3);
    WdLogGlobalForLineNumber = 2283;
    DxgkLogInternalTriageEvent(v16, 0x40000LL);
  }
  return (unsigned int)v15;
}
