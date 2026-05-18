/*
 * XREFs of sub_180045668 @ 0x180045668
 * Callers:
 *     sub_180013A60 @ 0x180013A60 (sub_180013A60.c)
 *     sub_1800757A0 @ 0x1800757A0 (sub_1800757A0.c)
 *     sub_180082D38 @ 0x180082D38 (sub_180082D38.c)
 *     sub_180082FB4 @ 0x180082FB4 (sub_180082FB4.c)
 *     sub_1800906B0 @ 0x1800906B0 (sub_1800906B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_1800452CC @ 0x1800452CC (sub_1800452CC.c)
 *     sub_180045484 @ 0x180045484 (sub_180045484.c)
 *     sub_1800457B4 @ 0x1800457B4 (sub_1800457B4.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180045668(__int64 a1)
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
    sub_180068668((unsigned int)pExceptionObject, v2, v3, (unsigned int)v12, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_180027DD0(a1, 4, 1);
  if ( v5[18] )
  {
    v8 = v6 & (v7 >> 2);
    v9 = 0;
    if ( !v5[20] )
      v9 = v6 & v7;
    v10 = (v7 & 2) != 0 && v5[24] == 0LL;
    if ( v10 && !*(_QWORD *)(a1 + 240) )
    {
      sub_18001CAFC(&stru_1801B92E8, 3);
      v10 = 0;
    }
    if ( v9 )
    {
      if ( v10 )
        sub_180045484((_DWORD *)a1, v4, v8);
      else
        sub_1800452CC((_DWORD *)a1);
    }
    else if ( v10 )
    {
      LOBYTE(v6) = v8;
      sub_1800457B4(a1, v4, v6);
    }
  }
}
