/*
 * XREFs of sub_18007FE30 @ 0x18007FE30
 * Callers:
 *     sub_18007FDA4 @ 0x18007FDA4 (sub_18007FDA4.c)
 *     sub_180080000 @ 0x180080000 (sub_180080000.c)
 *     sub_180080060 @ 0x180080060 (sub_180080060.c)
 *     sub_180080160 @ 0x180080160 (sub_180080160.c)
 * Callees:
 *     sub_18007FEF0 @ 0x18007FEF0 (sub_18007FEF0.c)
 */

__int64 __fastcall sub_18007FE30(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18007FEF0(v1, 1LL);
  return result;
}
