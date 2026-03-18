/*
 * XREFs of UsbDevice_TransferEventHandler @ 0x140020F10
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x140025E20 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled @ 0x140048624 (Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled.c)
 * Callees:
 *     Endpoint_TransferEventHandler @ 0x140021020 (Endpoint_TransferEventHandler.c)
 *     WPP_RECORDER_SF_ddq @ 0x140021C28 (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_ddqq @ 0x140021D84 (WPP_RECORDER_SF_ddqq.c)
 */

char __fastcall UsbDevice_TransferEventHandler(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v6; // r8d
  __int64 v7; // rdx
  char result; // al

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_ddqq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
      HIBYTE(*(_DWORD *)(a2 + 12)),
      a4);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = *(_QWORD *)(a1 + 8LL * (HIWORD(v6) & 0x1F) + 168);
  if ( v7 )
    return Endpoint_TransferEventHandler(a2);
  result = *(_BYTE *)a2 & 3;
  if ( result != 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 3;
    return WPP_RECORDER_SF_ddq(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
             v7,
             12,
             81,
             (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
             SHIBYTE(v6),
             BYTE2(v6) & 0x1F,
             a2);
  }
  return result;
}
