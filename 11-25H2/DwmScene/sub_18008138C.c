/*
 * XREFs of sub_18008138C @ 0x18008138C
 * Callers:
 *     sub_18004C918 @ 0x18004C918 (sub_18004C918.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 *     sub_1800151A0 @ 0x1800151A0 (sub_1800151A0.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18004099C @ 0x18004099C (sub_18004099C.c)
 *     sub_180050140 @ 0x180050140 (sub_180050140.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_18008138C(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // r15
  int v9; // esi
  __int64 v10; // rax
  int v12; // [rsp+30h] [rbp-79h] BYREF
  __int64 v13; // [rsp+38h] [rbp-71h] BYREF
  __int64 v14; // [rsp+40h] [rbp-69h]
  __int64 v15[3]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v16[4]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v17; // [rsp+80h] [rbp-29h] BYREF
  __int64 v18; // [rsp+88h] [rbp-21h]
  _QWORD pExceptionObject[7]; // [rsp+A0h] [rbp-9h] BYREF

  if ( *(_BYTE *)(a1 + 152) )
  {
    std::string::string(&v17, "Shader::Load() -- this function can only be called once per shader instance");
    v4 = std::string::string(
           v16,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader.cpp");
    sub_180038A58(pExceptionObject, (__int64)v4, v5, (__int64)&v17, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_1800151A0((_QWORD *)(a1 + 120), a2);
  *(_BYTE *)(a1 + 152) = 1;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  sub_1800346A8(v6, v15);
  v7 = (_QWORD *)v15[0];
  v8 = v15[1];
  while ( v7 != (_QWORD *)v8 )
  {
    unknown_libname_81(&v13, v7);
    if ( v13 )
    {
      v9 = *(_DWORD *)(v13 + 244);
      if ( v9 )
      {
        v12 = *(_DWORD *)(v13 + 244);
        if ( sub_18004099C(a1 + 136, (__int64)&v12) == *(_QWORD *)(a1 + 136) )
        {
          (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, &v17, *a2, &v13);
          v12 = v9;
          v10 = sub_180050140((__int64 *)(a1 + 136), (__int64)v16, &v12);
          sub_18001244C((__int64 *)(*(_QWORD *)v10 + 40LL), &v17);
          if ( !v17 )
            *(_BYTE *)(a1 + 152) = 0;
          if ( v18 )
            sub_18001050C(v18);
        }
      }
    }
    if ( v14 )
      sub_18001050C(v14);
    v7 += 2;
  }
  sub_1800130E0((__int64)v15);
  return 1;
}
