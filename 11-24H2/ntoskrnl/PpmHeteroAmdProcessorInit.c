/*
 * XREFs of PpmHeteroAmdProcessorInit @ 0x140B621D4
 * Callers:
 *     PpmHeteroHgsProcessorInit @ 0x1405D48A0 (PpmHeteroHgsProcessorInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PpmHeteroAmdProcessorInit(__int64 a1)
{
  int v2; // r11d
  char v3; // r9
  __int64 result; // rax
  int v9; // r10d

  if ( *(_BYTE *)(a1 + 141) == 1 )
  {
    v2 = 0;
    v3 = 0;
    _RAX = 2147483686LL;
    __asm { cpuid }
    v9 = result;
    do
    {
      if ( !(_WORD)_RBX )
        break;
      if ( BYTE1(_RCX) == 1 )
      {
        if ( (v9 & 0x40000000) != 0 )
          *(_BYTE *)(a1 + 35405) = (_RBX & 0xF0000000) == 0;
        v3 = 1;
      }
      ++v2;
      _RAX = 2147483686LL;
      __asm { cpuid }
      v9 = result;
    }
    while ( !v3 );
  }
  return result;
}
