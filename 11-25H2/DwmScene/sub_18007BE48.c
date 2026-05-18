/*
 * XREFs of sub_18007BE48 @ 0x18007BE48
 * Callers:
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_18007B39C @ 0x18007B39C (sub_18007B39C.c)
 * Callees:
 *     sub_18007BC8C @ 0x18007BC8C (sub_18007BC8C.c)
 */

__int64 __fastcall sub_18007BE48(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 112) )
    return sub_18007BC8C(a1);
  return result;
}
