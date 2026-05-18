/*
 * XREFs of sub_18002815C @ 0x18002815C
 * Callers:
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180017598 @ 0x180017598 (sub_180017598.c)
 *     sub_180024534 @ 0x180024534 (sub_180024534.c)
 *     sub_180025170 @ 0x180025170 (sub_180025170.c)
 *     sub_1800259A0 @ 0x1800259A0 (sub_1800259A0.c)
 *     sub_180026050 @ 0x180026050 (sub_180026050.c)
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
 *     sub_180028350 @ 0x180028350 (sub_180028350.c)
 *     sub_180028478 @ 0x180028478 (sub_180028478.c)
 *     sub_180028614 @ 0x180028614 (sub_180028614.c)
 *     sub_18002888C @ 0x18002888C (sub_18002888C.c)
 *     sub_1800288C4 @ 0x1800288C4 (sub_1800288C4.c)
 *     sub_1800D2718 @ 0x1800D2718 (sub_1800D2718.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002815C(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // r8
  _QWORD *v6; // rax
  _BYTE v8[8]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v9[8]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v11[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  if ( !(unsigned __int8)sub_1800288C4() )
  {
    std::string::string(v11, "Mutex::doUnlock() -- detected attempt to unlock a mutex that is not owned by this thread");
    v2 = std::string::string(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\concurrency.cpp");
    sub_180028350(pExceptionObject, v2, v3, v11);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  v4 = sub_180028614();
  LOBYTE(v5) = 1;
  v6 = (_QWORD *)sub_180028478(a1, v8, v5);
  sub_18002888C(v4, v9, *v6);
  return sub_1800D2718(a1);
}
