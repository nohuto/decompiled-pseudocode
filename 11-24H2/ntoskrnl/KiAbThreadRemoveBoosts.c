/*
 * XREFs of KiAbThreadRemoveBoosts @ 0x1403206B0
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14031FE60 (KiAbThreadRemoveBoostsSlow.c)
 */

void __fastcall KiAbThreadRemoveBoosts(ULONG_PTR a1, __int64 a2, int a3)
{
  if ( a3 )
    KiAbThreadRemoveBoostsSlow(a1, a2, a3, 0LL);
}
