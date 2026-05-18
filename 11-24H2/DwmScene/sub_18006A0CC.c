/*
 * XREFs of sub_18006A0CC @ 0x18006A0CC
 * Callers:
 *     sub_180025470 @ 0x180025470 (sub_180025470.c)
 *     sub_180025C3C @ 0x180025C3C (sub_180025C3C.c)
 *     sub_180033280 @ 0x180033280 (sub_180033280.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18003C99C @ 0x18003C99C (sub_18003C99C.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006A0CC(__int64 a1, int a2, int a3, int a4)
{
  _QWORD *v4; // rdx
  int v5; // r9d
  int v6; // r9d
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD v10[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v11[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  v4 = (_QWORD *)(a1 + 32 * (a3 + 5LL * a2));
  if ( !a4 )
    return sub_18003C99C((__int64)v4);
  v5 = a4 - 1;
  if ( !v5 )
    return v4[1];
  v6 = v5 - 1;
  if ( !v6 )
    return v4[3];
  if ( v6 != 1 )
  {
    std::string::string(v11, "Unsupported value");
    v7 = std::string::string(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\performancemanager.cpp");
    sub_180068668(pExceptionObject, (__int64)v7, v8, (__int64)v11, 1);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return v4[2];
}
