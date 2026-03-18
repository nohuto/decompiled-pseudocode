/*
 * XREFs of SymCryptModElementSetValueNegUint32 @ 0x140523CF8
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x140521068 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEcurveInitialize @ 0x140522450 (SymCryptEcurveInitialize.c)
 * Callees:
 *     SymCryptFdefModElementSetValueNegUint32 @ 0x140535E44 (SymCryptFdefModElementSetValueNegUint32.c)
 */

__int64 __fastcall SymCryptModElementSetValueNegUint32(int a1, int a2, int a3, int a4, __int64 a5)
{
  return SymCryptFdefModElementSetValueNegUint32(a1, a2, a3, a4, a5);
}
