/*
 * XREFs of HalpHalExtInitSystem @ 0x140B4F0A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpExtInitExtensions @ 0x140C1111C (HalpExtInitExtensions.c)
 */

__int64 __fastcall HalpHalExtInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 8 )
    return HalpExtInitExtensions(a3);
  else
    return 0LL;
}
