/*
 * XREFs of sub_18003CD9C @ 0x18003CD9C
 * Callers:
 *     sub_18003E8CC @ 0x18003E8CC (sub_18003E8CC.c)
 * Callees:
 *     sub_18003CE3C @ 0x18003CE3C (sub_18003CE3C.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 */

__int64 __fastcall sub_18003CD9C(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  bool v5; // zf
  __int64 result; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_18003CE3C(a1, v7);
  v5 = (unsigned __int8)sub_18003CF94(v4, v8, a2) == 0;
  result = v8;
  if ( v5 )
    return *(_QWORD *)a1;
  return result;
}
