/*
 * XREFs of Endpoint_GetDequeuePointer @ 0x14001053C
 * Callers:
 *     Endpoint_Enable @ 0x140011530 (Endpoint_Enable.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x14001563C (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x140034F50 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1400392F0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1400475E0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Crashdump_UsbDevice_ConfigureEndpointsForSaveState @ 0x140054830 (Crashdump_UsbDevice_ConfigureEndpointsForSaveState.c)
 * Callees:
 *     TR_GetDequeuePointer @ 0x140010580 (TR_GetDequeuePointer.c)
 */

__int64 __fastcall Endpoint_GetDequeuePointer(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx

  if ( !*(_BYTE *)(a1 + 37) )
  {
    v3 = *(_QWORD *)(a1 + 88);
    return TR_GetDequeuePointer(v3);
  }
  v2 = *(_QWORD *)(a1 + 136);
  if ( a2 )
  {
    v3 = *(_QWORD *)(104LL * (unsigned int)(a2 - 1) + v2 + 48);
    return TR_GetDequeuePointer(v3);
  }
  return *(_QWORD *)(*(_QWORD *)(v2 + 32) + 24LL);
}
