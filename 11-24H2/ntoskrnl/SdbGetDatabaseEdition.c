/*
 * XREFs of SdbGetDatabaseEdition @ 0x14095D294
 * Callers:
 *     KsepSdbBootInitialize @ 0x14073FF0C (KsepSdbBootInitialize.c)
 *     KsepSdbMapToMemory @ 0x14095CECC (KsepSdbMapToMemory.c)
 * Callees:
 *     SdbReadDWORDTag @ 0x14095F0F8 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x14096003C (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetDatabaseEdition(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int FirstTag; // eax
  unsigned int v4; // eax

  v2 = 0;
  FirstTag = SdbFindFirstTag(a1, 0LL, 28673LL);
  if ( FirstTag )
  {
    v4 = SdbFindFirstTag(a1, FirstTag, 16469LL);
    if ( v4 )
      return (unsigned int)SdbReadDWORDTag(a1, v4, 0LL);
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetDatabaseEdition",
      727,
      (unsigned int)"Failed to get database tag, db is corrupt");
  }
  return v2;
}
