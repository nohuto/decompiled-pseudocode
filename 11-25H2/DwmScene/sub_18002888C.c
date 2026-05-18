/*
 * XREFs of sub_18002888C @ 0x18002888C
 * Callers:
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_18002822C @ 0x18002822C (sub_18002822C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18002888C(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 i; // r9
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  for ( i = a3 + 16; i != v3; i += 16LL )
  {
    *(_QWORD *)(i - 16) = *(_QWORD *)i;
    *(_BYTE *)(i - 8) = *(_BYTE *)(i + 8);
  }
  *(_QWORD *)(a1 + 8) -= 16LL;
  result = a2;
  *a2 = a3;
  return result;
}
