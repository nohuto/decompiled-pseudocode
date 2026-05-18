/*
 * XREFs of sub_1800C9E10 @ 0x1800C9E10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_180027BB8 @ 0x180027BB8 (sub_180027BB8.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18004D510 @ 0x18004D510 (sub_18004D510.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800BC51C @ 0x1800BC51C (sub_1800BC51C.c)
 *     sub_1800C6DD4 @ 0x1800C6DD4 (sub_1800C6DD4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_1800C9E10(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64, __int64, _QWORD, __int64); // r14
  __int64 *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ebx
  const char *v12; // rax
  const char *v13; // r14
  __int64 v14; // rbx
  void (__fastcall *v15)(__int64, void *, _QWORD, const char *); // r15
  unsigned __int64 v16; // rax
  __int64 v18; // [rsp+30h] [rbp-59h] BYREF
  __int64 v19; // [rsp+38h] [rbp-51h] BYREF
  __int64 v20; // [rsp+40h] [rbp-49h]
  __int64 v21; // [rsp+58h] [rbp-31h] BYREF
  __int64 v22; // [rsp+60h] [rbp-29h]
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-11h] BYREF

  if ( *(_BYTE *)(a1 + 96) )
  {
    std::string::string(&v21, "HullShaderD3D11::Load() -- this function can only be called once per shader instance");
    v4 = std::string::string(
           &v19,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\hullshaderd3d11.cpp");
    sub_180038A58(pExceptionObject, (__int64)v4, v5, (__int64)&v21, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !sub_18004D510((__int64)a2) )
  {
    sub_180011B04(a1 + 72, &v19);
    sub_1800BC51C(&v21, &v19);
    sub_1800B9A04(v21, &v18);
    v6 = v18;
    v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v18 + 128LL);
    v8 = (__int64 *)(a1 + 104);
    sub_18000E854((__int64 *)(a1 + 104));
    v9 = sub_1800C6DD4((__int64)a2);
    v10 = *a2;
    if ( *a2 == a2[1] )
      v10 = a2[3];
    v11 = v7(v6, v10, v9, 0LL, a1 + 104);
    sub_1800BB198(v21, v11);
    if ( v11 < 0 )
    {
      sub_18001C99C(&stru_1801B85C8, 5);
    }
    else
    {
      *(_BYTE *)(a1 + 96) = 1;
      v12 = (const char *)sub_1800137F8(a1 + 8);
      v13 = v12;
      v14 = *v8;
      if ( *v8 )
      {
        v15 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v14 + 40LL);
        if ( v12 )
          LODWORD(v12) = strnlen(v12, 0x7FFFFFFFuLL);
        v15(v14, &unk_1800F6B40, (unsigned int)v12, v13);
      }
      v16 = sub_1800C6DD4((__int64)a2);
      sub_180027BB8(a1, v16, 8);
    }
    sub_18000E854(&v18);
    if ( v22 )
      sub_18001050C(v22);
    if ( v20 )
      sub_18001050C(v20);
  }
  return *(_BYTE *)(a1 + 96);
}
