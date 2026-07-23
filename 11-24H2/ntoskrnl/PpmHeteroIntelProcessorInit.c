/*
 * XREFs of PpmHeteroIntelProcessorInit @ 0x140B62260
 * Callers:
 *     PpmHeteroHgsProcessorInit @ 0x1405D48A0 (PpmHeteroHgsProcessorInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmHeteroIntelProcessorInit(__int64 a1)
{
  unsigned int v7; // r9d

  if ( *(_BYTE *)(a1 + 141) == 2 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    v7 = _RAX;
    _RAX = 7LL;
    if ( v7 >= 7 )
    {
      __asm { cpuid }
      if ( (_RDX & 0x8000) != 0 )
      {
        _RAX = 26LL;
        if ( v7 >= 0x1A )
        {
          __asm { cpuid }
          *(_BYTE *)(a1 + 35405) = BYTE3(_RAX);
        }
      }
    }
  }
}
