/*
 * XREFs of WPP_IFR_SF_dq @ 0x140080380
 * Callers:
 *     ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x14003B9D4 (-QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ.c)
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x14003D1D4 (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 *     ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x140049D40 (-AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z.c)
 *     imp_WdfDmaEnablerWdmGetDmaAdapter @ 0x14006F490 (imp_WdfDmaEnablerWdmGetDmaAdapter.c)
 *     ?FreeMapRegistersAndAdapter@FxDmaPacketTransaction@@MEAAXXZ @ 0x140087370 (-FreeMapRegistersAndAdapter@FxDmaPacketTransaction@@MEAAXXZ.c)
 *     UnlockVerifierSection @ 0x1400969AC (UnlockVerifierSection.c)
 *     ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1400A1244 (-QueueDrainSynchronously@FxIoQueue@@QEAAJXZ.c)
 *     imp_WdfDmaEnablerGetFragmentLength @ 0x1400A1ED0 (imp_WdfDmaEnablerGetFragmentLength.c)
 * Callees:
 *     FxWmiTraceMessage @ 0x140002B68 (FxWmiTraceMessage.c)
 *     FxIFR @ 0x140025370 (FxIFR.c)
 */

void __fastcall WPP_IFR_SF_dq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        int _a1,
        const void *_a2)
{
  int v11; // eax
  unsigned __int64 v12; // rbx

  v11 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)flags >> 16) + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v11, (flags - 1) & 0x1F) )
  {
    v12 = (unsigned __int64)flags >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v12 + 1) >= level )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v12),
        43LL,
        traceGuid,
        id,
        &_a1,
        4LL,
        &_a2,
        8LL,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, &_a1, 4LL, &_a2, 8LL, 0LL);
}
