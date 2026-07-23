/*
 * XREFs of sub_140A0E970 @ 0x140A0E970
 * Callers:
 *     sub_14091EE7C @ 0x14091EE7C (sub_14091EE7C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140A0E970(__int64 a1)
{
  if ( a1 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8));
}
