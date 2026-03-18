/*
 * XREFs of EtwTraceDwmManipulationFrameStart @ 0x1400F2900
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1400E0740 (McTemplateK0dq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceDwmManipulationFrameStart(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS result; // eax
  __int64 v4; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
  {
    LODWORD(v4) = a2;
    return McTemplateK0dq_EtwWriteTransfer(a1, &DwmManipulationFrameStart, a3, a1, v4);
  }
  return result;
}
