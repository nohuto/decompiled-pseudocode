/*
 * XREFs of SymCryptRsaCoreVerifyInput @ 0x1405253B4
 * Callers:
 *     SymCryptRsaCoreDecCrt @ 0x140524C9C (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x1405251DC (SymCryptRsaCoreEnc.c)
 * Callees:
 *     SymCryptRsakeySizeofModulus @ 0x140522264 (SymCryptRsakeySizeofModulus.c)
 *     SymCryptIntCreate @ 0x140523844 (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x1405238E0 (SymCryptIntFromModulus.c)
 *     SymCryptIntIsLessThan @ 0x1405239A0 (SymCryptIntIsLessThan.c)
 *     SymCryptIntSetValue @ 0x140523A08 (SymCryptIntSetValue.c)
 *     SymCryptSizeofIntFromDigits @ 0x140523FFC (SymCryptSizeofIntFromDigits.c)
 */

__int64 __fastcall SymCryptRsaCoreVerifyInput(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned int v7; // ebx

  v7 = 0;
  if ( a3 > (unsigned int)SymCryptRsakeySizeofModulus(a1) )
    return 32782;
  if ( a5 < (unsigned int)SymCryptRsakeySizeofModulus(a1) )
    return 32782;
  if ( a3 == (unsigned int)SymCryptRsakeySizeofModulus(a1) )
  {
    SymCryptSizeofIntFromDigits();
    SymCryptIntCreate();
    v7 = SymCryptIntSetValue();
    if ( !v7 )
    {
      SymCryptIntFromModulus();
      if ( !(unsigned int)SymCryptIntIsLessThan() )
        return 32782;
    }
  }
  return v7;
}
