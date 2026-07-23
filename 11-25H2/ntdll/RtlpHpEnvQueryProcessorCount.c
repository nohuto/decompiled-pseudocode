/*
 * XREFs of RtlpHpEnvQueryProcessorCount @ 0x18003402C
 * Callers:
 *     RtlpHpHeapCreate @ 0x1800351B4 (RtlpHpHeapCreate.c)
 * Callees:
 *     NtQuerySystemInformationEx @ 0x180165FD0 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 RtlpHpEnvQueryProcessorCount()
{
  __int64 result; // rax
  char *v1; // rdx
  __int64 v2; // r8
  unsigned int v3; // ecx
  int InputBuffer[4]; // [rsp+30h] [rbp-678h] BYREF
  _BYTE SystemInformation[10]; // [rsp+40h] [rbp-668h] BYREF
  __int64 v6; // [rsp+4Ah] [rbp-65Eh]
  char v7; // [rsp+61h] [rbp-647h] BYREF

  memset_thunk_772440563353939046(SystemInformation, 0, 0x650uLL);
  InputBuffer[0] = 4;
  if ( NtQuerySystemInformationEx(
         SystemLogicalProcessorAndGroupInformation,
         InputBuffer,
         4u,
         SystemInformation,
         0x650u,
         0LL) < 0 )
    return 64LL;
  result = 1LL;
  if ( (_WORD)v6 )
  {
    v1 = &v7;
    v2 = (unsigned __int16)v6;
    do
    {
      v3 = result;
      result = (unsigned __int8)*v1;
      v1 += 48;
      if ( (unsigned int)result <= v3 )
        result = v3;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
