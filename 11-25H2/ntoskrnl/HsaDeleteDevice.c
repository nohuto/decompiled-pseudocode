/*
 * XREFs of HsaDeleteDevice @ 0x14056F5F0
 * Callers:
 *     <none>
 * Callees:
 *     ExtEnvFreeMemory @ 0x14055D3A0 (ExtEnvFreeMemory.c)
 *     HsaFreePasidTables @ 0x14056F99C (HsaFreePasidTables.c)
 */

void __fastcall HsaDeleteDevice(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 48);
  if ( v3 )
    HsaFreePasidTables(a1, v3);
  ExtEnvFreeMemory(a1, *(_QWORD *)(a2 + 40));
  ExtEnvFreeMemory(v4, a2);
}
