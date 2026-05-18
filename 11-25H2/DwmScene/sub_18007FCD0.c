/*
 * XREFs of sub_18007FCD0 @ 0x18007FCD0
 * Callers:
 *     sub_18007FC44 @ 0x18007FC44 (sub_18007FC44.c)
 *     sub_18007FEA0 @ 0x18007FEA0 (sub_18007FEA0.c)
 *     sub_18007FF00 @ 0x18007FF00 (sub_18007FF00.c)
 *     sub_180080000 @ 0x180080000 (sub_180080000.c)
 * Callees:
 *     sub_18007FD90 @ 0x18007FD90 (sub_18007FD90.c)
 */

__int64 __fastcall sub_18007FCD0(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18007FD90(v1, 1LL);
  return result;
}
