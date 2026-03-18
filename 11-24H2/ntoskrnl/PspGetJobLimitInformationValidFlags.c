/*
 * XREFs of PspGetJobLimitInformationValidFlags @ 0x140A37330
 * Callers:
 *     NtQueryInformationJobObject @ 0x140ACCBF0 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobLimitInformationValidFlags(int a1, int a2)
{
  __int64 result; // rax

  if ( a1 == 2 )
    return 255LL;
  result = 6324223LL;
  if ( a2 == 144 )
    return 0x7FFFLL;
  return result;
}
