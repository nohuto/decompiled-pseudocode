/*
 * XREFs of sub_1800D0970 @ 0x1800D0970
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001B410 @ 0x18001B410 (sub_18001B410.c)
 */

// Hidden C++ exception states: #wind=3
void __noreturn sub_1800D0970()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdi
  _QWORD pExceptionObject[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v4[4]; // [rsp+38h] [rbp-30h] BYREF

  v0 = 0LL;
  v1 = sub_18001B1F8(56LL);
  try
  {
    v2 = v1;
    pExceptionObject[1] = v1;
    if ( v1 )
    {
      std::string::string(v4, "Parsing configuration from JSON string is not supported");
      v0 = sub_18001B410(v2, (__int64)v4, 0);
    }
    pExceptionObject[0] = v0;
    throw (Spectre::Utils::SpectreException **)pExceptionObject;
  }
  catch ( ... )
  {
    sub_18001CAFC(&stru_1801B9608, 3);
    throw;
  }
}
