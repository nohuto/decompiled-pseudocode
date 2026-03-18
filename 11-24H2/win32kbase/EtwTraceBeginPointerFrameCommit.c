/*
 * XREFs of EtwTraceBeginPointerFrameCommit @ 0x1400ED6B0
 * Callers:
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x14017EEEC (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140182E00 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1400E24D4 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceBeginPointerFrameCommit(__int64 a1, char a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
    return McTemplateK0qqq_EtwWriteTransfer(a1, &BeginPointerFrameCommit, a3, a1, a2, 0);
  return result;
}
