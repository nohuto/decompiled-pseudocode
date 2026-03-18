/*
 * XREFs of SdbGetDatabaseID @ 0x140A65C70
 * Callers:
 *     SdbReadEntryInformation @ 0x1407F2948 (SdbReadEntryInformation.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x140AA8ADC (SdbpValidateAndApplyCompatFlags.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     SdbFindFirstTag @ 0x1408258C0 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x140A65D78 (SdbReadBinaryTag.c)
 */

__int64 __fastcall SdbGetDatabaseID(__int64 a1, void *a2)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned int FirstTag; // eax
  unsigned int v7; // eax
  const void *v8; // rsi

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  if ( (v2 & 2) != 0 )
  {
    v8 = (const void *)(a1 + 28);
  }
  else
  {
    FirstTag = SdbFindFirstTag(a1, 0, 28673);
    if ( !FirstTag
      || (v7 = SdbFindFirstTag(a1, FirstTag, 36871)) == 0
      || (v8 = (const void *)(a1 + 28), !(unsigned int)SdbReadBinaryTag(a1, v7, a1 + 28, 16LL)) )
    {
      AslLogCallPrintf(1LL);
      return v3;
    }
    *(_DWORD *)(a1 + 24) |= 2u;
    v2 = *(_DWORD *)(a1 + 24);
  }
  if ( (v2 & 2) != 0 )
  {
    memmove(a2, v8, 0x10uLL);
    return 1;
  }
  return v3;
}
