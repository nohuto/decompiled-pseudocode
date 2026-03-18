/*
 * XREFs of ?HMTagToIsolatedType@@YA?AW4UserTypeIsolationCountedType@@E@Z @ 0x1C004FAA4
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C004FA30 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C004FDA8 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMTagToIsolatedType(unsigned __int8 a1)
{
  int v1; // ecx
  int v3; // ecx

  if ( a1 > 0x18u )
    KeBugCheckEx(0x164u, 0x20uLL, 0LL, 0LL, 0LL);
  v1 = a1 - 1;
  if ( !v1 )
    return 2LL;
  v3 = v1 - 1;
  if ( !v3 )
    return 1LL;
  if ( v3 == 1 )
    return 3LL;
  return 6LL;
}
