/*
 * XREFs of HalpInitializeNMI @ 0x140541624
 * Callers:
 *     HalpInitializeErrSrc @ 0x140B3BB90 (HalpInitializeErrSrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInitializeNMI(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    dword_140E0FE74 = 1;
    HalpNmiInfo = *(_DWORD *)(a2 + 28);
    dword_140E0FE78 = 0;
  }
  return 0LL;
}
