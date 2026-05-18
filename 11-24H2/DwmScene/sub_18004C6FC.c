/*
 * XREFs of sub_18004C6FC @ 0x18004C6FC
 * Callers:
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_18008F1A8 @ 0x18008F1A8 (sub_18008F1A8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004C6FC(__int64 a1, _DWORD **a2)
{
  __int64 v2; // rcx
  _DWORD *i; // r8
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  v2 = 0LL;
  for ( i = *a2; i != a2[1]; ++i )
  {
    if ( *i == -1 )
    {
      std::string::string(v8, "ShaderManager::GetOptionGroup() -- option group contains a non-registered option name.");
      v4 = std::string::string(
             v7,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
      sub_180038BB8(pExceptionObject, (__int64)v4, v5, (__int64)v8, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v2 |= 1LL << *i;
  }
  return v2;
}
