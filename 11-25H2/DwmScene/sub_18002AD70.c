/*
 * XREFs of sub_18002AD70 @ 0x18002AD70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 */

_QWORD *__fastcall sub_18002AD70(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v2 = 0LL;
  result = sub_180011010((_QWORD *)(a1 + 208), v2);
  if ( v2[1] )
    return (_QWORD *)sub_18001050C(v2[1]);
  return result;
}
