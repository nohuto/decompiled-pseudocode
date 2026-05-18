/*
 * XREFs of sub_1800CE3F4 @ 0x1800CE3F4
 * Callers:
 *     sub_1800D0A40 @ 0x1800D0A40 (sub_1800D0A40.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D1B8 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_1800CDD8C @ 0x1800CDD8C (sub_1800CDD8C.c)
 *     sub_1800CDDD4 @ 0x1800CDDD4 (sub_1800CDDD4.c)
 *     sub_1800CE32C @ 0x1800CE32C (sub_1800CE32C.c)
 *     sub_1800CF540 @ 0x1800CF540 (sub_1800CF540.c)
 *     sub_1800D0AB0 @ 0x1800D0AB0 (sub_1800D0AB0.c)
 *     sub_1800D1560 @ 0x1800D1560 (sub_1800D1560.c)
 *     sub_1800D1670 @ 0x1800D1670 (sub_1800D1670.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800CE3F4(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // r15
  struct _Mtx_internal_imp_t *v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rax
  unsigned int v11; // esi
  __int64 v12; // rax
  _DWORD *v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // rax
  char v19; // di
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  char v23; // di
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  _BYTE v30[32]; // [rsp+38h] [rbp-91h] BYREF
  __int64 v31; // [rsp+58h] [rbp-71h]
  _BYTE v32[32]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v33; // [rsp+80h] [rbp-49h]
  _BYTE v34[32]; // [rsp+88h] [rbp-41h] BYREF
  _BYTE v35[32]; // [rsp+A8h] [rbp-21h] BYREF
  _BYTE v36[32]; // [rsp+C8h] [rbp-1h] BYREF

  v7 = a1;
  v33 = a3;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v31 = a1 + 64;
  sub_180011B30(a1 + 64);
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)v7 + 56LL))(v7, v36, a2);
  v9 = *(_QWORD *)sub_1800CF540(v7 + 96, v35, v36) + 64LL;
  v10 = sub_1800130AC(a2);
  if ( (unsigned __int8)sub_1800D1670(v9, v10) )
  {
    v11 = 2;
    if ( a4 == 2 )
    {
      v11 = 3;
    }
    else
    {
      v12 = sub_180012344((__int64)v32, a2);
      v13 = (_DWORD *)sub_1800D1560(v9, v12);
      v14 = (__int64)v13;
      if ( *v13 == 5 )
      {
        std::wstring::wstring((__int64)v35, L"Value");
        v15 = sub_1800130AC((__int64)v35);
        if ( !(unsigned __int8)sub_1800D1670(v14, v15)
          || (v16 = sub_180012344((__int64)v30, (__int64)v35), v17 = (_DWORD *)sub_1800D1560(v14, v16), *v17) )
        {
          v11 = 5;
        }
        else
        {
          v18 = sub_1800CDDD4((__int64)v34, (__int64)v17);
          v19 = sub_1800CDD8C(v18, a3);
          sub_180013128((__int64)v34);
          if ( v19 )
          {
            v20 = sub_180012344((__int64)v34, a3);
            v21 = sub_180012344((__int64)v30, (__int64)v35);
            sub_1800CE32C(v14, v21, v20);
            v11 = 1;
          }
        }
        sub_180013128((__int64)v35);
      }
      else if ( *v13 )
      {
        v11 = 5;
      }
      else
      {
        v22 = sub_1800CDDD4((__int64)v34, (__int64)v13);
        v23 = sub_1800CDD8C(v22, a3);
        sub_180013128((__int64)v34);
        if ( v23 )
        {
          v24 = sub_180012344((__int64)v34, a3);
          v25 = sub_180012344((__int64)v30, a2);
          sub_1800CE32C(v9, v25, v24);
          v11 = 1;
        }
      }
      v7 = a1;
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v26 = sub_180012344((__int64)v34, a3);
    v27 = sub_180012344((__int64)v30, a2);
    sub_1800CE32C(v9, v27, v26);
    v11 = 0;
  }
  else
  {
    v11 = 4;
  }
  sub_180013128((__int64)v36);
  Mtx_unlock(v8);
  if ( v11 <= 1 )
    sub_1800D0AB0(v7, a2);
  sub_180013128(a3);
  return v11;
}
