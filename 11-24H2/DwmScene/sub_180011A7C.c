/*
 * XREFs of sub_180011A7C @ 0x180011A7C
 * Callers:
 *     sub_180010B38 @ 0x180010B38 (sub_180010B38.c)
 *     sub_180032B84 @ 0x180032B84 (sub_180032B84.c)
 *     sub_1800354B8 @ 0x1800354B8 (sub_1800354B8.c)
 *     sub_180036AF4 @ 0x180036AF4 (sub_180036AF4.c)
 *     sub_18004094C @ 0x18004094C (sub_18004094C.c)
 *     sub_180049AD0 @ 0x180049AD0 (sub_180049AD0.c)
 *     sub_18008875C @ 0x18008875C (sub_18008875C.c)
 *     sub_180096CF0 @ 0x180096CF0 (sub_180096CF0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180011A7C(__int64 a1)
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
