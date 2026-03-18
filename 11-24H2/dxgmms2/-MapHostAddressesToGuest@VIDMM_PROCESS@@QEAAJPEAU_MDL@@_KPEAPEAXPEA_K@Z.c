/*
 * XREFs of ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1400A8C34
 * Callers:
 *     LockParavirtualizedAllocationOnHost @ 0x140095B64 (LockParavirtualizedAllocationOnHost.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1400A8610 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     MapChildMmioSpace @ 0x14004402C (MapChildMmioSpace.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1400A8DEC (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1400A8F40 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400BC21C (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS::MapHostAddressesToGuest(
        VIDMM_PROCESS *this,
        struct _MDL *a2,
        unsigned __int64 a3,
        void **a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rbx
  int v8; // eax
  __int64 v9; // rax
  VIDMM_PROCESS *v10; // rcx
  CVirtualAddressAllocator *CpuVisibleBufferAllocator; // rbp
  unsigned __int64 v12; // r8
  int v13; // esi
  int v14; // eax
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r14
  __int64 v19; // rcx
  unsigned __int64 v20; // [rsp+80h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 4);
  v8 = *(_DWORD *)(v5 + 408);
  if ( (v8 & 0x100) != 0 )
  {
    v5 = *(_QWORD *)(v5 + 592);
  }
  else if ( (v8 & 0x80u) == 0 )
  {
    return 3221225473LL;
  }
  if ( !v5 )
    return 3221225473LL;
  v9 = *(_QWORD *)(v5 + 64);
  v10 = v9 ? *(VIDMM_PROCESS **)(v9 + 8) : 0LL;
  CpuVisibleBufferAllocator = VIDMM_PROCESS::GetCpuVisibleBufferAllocator(v10);
  if ( !CpuVisibleBufferAllocator )
    return 3221225473LL;
  if ( a3 > a2->ByteCount )
    return 3221225485LL;
  v20 = 0LL;
  v13 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
          CpuVisibleBufferAllocator,
          a3,
          v12,
          0LL,
          0LL,
          0x1000u,
          &v20);
  if ( v13 < 0 )
  {
    WdLogSingleEntry1(1LL, a3);
    WdLogGlobalForLineNumber = 2203;
    DxgkLogInternalTriageEvent(v19, 0x40000LL);
  }
  else
  {
    v14 = *(_DWORD *)(v5 + 408);
    if ( (v14 & 0x100) != 0 )
      v15 = *(_QWORD *)(v5 + 592);
    else
      v15 = v5 & -(__int64)((v14 & 0x80u) != 0);
    v16 = v20;
    v17 = v20 + *(_QWORD *)(*(_QWORD *)(v15 + 592) + 256LL);
    v13 = MapChildMmioSpace(v5);
    if ( v13 >= 0 )
      *a5 = v17;
    else
      CVirtualAddressAllocator::FreeVirtualAddressRange(CpuVisibleBufferAllocator, v16);
  }
  return (unsigned int)v13;
}
