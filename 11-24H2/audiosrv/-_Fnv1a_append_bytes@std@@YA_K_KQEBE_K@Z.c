/*
 * XREFs of ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180043310
 * Callers:
 *     ?do_hash@?$collate@G@std@@MEBAJPEBG0@Z @ 0x1801495E0 (-do_hash@-$collate@G@std@@MEBAJPEBG0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Fnv1a_append_bytes(__int64 a1, const unsigned __int8 *const a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  __int64 i; // r9
  __int64 v5; // rax

  v3 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v3 < a3; i = 0x100000001B3LL * (v5 ^ i) )
    v5 = a2[v3++];
  return i;
}
