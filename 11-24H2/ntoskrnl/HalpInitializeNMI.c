/*
 * XREFs of HalpInitializeNMI @ 0x1405417A4
 * Callers:
 *     HalpInitializeErrSrc @ 0x140B4DBD0 (HalpInitializeErrSrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInitializeNMI(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    dword_140E10284 = 1;
    HalpNmiInfo = *(_DWORD *)(a2 + 28);
    dword_140E10288 = 0;
  }
  return 0LL;
}
