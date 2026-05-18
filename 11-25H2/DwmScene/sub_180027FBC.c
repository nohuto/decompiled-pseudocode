/*
 * XREFs of sub_180027FBC @ 0x180027FBC
 * Callers:
 *     sub_180025170 @ 0x180025170 (sub_180025170.c)
 *     sub_1800259A0 @ 0x1800259A0 (sub_1800259A0.c)
 *     sub_180025FBC @ 0x180025FBC (sub_180025FBC.c)
 *     sub_1800282FC @ 0x1800282FC (sub_1800282FC.c)
 *     sub_180030E44 @ 0x180030E44 (sub_180030E44.c)
 *     sub_180095084 @ 0x180095084 (sub_180095084.c)
 *     sub_180095120 @ 0x180095120 (sub_180095120.c)
 *     sub_1800959D4 @ 0x1800959D4 (sub_1800959D4.c)
 *     sub_180095ADC @ 0x180095ADC (sub_180095ADC.c)
 *     sub_180095C50 @ 0x180095C50 (sub_180095C50.c)
 *     sub_180095D08 @ 0x180095D08 (sub_180095D08.c)
 *     sub_180095D94 @ 0x180095D94 (sub_180095D94.c)
 *     sub_180095ED8 @ 0x180095ED8 (sub_180095ED8.c)
 *     sub_180095F70 @ 0x180095F70 (sub_180095F70.c)
 *     sub_180096028 @ 0x180096028 (sub_180096028.c)
 *     sub_180096100 @ 0x180096100 (sub_180096100.c)
 *     sub_1800970DC @ 0x1800970DC (sub_1800970DC.c)
 *     sub_1800978E0 @ 0x1800978E0 (sub_1800978E0.c)
 *     sub_180098214 @ 0x180098214 (sub_180098214.c)
 *     sub_1800982F4 @ 0x1800982F4 (sub_1800982F4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180027E50 @ 0x180027E50 (sub_180027E50.c)
 *     sub_180027E78 @ 0x180027E78 (sub_180027E78.c)
 *     sub_180028350 @ 0x180028350 (sub_180028350.c)
 *     sub_180028614 @ 0x180028614 (sub_180028614.c)
 *     sub_1800288C4 @ 0x1800288C4 (sub_1800288C4.c)
 *     sub_1800D2638 @ 0x1800D2638 (sub_1800D2638.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_180027FBC(__int64 a1)
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

  v7[0] = 1;
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
  sub_1800D2638(a1);
  v4 = sub_180028614();
  v8 = a1;
  v5 = *(char **)(v4 + 8);
  if ( v5 == *(char **)(v4 + 16) )
    return sub_180027E78(v4, v5, (__int64)&v8, (__int64)v7);
  else
    return sub_180027E50(v4, &v8, v7);
}
