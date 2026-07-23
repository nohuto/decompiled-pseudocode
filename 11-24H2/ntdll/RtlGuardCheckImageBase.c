/*
 * XREFs of RtlGuardCheckImageBase @ 0x1800D3DC0
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x18006DB10 (LdrpResolveProcedureAddress.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1800430E0 (RtlpxLookupFunctionTable.c)
 *     LdrIsEnclaveAddress @ 0x1800D3E5C (LdrIsEnclaveAddress.c)
 */

void __fastcall RtlGuardCheckImageBase(PVOID BaseAddress, char a2)
{
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    v5 = 0LL;
    v4 = 0LL;
    if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_1801E6440 + 1)
      || (unsigned __int64)BaseAddress >= *((_QWORD *)&xmmword_1801E6440 + 1)
                                        + (unsigned __int64)(unsigned int)qword_1801E6450 )
    {
      RtlpxLookupFunctionTable(BaseAddress, (char **)&v4);
    }
    else
    {
      v4 = xmmword_1801E6440;
    }
    if ( *((PVOID *)&v4 + 1) != BaseAddress && (!a2 || !(unsigned __int8)LdrIsEnclaveAddress(BaseAddress)) )
      __fastfail(0x18u);
  }
}
