/*
 * XREFs of sub_140003460 @ 0x140003460
 * Callers:
 *     sub_14002B830 @ 0x14002B830 (sub_14002B830.c)
 *     sub_14002B890 @ 0x14002B890 (sub_14002B890.c)
 *     sub_1400453C0 @ 0x1400453C0 (sub_1400453C0.c)
 *     sub_140045430 @ 0x140045430 (sub_140045430.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140003460(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9

  v2 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 312LL);
  if ( v3 )
    return v3 + 40LL * a2;
  return v2;
}
