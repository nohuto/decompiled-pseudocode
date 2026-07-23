/*
 * XREFs of PfpSetBaseTime @ 0x14074698C
 * Callers:
 *     PfpParametersInitialize @ 0x140C2EE60 (PfpParametersInitialize.c)
 * Callees:
 *     PfpGetParameter @ 0x1407464D0 (PfpGetParameter.c)
 *     PfpSetParameter @ 0x140746A4C (PfpSetParameter.c)
 */

__int64 __fastcall PfpSetBaseTime(HANDLE KeyHandle, _DWORD *a2)
{
  __int64 v4; // r8
  NTSTATUS Parameter; // ecx
  int v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  if ( MEMORY[0xFFFFF78000000014] - 126227808000000000LL >= 0 )
    v4 = MEMORY[0xFFFFF78000000014] - 126227808000000000LL;
  v7 = (v4 / 10000) >> 10;
  Parameter = PfpSetParameter(KeyHandle, 4u);
  if ( Parameter < 0 )
  {
    LODWORD(v8) = 4;
    Parameter = PfpGetParameter(KeyHandle, L"BaseTime", 4, &v7, (unsigned int *)&v8);
  }
  *a2 = v7;
  return (unsigned int)Parameter;
}
