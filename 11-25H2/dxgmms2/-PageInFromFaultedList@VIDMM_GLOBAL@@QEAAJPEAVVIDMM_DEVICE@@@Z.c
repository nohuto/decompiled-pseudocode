/*
 * XREFs of ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1400E3558
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400AB930 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E246C (-PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInFromFaultedList(VIDMM_GLOBAL *this, struct VIDMM_DEVICE *a2)
{
  int v4; // edi
  void (*v5)(void *); // r8
  bool v7; // [rsp+48h] [rbp+10h] BYREF
  struct VIDMM_ALLOC *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  *((_BYTE *)a2 + 58) |= 2u;
  v7 = 0;
  v4 = VIDMM_GLOBAL::PageInDeviceInternal(this, a2, 0, &v7, &v8);
  if ( v4 >= 0 )
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF, v5);
  *((_BYTE *)a2 + 58) &= ~2u;
  return (unsigned int)v4;
}
