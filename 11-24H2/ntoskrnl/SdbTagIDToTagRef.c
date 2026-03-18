/*
 * XREFs of SdbTagIDToTagRef @ 0x140805C7C
 * Callers:
 *     SdbGetKShimTagRef @ 0x140802270 (SdbGetKShimTagRef.c)
 *     SdbGetDatabaseMatch @ 0x1409595F0 (SdbGetDatabaseMatch.c)
 *     SdbGetDatabaseMatchEx @ 0x14095D42C (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     SdbpFindLocalDatabaseByPDB @ 0x14080622C (SdbpFindLocalDatabaseByPDB.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
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
