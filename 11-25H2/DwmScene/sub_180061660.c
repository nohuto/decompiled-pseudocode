/*
 * XREFs of sub_180061660 @ 0x180061660
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memcmp @ 0x18000CD55 (memcmp.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D1B8 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_18002BF54 @ 0x18002BF54 (sub_18002BF54.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_180032A70 @ 0x180032A70 (sub_180032A70.c)
 *     sub_18005D728 @ 0x18005D728 (sub_18005D728.c)
 *     sub_180085B04 @ 0x180085B04 (sub_180085B04.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall sub_180061660(__int64 a1, int a2)
{
  __int64 v4; // rsi
  void (__fastcall *v5)(__int64, _BYTE *, void *, __int64); // rbx
  __int64 v6; // rax
  const void *v7; // rax
  const void *v8; // rdx
  __int64 v9; // rdx
  int i; // ebx
  __int64 v11; // rdi
  void (__fastcall *v12)(__int64, _BYTE *, void *, __int64); // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // [rsp+30h] [rbp-79h] BYREF
  __int64 v17; // [rsp+38h] [rbp-71h]
  _BYTE v18[32]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v19; // [rsp+60h] [rbp-49h] BYREF
  __int64 v20; // [rsp+68h] [rbp-41h]
  __int64 v21; // [rsp+70h] [rbp-39h]
  _BYTE v22[16]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v23; // [rsp+90h] [rbp-19h]
  _BYTE v24[16]; // [rsp+A0h] [rbp-9h] BYREF
  size_t Size; // [rsp+B0h] [rbp+7h]
  _BYTE v26[32]; // [rsp+C0h] [rbp+17h] BYREF

  v4 = sub_1800323A0(a1, a2);
  v5 = *(void (__fastcall **)(__int64, _BYTE *, void *, __int64))(*(_QWORD *)v4 + 96LL);
  v6 = std::wstring::wstring((__int64)v22, word_1800F78E8);
  v5(v4, v26, &unk_1801C5C68, v6);
  sub_18002BF54((__int64)v24, (__int64)v26);
  sub_1800137F8((__int64)&unk_1801C8868);
  v7 = (const void *)sub_1800137F8((__int64)v24);
  if ( Size == qword_1801C8878 && !memcmp(v7, v8, Size) )
  {
    sub_180032A70(a1, &v16, 0);
    for ( i = 0; i < (int)((__int64)(*(_QWORD *)(a1 + 712) - *(_QWORD *)(a1 + 704)) >> 4); ++i )
    {
      sub_180032A70(a1, &v19, i);
      if ( *(_DWORD *)(v19 + 112) == a2 )
      {
        sub_18001244C(&v16, &v19);
        if ( v20 )
          sub_18001050C(v20);
        break;
      }
      if ( v20 )
        sub_18001050C(v20);
    }
    v11 = sub_18005D728(v16, v9);
    v12 = *(void (__fastcall **)(__int64, _BYTE *, void *, __int64))(*(_QWORD *)v4 + 96LL);
    v13 = std::wstring::wstring((__int64)v18, word_1800F78E8);
    v12(v4, v22, &unk_1801C5C48, v13);
    if ( v23 )
    {
      sub_18002BF54((__int64)&v19, (__int64)v22);
      v14 = sub_1800137F8((__int64)&v19);
      sub_180085B04(*(_QWORD *)(v11 + 120), v14, v21, v24);
      sub_180011A5C((__int64)&v19);
    }
    sub_180013128((__int64)v22);
    if ( v17 )
      sub_18001050C(v17);
  }
  sub_180011A5C((__int64)v24);
  return sub_180013128((__int64)v26);
}
