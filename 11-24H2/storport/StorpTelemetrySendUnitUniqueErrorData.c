/*
 * XREFs of StorpTelemetrySendUnitUniqueErrorData @ 0x140022A14
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x1400220F0 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer @ 0x140023C2C (McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer.c)
 */

__int64 __fastcall StorpTelemetrySendUnitUniqueErrorData(__int64 a1)
{
  __int64 v1; // rdi
  void *v2; // r9

  if ( (byte_140171465 & 0x40) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 24);
    v2 = &unk_140151214;
    if ( *(_QWORD *)(v1 + 5080) )
      v2 = *(void **)(v1 + 5080);
    McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer(
      a1 + 242,
      a1 + 177,
      *(_BYTE *)(a1 + 506) & 1,
      *(_DWORD *)(v1 + 56),
      *(_BYTE *)(a1 + 104),
      *(_BYTE *)(a1 + 105),
      *(_BYTE *)(a1 + 106),
      a1 + 2104,
      v1 + 5064,
      *(_DWORD *)(a1 + 3432),
      *(_QWORD *)(v1 + 4720),
      a1 + 168,
      a1 + 177,
      a1 + 242,
      (__int64)v2,
      *(_BYTE *)(a1 + 506) & 1);
  }
  return 0LL;
}
