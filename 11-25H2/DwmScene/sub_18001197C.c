/*
 * XREFs of sub_18001197C @ 0x18001197C
 * Callers:
 *     sub_180010A38 @ 0x180010A38 (sub_180010A38.c)
 *     sub_180032A24 @ 0x180032A24 (sub_180032A24.c)
 *     sub_180035358 @ 0x180035358 (sub_180035358.c)
 *     sub_180036994 @ 0x180036994 (sub_180036994.c)
 *     sub_1800407EC @ 0x1800407EC (sub_1800407EC.c)
 *     sub_180049970 @ 0x180049970 (sub_180049970.c)
 *     sub_1800885FC @ 0x1800885FC (sub_1800885FC.c)
 *     sub_180096B90 @ 0x180096B90 (sub_180096B90.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18001197C(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  v1 = *(_DWORD *)(a1 + 8);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
