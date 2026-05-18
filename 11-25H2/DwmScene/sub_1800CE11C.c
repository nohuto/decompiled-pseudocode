/*
 * XREFs of sub_1800CE11C @ 0x1800CE11C
 * Callers:
 *     sub_1800D0A10 @ 0x1800D0A10 (sub_1800D0A10.c)
 *     sub_1800D0A20 @ 0x1800D0A20 (sub_1800D0A20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D1B8 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_1800CE084 @ 0x1800CE084 (sub_1800CE084.c)
 *     sub_1800CF540 @ 0x1800CF540 (sub_1800CF540.c)
 *     sub_1800D0AB0 @ 0x1800D0AB0 (sub_1800D0AB0.c)
 *     sub_1800D1560 @ 0x1800D1560 (sub_1800D1560.c)
 *     sub_1800D1670 @ 0x1800D1670 (sub_1800D1670.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800CE11C(__int64 a1, __int64 a2, double a3, int a4)
{
  struct _Mtx_internal_imp_t *v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD v21[5]; // [rsp+30h] [rbp-81h] BYREF
  _BYTE v22[32]; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v23[32]; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v24[32]; // [rsp+98h] [rbp-19h] BYREF

  v7 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v21[4] = a1 + 64;
  sub_180011B30(a1 + 64);
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v24, a2);
  v8 = *(_QWORD *)sub_1800CF540(a1 + 96, v23, v24) + 64LL;
  v9 = sub_1800130AC(a2);
  if ( (unsigned __int8)sub_1800D1670(v8, v9) )
  {
    v10 = 2;
    if ( a4 == 2 )
    {
      v10 = 3;
    }
    else
    {
      v11 = sub_180012344((__int64)v22, a2);
      v12 = sub_1800D1560(v8, v11);
      v13 = v12;
      if ( *(_DWORD *)v12 == 5 )
      {
        std::wstring::wstring((__int64)v23, L"Value");
        v14 = sub_1800130AC((__int64)v23);
        if ( (unsigned __int8)sub_1800D1670(v13, v14)
          && (v15 = sub_180012344((__int64)v21, (__int64)v23), v16 = sub_1800D1560(v13, v15), *(_DWORD *)v16 == 2) )
        {
          if ( *(double *)(v16 + 48) != a3 )
          {
            v17 = sub_180012344((__int64)v21, (__int64)v23);
            sub_1800CE084(v13, v17, a3);
            v10 = 1;
          }
        }
        else
        {
          v10 = 5;
        }
        sub_180013128((__int64)v23);
      }
      else if ( *(_DWORD *)v12 == 2 )
      {
        if ( *(double *)(v12 + 48) != a3 )
        {
          v18 = sub_180012344((__int64)v21, a2);
          sub_1800CE084(v8, v18, a3);
          v10 = 1;
        }
      }
      else
      {
        v10 = 5;
      }
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v19 = sub_180012344((__int64)v21, a2);
    sub_1800CE084(v8, v19, a3);
    v10 = 0;
  }
  else
  {
    v10 = 4;
  }
  sub_180013128((__int64)v24);
  Mtx_unlock(v7);
  if ( v10 <= 1 )
    sub_1800D0AB0(a1, a2);
  return v10;
}
