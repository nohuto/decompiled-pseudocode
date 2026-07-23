/*
 * XREFs of AslStringPatternMatchExW @ 0x140948000
 * Callers:
 *     KseLookupHardwareId @ 0x14073DC7C (KseLookupHardwareId.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140803A6C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpFindNextNamedTagHelper @ 0x1408060A8 (SdbpFindNextNamedTagHelper.c)
 *     SdbpCheckAttribute @ 0x140807D34 (SdbpCheckAttribute.c)
 *     AslpProcessMatchRegNode @ 0x14080BDB8 (AslpProcessMatchRegNode.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x140943014 (SdbpFindNextIndexedWildCardTag.c)
 *     AslStringPatternMatchW @ 0x140946C54 (AslStringPatternMatchW.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140947608 (SdbpFindFirstIndexedWildCardTag.c)
 *     AslStringPatternMatchExW @ 0x140948000 (AslStringPatternMatchExW.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140AB6FE4 (SdbpFindFirstNamedTagHelper.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     AslStringPatternMatchExW @ 0x140948000 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall AslStringPatternMatchExW(WCHAR *a1, WCHAR *a2)
{
  int v2; // r8d
  WCHAR *v4; // rsi
  __int16 v5; // r8
  unsigned __int64 v6; // r9
  struct _LIST_ENTRY *Flink; // r10
  WCHAR v9; // bx

  LOWORD(v2) = *a1;
  v4 = a1;
  while ( (_WORD)v2 )
  {
    if ( (_WORD)v2 == 63 )
      goto LABEL_4;
    if ( (_WORD)v2 != 42 )
      goto LABEL_21;
    v2 = v4[1];
    if ( v2 == 42 )
    {
      ++v4;
    }
    else
    {
      if ( !(_WORD)v2 )
        return 1LL;
      if ( (_WORD)v2 == *a2 )
        goto LABEL_27;
      PsGetCurrentServerSiloGlobals();
      Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
      if ( (unsigned int)v6 >= 0x61 )
      {
        if ( (unsigned int)v6 > 0x7A )
        {
          if ( Flink )
          {
            if ( (unsigned __int16)v6 >= 0xC0u )
              LOWORD(v6) = *((_WORD *)&Flink->Flink
                           + (v6 & 0xF)
                           + *((unsigned __int16 *)&Flink->Flink
                             + ((unsigned __int8)v6 >> 4)
                             + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v6 >> 8))))
                         + v6;
          }
        }
        else
        {
          LOWORD(v6) = v6 - 32;
        }
      }
      if ( v5 == (_WORD)v6 )
      {
LABEL_27:
        if ( (unsigned int)AslStringPatternMatchExW(v4 + 1, a2) )
          return 1LL;
      }
LABEL_5:
      if ( !*a2 )
        return 0LL;
      LOWORD(v2) = *v4;
      ++a2;
    }
  }
  if ( !*a2 )
    return 1LL;
LABEL_21:
  if ( (_WORD)v2 == *a2 || (v9 = RtlUpcaseUnicodeChar(*a2), RtlUpcaseUnicodeChar(*v4) == v9) )
  {
LABEL_4:
    ++v4;
    goto LABEL_5;
  }
  return 0LL;
}
