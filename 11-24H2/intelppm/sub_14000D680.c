/*
 * XREFs of sub_14000D680 @ 0x14000D680
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000677C @ 0x14000677C (sub_14000677C.c)
 */

__int64 __fastcall sub_14000D680(int a1, __int64 a2, char a3)
{
  if ( (a1 == 3 || a1 == 6) && !a3 && (__int64 *)qword_140019198 != &qword_140019198 && qword_140019198 != 32 )
    sub_14000677C(qword_140019198 - 32);
  return 0LL;
}
