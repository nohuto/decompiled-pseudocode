/*
 * XREFs of sub_1800371C0 @ 0x1800371C0
 * Callers:
 *     sub_180037350 @ 0x180037350 (sub_180037350.c)
 *     sub_18007F5DC @ 0x18007F5DC (sub_18007F5DC.c)
 *     sub_18007F934 @ 0x18007F934 (sub_18007F934.c)
 *     sub_18007FDA4 @ 0x18007FDA4 (sub_18007FDA4.c)
 *     sub_180080160 @ 0x180080160 (sub_180080160.c)
 *     sub_1800871D0 @ 0x1800871D0 (sub_1800871D0.c)
 * Callees:
 *     sub_180037274 @ 0x180037274 (sub_180037274.c)
 */

__int64 *__fastcall sub_1800371C0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    sub_180037274();
  return a1;
}
