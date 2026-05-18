/*
 * XREFs of sub_1800517B8 @ 0x1800517B8
 * Callers:
 *     sub_180026870 @ 0x180026870 (sub_180026870.c)
 *     sub_180026CC0 @ 0x180026CC0 (sub_180026CC0.c)
 *     sub_180051AD0 @ 0x180051AD0 (sub_180051AD0.c)
 *     sub_180068B9C @ 0x180068B9C (sub_180068B9C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180050D40 @ 0x180050D40 (sub_180050D40.c)
 *     sub_18005101C @ 0x18005101C (sub_18005101C.c)
 *     sub_180051510 @ 0x180051510 (sub_180051510.c)
 *     sub_1800519DC @ 0x1800519DC (sub_1800519DC.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800517B8(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  _DWORD **v5; // rbx
  _DWORD *v6; // rbx
  unsigned int v7; // eax
  int v8; // r8d
  int v9; // ecx
  void **v10; // r13
  _DWORD *v11; // rcx
  unsigned int v12; // eax
  int v13; // r8d
  __int64 v14; // r12
  __int64 v15; // r15
  __int64 result; // rax
  __int64 *v17; // rax
  int v18; // xmm1_4
  __int64 v19; // rcx
  void *v20[2]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v21[4]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v22[4]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-19h] BYREF

  v20[1] = a2;
  v4 = *a2;
  v5 = *(_DWORD ***)(v4 + 112);
  if ( v5 )
    v6 = *v5;
  else
    v6 = 0LL;
  if ( !v6 )
  {
    std::string::string(v22, "Attaching an uninitialized device texture.");
    v7 = (unsigned int)std::string::string(
                         v21,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\texture.cpp");
    sub_180068668((unsigned int)pExceptionObject, v7, v8, (unsigned int)v22, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v9 = *(_DWORD *)(v4 + 88);
  LODWORD(v20[0]) = 1;
  if ( !*(_QWORD *)(a1 + 120) || *(_DWORD *)(a1 + 120) == 1 && *(_DWORD *)(**(_QWORD **)(a1 + 112) + 32LL) == v9 )
  {
    v10 = (void **)(a1 + 128);
  }
  else
  {
    LOBYTE(v20[0]) = 0;
    v10 = (void **)(a1 + 128);
    v11 = *(_DWORD **)(a1 + 128);
    if ( v11 != v6
      && (*v11 != *v6
       || v11[1] != v6[1]
       || v11[2] != v6[2]
       || v11[3] != v6[3]
       || v11[4] != v6[4]
       || v11[5] != v6[5]
       || v11[6] != v6[6])
      || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(a1 + 144), (__m128)*(unsigned __int64 *)(v4 + 152))) & 3) != 3 )
    {
      std::string::string(v21, "Attaching a texture buffer to an incompatible texture");
      v12 = (unsigned int)std::string::string(
                            v22,
                            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source"
                            "\\engine\\texture.cpp");
      sub_180068668((unsigned int)pExceptionObject, v12, v13, (unsigned int)v21, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
  }
  v14 = a1;
  v15 = v4;
  v21[0] = v4;
  v21[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  result = sub_1800519DC(a1, v21);
  if ( LOBYTE(v20[0]) )
  {
    v17 = sub_18005101C((__int64 *)v20, (__int64)v6);
    sub_180050D40(v10, (void **)v17);
    result = sub_180051510(v20);
    v18 = *(_DWORD *)(v15 + 156);
    *(_DWORD *)(v14 + 144) = *(_DWORD *)(v15 + 152);
    *(_DWORD *)(v14 + 148) = v18;
  }
  v19 = a2[1];
  if ( v19 )
    return sub_18001060C(v19);
  return result;
}
