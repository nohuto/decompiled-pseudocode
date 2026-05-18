/*
 * XREFs of sub_180028730 @ 0x180028730
 * Callers:
 *     sub_18002BD18 @ 0x18002BD18 (sub_18002BD18.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_18003E680 @ 0x18003E680 (sub_18003E680.c)
 *     sub_18003E6F8 @ 0x18003E6F8 (sub_18003E6F8.c)
 *     sub_18003E81C @ 0x18003E81C (sub_18003E81C.c)
 *     sub_18003E8CC @ 0x18003E8CC (sub_18003E8CC.c)
 *     sub_18003E99C @ 0x18003E99C (sub_18003E99C.c)
 *     sub_18003EA7C @ 0x18003EA7C (sub_18003EA7C.c)
 *     sub_18003F44C @ 0x18003F44C (sub_18003F44C.c)
 *     sub_18005CC1C @ 0x18005CC1C (sub_18005CC1C.c)
 *     sub_18005CD4C @ 0x18005CD4C (sub_18005CD4C.c)
 *     sub_18005CE7C @ 0x18005CE7C (sub_18005CE7C.c)
 *     sub_18005CFAC @ 0x18005CFAC (sub_18005CFAC.c)
 *     sub_18005D0DC @ 0x18005D0DC (sub_18005D0DC.c)
 *     sub_18005D20C @ 0x18005D20C (sub_18005D20C.c)
 *     sub_180061250 @ 0x180061250 (sub_180061250.c)
 *     sub_18006B42C @ 0x18006B42C (sub_18006B42C.c)
 *     sub_18006C790 @ 0x18006C790 (sub_18006C790.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180028350 @ 0x180028350 (sub_180028350.c)
 *     sub_180028904 @ 0x180028904 (sub_180028904.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180028730(__int64 a1)
{
  bool v2; // bl
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  v2 = 1;
  if ( *(_DWORD *)(a1 + 24) == 1 && !(unsigned __int8)sub_180028904(a1, 0LL) )
  {
    LOBYTE(v3) = 1;
    v2 = (unsigned __int8)sub_180028904(a1, v3) != 0;
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
    sub_180028350(pExceptionObject, (__int64)v4, v5, (__int64)v7);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
}
