/*
 * XREFs of sub_18003EA7C @ 0x18003EA7C
 * Callers:
 *     sub_180012940 @ 0x180012940 (sub_180012940.c)
 *     sub_180014D20 @ 0x180014D20 (sub_180014D20.c)
 *     sub_180017BA0 @ 0x180017BA0 (sub_180017BA0.c)
 *     sub_18001AFB0 @ 0x18001AFB0 (sub_18001AFB0.c)
 *     sub_18003DD54 @ 0x18003DD54 (sub_18003DD54.c)
 *     sub_180060F00 @ 0x180060F00 (sub_180060F00.c)
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 *     sub_18006B954 @ 0x18006B954 (sub_18006B954.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001B518 @ 0x18001B518 (sub_18001B518.c)
 *     sub_180028730 @ 0x180028730 (sub_180028730.c)
 *     sub_18002BF54 @ 0x18002BF54 (sub_18002BF54.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18003E8CC @ 0x18003E8CC (sub_18003E8CC.c)
 *     sub_18003EB98 @ 0x18003EB98 (sub_18003EB98.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18003EA7C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  void *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h]
  _BYTE v15[32]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v16[5]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v18[32]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v19[32]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v20[32]; // [rsp+110h] [rbp+10h] BYREF

  v16[4] = a3;
  sub_180028730(a1 + 16);
  v6 = sub_180012344((__int64)v15, a3);
  sub_18003E8CC(a1, &v13, v6);
  if ( !v13 )
  {
    v8 = (void *)sub_18002BF54((__int64)v18, a3);
    v9 = sub_18001B518((__int64)v19, (__int64)"Scene::GetRootNode() - layer ", v8);
    v10 = sub_18001B448((__int64)v20, v9, (__int64)" not found");
    v11 = std::string::string(
            v16,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038A58(pExceptionObject, (__int64)v11, v12, v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18003EB98(v13, a2);
  if ( v14 )
    sub_18001050C(v14);
  sub_180013128(a3);
  return a2;
}
