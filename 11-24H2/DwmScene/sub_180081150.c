/*
 * XREFs of sub_180081150 @ 0x180081150
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180027B30 @ 0x180027B30 (sub_180027B30.c)
 *     sub_180036AF4 @ 0x180036AF4 (sub_180036AF4.c)
 *     sub_1800502A0 @ 0x1800502A0 (sub_1800502A0.c)
 *     sub_1800686D4 @ 0x1800686D4 (sub_1800686D4.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180081150(__int64 a1, _QWORD *a2)
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
    sub_180027B30(a1, (__int64)a2);
    sub_180036AF4(a1 + 120, &v12);
    if ( !v12 )
    {
      std::string::string(
        v16,
        "Shader::AttachDevice() -- shader program no longer available for creating new device shader");
      v9 = std::string::string(
             v14,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader.cpp");
      v7 = sub_180017054((__int64)v15, (__int64)v9);
      sub_1800686D4(pExceptionObject, v7, v8, -2147418113, (__int64)v16, 0);
      pExceptionObject[0] = &Spectre::Engine::EngineUnexpectedException::`vftable';
      sub_180011B5C((__int64)v9);
      throw (Spectre::Engine::EngineUnexpectedException *)pExceptionObject;
    }
    v5 = *(_DWORD *)(*a2 + 244LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD *))(*(_QWORD *)a1 + 48LL))(a1, &v10, v12, a2);
    LODWORD(v9) = v5;
    v6 = sub_1800502A0((__int64 *)(a1 + 136), (__int64)v14, &v9);
    result = (__int64)sub_18001254C((__int64 *)(*(_QWORD *)v6 + 40LL), &v10);
    if ( !v10 )
      *(_BYTE *)(a1 + 152) = 0;
    if ( v11 )
      result = sub_18001060C(v11);
    if ( v13 )
      return sub_18001060C(v13);
  }
  return result;
}
