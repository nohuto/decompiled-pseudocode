/*
 * XREFs of sub_18003DF60 @ 0x18003DF60
 * Callers:
 *     sub_18003DC50 @ 0x18003DC50 (sub_18003DC50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18003B094 @ 0x18003B094 (sub_18003B094.c)
 *     sub_18003C99C @ 0x18003C99C (sub_18003C99C.c)
 *     sub_18003D4D8 @ 0x18003D4D8 (sub_18003D4D8.c)
 *     sub_18003E5B4 @ 0x18003E5B4 (sub_18003E5B4.c)
 *     sub_18003ECF8 @ 0x18003ECF8 (sub_18003ECF8.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18003DF60(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, _QWORD *a5)
{
  unsigned __int64 v6; // rbx
  __int64 *v9; // rax
  volatile signed __int64 *v10; // rcx
  volatile __int64 *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r8
  volatile __int32 *v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // [rsp+30h] [rbp-91h] BYREF
  volatile __int32 *v21; // [rsp+38h] [rbp-89h]
  __int64 v22; // [rsp+40h] [rbp-81h] BYREF
  _QWORD v23[5]; // [rsp+50h] [rbp-71h] BYREF
  _OWORD v24[2]; // [rsp+78h] [rbp-49h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-29h] BYREF

  v6 = a3;
  v21 = (volatile __int32 *)a2;
  v20 = a3;
  v23[4] = a4;
  sub_18002894C(a1 + 16, a2);
  if ( !*a4 )
  {
    v9 = (__int64 *)sub_18003ECF8(*a5, v24);
    sub_180011110(a4, v9);
    if ( *((_QWORD *)&v24[0] + 1) )
      sub_18001060C(*((__int64 *)&v24[0] + 1));
  }
  v10 = (volatile signed __int64 *)(a1 + 72);
  if ( v6 == -1LL )
  {
    v6 = _InterlockedExchangeAdd64(v10, 1uLL);
    v20 = v6;
  }
  else if ( v6 >= sub_18003C99C((__int64)v10) )
  {
    _InterlockedExchange64(v11, v6 + 1);
    v6 = v20;
  }
  if ( v6 == -1LL )
  {
    std::string::string(v24, "Run out of available IDs");
    v12 = std::string::string(
            v23,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v12, v13, (__int64)v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *sub_18003D4D8((_QWORD *)(a1 + 120), &v22, (__int64)&v20) != *(_QWORD *)(a1 + 128) )
  {
    std::string::string(v24, "Node id already exists");
    v18 = std::string::string(
            v23,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v18, v19, (__int64)v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *a4 )
  {
    v14 = (volatile __int32 *)(*a5 + 76LL);
    v21 = v14;
    while ( _InterlockedExchange(v14, 1) )
      v14 = v21;
    sub_18003E5B4(a1, v24, &v20);
    v15 = unknown_libname_81(v23, a4);
    sub_18003B094(*(__int64 **)&v24[0], v15);
    *(_BYTE *)(*a5 + 72LL) = 1;
    *(_OWORD *)a2 = v24[0];
    v24[0] = 0LL;
    *v21 = 0;
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  v16 = a4[1];
  if ( v16 )
    sub_18001060C(v16);
  return a2;
}
