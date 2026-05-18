/*
 * XREFs of sub_180085220 @ 0x180085220
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_1800479C0 @ 0x1800479C0 (sub_1800479C0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180085220(__int64 a1, _QWORD *a2)
{
  char v4; // bl
  __int64 result; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  _QWORD v10[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v11[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  v4 = 1;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 96LL))(*a2, 1LL);
  if ( !(_BYTE)result )
  {
    v6 = *(_QWORD *)(a1 + 144);
    if ( !v6 || (result = v6 - 1, ((v6 - 1) & v6) != 0) )
      v4 = 0;
    if ( !v4 )
    {
      std::string::string(
        v11,
        "ColorTransform::CreateResources() -- volume texture must be power of two below feature level 10.0");
      v7 = std::string::string(
             v10,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\colortransform.cpp");
      sub_1800479C0(pExceptionObject, (__int64)v7, v8, (__int64)v11);
      throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
    }
  }
  v9 = a2[1];
  if ( v9 )
    return sub_18001050C(v9);
  return result;
}
