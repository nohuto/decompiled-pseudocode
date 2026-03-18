/*
 * XREFs of ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x140103AE4
 * Callers:
 *     ?TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_DIRTY_BITPLANE@@W4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x140096274 (-TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_D.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400E5F04 (-MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_L.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x14010F48C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT.c)
 * Callees:
 *     McTemplateK0ppqqxqq_EtwWriteTransfer @ 0x14004D4D4 (McTemplateK0ppqqxqq_EtwWriteTransfer.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1400F8430 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 */

void __fastcall VIDMM_PROCESS::ChargeEvictionTransfer(VIDMM_PROCESS *this, unsigned int a2, __int64 a3)
{
  _QWORD *v3; // r9
  int v4; // eax
  int IsActive; // eax
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rdx
  __int64 v9; // r8

  v3 = *(_QWORD **)(*((_QWORD *)this + 2) + 8LL * a2);
  v4 = *(_DWORD *)(*v3 + 8LL);
  if ( v4 != 110 && v4 != 102 )
  {
    v3[22] += a3;
    if ( v3[22] >= (unsigned __int64)(unsigned int)dword_1400813BC
      && (((unsigned __int8)(*((_DWORD *)v3 + 38) >> 2) ^ (unsigned __int8)~(*((_DWORD *)v3 + 38) >> 1)) & 1) != 0 )
    {
      *((_DWORD *)v3 + 38) ^= ((unsigned __int8)*((_DWORD *)v3 + 38) ^ (unsigned __int8)~(2 * *((_DWORD *)v3 + 38))) & 4;
      if ( (byte_140081241 & 1) != 0 )
      {
        IsActive = VIDMM_POLICY::IsActive((VIDMM_POLICY *)(v3 + 19));
        McTemplateK0ppqqxqq_EtwWriteTransfer(IsActive, v8, v9, *(_QWORD *)(v6 + 8), *(_QWORD *)(v7 + 24));
      }
    }
  }
}
