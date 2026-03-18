/*
 * XREFs of HalpInitializeNMI @ 0x140543E54
 * Callers:
 *     HalpInitializeErrSrc @ 0x140B4BB90 (HalpInitializeErrSrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInitializeNMI(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    dword_140E100F4 = 1;
    HalpNmiInfo = *(_DWORD *)(a2 + 28);
    dword_140E100F8 = 0;
  }
  return 0LL;
}
