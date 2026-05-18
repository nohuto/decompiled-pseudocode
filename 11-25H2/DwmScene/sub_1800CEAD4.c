/*
 * XREFs of sub_1800CEAD4 @ 0x1800CEAD4
 * Callers:
 *     sub_1800CEAD4 @ 0x1800CEAD4 (sub_1800CEAD4.c)
 *     sub_1800D02A0 @ 0x1800D02A0 (sub_1800D02A0.c)
 *     sub_1800D0BA0 @ 0x1800D0BA0 (sub_1800D0BA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D1B8 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_18003EB98 @ 0x18003EB98 (sub_18003EB98.c)
 *     sub_1800CEAD4 @ 0x1800CEAD4 (sub_1800CEAD4.c)
 *     sub_1800CFFAC @ 0x1800CFFAC (sub_1800CFFAC.c)
 *     sub_1800D1560 @ 0x1800D1560 (sub_1800D1560.c)
 *     sub_1800D1670 @ 0x1800D1670 (sub_1800D1670.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800CEAD4(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // [rsp+20h] [rbp-49h] BYREF
  __int64 v19; // [rsp+28h] [rbp-41h]
  __int64 v20; // [rsp+30h] [rbp-39h]
  _BYTE v21[32]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v22[32]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v23[32]; // [rsp+78h] [rbp+Fh] BYREF

  v6 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v20 = a1 + 64;
  sub_180011B30(a1 + 64);
  v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v23, a2);
  v8 = sub_1800CFFAC(a1 + 96, v7);
  sub_180013128((__int64)v23);
  v9 = sub_1800130AC(a2);
  if ( (unsigned __int8)sub_1800D1670(v8, v9) )
  {
    v11 = sub_180012344((__int64)v21, a2);
    v12 = sub_1800D1560(v8, v11);
    v13 = v12;
    if ( *(_DWORD *)v12 == 5 )
    {
      std::wstring::wstring((__int64)v23, L"Value");
      v14 = sub_1800130AC((__int64)v23);
      if ( (unsigned __int8)sub_1800D1670(v13, v14) )
      {
        v15 = sub_180012344((__int64)v22, (__int64)v23);
        v16 = sub_1800D1560(v13, v15);
        if ( *(_DWORD *)v16 == 2 )
        {
          *a3 = *(_QWORD *)(v16 + 48);
          sub_180013128((__int64)v23);
LABEL_16:
          v10 = 0;
          goto LABEL_17;
        }
      }
      sub_180013128((__int64)v23);
    }
    else if ( *(_DWORD *)v12 == 2 )
    {
      *a3 = *(_QWORD *)(v12 + 48);
      goto LABEL_16;
    }
    v10 = 1;
    goto LABEL_17;
  }
  sub_18003EB98(a1, &v18);
  if ( v18 )
  {
    v10 = sub_1800CEAD4(v18, a2, a3);
    if ( v19 )
      sub_18001050C(v19);
  }
  else
  {
    if ( v19 )
      sub_18001050C(v19);
    v10 = 2;
  }
LABEL_17:
  Mtx_unlock(v6);
  return v10;
}
