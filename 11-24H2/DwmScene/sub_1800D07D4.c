/*
 * XREFs of sub_1800D07D4 @ 0x1800D07D4
 * Callers:
 *     sub_1800D0610 @ 0x1800D0610 (sub_1800D0610.c)
 *     sub_1800D07D4 @ 0x1800D07D4 (sub_1800D07D4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D318 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_1800D07D4 @ 0x1800D07D4 (sub_1800D07D4.c)
 *     sub_1800D16C0 @ 0x1800D16C0 (sub_1800D16C0.c)
 *     sub_1800D17D0 @ 0x1800D17D0 (sub_1800D17D0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D07D4(__int64 a1, int *a2)
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
          if ( v7 == 1 && (v8 = sub_1800131AC((__int64)v14), (unsigned __int8)sub_1800D17D0(a2, v8)) )
          {
            v9 = sub_180012444((__int64)v13, (__int64)v14);
            v10 = sub_1800D16C0(a2, v9);
            v11 = sub_1800D07D4(a1, v10);
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
  sub_180013228((__int64)v14);
  return v11;
}
