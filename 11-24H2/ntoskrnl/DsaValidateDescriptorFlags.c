/*
 * XREFs of DsaValidateDescriptorFlags @ 0x140402FF0
 * Callers:
 *     AccelpSiovDsaOperationHandler @ 0x140402E10 (AccelpSiovDsaOperationHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DsaValidateDescriptorFlags(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a1 > 1 && a1 != 3 && a1 != 4 && a1 != 5 )
  {
    if ( a1 == 33 )
      return v3;
    return (unsigned int)-1073741637;
  }
  if ( (a3 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( (a3 & 1) != 0 )
    {
      if ( a1 <= 1 )
        return (unsigned int)-1073741637;
      *(_BYTE *)(a2 + 4) &= ~2u;
    }
    if ( (a3 & 2) != 0 )
    {
      if ( (a1 & 0xFFFFFFFA) == 0 && a1 != 4 )
        return (unsigned int)-1073741637;
      *(_BYTE *)(a2 + 5) &= ~1u;
    }
    if ( (a3 & 8) != 0 )
      *(_BYTE *)(a2 + 4) &= ~8u;
  }
  return v3;
}
