/*
 * XREFs of sub_180086078 @ 0x180086078
 * Callers:
 *     sub_180085C64 @ 0x180085C64 (sub_180085C64.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _o_floorf @ 0x18000C44C (_o_floorf.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18001D6EC @ 0x18001D6EC (sub_18001D6EC.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_180084F80 @ 0x180084F80 (sub_180084F80.c)
 *     sub_180085128 @ 0x180085128 (sub_180085128.c)
 *     sub_1800859F8 @ 0x1800859F8 (sub_1800859F8.c)
 *     sub_180086F90 @ 0x180086F90 (sub_180086F90.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_180086078(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // kr00_8
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  float v9; // xmm0_4
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rsi
  unsigned __int64 v17; // rcx
  __int64 v18; // rdi
  unsigned __int64 v19; // r14
  __int64 v20; // rdx
  unsigned int v21; // eax
  float *v22; // rax
  __int64 v23; // rdx
  float v25[4]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v26[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v27[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-9h] BYREF

  v5 = *(_QWORD *)(a2 + 16);
  v6 = v5 / 6;
  if ( v5 != 6 * (v5 / 6) )
  {
    std::string::string(
      v27,
      "ColorTransform::ImportFormat_BinaryRGB_Base16() -- unexpected data length (not multiple of six characters)");
    v7 = std::string::string(
           v26,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\colortransform.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v7, v8, (__int64)v27, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( (v6 & 0x8000000000000000uLL) != 0LL )
    v9 = (float)(int)((v5 / 6) & 1 | (v5 / 0xC)) + (float)(int)((v5 / 6) & 1 | (v5 / 0xC));
  else
    v9 = (float)(int)v6;
  o_cbrtf();
  o_floorf();
  v11 = 0LL;
  if ( v9 >= 9.223372e18 )
  {
    v9 = v9 - 9.223372e18;
    if ( v9 < 9.223372e18 )
      v11 = 0x8000000000000000uLL;
  }
  v12 = v11 + (unsigned int)(int)v9;
  v13 = v12 * v12 * v12;
  if ( v13 != v6 )
  {
    std::string::string(v26, "ColorTransform::ImportFormat_BinaryRGB_Base16() -- unexpected data length (not a cube)");
    v14 = std::string::string(
            v27,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\colortransform.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v14, v15, (__int64)v26, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_QWORD *)a3 = v12;
  v16 = (__int64 *)(a3 + 8);
  v17 = (__int64)(*(_QWORD *)(a3 + 16) - *(_QWORD *)(a3 + 8)) >> 4;
  if ( v6 >= v17 )
  {
    if ( v6 <= v17 )
      goto LABEL_18;
    if ( v6 > (__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 8)) >> 4 )
    {
      LOBYTE(v13) = sub_180084F80(a3 + 8, v5 / 6, v10);
      goto LABEL_18;
    }
    v13 = sub_180085128(*(_QWORD *)(a3 + 16), v6 - v17, a3 + 8);
  }
  else
  {
    v13 = *v16 + 16 * v6;
  }
  *(_QWORD *)(a3 + 16) = v13;
LABEL_18:
  v18 = 0LL;
  *(_DWORD *)(a3 + 32) = 0;
  if ( v6 )
  {
    v19 = 0LL;
    do
    {
      sub_18001D6EC(a2, v26, v19, 6uLL);
      v21 = sub_180086F90(v26, v20, 16LL);
      v22 = sub_1800859F8(v25, v21);
      v23 = *v16;
      *(float *)(v18 + v23) = *v22;
      *(float *)(v18 + v23 + 4) = v22[1];
      *(float *)(v18 + v23 + 8) = v22[2];
      *(float *)(v18 + v23 + 12) = v22[3];
      LOBYTE(v13) = sub_180011B5C((__int64)v26);
      v19 += 6LL;
      v18 += 16LL;
      --v6;
    }
    while ( v6 );
  }
  return v13;
}
