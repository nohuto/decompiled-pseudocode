/*
 * XREFs of sub_140A719B4 @ 0x140A719B4
 * Callers:
 *     sub_14091F8F8 @ 0x14091F8F8 (sub_14091F8F8.c)
 * Callees:
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 */

void __fastcall sub_140A719B4(__int64 a1)
{
  if ( a1 )
  {
    SddlpFree(*(void **)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
