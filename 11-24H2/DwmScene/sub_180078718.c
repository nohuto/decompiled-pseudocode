/*
 * XREFs of sub_180078718 @ 0x180078718
 * Callers:
 *     sub_1800788D0 @ 0x1800788D0 (sub_1800788D0.c)
 *     sub_180078C28 @ 0x180078C28 (sub_180078C28.c)
 *     sub_180078FFC @ 0x180078FFC (sub_180078FFC.c)
 *     sub_18007905C @ 0x18007905C (sub_18007905C.c)
 *     sub_18007ADF4 @ 0x18007ADF4 (sub_18007ADF4.c)
 *     sub_18007B070 @ 0x18007B070 (sub_18007B070.c)
 *     sub_18007B2FC @ 0x18007B2FC (sub_18007B2FC.c)
 *     sub_18007CB14 @ 0x18007CB14 (sub_18007CB14.c)
 * Callees:
 *     sub_18006B2BC @ 0x18006B2BC (sub_18006B2BC.c)
 */

__int64 __fastcall sub_180078718(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_18006B2BC(v3);
      v3 += 40LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
