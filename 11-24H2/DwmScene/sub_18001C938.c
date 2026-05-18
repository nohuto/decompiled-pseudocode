/*
 * XREFs of sub_18001C938 @ 0x18001C938
 * Callers:
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000C55C @ 0x18000C55C (sub_18000C55C.c)
 *     sub_18000C614 @ 0x18000C614 (sub_18000C614.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001BF40 @ 0x18001BF40 (sub_18001BF40.c)
 *     sub_18001C6E0 @ 0x18001C6E0 (sub_18001C6E0.c)
 *     sub_18001C7D4 @ 0x18001C7D4 (sub_18001C7D4.c)
 *     sub_18001CF40 @ 0x18001CF40 (sub_18001CF40.c)
 *     __alloca_probe @ 0x1800D4F40 (__alloca_probe.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_18001C938(__int64 a1, int a2)
{
  int v4; // r13d
  int v5; // r14d
  _QWORD *v6; // rax
  int v7; // [rsp+40h] [rbp-C0h]
  _QWORD v8[4]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v9[5]; // [rsp+68h] [rbp-98h] BYREF
  CHAR OutputString[2112]; // [rsp+90h] [rbp-70h] BYREF

  if ( (int)sub_18001CF40(&unk_1801C4458) <= 0 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    v5 = *(_DWORD *)(a1 + 4);
    v7 = *(_DWORD *)a1;
    sub_18000C614();
    GetCurrentThreadId();
    std::string::string(v8, *(_BYTE **)(a1 + 16));
    sub_1800138F8((__int64)v8);
    v6 = sub_18001C6E0(v9);
    sub_1800138F8((__int64)v6);
    sub_18001BF40();
    sub_180011B5C((__int64)v9);
    sub_180011B5C((__int64)v8);
    if ( a2 >= v5 )
    {
      std::string::string(v9, OutputString);
      std::string::string(v8, *(_BYTE **)(a1 + 16));
      sub_18001C7D4((__int64)v8, a2, (__int64)v9);
      sub_180011B5C((__int64)v8);
      sub_180011B5C((__int64)v9);
    }
    if ( a2 >= v4 )
      sub_18000C55C();
    OutputDebugStringA(OutputString);
    if ( a2 >= v7 )
    {
      if ( !IsDebuggerPresent() )
        __fastfail(7u);
      __debugbreak();
    }
  }
}
