/*
 * XREFs of ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1400FF770
 * Callers:
 *     ?TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_DIRTY_BITPLANE@@W4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x140096274 (-TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_D.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x14010F48C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x140034DC0 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z @ 0x140037860 (-VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
        CVirtualAddressAllocator *this,
        unsigned int a2,
        unsigned __int64 a3,
        char a4)
{
  __int64 v4; // rsi
  unsigned __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // r8
  int *v10; // r9
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned int v13; // r11d
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int *v19; // r10

  v4 = *((_QWORD *)this + 15);
  v6 = a3 >> 12;
  v7 = *(_QWORD *)(*((_QWORD *)this + 11) + 40232LL);
  v8 = *(_QWORD *)(v7 + 8LL * a2);
  v9 = *(int *)(v8 + 468);
  v10 = *(int **)(32LL * a2 + v4);
  while ( 1 )
  {
    v11 = *v10;
    if ( v9 <= 0 )
      return VidMmGetAllocGpuVirtualAddress(*((const struct VIDMM_ALLOC **)v10 + 3), (v11 >> 7) & 0x1F);
    v12 = (v11 >> 7) & 0x1F;
    v13 = (v11 & 0x10) != 0
        ? *(_DWORD *)(32 * v12 + v4 + 16)
        : *(_DWORD *)(*(_QWORD *)(v7 + 8 * v12) + 48LL * (v11 & 7) + 128);
    v14 = (v6 & *(_QWORD *)(v8 + 48 * v9 + 144)) >> *(_QWORD *)(v8 + 48 * v9 + 152);
    if ( v9 == 1 && a4 && (**(_DWORD **)(v8 + 480) & 0x80u) != 0 )
      v14 += v13;
    v15 = *((_QWORD *)v10 + 6);
    if ( !*(_QWORD *)(v15 + 8 * v14)
      || !VIDMM_PAGE_TABLE_BASE::IsResident(*(VIDMM_PAGE_TABLE_BASE **)(v15 + 8 * v14))
      || (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 16 * v16) & 1) == 0 )
    {
      break;
    }
    v10 = v19;
    v9 = v17 - 1;
  }
  return 0LL;
}
