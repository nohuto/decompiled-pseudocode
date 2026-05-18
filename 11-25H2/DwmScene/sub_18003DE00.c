/*
 * XREFs of sub_18003DE00 @ 0x18003DE00
 * Callers:
 *     sub_18003DAF0 @ 0x18003DAF0 (sub_18003DAF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18003AF34 @ 0x18003AF34 (sub_18003AF34.c)
 *     sub_18003C83C @ 0x18003C83C (sub_18003C83C.c)
 *     sub_18003D378 @ 0x18003D378 (sub_18003D378.c)
 *     sub_18003E454 @ 0x18003E454 (sub_18003E454.c)
 *     sub_18003EB98 @ 0x18003EB98 (sub_18003EB98.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18003DE00(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, _QWORD *a5)
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
  sub_1800287EC(a1 + 16, a2);
  if ( !*a4 )
  {
    v9 = (__int64 *)sub_18003EB98(*a5, v24);
    sub_180011010(a4, v9);
    if ( *((_QWORD *)&v24[0] + 1) )
      sub_18001050C(*((__int64 *)&v24[0] + 1));
  }
  v10 = (volatile signed __int64 *)(a1 + 72);
  if ( v6 == -1LL )
  {
    v6 = _InterlockedExchangeAdd64(v10, 1uLL);
    v20 = v6;
  }
  else if ( v6 >= sub_18003C83C((__int64)v10) )
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
    sub_180038A58(pExceptionObject, (__int64)v12, v13, (__int64)v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *sub_18003D378((_QWORD *)(a1 + 120), &v22, (__int64)&v20) != *(_QWORD *)(a1 + 128) )
  {
    std::string::string(v24, "Node id already exists");
    v18 = std::string::string(
            v23,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038A58(pExceptionObject, (__int64)v18, v19, (__int64)v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *a4 )
  {
    v14 = (volatile __int32 *)(*a5 + 76LL);
    v21 = v14;
    while ( _InterlockedExchange(v14, 1) )
      v14 = v21;
    sub_18003E454(a1, v24, &v20);
    v15 = unknown_libname_81(v23, a4);
    sub_18003AF34(*(__int64 **)&v24[0], v15);
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
    sub_18001050C(v16);
  return a2;
}
