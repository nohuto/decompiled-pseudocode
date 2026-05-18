/*
 * XREFs of sub_1800289EC @ 0x1800289EC
 * Callers:
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_18002838C @ 0x18002838C (sub_18002838C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800289EC(__int64 a1, _QWORD *a2, __int64 a3)
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
