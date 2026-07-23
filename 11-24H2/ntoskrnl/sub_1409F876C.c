/*
 * XREFs of sub_1409F876C @ 0x1409F876C
 * Callers:
 *     sub_14091D9EC @ 0x14091D9EC (sub_14091D9EC.c)
 *     sub_14091F8F8 @ 0x14091F8F8 (sub_14091F8F8.c)
 * Callees:
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     sub_14091DAB0 @ 0x14091DAB0 (sub_14091DAB0.c)
 */

signed __int64 __fastcall sub_1409F876C(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 && (int)sub_14091DAB0(a1, a2, -1) >= 0 )
    {
      SddlpFree(*(void **)(a2 + 24));
      SddlpFree((void *)a2);
    }
  }
  return v2;
}
