/*
 * XREFs of ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009EBB0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     VidSchMarkDeviceAsError @ 0x14001F860 (VidSchMarkDeviceAsError.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14009E720 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C1A1C (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
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
    WdLogGlobalForLineNumber = 6824;
    if ( (byte_140081243 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
    v7 = VIDMM_MEMORY_SEGMENT::TransferToSegment(this, (struct VIDMM_GLOBAL_ALLOC *)v6, 0LL, 1);
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(1LL, v7);
      WdLogGlobalForLineNumber = 6849;
      DxgkLogInternalTriageEvent(v8, 0x40000LL);
      for ( i = *(_QWORD **)(v6 + 112); i != (_QWORD *)(v6 + 112); i = (_QWORD *)*i )
      {
        for ( j = (_QWORD *)*(i - 2); j != i - 2; j = (_QWORD *)*j )
          VidSchMarkDeviceAsError(*(_QWORD *)(*(j - 4) + 32LL), 24LL);
      }
    }
    *(_BYTE *)(v6 + 43) = 1;
    *(_QWORD *)(v6 + 336) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 328, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v6 + 136));
  }
  return 0LL;
}
