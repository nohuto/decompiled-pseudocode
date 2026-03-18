/*
 * XREFs of ??B?$SGATOMTABLEgatomInterceptWindowData@G@@QEBAGXZ @ 0x140280A1C
 * Callers:
 *     SetupClassAtoms @ 0x1401EBA70 (SetupClassAtoms.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGATOMTABLEgatomInterceptWindowData<unsigned short>::operator unsigned short(__int64 a1, __int64 a2)
{
  return *(unsigned __int16 *)(W32GetUserSessionState(a1, a2) + 41432);
}
