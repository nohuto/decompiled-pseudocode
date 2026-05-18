/*
 * XREFs of sub_18000DB7C @ 0x18000DB7C
 * Callers:
 *     sub_18000ECFC @ 0x18000ECFC (sub_18000ECFC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000F1E4 @ 0x18000F1E4 (sub_18000F1E4.c)
 *     sub_18000F71C @ 0x18000F71C (sub_18000F71C.c)
 *     sub_18000F7D4 @ 0x18000F7D4 (sub_18000F7D4.c)
 *     sub_18000FC6C @ 0x18000FC6C (sub_18000FC6C.c)
 *     sub_18000FD34 @ 0x18000FD34 (sub_18000FD34.c)
 */

__int64 __fastcall sub_18000DB7C(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // rdx
  _BYTE v15[528]; // [rsp+40h] [rbp-238h] BYREF
  void *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    sub_18000FC6C();
  sub_18000F7D4(v15, 260LL, a3, a2);
  sub_18000F71C(v15, v6, L"_p0");
  v7 = a4 >> 31;
  v8 = 1;
  v9 = a4 & 0x7FFFFFFF;
  v10 = 1LL;
  if ( v9 )
    v10 = v9;
  v12 = sub_18000FD34(a1, v9, v10, v15);
  if ( v12 < 0 )
  {
    v13 = 136LL;
LABEL_7:
    sub_18000F1E4(retaddr, v13, "wil", (unsigned int)v12);
    return (unsigned int)v12;
  }
  sub_18000F71C(v15, v11, L"h");
  if ( (_DWORD)v7 )
    v8 = v7;
  v12 = sub_18000FD34(a1 + 8, (unsigned int)v7, v8, v15);
  if ( v12 < 0 )
  {
    v13 = 141LL;
    goto LABEL_7;
  }
  return 0LL;
}
