/*
 * XREFs of DpiMiracastEtwLogStopMiracastSessionStage @ 0x14007EC0C
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x14008058C (DpiMiracastTearDownAssociation.c)
 *     DpiMiracastHandleStopSessionDone @ 0x14024BF5C (DpiMiracastHandleStopSessionDone.c)
 * Callees:
 *     McTemplateK0xq_EtwWriteTransfer @ 0x140082130 (McTemplateK0xq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiMiracastEtwLogStopMiracastSessionStage(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
    return McTemplateK0xq_EtwWriteTransfer(a1, &EventMiracastStopMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}
