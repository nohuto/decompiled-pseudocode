/*
 * XREFs of HalpStoreFreeCr3 @ 0x140556FB8
 * Callers:
 *     HalpMapCR3Ex @ 0x140B5071C (HalpMapCR3Ex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpStoreFreeCr3(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int i; // eax

  v1 = 0;
  for ( i = 0; i < 0x10; ++i )
  {
    if ( !HiberFreeCR3Pages[i] )
    {
      HiberFreeCR3Pages[i] = a1;
      return 0LL;
    }
  }
  if ( i == 16 )
    return (unsigned int)-1073741670;
  return v1;
}
