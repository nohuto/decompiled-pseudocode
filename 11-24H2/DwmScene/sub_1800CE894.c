/*
 * XREFs of sub_1800CE894 @ 0x1800CE894
 * Callers:
 *     sub_1800D0B60 @ 0x1800D0B60 (sub_1800D0B60.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D318 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_1800CE800 @ 0x1800CE800 (sub_1800CE800.c)
 *     sub_1800CF6A0 @ 0x1800CF6A0 (sub_1800CF6A0.c)
 *     sub_1800D0C10 @ 0x1800D0C10 (sub_1800D0C10.c)
 *     sub_1800D16C0 @ 0x1800D16C0 (sub_1800D16C0.c)
 *     sub_1800D17D0 @ 0x1800D17D0 (sub_1800D17D0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800CE894(__int64 a1, __int64 a2, char a3, int a4)
{
  struct _Mtx_internal_imp_t *v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _BYTE v22[32]; // [rsp+28h] [rbp-71h] BYREF
  __int64 v23; // [rsp+48h] [rbp-51h]
  _BYTE v24[32]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v25[32]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v26[32]; // [rsp+90h] [rbp-9h] BYREF

  v8 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v23 = a1 + 64;
  sub_180011C30(a1 + 64);
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v26, a2);
  v9 = *(_QWORD *)sub_1800CF6A0(a1 + 96, v25, v26) + 64LL;
  v10 = sub_1800131AC(a2);
  if ( (unsigned __int8)sub_1800D17D0(v9, v10) )
  {
    v11 = 2;
    if ( a4 == 2 )
    {
      v11 = 3;
    }
    else
    {
      v12 = sub_180012444((__int64)v24, a2);
      v13 = sub_1800D16C0(v9, v12);
      v14 = v13;
      if ( *(_DWORD *)v13 == 5 )
      {
        std::wstring::wstring((__int64)v25, L"Value");
        v15 = sub_1800131AC((__int64)v25);
        if ( (unsigned __int8)sub_1800D17D0(v14, v15)
          && (v16 = sub_180012444((__int64)v22, (__int64)v25), v17 = sub_1800D16C0(v14, v16), *(_DWORD *)v17 == 4) )
        {
          if ( *(_BYTE *)(v17 + 60) != a3 )
          {
            v18 = sub_180012444((__int64)v22, (__int64)v25);
            sub_1800CE800(v14, v18, a3);
            v11 = 1;
          }
        }
        else
        {
          v11 = 5;
        }
        sub_180013228((__int64)v25);
      }
      else if ( *(_DWORD *)v13 == 4 )
      {
        if ( *(_BYTE *)(v13 + 60) != a3 )
        {
          v19 = sub_180012444((__int64)v22, a2);
          sub_1800CE800(v9, v19, a3);
          v11 = 1;
        }
      }
      else
      {
        v11 = 5;
      }
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v20 = sub_180012444((__int64)v22, a2);
    sub_1800CE800(v9, v20, a3);
    v11 = 0;
  }
  else
  {
    v11 = 4;
  }
  sub_180013228((__int64)v26);
  Mtx_unlock(v8);
  if ( v11 <= 1 )
    sub_1800D0C10(a1, a2);
  return v11;
}
