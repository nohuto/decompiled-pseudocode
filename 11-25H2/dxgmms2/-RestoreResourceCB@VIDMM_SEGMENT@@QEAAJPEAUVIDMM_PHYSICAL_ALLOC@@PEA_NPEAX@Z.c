/*
 * XREFs of ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009D300
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400188F8 (McTemplateK0p_EtwWriteTransfer.c)
 *     VidSchMarkDeviceAsError @ 0x14002BEA0 (VidSchMarkDeviceAsError.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140034390 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14009CE70 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C10BC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::RestoreResourceCB(
        VIDMM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        bool *a3,
        void *a4)
{
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  _QWORD *i; // rbx
  _QWORD *j; // rsi

  if ( VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB(a2) )
  {
    v6 = *(_QWORD *)a2;
    WdLogSingleEntry1(4LL, v6);
    WdLogGlobalForLineNumber = 6845;
    if ( (byte_140081243 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
    v7 = VIDMM_MEMORY_SEGMENT::TransferToSegment(this, (struct VIDMM_GLOBAL_ALLOC *)v6, 0LL, 1);
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(1LL, v7);
      WdLogGlobalForLineNumber = 6870;
      DxgkLogInternalTriageEvent(v8, 0x40000LL);
      for ( i = *(_QWORD **)(v6 + 112); i != (_QWORD *)(v6 + 112); i = (_QWORD *)*i )
      {
        for ( j = (_QWORD *)*(i - 2); j != i - 2; j = (_QWORD *)*j )
          VidSchMarkDeviceAsError(*(_QWORD *)(*(j - 4) + 32LL), 24);
      }
    }
    *(_BYTE *)(v6 + 43) = 1;
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v6 + 320) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 312, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v6 + 136));
  }
  return 0LL;
}
