/*
 * XREFs of sub_18002822C @ 0x18002822C
 * Callers:
 *     sub_180028424 @ 0x180028424 (sub_180028424.c)
 *     sub_18002869C @ 0x18002869C (sub_18002869C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180028350 @ 0x180028350 (sub_180028350.c)
 *     sub_180028478 @ 0x180028478 (sub_180028478.c)
 *     sub_180028614 @ 0x180028614 (sub_180028614.c)
 *     sub_18002888C @ 0x18002888C (sub_18002888C.c)
 *     sub_1800288C4 @ 0x1800288C4 (sub_1800288C4.c)
 *     sub_1800D275C @ 0x1800D275C (sub_1800D275C.c)
 */

__int64 __fastcall sub_18002822C(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rbx
  _QWORD *v5; // rax
  _BYTE v7[8]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v8[8]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v9[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  if ( !(unsigned __int8)sub_1800288C4() )
  {
    std::string::string(v10, "Mutex::doUnlock() -- detected attempt to unlock a mutex that is not owned by this thread");
    v2 = std::string::string(
           v9,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\concurrency.cpp");
    sub_180028350(pExceptionObject, v2, v3, v10);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  v4 = sub_180028614();
  v5 = (_QWORD *)sub_180028478(a1, v7, 0LL);
  sub_18002888C(v4, v8, *v5);
  return sub_1800D275C(a1);
}
