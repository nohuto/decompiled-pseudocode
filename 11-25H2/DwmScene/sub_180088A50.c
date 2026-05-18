/*
 * XREFs of sub_180088A50 @ 0x180088A50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 */

__int64 __fastcall sub_180088A50(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a1 + 1784);
  if ( *v2 )
  {
    *(_BYTE *)(*v2 + 168LL) = 1;
    *(_OWORD *)v4 = 0LL;
    result = (__int64)sub_180011010(v2, v4);
    if ( v4[1] )
      result = sub_18001050C(v4[1]);
  }
  *(_BYTE *)(a1 + 1898) = 0;
  return result;
}
