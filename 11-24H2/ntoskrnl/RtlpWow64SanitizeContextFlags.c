/*
 * XREFs of RtlpWow64SanitizeContextFlags @ 0x1409E0B04
 * Callers:
 *     PspWow64SetContextThread @ 0x1408EA8C4 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x140992510 (PspWow64GetContextThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1403D5250 (RtlpValidateContextFlags.c)
 *     RtlpArchContextFlagFromMachine @ 0x1409E0B6C (RtlpArchContextFlagFromMachine.c)
 */

__int64 __fastcall RtlpWow64SanitizeContextFlags(unsigned int *a1, char a2)
{
  int v4; // ebx
  __int64 result; // rax

  v4 = RtlpArchContextFlagFromMachine(332LL);
  result = RtlpValidateContextFlags(*a1, 0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741811 )
      return result;
  }
  else
  {
    if ( (v4 & *a1) != 0 )
      return result;
    result = 3221225485LL;
  }
  if ( a2 )
  {
    *a1 = (*a1 | v4) & 0xD801007F;
    return 0LL;
  }
  return result;
}
