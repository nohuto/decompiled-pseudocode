/*
 * XREFs of SdbGetDatabaseID @ 0x140A67650
 * Callers:
 *     SdbReadEntryInformation @ 0x1408027F8 (SdbReadEntryInformation.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x140AADE90 (SdbpValidateAndApplyCompatFlags.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     SdbFindFirstTag @ 0x14096003C (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x140A67758 (SdbReadBinaryTag.c)
 */

__int64 __fastcall SdbGetDatabaseID(__int64 a1, void *a2)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned int FirstTag; // eax
  unsigned int v7; // eax
  const void *v8; // rsi
  const char *v10; // r9
  __int64 v11; // r8

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  if ( (v2 & 2) == 0 )
  {
    FirstTag = SdbFindFirstTag(a1, 0, 28673);
    if ( FirstTag )
    {
      v7 = SdbFindFirstTag(a1, FirstTag, 36871);
      if ( v7 )
      {
        v8 = (const void *)(a1 + 28);
        if ( !(unsigned int)SdbReadBinaryTag(a1, v7, a1 + 28, 16LL) )
        {
          AslLogCallPrintf(1LL, (__int64)"SdbGetDatabaseID", 571LL, (__int64)"Failed to read database id 0x%lx");
          return v3;
        }
        *(_DWORD *)(a1 + 24) |= 2u;
        v2 = *(_DWORD *)(a1 + 24);
        goto LABEL_6;
      }
      v10 = "Failed to get the database id";
      v11 = 566LL;
    }
    else
    {
      v10 = "Failed to get root tag";
      v11 = 560LL;
    }
    AslLogCallPrintf(1LL, (__int64)"SdbGetDatabaseID", v11, (__int64)v10);
    return v3;
  }
  v8 = (const void *)(a1 + 28);
LABEL_6:
  if ( (v2 & 2) != 0 )
  {
    memmove(a2, v8, 0x10uLL);
    return 1;
  }
  return v3;
}
