/*
 * XREFs of ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1400BFFB8
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400BF1DC (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAUVIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1400E3BCC (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x140034800 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x140112778 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
        VIDMM_GLOBAL *this,
        char a2,
        struct VIDMM_PROCESS *a3,
        struct _VIDSCH_CONTEXT *a4,
        unsigned int a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        unsigned __int64 a7)
{
  int v10; // edi
  char *v11; // rbx
  bool v12; // zf
  _QWORD *VaPagingHistoryEntry; // rax
  char *v14; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]

  v10 = a2 != 0 ? 2 : 0;
  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5124) )
  {
    v11 = (char *)this + 41008;
    v14 = (char *)this + 41008;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v12 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
    *((_QWORD *)v11 + 1) = KeGetCurrentThread();
    v15 = 1;
    if ( v12 )
      VaPagingHistoryEntry = (_QWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, (unsigned int)(v10 + 17), 48LL);
    else
      VaPagingHistoryEntry = operator new(48, (VIDMM_GLOBAL *)((char *)this + 41032), v10 + 17, 0);
    if ( VaPagingHistoryEntry )
    {
      *VaPagingHistoryEntry = *(_QWORD *)a3;
      VaPagingHistoryEntry[1] = *((_QWORD *)a3 + 4);
      *((_DWORD *)VaPagingHistoryEntry + 6) = a5;
      VaPagingHistoryEntry[4] = a6;
      VaPagingHistoryEntry[5] = a7;
      VaPagingHistoryEntry[2] = a4;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v14);
  }
}
