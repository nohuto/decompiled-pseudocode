/*
 * XREFs of SdbGetDatabaseEdition @ 0x14082B870
 * Callers:
 *     KsepSdbBootInitialize @ 0x140733EEC (KsepSdbBootInitialize.c)
 *     KsepSdbMapToMemory @ 0x14082B4A8 (KsepSdbMapToMemory.c)
 * Callees:
 *     SdbReadDWORDTag @ 0x140824978 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1408258C0 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetDatabaseEdition(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int FirstTag; // eax
  unsigned int v4; // eax
  __int64 v5; // r9

  v2 = 0;
  FirstTag = SdbFindFirstTag(a1, 0, 28673);
  if ( FirstTag )
  {
    v4 = SdbFindFirstTag(a1, FirstTag, 16469);
    if ( v4 )
      return (unsigned int)SdbReadDWORDTag(a1, v4, 0LL, v5);
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v2;
}
