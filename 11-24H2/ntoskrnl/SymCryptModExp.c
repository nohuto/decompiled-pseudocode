/*
 * XREFs of SymCryptModExp @ 0x140521718
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E938 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsaCoreDecCrt @ 0x1405225B4 (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x140522AF4 (SymCryptRsaCoreEnc.c)
 * Callees:
 *     SymCryptModExpGeneric @ 0x140531BE0 (SymCryptModExpGeneric.c)
 */

__int64 __fastcall SymCryptModExp(int a1, int a2, int a3, int a4, char a5, __int64 a6, __int64 a7, __int64 a8)
{
  return SymCryptModExpGeneric(a1, a2, a3, a4, a5, a6, a7, a8);
}
