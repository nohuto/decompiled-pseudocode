/*
 * XREFs of EtwTraceTouchPadConfidenceCleared @ 0x1C013B2A0
 * Callers:
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01A7D00 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 * Callees:
 *     McTemplateK0qtt_EtwWriteTransfer @ 0x1C013E6AC (McTemplateK0qtt_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTouchPadConfidenceCleared(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0qtt_EtwWriteTransfer(a1, a2, a3, a1, a2, a3);
  return result;
}
