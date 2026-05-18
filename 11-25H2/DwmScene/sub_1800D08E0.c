/*
 * XREFs of sub_1800D08E0 @ 0x1800D08E0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001B2B0 @ 0x18001B2B0 (sub_18001B2B0.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall __noreturn sub_1800D08E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  _QWORD pExceptionObject[3]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v6[4]; // [rsp+40h] [rbp-38h] BYREF

  pExceptionObject[2] = a3;
  v3 = 0LL;
  v4 = sub_18001B098(56LL);
  pExceptionObject[1] = v4;
  if ( v4 )
  {
    std::string::string(v6, "Serializing configuration to JSON string is not supported");
    v3 = sub_18001B2B0(v4, (__int64)v6, 0);
  }
  pExceptionObject[0] = v3;
  throw (Spectre::Utils::SpectreException **)pExceptionObject;
}
