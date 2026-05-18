/*
 * XREFs of sub_18005EEF0 @ 0x18005EEF0
 * Callers:
 *     sub_1800680E0 @ 0x1800680E0 (sub_1800680E0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D1B8 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_18001E5D4 @ 0x18001E5D4 (sub_18001E5D4.c)
 *     sub_18001E81C @ 0x18001E81C (sub_18001E81C.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18005EEF0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int16 *v7; // r9
  bool v8; // si
  __int64 v9; // rax
  unsigned __int16 *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int16 *v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int16 *v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned __int16 *v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned __int16 *v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int16 *v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned __int16 *v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rax
  unsigned __int16 *v31; // rdx
  __int64 v32; // r9
  _BYTE v34[16]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v35; // [rsp+30h] [rbp-58h]
  _BYTE v36[32]; // [rsp+40h] [rbp-48h] BYREF

  std::wstring::wstring((__int64)v34, L"Model.");
  sub_18001E81C(a2, (__int64)v36, 0LL, v35);
  sub_1800130AC((__int64)v34);
  v5 = sub_1800130AC(v4);
  v8 = v6 == v35 && !(unsigned int)sub_18001E5D4(v5, v7, v6);
  sub_180013128((__int64)v36);
  if ( v8 )
    *(_BYTE *)(*(_QWORD *)a1 + 1417LL) = 1;
  sub_1800130AC((__int64)&unk_1801C4988);
  v9 = sub_1800130AC(a2);
  if ( v11 == qword_1801C4998 && !(unsigned int)sub_18001E5D4(v9, v10, v11) )
    *(_BYTE *)(*(_QWORD *)a1 + 1418LL) = 1;
  sub_1800130AC((__int64)&unk_1801C49E8);
  v12 = sub_1800130AC(a2);
  if ( v14 == qword_1801C49F8 && !(unsigned int)sub_18001E5D4(v12, v13, v14)
    || (sub_1800130AC((__int64)&unk_1801C4A08), v15 = sub_1800130AC(a2), v17 == qword_1801C4A18)
    && !(unsigned int)sub_18001E5D4(v15, v16, v17)
    || (sub_1800130AC((__int64)&unk_1801C4A28), v18 = sub_1800130AC(a2), v20 == qword_1801C4A38)
    && !(unsigned int)sub_18001E5D4(v18, v19, v20) )
  {
    *(_BYTE *)(*(_QWORD *)a1 + 1419LL) = 1;
  }
  sub_1800130AC((__int64)&unk_1801C4AA8);
  v21 = sub_1800130AC(a2);
  if ( v23 == qword_1801C4AB8 && !(unsigned int)sub_18001E5D4(v21, v22, v23)
    || (sub_1800130AC((__int64)&unk_1801C4A48), v24 = sub_1800130AC(a2), v26 == qword_1801C4A58)
    && !(unsigned int)sub_18001E5D4(v24, v25, v26)
    || (sub_1800130AC((__int64)&unk_1801C4A68), v27 = sub_1800130AC(a2), v29 == qword_1801C4A78)
    && !(unsigned int)sub_18001E5D4(v27, v28, v29)
    || (sub_1800130AC((__int64)&unk_1801C4A88), v30 = sub_1800130AC(a2), v32 == qword_1801C4A98)
    && !(unsigned int)sub_18001E5D4(v30, v31, v32) )
  {
    *(_BYTE *)(*(_QWORD *)a1 + 1420LL) = 1;
  }
  return sub_180013128((__int64)v34);
}
