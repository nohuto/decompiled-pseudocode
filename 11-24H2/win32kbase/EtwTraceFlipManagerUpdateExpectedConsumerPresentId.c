/*
 * XREFs of EtwTraceFlipManagerUpdateExpectedConsumerPresentId @ 0x140126830
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxq_EtwWriteTransfer @ 0x140113B24 (McTemplateK0qxq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceFlipManagerUpdateExpectedConsumerPresentId(__int64 a1, char a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qxq_EtwWriteTransfer(a1, &FlipManagerUpdateExpectedConsumerPresentId, a3, a1, a2, a3);
  return result;
}
