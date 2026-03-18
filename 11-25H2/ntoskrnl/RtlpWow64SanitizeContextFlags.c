/*
 * XREFs of RtlpWow64SanitizeContextFlags @ 0x1409EBFD0
 * Callers:
 *     PspWow64GetContextThread_BeforeFix @ 0x14076CC9C (PspWow64GetContextThread_BeforeFix.c)
 *     PspWow64SetContextThread_BeforeFix @ 0x14076D0C0 (PspWow64SetContextThread_BeforeFix.c)
 *     PspWow64SetContextThread @ 0x1408B96E4 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1409C4730 (PspWow64GetContextThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x14043C080 (RtlpValidateContextFlags.c)
 *     RtlpArchContextFlagFromMachine @ 0x1409EC038 (RtlpArchContextFlagFromMachine.c)
 */

__int64 __fastcall RtlpWow64SanitizeContextFlags(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  int v6; // ebx
  __int64 result; // rax

  v5 = a2;
  v6 = RtlpArchContextFlagFromMachine(332LL, a2, a3, a4);
  result = RtlpValidateContextFlags(*a1, 0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741811 )
      return result;
  }
  else
  {
    if ( (v6 & *a1) != 0 )
      return result;
    result = 3221225485LL;
  }
  if ( v5 )
  {
    *a1 = (*a1 | v6) & 0xD801007F;
    return 0LL;
  }
  return result;
}
