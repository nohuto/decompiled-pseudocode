/*
 * XREFs of sub_1800C6590 @ 0x1800C6590
 * Callers:
 *     sub_1800C6DB0 @ 0x1800C6DB0 (sub_1800C6DB0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_1800686D4 @ 0x1800686D4 (sub_1800686D4.c)
 *     sub_1800B9B64 @ 0x1800B9B64 (sub_1800B9B64.c)
 *     sub_1800BB2F8 @ 0x1800BB2F8 (sub_1800BB2F8.c)
 *     sub_1800C6F34 @ 0x1800C6F34 (sub_1800C6F34.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800C6590(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
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

  sub_1800B9B64(a2, &v19);
  v16 = 0LL;
  v9 = v19;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v19 + 88LL);
  sub_18000E954(&v16);
  sub_1800C6F34(a5);
  v11 = v10(v9, a3, a4);
  sub_1800BB2F8(a2, v11);
  if ( v11 < 0 )
  {
    std::string::string(v21, "VertexLayoutD3D11::Create() -- Direct3D could not create the input layout");
    v12 = std::string::string(
            v20,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\vertexlayoutd3d11.cpp");
    sub_1800686D4(pExceptionObject, (__int64)v12, v13, v11, (__int64)v21, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v14 = v16;
  v16 = 0LL;
  v18 = 0LL;
  v17 = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 144) = v14;
  sub_18000E954(&v17);
  sub_18000E954(&v18);
  sub_18000E954(&v16);
  return sub_18000E954(&v19);
}
