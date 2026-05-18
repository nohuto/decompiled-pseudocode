/*
 * XREFs of sub_180088BB0 @ 0x180088BB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 */

__int64 __fastcall sub_180088BB0(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a1 + 1784);
  if ( *v2 )
  {
    *(_BYTE *)(*v2 + 168LL) = 1;
    *(_OWORD *)v4 = 0LL;
    result = (__int64)sub_180011110(v2, v4);
    if ( v4[1] )
      result = sub_18001060C(v4[1]);
  }
  *(_BYTE *)(a1 + 1898) = 0;
  return result;
}
