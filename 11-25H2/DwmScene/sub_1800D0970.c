/*
 * XREFs of sub_1800D0970 @ 0x1800D0970
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001B2B0 @ 0x18001B2B0 (sub_18001B2B0.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall __noreturn sub_1800D0970(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  _QWORD pExceptionObject[4]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v7[4]; // [rsp+48h] [rbp-30h] BYREF

  pExceptionObject[1] = a3;
  pExceptionObject[3] = a4;
  v4 = 0LL;
  v5 = sub_18001B098(56LL);
  pExceptionObject[2] = v5;
  if ( v5 )
  {
    std::string::string(v7, "Serializing configuration to JSON string is not supported");
    v4 = sub_18001B2B0(v5, (__int64)v7, 0);
  }
  pExceptionObject[0] = v4;
  throw (Spectre::Utils::SpectreException **)pExceptionObject;
}
