/*
 * XREFs of EtwTraceEndPointerFrameMessageGeneration @ 0x1400ED670
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1400E24D4 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceEndPointerFrameMessageGeneration(__int64 a1, char a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
    return McTemplateK0qqq_EtwWriteTransfer(a1, &EndPointerFrameMessageGeneration, a3, a1, a2, 0);
  return result;
}
