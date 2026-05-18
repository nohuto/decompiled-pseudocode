/*
 * XREFs of sub_18007BFA8 @ 0x18007BFA8
 * Callers:
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 *     sub_18007B4FC @ 0x18007B4FC (sub_18007B4FC.c)
 * Callees:
 *     sub_18007BDEC @ 0x18007BDEC (sub_18007BDEC.c)
 */

__int64 __fastcall sub_18007BFA8(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 112) )
    return sub_18007BDEC(a1);
  return result;
}
