/*
 * XREFs of sub_1408FCFE0 @ 0x1408FCFE0
 * Callers:
 *     sub_1408A95DC @ 0x1408A95DC (sub_1408A95DC.c)
 *     sub_140A773B0 @ 0x140A773B0 (sub_140A773B0.c)
 * Callees:
 *     sub_1408FD018 @ 0x1408FD018 (sub_1408FD018.c)
 */

signed __int64 __fastcall sub_1408FCFE0(__int64 a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 232));
    if ( !v1 )
      sub_1408FD018(a1);
  }
  return v1;
}
