/*
 * XREFs of sub_18002AD80 @ 0x18002AD80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18002AD80(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  int v3; // r8d
  _QWORD v4[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v5[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( a2 > 4 )
  {
    std::string::string(v5, "SyncInterval must be in [0-4] range.");
    v2 = (unsigned int)std::string::string(
                         v4,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\renderoutput.cpp");
    sub_180068668((unsigned int)pExceptionObject, v2, v3, (unsigned int)v5, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 296) = a2;
}
