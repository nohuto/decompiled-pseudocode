/*
 * XREFs of sub_1800281EC @ 0x1800281EC
 * Callers:
 *     sub_1800287D4 @ 0x1800287D4 (sub_1800287D4.c)
 *     sub_18005BF40 @ 0x18005BF40 (sub_18005BF40.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180027FB0 @ 0x180027FB0 (sub_180027FB0.c)
 *     sub_180027FD8 @ 0x180027FD8 (sub_180027FD8.c)
 *     sub_1800284B0 @ 0x1800284B0 (sub_1800284B0.c)
 *     sub_180028774 @ 0x180028774 (sub_180028774.c)
 *     sub_180028A24 @ 0x180028A24 (sub_180028A24.c)
 *     sub_1800D2818 @ 0x1800D2818 (sub_1800D2818.c)
 */

unsigned __int64 __fastcall sub_1800281EC(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  char *v5; // rdx
  char v7[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v8; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v9[4]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp+17h] BYREF

  v7[0] = 0;
  if ( (unsigned __int8)sub_180028A24() )
  {
    std::string::string(
      v10,
      "Mutex::doLock() -- detected recursive lock attempt on non-recursive mutex -- throwing exception to avoid deadlock");
    v2 = std::string::string(
           v9,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\concurrency.cpp");
    sub_1800284B0(pExceptionObject, v2, v3, v10);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  sub_1800D2818(a1);
  v4 = sub_180028774();
  v8 = a1;
  v5 = *(char **)(v4 + 8);
  if ( v5 == *(char **)(v4 + 16) )
    return sub_180027FD8(v4, v5, (__int64)&v8, (__int64)v7);
  else
    return sub_180027FB0(v4, &v8, v7);
}
