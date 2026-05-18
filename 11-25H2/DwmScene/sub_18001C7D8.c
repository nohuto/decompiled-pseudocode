/*
 * XREFs of sub_18001C7D8 @ 0x18001C7D8
 * Callers:
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000C0FC @ 0x18000C0FC (sub_18000C0FC.c)
 *     sub_18000C1B4 @ 0x18000C1B4 (sub_18000C1B4.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001BDE0 @ 0x18001BDE0 (sub_18001BDE0.c)
 *     sub_18001C580 @ 0x18001C580 (sub_18001C580.c)
 *     sub_18001C674 @ 0x18001C674 (sub_18001C674.c)
 *     sub_18001CDE0 @ 0x18001CDE0 (sub_18001CDE0.c)
 *     __alloca_probe @ 0x1800D4DE0 (__alloca_probe.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_18001C7D8(__int64 a1, int a2)
{
  int v4; // r13d
  int v5; // r14d
  _QWORD *v6; // rax
  int v7; // [rsp+40h] [rbp-C0h]
  _QWORD v8[4]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v9[5]; // [rsp+68h] [rbp-98h] BYREF
  CHAR OutputString[2112]; // [rsp+90h] [rbp-70h] BYREF

  if ( (int)sub_18001CDE0(&unk_1801C3448) <= 0 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    v5 = *(_DWORD *)(a1 + 4);
    v7 = *(_DWORD *)a1;
    sub_18000C1B4();
    GetCurrentThreadId();
    std::string::string(v8, *(_BYTE **)(a1 + 16));
    sub_1800137F8((__int64)v8);
    v6 = sub_18001C580(v9);
    sub_1800137F8((__int64)v6);
    sub_18001BDE0();
    sub_180011A5C((__int64)v9);
    sub_180011A5C((__int64)v8);
    if ( a2 >= v5 )
    {
      std::string::string(v9, OutputString);
      std::string::string(v8, *(_BYTE **)(a1 + 16));
      sub_18001C674((__int64)v8, a2, (__int64)v9);
      sub_180011A5C((__int64)v8);
      sub_180011A5C((__int64)v9);
    }
    if ( a2 >= v4 )
      sub_18000C0FC();
    OutputDebugStringA(OutputString);
    if ( a2 >= v7 )
    {
      if ( !IsDebuggerPresent() )
        __fastfail(7u);
      __debugbreak();
    }
  }
}
