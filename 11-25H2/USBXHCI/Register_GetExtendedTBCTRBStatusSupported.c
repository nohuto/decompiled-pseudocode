/*
 * XREFs of Register_GetExtendedTBCTRBStatusSupported @ 0x14000BD84
 * Callers:
 *     Controller_Start @ 0x14000B894 (Controller_Start.c)
 * Callees:
 *     Register_GetExtendedTBCEnable @ 0x14000BDAC (Register_GetExtendedTBCEnable.c)
 */

bool __fastcall Register_GetExtendedTBCTRBStatusSupported(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx

  return (unsigned __int8)Register_GetExtendedTBCEnable(a1, a2, a3, a4) && (*(_DWORD *)(v4 + 108) & 0x80) != 0;
}
