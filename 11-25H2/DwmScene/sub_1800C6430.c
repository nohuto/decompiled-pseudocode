/*
 * XREFs of sub_1800C6430 @ 0x1800C6430
 * Callers:
 *     sub_1800C6C50 @ 0x1800C6C50 (sub_1800C6C50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180068574 @ 0x180068574 (sub_180068574.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800C6DD4 @ 0x1800C6DD4 (sub_1800C6DD4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800C6430(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD); // r13
  int v11; // ebx
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v16; // [rsp+40h] [rbp-91h] BYREF
  __int64 v17; // [rsp+48h] [rbp-89h] BYREF
  __int64 v18; // [rsp+50h] [rbp-81h] BYREF
  __int64 v19; // [rsp+58h] [rbp-79h] BYREF
  _QWORD v20[4]; // [rsp+60h] [rbp-71h] BYREF
  _QWORD v21[4]; // [rsp+80h] [rbp-51h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A0h] [rbp-31h] BYREF

  sub_1800B9A04(a2, &v19);
  v16 = 0LL;
  v9 = v19;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v19 + 88LL);
  sub_18000E854(&v16);
  sub_1800C6DD4(a5);
  v11 = v10(v9, a3, a4);
  sub_1800BB198(a2, v11);
  if ( v11 < 0 )
  {
    std::string::string(v21, "VertexLayoutD3D11::Create() -- Direct3D could not create the input layout");
    v12 = std::string::string(
            v20,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\vertexlayoutd3d11.cpp");
    sub_180068574(pExceptionObject, (__int64)v12, v13, v11, (__int64)v21, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v14 = v16;
  v16 = 0LL;
  v18 = 0LL;
  v17 = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 144) = v14;
  sub_18000E854(&v17);
  sub_18000E854(&v18);
  sub_18000E854(&v16);
  return sub_18000E854(&v19);
}
