/*
 * XREFs of sub_18005ED8C @ 0x18005ED8C
 * Callers:
 *     sub_180068040 @ 0x180068040 (sub_180068040.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D1B8 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_18001E5D4 @ 0x18001E5D4 (sub_18001E5D4.c)
 *     sub_18001E81C @ 0x18001E81C (sub_18001E81C.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18005ED8C(__int64 a1, __int64 a2)
{
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int16 *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int16 *v12; // r9
  bool v13; // si
  _BYTE v15[16]; // [rsp+28h] [rbp-41h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-31h]
  _BYTE v17[16]; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-11h]
  _BYTE v19[32]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v20[32]; // [rsp+88h] [rbp+1Fh] BYREF

  std::wstring::wstring((__int64)v17, L"Lighting.");
  std::wstring::wstring((__int64)v15, L"/Internal/Lighting.");
  sub_18001E81C(a2, (__int64)v20, 0LL, v18);
  v4 = 1;
  sub_1800130AC((__int64)v17);
  v6 = sub_1800130AC(v5);
  v13 = 1;
  if ( v7 != v18 || (unsigned int)sub_18001E5D4(v6, v8, v7) )
  {
    sub_18001E81C(a2, (__int64)v19, 0LL, v16);
    v4 = 3;
    sub_1800130AC((__int64)v15);
    v10 = sub_1800130AC(v9);
    if ( v11 != v16 || (unsigned int)sub_18001E5D4(v10, v12, v11) )
      v13 = 0;
  }
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    sub_180013128((__int64)v19);
  }
  if ( (v4 & 1) != 0 )
    sub_180013128((__int64)v20);
  if ( v13 )
    *(_BYTE *)(*(_QWORD *)a1 + 1416LL) = 1;
  sub_180013128((__int64)v15);
  return sub_180013128((__int64)v17);
}
