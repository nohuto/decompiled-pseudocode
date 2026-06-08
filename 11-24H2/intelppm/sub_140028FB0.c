/*
 * XREFs of sub_140028FB0 @ 0x140028FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14002B688 @ 0x14002B688 (sub_14002B688.c)
 */

__int64 __fastcall sub_140028FB0(__int64 a1)
{
  if ( (*(_QWORD *)(a1 + 280) & 0x2000007F000LL) == 0 || (int)sub_14002B688(a1) < 0 )
  {
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_QWORD *)(a1 + 280) &= 0xFFFFFDFFFFF80FFFuLL;
  }
  return 0LL;
}
