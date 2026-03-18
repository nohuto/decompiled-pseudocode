/*
 * XREFs of HalpPnpInitSystem @ 0x140B4D7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPnpInitSystem(int a1)
{
  if ( a1 == 7 )
    off_140E00690[0] = HaliInitPnpDriver;
  return 0LL;
}
