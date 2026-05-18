/*
 * XREFs of sub_180090770 @ 0x180090770
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180041928 @ 0x180041928 (sub_180041928.c)
 *     sub_180041B10 @ 0x180041B10 (sub_180041B10.c)
 *     sub_1800487F8 @ 0x1800487F8 (sub_1800487F8.c)
 */

__int64 __fastcall sub_180090770(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  int v4; // ebx
  char v5; // r8
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  sub_1800487F8(a2, &v7, a3);
  v3 = v7;
  v4 = dword_1801C2BB8[*(int *)(v7 + 188)];
  sub_180041B10(v7, 9, (unsigned int)(v4 - 1) <= 1);
  sub_180041B10(v3, 8, (unsigned int)(v4 - 2) <= 1);
  v5 = v4 == 1 || v4 == 2;
  sub_180041928(v3, (__int64)&unk_1801C7D48, v5);
  result = sub_180041928(v3, (__int64)&unk_1801C7D68, (unsigned int)(v4 - 2) <= 1);
  if ( v8 )
    return sub_18001050C(v8);
  return result;
}
