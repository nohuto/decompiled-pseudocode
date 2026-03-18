/*
 * XREFs of ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDRESS@@_N@Z @ 0x1400BC5BC
 * Callers:
 *     VidMmFreeGpuVirtualAddress @ 0x14003FEA0 (VidMmFreeGpuVirtualAddress.c)
 *     ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z @ 0x1400BBBAC (-UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z.c)
 * Callees:
 *     memset @ 0x140056340 (memset.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400BC6E0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1400BCB54 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGIN.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        const struct _D3DKMT_FREEGPUVIRTUALADDRESS *a3,
        char a4)
{
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // r14
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rdi
  D3DGPU_SIZE_T Size; // rax
  _QWORD v12[12]; // [rsp+30h] [rbp-78h] BYREF

  if ( (*((_BYTE *)this + 40936) & 0x10) == 0 )
    return 0LL;
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                              0xFFFFFFFF);
  if ( VirtualAddressAllocator )
  {
    BaseAddress = a3->BaseAddress;
    if ( BaseAddress )
    {
      memset(v12, 0, 0x58uLL);
      Size = a3->Size;
      v12[0] = -4294967176LL;
      v12[5] = a2;
      v12[7] = BaseAddress;
      v12[6] = VirtualAddressAllocator;
      LOBYTE(v12[9]) = a4;
      v12[8] = Size >> 12;
      return VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
               this,
               (struct _VIDMM_SYSTEM_COMMAND *)v12,
               **(struct VIDMM_PAGING_QUEUE ***)(*((_QWORD *)this + 5049) + 80LL),
               *(struct _VIDSCH_SYNC_OBJECT **)(32LL
                                              * ((*(_DWORD *)(**(_QWORD **)(*((_QWORD *)this + 5049) + 80LL) + 112LL) >> 5) & 0x1F)
                                              + *(_QWORD *)(*((_QWORD *)this + 5049) + 80LL)
                                              + 8),
               1);
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 19397;
  }
  return 3221225485LL;
}
