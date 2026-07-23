/*
 * XREFs of IsLegalAttributeChar2 @ 0x14079741C
 * Callers:
 *     GetAttributeName @ 0x140864C40 (GetAttributeName.c)
 *     LocalGetRelativeAttributeForString @ 0x140AAA374 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     <none>
 */

char __fastcall IsLegalAttributeChar2(unsigned __int16 a1)
{
  char v1; // dl
  __int64 i; // r8

  v1 = 1;
  if ( a1 < 0x7Fu )
  {
    for ( i = 0LL; (unsigned int)i < 0xA; i = (unsigned int)(i + 1) )
    {
      if ( LegalAttributeCharEnd[i] == a1 )
        return 0;
    }
  }
  return v1;
}
