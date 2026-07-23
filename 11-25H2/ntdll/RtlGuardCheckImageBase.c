/*
 * XREFs of RtlGuardCheckImageBase @ 0x180076B80
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x180013B70 (LdrpResolveProcedureAddress.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1800787D0 (RtlpxLookupFunctionTable.c)
 *     LdrIsEnclaveAddress @ 0x1800D8A94 (LdrIsEnclaveAddress.c)
 */

void __fastcall RtlGuardCheckImageBase(PVOID BaseAddress, char a2)
{
  __int128 v4; // [rsp+20h] [rbp-28h]

  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    v4 = 0LL;
    if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_1801E9430 + 1)
      || (unsigned __int64)BaseAddress >= *((_QWORD *)&xmmword_1801E9430 + 1)
                                        + (unsigned __int64)(unsigned int)qword_1801E9440 )
    {
      RtlpxLookupFunctionTable(BaseAddress);
    }
    else
    {
      *((_QWORD *)&v4 + 1) = *((_QWORD *)&xmmword_1801E9430 + 1);
    }
    if ( *((PVOID *)&v4 + 1) != BaseAddress && (!a2 || !(unsigned __int8)LdrIsEnclaveAddress(BaseAddress)) )
      __fastfail(0x18u);
  }
}
