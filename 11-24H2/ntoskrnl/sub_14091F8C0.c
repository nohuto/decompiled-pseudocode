/*
 * XREFs of sub_14091F8C0 @ 0x14091F8C0
 * Callers:
 *     sub_1408FF83C @ 0x1408FF83C (sub_1408FF83C.c)
 *     sub_140A714D0 @ 0x140A714D0 (sub_140A714D0.c)
 * Callees:
 *     sub_14091F8F8 @ 0x14091F8F8 (sub_14091F8F8.c)
 */

signed __int64 __fastcall sub_14091F8C0(__int64 a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 232));
    if ( !v1 )
      sub_14091F8F8(a1);
  }
  return v1;
}
