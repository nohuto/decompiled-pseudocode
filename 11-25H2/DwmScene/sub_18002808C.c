/*
 * XREFs of sub_18002808C @ 0x18002808C
 * Callers:
 *     sub_180028674 @ 0x180028674 (sub_180028674.c)
 *     sub_18005BDE0 @ 0x18005BDE0 (sub_18005BDE0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180027E50 @ 0x180027E50 (sub_180027E50.c)
 *     sub_180027E78 @ 0x180027E78 (sub_180027E78.c)
 *     sub_180028350 @ 0x180028350 (sub_180028350.c)
 *     sub_180028614 @ 0x180028614 (sub_180028614.c)
 *     sub_1800288C4 @ 0x1800288C4 (sub_1800288C4.c)
 *     sub_1800D26B8 @ 0x1800D26B8 (sub_1800D26B8.c)
 */

unsigned __int64 __fastcall sub_18002808C(__int64 a1)
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
  if ( (unsigned __int8)sub_1800288C4() )
  {
    std::string::string(
      v10,
      "Mutex::doLock() -- detected recursive lock attempt on non-recursive mutex -- throwing exception to avoid deadlock");
    v2 = std::string::string(
           v9,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\concurrency.cpp");
    sub_180028350(pExceptionObject, v2, v3, v10);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  sub_1800D26B8(a1);
  v4 = sub_180028614();
  v8 = a1;
  v5 = *(char **)(v4 + 8);
  if ( v5 == *(char **)(v4 + 16) )
    return sub_180027E78(v4, v5, (__int64)&v8, (__int64)v7);
  else
    return sub_180027E50(v4, &v8, v7);
}
