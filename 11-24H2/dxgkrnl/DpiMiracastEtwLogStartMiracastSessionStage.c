/*
 * XREFs of DpiMiracastEtwLogStartMiracastSessionStage @ 0x14007EBDC
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x140080D18 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x14024BAD8 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     McTemplateK0xq_EtwWriteTransfer @ 0x140082130 (McTemplateK0xq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiMiracastEtwLogStartMiracastSessionStage(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
    return McTemplateK0xq_EtwWriteTransfer(a1, &EventMiracastStartMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}
