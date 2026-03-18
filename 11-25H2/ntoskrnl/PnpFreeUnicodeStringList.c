/*
 * XREFs of PnpFreeUnicodeStringList @ 0x1405A5AB0
 * Callers:
 *     PiInitReleaseCachedGroupInformation @ 0x14070DC18 (PiInitReleaseCachedGroupInformation.c)
 *     PnpRegMultiSzToUnicodeStrings @ 0x140C150B0 (PnpRegMultiSzToUnicodeStrings.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
