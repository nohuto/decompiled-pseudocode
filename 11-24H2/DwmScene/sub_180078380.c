/*
 * XREFs of sub_180078380 @ 0x180078380
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _o___std_type_info_name @ 0x18000C31E (_o___std_type_info_name.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B6DC @ 0x18001B6DC (sub_18001B6DC.c)
 *     sub_180047B20 @ 0x180047B20 (sub_180047B20.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_180078380(__int64 a1, _QWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD v15[4]; // [rsp+48h] [rbp-F0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v17[4]; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE v18[32]; // [rsp+C0h] [rbp-78h] BYREF
  _BYTE v19[32]; // [rsp+E0h] [rbp-58h] BYREF
  _BYTE v20[32]; // [rsp+100h] [rbp-38h] BYREF

  if ( (*a3 & 0x10000) == 0 )
  {
    _RTtypeid(a1);
    v8 = o___std_type_info_name();
    v9 = sub_18001B6DC(v17, (__int64)"Component::Clone() -- component '", a1 + 24);
    v10 = sub_18001B5A8((__int64)v18, (__int64)v9, (__int64)"' of type ");
    v11 = sub_18001B5A8((__int64)v19, v10, v8);
    v12 = sub_18001B5A8((__int64)v20, v11, (__int64)" does not support cloning.");
    v13 = std::string::string(
            v15,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\component.cpp");
    sub_180047B20(pExceptionObject, (__int64)v13, v14, v12);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = *(_QWORD *)(a4 + 8);
  if ( v6 )
    sub_18001060C(v6);
  return a2;
}
