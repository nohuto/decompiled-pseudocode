/*
 * XREFs of sub_180045508 @ 0x180045508
 * Callers:
 *     sub_180013960 @ 0x180013960 (sub_180013960.c)
 *     sub_180075640 @ 0x180075640 (sub_180075640.c)
 *     sub_180082BD8 @ 0x180082BD8 (sub_180082BD8.c)
 *     sub_180082E54 @ 0x180082E54 (sub_180082E54.c)
 *     sub_180090550 @ 0x180090550 (sub_180090550.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_18004516C @ 0x18004516C (sub_18004516C.c)
 *     sub_180045324 @ 0x180045324 (sub_180045324.c)
 *     sub_180045654 @ 0x180045654 (sub_180045654.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180045508(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // r8d
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // r9d
  char v8; // di
  char v9; // si
  bool v10; // cl
  _QWORD v11[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v12[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    std::string::string(
      v12,
      "Mesh::ComputeRequiredData() -- Modification of a mesh that while it is mapped is not supported.");
    v2 = (unsigned int)std::string::string(
                         v11,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180068508((unsigned int)pExceptionObject, v2, v3, (unsigned int)v12, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_180027C70(a1, 4, 1);
  if ( v5[18] )
  {
    v8 = v6 & (v7 >> 2);
    v9 = 0;
    if ( !v5[20] )
      v9 = v6 & v7;
    v10 = (v7 & 2) != 0 && v5[24] == 0LL;
    if ( v10 && !*(_QWORD *)(a1 + 240) )
    {
      sub_18001C99C(&stru_1801B82E8, 3);
      v10 = 0;
    }
    if ( v9 )
    {
      if ( v10 )
        sub_180045324((_DWORD *)a1, v4, v8);
      else
        sub_18004516C((_DWORD *)a1);
    }
    else if ( v10 )
    {
      LOBYTE(v6) = v8;
      sub_180045654(a1, v4, v6);
    }
  }
}
