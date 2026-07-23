/*
 * XREFs of SymCryptModElementSetValueUint32 @ 0x140521630
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E938 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEcurveInitialize @ 0x14051FD94 (SymCryptEcurveInitialize.c)
 *     SymCryptEcpointTransform @ 0x1405285D8 (SymCryptEcpointTransform.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140531C4C (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140531D78 (SymCryptModExpWindowed.c)
 *     SymCryptShortWeierstrassSetZero @ 0x140535210 (SymCryptShortWeierstrassSetZero.c)
 *     SymCryptTwistedEdwardsSetZero @ 0x1405360E0 (SymCryptTwistedEdwardsSetZero.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140536740 (SymCryptMontgomeryPointScalarMul.c)
 * Callees:
 *     SymCryptFdefModElementSetValueUint32Generic @ 0x1405303B0 (SymCryptFdefModElementSetValueUint32Generic.c)
 */

__int64 __fastcall SymCryptModElementSetValueUint32(int a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  SymCryptFdefModElementSetValueUint32Generic(a1, (_DWORD)a2, a3, a4, a5);
  return (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, __int64))((char *)off_140006810 + (*a2 & 0x380)))(
           a2,
           a3,
           a4,
           a5);
}
