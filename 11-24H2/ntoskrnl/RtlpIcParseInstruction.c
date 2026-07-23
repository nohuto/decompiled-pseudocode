/*
 * XREFs of RtlpIcParseInstruction @ 0x140BBA4F0
 * Callers:
 *     RtlIcParseInstruction @ 0x140BB90E8 (RtlIcParseInstruction.c)
 * Callees:
 *     RtlpIcEmulateInstruction @ 0x140BB9A08 (RtlpIcEmulateInstruction.c)
 *     RtlpIcParseInstructionPrefix @ 0x140BBA51C (RtlpIcParseInstructionPrefix.c)
 */

__int64 __fastcall RtlpIcParseInstruction(__int64 a1)
{
  __int64 result; // rax

  result = RtlpIcParseInstructionPrefix();
  if ( (int)result >= 0 )
    return RtlpIcEmulateInstruction(a1, 0LL);
  return result;
}
