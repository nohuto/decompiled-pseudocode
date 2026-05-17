/*
 * XREFs of LdrGetProcedureAddressEx @ 0x180004FC0
 * Callers:
 *     AVrfInitializeVerifier @ 0x180118960 (AVrfInitializeVerifier.c)
 *     AVrfpVerifierStopInitialize @ 0x18011DC24 (AVrfpVerifierStopInitialize.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 */

__int64 __fastcall LdrGetProcedureAddressEx(int a1, int a2, int a3, int a4, char a5)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(a1, a2, a3, a4, a5, retaddr);
}
