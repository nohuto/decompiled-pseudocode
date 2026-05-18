/*
 * XREFs of sub_180080FF0 @ 0x180080FF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_1800279D0 @ 0x1800279D0 (sub_1800279D0.c)
 *     sub_180036994 @ 0x180036994 (sub_180036994.c)
 *     sub_180050140 @ 0x180050140 (sub_180050140.c)
 *     sub_180068574 @ 0x180068574 (sub_180068574.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180080FF0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // [rsp+30h] [rbp-89h] BYREF
  __int64 v10; // [rsp+38h] [rbp-81h] BYREF
  __int64 v11; // [rsp+40h] [rbp-79h]
  __int64 v12; // [rsp+48h] [rbp-71h] BYREF
  __int64 v13; // [rsp+50h] [rbp-69h]
  _QWORD v14[4]; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v15[32]; // [rsp+78h] [rbp-41h] BYREF
  _QWORD v16[4]; // [rsp+98h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B8h] [rbp-1h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    sub_1800279D0(a1, (__int64)a2);
    sub_180036994(a1 + 120, &v12);
    if ( !v12 )
    {
      std::string::string(
        v16,
        "Shader::AttachDevice() -- shader program no longer available for creating new device shader");
      v9 = std::string::string(
             v14,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader.cpp");
      v7 = sub_180016F54((__int64)v15, (__int64)v9);
      sub_180068574(pExceptionObject, v7, v8, -2147418113, (__int64)v16, 0);
      pExceptionObject[0] = &Spectre::Engine::EngineUnexpectedException::`vftable';
      sub_180011A5C((__int64)v9);
      throw (Spectre::Engine::EngineUnexpectedException *)pExceptionObject;
    }
    v5 = *(_DWORD *)(*a2 + 244LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD *))(*(_QWORD *)a1 + 48LL))(a1, &v10, v12, a2);
    LODWORD(v9) = v5;
    v6 = sub_180050140((__int64 *)(a1 + 136), (__int64)v14, &v9);
    result = (__int64)sub_18001244C((__int64 *)(*(_QWORD *)v6 + 40LL), &v10);
    if ( !v10 )
      *(_BYTE *)(a1 + 152) = 0;
    if ( v11 )
      result = sub_18001050C(v11);
    if ( v13 )
      return sub_18001050C(v13);
  }
  return result;
}
