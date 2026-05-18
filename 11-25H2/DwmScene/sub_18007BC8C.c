/*
 * XREFs of sub_18007BC8C @ 0x18007BC8C
 * Callers:
 *     sub_180079B50 @ 0x180079B50 (sub_180079B50.c)
 *     sub_18007BE48 @ 0x18007BE48 (sub_18007BE48.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18007BE64 @ 0x18007BE64 (sub_18007BE64.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007BC8C(__int64 a1)
{
  __int64 v2; // rbp
  __int64 result; // rax
  _QWORD *v4; // rax
  bool v5; // bl
  _QWORD *v6; // rax
  __int64 v7; // r8
  char v8; // r15
  __int64 v9; // rax
  unsigned int *v10; // rdx
  unsigned int *i; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // rax
  unsigned int *v17; // r12
  unsigned int *j; // r14
  _QWORD *v19; // rdi
  __int64 *v20; // rbx
  _BYTE v21[8]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C0h]
  __int64 v23; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B0h]
  _QWORD v25[4]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v26[4]; // [rsp+70h] [rbp-88h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 112);
  result = *(unsigned int *)(v2 + 80);
  if ( *(_DWORD *)(a1 + 104) != (_DWORD)result )
  {
    unknown_libname_81(&v23, (_QWORD *)(*(_QWORD *)(a1 + 16) + 1176LL));
    v4 = (_QWORD *)sub_18007BE64(v2, v21);
    v5 = v23 != *v4;
    if ( v22 )
      sub_18001050C(v22);
    if ( v5 )
    {
      std::string::string(
        v26,
        "ShaderPropertyBlock::FlushPropertiesFromMaster() -- cannot flush block properties unless the master layout has b"
        "een previously attached via SetMasterLayout().");
      v6 = std::string::string(
             v25,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shade"
             "rpropertyblock.cpp");
      sub_180038A58(pExceptionObject, (__int64)v6, v7, (__int64)v26, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v8 = 0;
    v9 = *(_QWORD *)(a1 + 16);
    v10 = *(unsigned int **)(v9 + 1200);
    for ( i = *(unsigned int **)(v9 + 1192); i != v10; i += 2 )
    {
      v12 = i[1];
      v13 = *(_QWORD *)(a1 + 32);
      v14 = *i;
      v15 = *(_QWORD *)(v2 + 32);
      if ( *(_DWORD *)(v13 + 4 * v12) != *(_DWORD *)(v15 + 4 * v14) )
      {
        *(_DWORD *)(v13 + 4 * v12) = *(_DWORD *)(v15 + 4 * v14);
        v8 = 1;
      }
    }
    v16 = *(_QWORD *)(a1 + 16);
    v17 = *(unsigned int **)(v16 + 1224);
    for ( j = *(unsigned int **)(v16 + 1216); j != v17; j += 2 )
    {
      v19 = (_QWORD *)(*(_QWORD *)(v2 + 56) + 40LL * *j);
      v20 = (__int64 *)(*(_QWORD *)(a1 + 56) + 40LL * j[1]);
      sub_18001244C(v20, v19);
      sub_18001244C(v20 + 2, v19 + 2);
    }
    result = *(unsigned int *)(v2 + 80);
    *(_DWORD *)(a1 + 104) = result;
    if ( v8 )
      ++*(_DWORD *)(a1 + 80);
    if ( v24 )
      return sub_18001050C(v24);
  }
  return result;
}
