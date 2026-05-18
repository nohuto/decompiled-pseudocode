/*
 * XREFs of sub_180028890 @ 0x180028890
 * Callers:
 *     sub_18002BE78 @ 0x18002BE78 (sub_18002BE78.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 *     sub_18003E7E0 @ 0x18003E7E0 (sub_18003E7E0.c)
 *     sub_18003E858 @ 0x18003E858 (sub_18003E858.c)
 *     sub_18003E97C @ 0x18003E97C (sub_18003E97C.c)
 *     sub_18003EA2C @ 0x18003EA2C (sub_18003EA2C.c)
 *     sub_18003EAFC @ 0x18003EAFC (sub_18003EAFC.c)
 *     sub_18003EBDC @ 0x18003EBDC (sub_18003EBDC.c)
 *     sub_18003F5AC @ 0x18003F5AC (sub_18003F5AC.c)
 *     sub_18005CD7C @ 0x18005CD7C (sub_18005CD7C.c)
 *     sub_18005CEAC @ 0x18005CEAC (sub_18005CEAC.c)
 *     sub_18005CFDC @ 0x18005CFDC (sub_18005CFDC.c)
 *     sub_18005D10C @ 0x18005D10C (sub_18005D10C.c)
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 *     sub_18005D36C @ 0x18005D36C (sub_18005D36C.c)
 *     sub_1800613B0 @ 0x1800613B0 (sub_1800613B0.c)
 *     sub_18006B58C @ 0x18006B58C (sub_18006B58C.c)
 *     sub_18006C8F0 @ 0x18006C8F0 (sub_18006C8F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_1800284B0 @ 0x1800284B0 (sub_1800284B0.c)
 *     sub_180028A64 @ 0x180028A64 (sub_180028A64.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180028890(__int64 a1)
{
  bool v2; // bl
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  v2 = 1;
  if ( *(_DWORD *)(a1 + 24) == 1 && !(unsigned __int8)sub_180028A64(a1, 0LL) )
  {
    LOBYTE(v3) = 1;
    v2 = (unsigned __int8)sub_180028A64(a1, v3) != 0;
  }
  if ( !v2 )
  {
    std::string::string(
      v7,
      "Lockable::VerifyReadAccess() -- SHARED OR EXCLUSIVE LOCK REQUIRED\n"
      "The requested operation requires that the current thread holds this lockable object's mutex lock for exclusive (re"
      "ad/write) or shared (read-only) access.\n");
    v4 = std::string::string(
           v6,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\concurrency.cpp");
    sub_1800284B0(pExceptionObject, (__int64)v4, v5, (__int64)v7);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
}
