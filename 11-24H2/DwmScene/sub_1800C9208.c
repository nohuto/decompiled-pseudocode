/*
 * XREFs of sub_1800C9208 @ 0x1800C9208
 * Callers:
 *     sub_1800C8630 @ 0x1800C8630 (sub_1800C8630.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180015F64 @ 0x180015F64 (sub_180015F64.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_180052358 @ 0x180052358 (sub_180052358.c)
 *     sub_1800C83FC @ 0x1800C83FC (sub_1800C83FC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800C9208(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 *v5; // rax
  int v6; // r14d
  __int64 v7; // rsi
  _QWORD *v8; // rax
  int v9; // r8d
  __int64 *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rax
  _QWORD *v17; // rax
  __int64 *v18; // rax
  _QWORD *v19; // rax
  __int64 v21; // [rsp+30h] [rbp-69h] BYREF
  __int64 v22; // [rsp+38h] [rbp-61h]
  __int64 v23; // [rsp+40h] [rbp-59h]
  __int64 v24; // [rsp+48h] [rbp-51h] BYREF
  __int64 v25; // [rsp+50h] [rbp-49h]
  _QWORD v26[4]; // [rsp+68h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+88h] [rbp-11h] BYREF

  v23 = a2;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v5 = sub_180015F64(v4, &v21);
  sub_180011110((_QWORD *)(a1 + 128), v5);
  if ( v22 )
    sub_18001060C(v22);
  v6 = 69;
  if ( *(_BYTE *)(a2 + 6) )
  {
    v6 = 325;
    sub_18001254C((__int64 *)(a1 + 176), (_QWORD *)(a1 + 128));
  }
  v7 = a2 + 8;
  v8 = unknown_libname_81(&v21, (_QWORD *)(a1 + 128));
  sub_1800C83FC(a2 + 8, (__int64)v8, v9, v6);
  v10 = sub_180052358(*(_QWORD *)(a1 + 128), &v21, *(_DWORD *)(a1 + 88));
  sub_180011110((_QWORD *)(a1 + 96), v10);
  if ( v22 )
    sub_18001060C(v22);
  if ( *(_BYTE *)(a2 + 5) )
  {
    std::string::string(v26, "Single sampled stencil reads are not supported");
    v12 = std::string::string(
            &v24,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v12, v13, (__int64)v26, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *(_BYTE *)(a2 + 4) )
  {
    if ( *(_DWORD *)a2 != 2 )
    {
      std::string::string(&v24, "Single sampled readable depth is only supported for Depth32 format");
      v14 = std::string::string(
              v26,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
      sub_180038BB8(pExceptionObject, (__int64)v14, v15, (__int64)&v24, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    sub_180011C04(a1 + 72, &v24);
    v16 = sub_180015F64(v4, &v21);
    sub_180011110((_QWORD *)(a1 + 160), v16);
    if ( v22 )
      sub_18001060C(v22);
    v17 = unknown_libname_81(&v21, (_QWORD *)(a1 + 160));
    sub_1800C83FC(v7, (__int64)v17, 3, 64);
    v18 = sub_180015F64(v4, &v21);
    sub_180011110((_QWORD *)(a1 + 144), v18);
    if ( v22 )
      sub_18001060C(v22);
    v19 = unknown_libname_81(&v21, (_QWORD *)(a1 + 144));
    sub_1800C83FC(v7, (__int64)v19, 3, 1);
    if ( v25 )
      sub_18001060C(v25);
  }
  return sub_180012508(v7, v11);
}
