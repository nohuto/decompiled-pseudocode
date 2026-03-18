/*
 * XREFs of Endpoint_GetDequeuePointer @ 0x14000A01C
 * Callers:
 *     Endpoint_Enable @ 0x140004F50 (Endpoint_Enable.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x140008E8C (Endpoint_OnResetSetDequeuePointer.c)
 *     UsbDevice_InitializeEndpointContext @ 0x14002B144 (UsbDevice_InitializeEndpointContext.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x140033450 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x140038180 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_SetAddress @ 0x14003AEC4 (UsbDevice_SetAddress.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1400478F0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Crashdump_UsbDevice_ConfigureEndpointsForSaveState @ 0x140053ED0 (Crashdump_UsbDevice_ConfigureEndpointsForSaveState.c)
 * Callees:
 *     TR_GetDequeuePointer @ 0x14000A060 (TR_GetDequeuePointer.c)
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
  v2 = *(_QWORD *)(a1 + 144);
  if ( a2 )
  {
    v3 = *(_QWORD *)(104LL * (unsigned int)(a2 - 1) + v2 + 48);
    return TR_GetDequeuePointer(v3);
  }
  return *(_QWORD *)(*(_QWORD *)(v2 + 32) + 24LL);
}
