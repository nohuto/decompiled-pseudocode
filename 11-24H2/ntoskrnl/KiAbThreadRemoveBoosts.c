/*
 * XREFs of KiAbThreadRemoveBoosts @ 0x1403411D0
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x140340980 (KiAbThreadRemoveBoostsSlow.c)
 */

void __fastcall KiAbThreadRemoveBoosts(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  if ( (_DWORD)a3 )
    KiAbThreadRemoveBoostsSlow(a1, a2, a3, 0LL);
}
