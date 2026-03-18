/*
 * XREFs of ?HMTagToIsolatedType@@YA?AW4UserTypeIsolationCountedType@@E@Z @ 0x140041684
 * Callers:
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x14001B87C (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x140042EF8 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMTagToIsolatedType(unsigned __int8 a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( a1 > 0x18u )
    KeBugCheckEx(0x164u, 0x20uLL, 0LL, 0LL, 0LL);
  v1 = a1 - 1;
  if ( !v1 )
    return 2LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 1LL;
  if ( v2 == 1 )
    return 3LL;
  return 6LL;
}
