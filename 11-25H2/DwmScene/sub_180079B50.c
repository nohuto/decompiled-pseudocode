/*
 * XREFs of sub_180079B50 @ 0x180079B50
 * Callers:
 *     sub_1800414C0 @ 0x1800414C0 (sub_1800414C0.c)
 *     sub_1800480A0 @ 0x1800480A0 (sub_1800480A0.c)
 *     sub_18004D35C @ 0x18004D35C (sub_18004D35C.c)
 *     sub_18005B7F4 @ 0x18005B7F4 (sub_18005B7F4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_1800407EC @ 0x1800407EC (sub_1800407EC.c)
 *     sub_18004C574 @ 0x18004C574 (sub_18004C574.c)
 *     sub_180078574 @ 0x180078574 (sub_180078574.c)
 *     sub_18007BC8C @ 0x18007BC8C (sub_18007BC8C.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_180079B50(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  _QWORD *v11; // [rsp+38h] [rbp-61h]
  __int64 v12; // [rsp+40h] [rbp-59h] BYREF
  __int64 v13; // [rsp+48h] [rbp-51h]
  _QWORD *v14; // [rsp+50h] [rbp-49h]
  _QWORD v15[4]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v16[4]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-1h] BYREF

  v14 = a2;
  if ( *(_DWORD *)(a1 + 1168) != 1 )
  {
    std::string::string(
      v16,
      "ShaderPropertyLayout::CreateBlock() -- layout declaration must be complete before a property block can be created.");
    v4 = std::string::string(
           v15,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_180038A58(pExceptionObject, (__int64)v4, v5, (__int64)v16, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_1800407EC(a1, &v12);
  v6 = sub_18001B098(168LL);
  v7 = v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 8) = 1;
    *(_DWORD *)(v6 + 12) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::ShaderPropertyBlock>::`vftable';
    sub_180078574();
  }
  else
  {
    v7 = 0LL;
  }
  *a2 = v7 + 16;
  a2[1] = v7;
  if ( v13 )
    sub_18001050C(v13);
  if ( *(_BYTE *)(a1 + 1241) )
  {
    v8 = *a2;
    v11 = (_QWORD *)sub_18004C574(*(_QWORD *)(a1 + 1152), &v12);
    sub_18001244C((__int64 *)(v8 + 112), v11);
    *(_DWORD *)(v8 + 104) = *(_DWORD *)(*v11 + 80LL) - 1;
    sub_18007BC8C(v8);
    v9 = v11[1];
    if ( v9 )
      sub_18001050C(v9);
  }
  return a2;
}
