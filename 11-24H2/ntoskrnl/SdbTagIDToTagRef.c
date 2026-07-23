/*
 * XREFs of SdbTagIDToTagRef @ 0x1408063BC
 * Callers:
 *     SdbGetKShimTagRef @ 0x1408029B0 (SdbGetKShimTagRef.c)
 *     SdbGetDatabaseMatch @ 0x1409410B0 (SdbGetDatabaseMatch.c)
 *     SdbGetDatabaseMatchEx @ 0x140944EEC (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     SdbpFindLocalDatabaseByPDB @ 0x14080696C (SdbpFindLocalDatabaseByPDB.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbTagIDToTagRef(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v5; // esi
  int v6; // ebx
  __int64 result; // rax
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF

  v8[0] = -1;
  v5 = a3;
  v6 = 0;
  if ( (unsigned int)SdbpFindLocalDatabaseByPDB(a1, a2, a3, v8) )
  {
    result = 1LL;
    v6 = v5 | (v8[0] << 28);
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbTagIDToTagRef", 259, (unsigned int)"Bad PDB");
    result = 0LL;
  }
  *a4 = v6;
  return result;
}
