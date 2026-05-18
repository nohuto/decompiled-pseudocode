/*
 * XREFs of sub_1800908D0 @ 0x1800908D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180041A88 @ 0x180041A88 (sub_180041A88.c)
 *     sub_180041C70 @ 0x180041C70 (sub_180041C70.c)
 *     sub_180048958 @ 0x180048958 (sub_180048958.c)
 */

__int64 __fastcall sub_1800908D0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  int v4; // ebx
  char v5; // r8
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  sub_180048958(a2, &v7, a3);
  v3 = v7;
  v4 = dword_1801C3BE8[*(int *)(v7 + 188)];
  sub_180041C70(v7, 9, (unsigned int)(v4 - 1) <= 1);
  sub_180041C70(v3, 8, (unsigned int)(v4 - 2) <= 1);
  v5 = v4 == 1 || v4 == 2;
  sub_180041A88(v3, (__int64)&unk_1801C8D58, v5);
  result = sub_180041A88(v3, (__int64)&unk_1801C8D78, (unsigned int)(v4 - 2) <= 1);
  if ( v8 )
    return sub_18001060C(v8);
  return result;
}
