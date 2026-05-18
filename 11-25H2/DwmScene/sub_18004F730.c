/*
 * XREFs of sub_18004F730 @ 0x18004F730
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001B2B0 @ 0x18001B2B0 (sub_18001B2B0.c)
 */

// Hidden C++ exception states: #wind=1
void __noreturn sub_18004F730()
{
  _QWORD v0[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+40h] [rbp-48h] BYREF

  std::string::string(v0, "Not implemented");
  sub_18001B2B0((__int64)pExceptionObject, (__int64)v0, 0);
  throw (Spectre::Utils::SpectreException *)pExceptionObject;
}
