/*
 * XREFs of sub_18005F050 @ 0x18005F050
 * Callers:
 *     sub_180068240 @ 0x180068240 (sub_180068240.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D318 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_18001E734 @ 0x18001E734 (sub_18001E734.c)
 *     sub_18001E97C @ 0x18001E97C (sub_18001E97C.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18005F050(__int64 a1, __int64 a2)
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
  sub_18001E97C(a2, (__int64)v36, 0LL, v35);
  sub_1800131AC((__int64)v34);
  v5 = sub_1800131AC(v4);
  v8 = v6 == v35 && !(unsigned int)sub_18001E734(v5, v7, v6);
  sub_180013228((__int64)v36);
  if ( v8 )
    *(_BYTE *)(*(_QWORD *)a1 + 1417LL) = 1;
  sub_1800131AC((__int64)&unk_1801C5998);
  v9 = sub_1800131AC(a2);
  if ( v11 == qword_1801C59A8 && !(unsigned int)sub_18001E734(v9, v10, v11) )
    *(_BYTE *)(*(_QWORD *)a1 + 1418LL) = 1;
  sub_1800131AC((__int64)&unk_1801C59F8);
  v12 = sub_1800131AC(a2);
  if ( v14 == qword_1801C5A08 && !(unsigned int)sub_18001E734(v12, v13, v14)
    || (sub_1800131AC((__int64)&unk_1801C5A18), v15 = sub_1800131AC(a2), v17 == qword_1801C5A28)
    && !(unsigned int)sub_18001E734(v15, v16, v17)
    || (sub_1800131AC((__int64)&unk_1801C5A38), v18 = sub_1800131AC(a2), v20 == qword_1801C5A48)
    && !(unsigned int)sub_18001E734(v18, v19, v20) )
  {
    *(_BYTE *)(*(_QWORD *)a1 + 1419LL) = 1;
  }
  sub_1800131AC((__int64)&unk_1801C5AB8);
  v21 = sub_1800131AC(a2);
  if ( v23 == qword_1801C5AC8 && !(unsigned int)sub_18001E734(v21, v22, v23)
    || (sub_1800131AC((__int64)&unk_1801C5A58), v24 = sub_1800131AC(a2), v26 == qword_1801C5A68)
    && !(unsigned int)sub_18001E734(v24, v25, v26)
    || (sub_1800131AC((__int64)&unk_1801C5A78), v27 = sub_1800131AC(a2), v29 == qword_1801C5A88)
    && !(unsigned int)sub_18001E734(v27, v28, v29)
    || (sub_1800131AC((__int64)&unk_1801C5A98), v30 = sub_1800131AC(a2), v32 == qword_1801C5AA8)
    && !(unsigned int)sub_18001E734(v30, v31, v32) )
  {
    *(_BYTE *)(*(_QWORD *)a1 + 1420LL) = 1;
  }
  return sub_180013228((__int64)v34);
}
