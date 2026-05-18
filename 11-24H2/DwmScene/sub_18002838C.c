/*
 * XREFs of sub_18002838C @ 0x18002838C
 * Callers:
 *     sub_180028584 @ 0x180028584 (sub_180028584.c)
 *     sub_1800287FC @ 0x1800287FC (sub_1800287FC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_1800284B0 @ 0x1800284B0 (sub_1800284B0.c)
 *     sub_1800285D8 @ 0x1800285D8 (sub_1800285D8.c)
 *     sub_180028774 @ 0x180028774 (sub_180028774.c)
 *     sub_1800289EC @ 0x1800289EC (sub_1800289EC.c)
 *     sub_180028A24 @ 0x180028A24 (sub_180028A24.c)
 *     sub_1800D28BC @ 0x1800D28BC (sub_1800D28BC.c)
 */

__int64 __fastcall sub_18002838C(__int64 a1)
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

  if ( !(unsigned __int8)sub_180028A24() )
  {
    std::string::string(v10, "Mutex::doUnlock() -- detected attempt to unlock a mutex that is not owned by this thread");
    v2 = std::string::string(
           v9,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\concurrency.cpp");
    sub_1800284B0(pExceptionObject, v2, v3, v10);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  v4 = sub_180028774();
  v5 = (_QWORD *)sub_1800285D8(a1, v7, 0LL);
  sub_1800289EC(v4, v8, *v5);
  return sub_1800D28BC(a1);
}
