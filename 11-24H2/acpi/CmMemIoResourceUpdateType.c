/*
 * XREFs of CmMemIoResourceUpdateType @ 0x1400694A8
 * Callers:
 *     TranslateBridgeResources @ 0x1400A83D0 (TranslateBridgeResources.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CmMemIoResourceUpdateType(PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor, UCHAR a2, ULONGLONG a3)
{
  ULONGLONG v6; // rax

  v6 = RtlCmDecodeMemIoResource(Descriptor, 0LL);
  return RtlCmEncodeMemIoResource(Descriptor, a2, v6, a3);
}
