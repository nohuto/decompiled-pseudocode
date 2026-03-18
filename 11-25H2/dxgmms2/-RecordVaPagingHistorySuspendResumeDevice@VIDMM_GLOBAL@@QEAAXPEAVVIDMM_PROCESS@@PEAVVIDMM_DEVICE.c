/*
 * XREFs of ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1400E1FEC
 * Callers:
 *     VidMmSuspendDevice @ 0x140090BA8 (VidMmSuspendDevice.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400E0408 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400E0C88 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400E1B20 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E1C28 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x140034800 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x140112778 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_DEVICE *a3,
        char a4)
{
  char *v8; // rbx
  bool v9; // zf
  _QWORD *VaPagingHistoryEntry; // rax
  char *v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5124) )
  {
    v8 = (char *)this + 41008;
    v11 = (char *)this + 41008;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v9 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
    *((_QWORD *)v8 + 1) = KeGetCurrentThread();
    v12 = 1;
    if ( v9 )
      VaPagingHistoryEntry = (_QWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, 12LL, 32LL);
    else
      VaPagingHistoryEntry = operator new(32, (VIDMM_GLOBAL *)((char *)this + 41032), 0xCu, 0);
    if ( VaPagingHistoryEntry )
    {
      *VaPagingHistoryEntry = *(_QWORD *)a2;
      VaPagingHistoryEntry[1] = *((_QWORD *)a2 + 4);
      VaPagingHistoryEntry[2] = a3;
      *((_BYTE *)VaPagingHistoryEntry + 24) = a4;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v11);
  }
}
