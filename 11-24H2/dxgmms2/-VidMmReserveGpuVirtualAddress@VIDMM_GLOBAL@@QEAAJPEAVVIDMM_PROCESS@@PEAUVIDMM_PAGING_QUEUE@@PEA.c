/*
 * XREFs of ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1400BC31C
 * Callers:
 *     VidMmReserveGpuVirtualAddress @ 0x1400403F0 (VidMmReserveGpuVirtualAddress.c)
 * Callees:
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1400A8F40 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400BA8FC (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUE.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400BC6E0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1400BCFA0 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?RecordVaPagingHistoryReserveGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x1400BE26C (-RecordVaPagingHistoryReserveGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a4)
{
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rdx
  D3DGPU_SIZE_T Size; // rdx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rbp
  unsigned int v11; // r9d
  D3DGPU_VIRTUAL_ADDRESS v12; // r8
  D3DGPU_SIZE_T v13; // rdx
  int v14; // esi
  D3DGPU_VIRTUAL_ADDRESS v16; // rdx
  int v17; // [rsp+20h] [rbp-68h]
  struct VIDMM_MAPPED_VA_RANGE *v18; // [rsp+90h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 40936) & 0x10) == 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 19784;
    return 3221225485LL;
  }
  a4->PagingFenceValue = 0LL;
  BaseAddress = a4->BaseAddress;
  if ( (BaseAddress & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(2LL, BaseAddress);
    WdLogGlobalForLineNumber = 19793;
    return 3221225485LL;
  }
  Size = a4->Size;
  if ( (Size & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(2LL, Size);
    WdLogGlobalForLineNumber = 19799;
    return 3221225485LL;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                              0xFFFFFFFF);
  if ( !VirtualAddressAllocator )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 19806;
    return 3221225485LL;
  }
  v11 = 0x10000;
  if ( *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3004LL) >= 2400
    && (*((_BYTE *)this + 40936) & 1) != 0
    && *((_DWORD *)this + 10232) >= 0x28u
    && !(a4->Size % (unsigned int)(4096 << *((_DWORD *)this + 10233))) )
  {
    v11 = 4096 << *((_DWORD *)this + 10233);
  }
  v12 = a4->BaseAddress;
  v13 = a4->Size;
  v18 = 0LL;
  v14 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
          VirtualAddressAllocator,
          v13,
          v12,
          a4->MinimumAddress,
          a4->MaximumAddress,
          v11,
          a4->ReservationType,
          a4->DriverProtection,
          0,
          &a4->VirtualAddress,
          &v18,
          1u);
  if ( v14 < 0 )
  {
    WdLogSingleEntry5(3LL, VirtualAddressAllocator, a4->Size, a4->BaseAddress, a4->MinimumAddress, a4->MaximumAddress);
    WdLogGlobalForLineNumber = 19845;
  }
  else
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryReserveGpuVa(this, a2, a4->VirtualAddress, a4->Size);
    if ( a4->Reserved0 == 1 )
    {
      LOBYTE(v17) = 0;
      v14 = VIDMM_GLOBAL::CommitVirtualAddressRange(
              (struct VIDMM_WORKER_THREAD **)this,
              VirtualAddressAllocator,
              a3,
              v18,
              v17,
              (const struct _DXGK_ADL *)&unk_14005AAC8,
              0LL,
              0LL);
      if ( v14 < 0 )
      {
        WdLogSingleEntry2(3LL, VirtualAddressAllocator, a4->Size);
        v16 = a4->BaseAddress;
        WdLogGlobalForLineNumber = 19873;
        CVirtualAddressAllocator::FreeVirtualAddressRange((struct _KTHREAD **)VirtualAddressAllocator, v16);
      }
    }
  }
  return (unsigned int)v14;
}
