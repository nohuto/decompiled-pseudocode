/*
 * XREFs of RtlGuardCheckImageBase @ 0x180076B80
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x180013B70 (LdrpResolveProcedureAddress.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1800787D0 (RtlpxLookupFunctionTable.c)
 *     LdrIsEnclaveAddress @ 0x1800D8A94 (LdrIsEnclaveAddress.c)
 */

void __fastcall RtlGuardCheckImageBase(unsigned __int64 a1, char a2)
{
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  if ( qword_1801EC4F8 && (dword_1801EC4DC & 1) == 0 )
  {
    v5 = 0LL;
    v4 = 0LL;
    if ( a1 < *((_QWORD *)&xmmword_1801E9430 + 1)
      || a1 >= *((_QWORD *)&xmmword_1801E9430 + 1) + (unsigned __int64)(unsigned int)qword_1801E9440 )
    {
      RtlpxLookupFunctionTable(a1, &v4);
    }
    else
    {
      v4 = xmmword_1801E9430;
    }
    if ( *((_QWORD *)&v4 + 1) != a1 && (!a2 || !(unsigned __int8)LdrIsEnclaveAddress(a1)) )
      __fastfail(0x18u);
  }
}
