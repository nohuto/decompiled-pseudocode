/*
 * XREFs of sub_1800D0674 @ 0x1800D0674
 * Callers:
 *     sub_1800D04B0 @ 0x1800D04B0 (sub_1800D04B0.c)
 *     sub_1800D0674 @ 0x1800D0674 (sub_1800D0674.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D1B8 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_1800D0674 @ 0x1800D0674 (sub_1800D0674.c)
 *     sub_1800D1560 @ 0x1800D1560 (sub_1800D1560.c)
 *     sub_1800D1670 @ 0x1800D1670 (sub_1800D1670.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D0674(__int64 a1, int *a2)
{
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx
  _BYTE v13[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v14[32]; // [rsp+48h] [rbp-30h] BYREF

  v4 = *a2;
  std::wstring::wstring((__int64)v14, L"Value");
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 2;
        if ( v7 )
        {
          if ( v7 == 1 && (v8 = sub_1800130AC((__int64)v14), (unsigned __int8)sub_1800D1670(a2, v8)) )
          {
            v9 = sub_180012344((__int64)v13, (__int64)v14);
            v10 = sub_1800D1560(a2, v9);
            v11 = sub_1800D0674(a1, v10);
          }
          else
          {
            v11 = 0;
          }
        }
        else
        {
          v11 = 3;
        }
      }
      else
      {
        v11 = 1;
      }
    }
    else
    {
      v11 = 2;
    }
  }
  else
  {
    v11 = 4;
  }
  sub_180013128((__int64)v14);
  return v11;
}
