/*
 * XREFs of ExpWnfComposeValueName @ 0x1408339CC
 * Callers:
 *     ExpWnfDeletePermanentStateData @ 0x1407C665C (ExpWnfDeletePermanentStateData.c)
 *     ExpWnfDeletePermanentName @ 0x140832134 (ExpWnfDeletePermanentName.c)
 *     ExpWnfLookupPermanentName @ 0x140833714 (ExpWnfLookupPermanentName.c)
 *     ExpWnfRegisterPermanentName @ 0x140833F7C (ExpWnfRegisterPermanentName.c)
 *     ExpWnfPopulateStateData @ 0x140835B5C (ExpWnfPopulateStateData.c)
 * Callees:
 *     RtlInt64ToUnicodeString @ 0x140833BE0 (RtlInt64ToUnicodeString.c)
 */

int __fastcall ExpWnfComposeValueName(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v3; // rdi
  wchar_t *v4; // rax
  unsigned int v5; // r10d
  unsigned int v6; // r8d
  __int64 v7; // r9
  wchar_t *Buffer; // rdx
  __int64 v9; // rcx

  LODWORD(v3) = 16;
  LODWORD(v4) = RtlInt64ToUnicodeString(a1 ^ 0x41C64E6DA3BC0074LL, 0x10u, a2);
  v5 = a2->Length >> 1;
  v6 = 16 - v5;
  a2->Length = 32;
  if ( v5 )
  {
    v7 = v5;
    do
    {
      Buffer = a2->Buffer;
      --v7;
      v3 = (unsigned int)(v3 - 1);
      LODWORD(v4) = Buffer[v7];
      Buffer[v3] = (unsigned __int16)v4;
      --v5;
    }
    while ( v5 );
  }
  if ( v6 )
  {
    v9 = v6;
    do
    {
      v4 = a2->Buffer;
      v4[--v9] = 48;
      --v6;
    }
    while ( v6 );
  }
  return (int)v4;
}
