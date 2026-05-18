/*
 * XREFs of sub_18003DC50 @ 0x18003DC50
 * Callers:
 *     sub_18003DD58 @ 0x18003DD58 (sub_18003DD58.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18003DF60 @ 0x18003DF60 (sub_18003DF60.c)
 *     sub_18003E7E0 @ 0x18003E7E0 (sub_18003E7E0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18003DC50(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD v14[4]; // [rsp+30h] [rbp-91h] BYREF
  __int64 v15; // [rsp+50h] [rbp-71h] BYREF
  __int64 v16; // [rsp+58h] [rbp-69h]
  __int64 v17; // [rsp+60h] [rbp-61h] BYREF
  _QWORD v18[4]; // [rsp+70h] [rbp-51h] BYREF
  _QWORD v19[4]; // [rsp+90h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B0h] [rbp-11h] BYREF

  v14[3] = a5;
  v8 = unknown_libname_81(&v17, a5);
  sub_18003E7E0(a1, &v15, v8);
  if ( !v15 )
  {
    std::string::string(v19, "Scene::AddNode() - Parent node could not be found.");
    v12 = std::string::string(
            v18,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v12, v13, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v9 = (unsigned int)unknown_libname_81(v14, &v15);
  sub_18003DF60(a1, a2, a3, v9, (__int64)a5);
  if ( v16 )
    sub_18001060C(v16);
  v10 = a5[1];
  if ( v10 )
    sub_18001060C(v10);
  return a2;
}
