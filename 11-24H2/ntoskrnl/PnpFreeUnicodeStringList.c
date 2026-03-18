/*
 * XREFs of PnpFreeUnicodeStringList @ 0x1405A92C0
 * Callers:
 *     PiInitReleaseCachedGroupInformation @ 0x140719D18 (PiInitReleaseCachedGroupInformation.c)
 *     PnpRegMultiSzToUnicodeStrings @ 0x140C26140 (PnpRegMultiSzToUnicodeStrings.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeUnicodeStringList(PVOID *P, unsigned int a2)
{
  PVOID *v3; // rbx
  __int64 v4; // rsi

  if ( P )
  {
    if ( a2 )
    {
      v3 = P + 1;
      v4 = a2;
      do
      {
        if ( *v3 )
          ExFreePoolWithTag(*v3, 0);
        v3 += 2;
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(P, 0);
  }
}
