/*
 * XREFs of sub_18000F7EC @ 0x18000F7EC
 * Callers:
 *     sub_18000D7F4 @ 0x18000D7F4 (sub_18000D7F4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000D6B0 @ 0x18000D6B0 (sub_18000D6B0.c)
 *     sub_18000E504 @ 0x18000E504 (sub_18000E504.c)
 *     sub_18000F0C4 @ 0x18000F0C4 (sub_18000F0C4.c)
 *     sub_18000F0E4 @ 0x18000F0E4 (sub_18000F0E4.c)
 *     sub_18000F61C @ 0x18000F61C (sub_18000F61C.c)
 *     sub_18000F6D4 @ 0x18000F6D4 (sub_18000F6D4.c)
 */

__int64 __fastcall sub_18000F7EC(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  HANDLE v6; // rax
  __int64 v7; // r8
  int v8; // r9d
  int v9; // eax
  __int64 v10; // rdx
  int v11; // edi
  HANDLE v12; // rax
  __int64 v13; // r8
  int v14; // r9d
  int v15; // eax
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE v18; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE v19[2]; // [rsp+48h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 retaddr; // [rsp+280h] [rbp+178h]

  v3 = 0;
  *a3 = 0LL;
  sub_18000F6D4(Name, 260LL, (__int64)a3, a1);
  sub_18000F61C(Name, v5, (__int64)L"_p0");
  v6 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v19[0] = v6;
  if ( v6 )
  {
    v17 = 0LL;
    v9 = sub_18000E504(v6, (int *)&v17 + 1);
    v11 = v9;
    if ( v9 >= 0 )
    {
      sub_18000F61C(Name, v10, (__int64)L"h");
      v12 = OpenSemaphoreW(0x1F0003u, 0, Name);
      v18 = v12;
      if ( !v12 )
      {
        v3 = sub_18000F0C4(retaddr, 217, v13, v14);
        sub_18000D6B0(&v18);
        goto LABEL_12;
      }
      v15 = sub_18000E504(v12, (int *)&v17);
      v11 = v15;
      if ( v15 >= 0 )
      {
        sub_18000D6B0(&v18);
        *a3 = SHIDWORD(v17) | (unsigned __int64)((__int64)(int)v17 << 31);
        goto LABEL_12;
      }
      sub_18000F0E4(retaddr, 219LL, (__int64)"wil", (unsigned int)v15);
      sub_18000D6B0(&v18);
    }
    else
    {
      sub_18000F0E4(retaddr, 211LL, (__int64)"wil", (unsigned int)v9);
    }
    v3 = v11;
  }
  else if ( GetLastError() != 2 )
  {
    v3 = sub_18000F0C4(retaddr, 205, v7, v8);
  }
LABEL_12:
  sub_18000D6B0(v19);
  return v3;
}
