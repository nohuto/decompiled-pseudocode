/*
 * XREFs of RtlpIcParseInstruction @ 0x140BB84F0
 * Callers:
 *     RtlIcParseInstruction @ 0x140BB70E8 (RtlIcParseInstruction.c)
 * Callees:
 *     RtlpIcEmulateInstruction @ 0x140BB7A08 (RtlpIcEmulateInstruction.c)
 *     RtlpIcParseInstructionPrefix @ 0x140BB851C (RtlpIcParseInstructionPrefix.c)
 */

__int64 __fastcall RtlpIcParseInstruction(__int64 a1)
{
  __int64 result; // rax

  result = RtlpIcParseInstructionPrefix();
  if ( (int)result >= 0 )
    return RtlpIcEmulateInstruction(a1, 0LL);
  return result;
}
