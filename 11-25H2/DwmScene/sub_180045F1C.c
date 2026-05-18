/*
 * XREFs of sub_180045F1C @ 0x180045F1C
 * Callers:
 *     sub_180045AF8 @ 0x180045AF8 (sub_180045AF8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_180044C7C @ 0x180044C7C (sub_180044C7C.c)
 *     sub_18004623C @ 0x18004623C (sub_18004623C.c)
 *     sub_180046454 @ 0x180046454 (sub_180046454.c)
 *     sub_1800464A8 @ 0x1800464A8 (sub_1800464A8.c)
 *     sub_1800465D4 @ 0x1800465D4 (sub_1800465D4.c)
 *     sub_180046758 @ 0x180046758 (sub_180046758.c)
 *     sub_18004688C @ 0x18004688C (sub_18004688C.c)
 *     sub_1800469B8 @ 0x1800469B8 (sub_1800469B8.c)
 *     sub_180046B80 @ 0x180046B80 (sub_180046B80.c)
 *     sub_180046CA8 @ 0x180046CA8 (sub_180046CA8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180045F1C(unsigned int *a1, int a2, int a3, __int64 a4, int a5)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // r10d
  int v12; // r9d
  __int64 result; // rax
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD v16[4]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp+7h] BYREF

  if ( !a3 || !a2 )
  {
    std::string::string(v16, "Mesh::ReserveDynamic() -- vertex capacity and index capacity must not be zero");
    v14 = std::string::string(
            v17,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180044C7C(pExceptionObject, (__int64)v14, v15, (__int64)v16);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( a1[76] == 2 )
  {
    std::string::string(
      v17,
      "Mesh::ReserveDynamic() -- this mesh instance is already dynamic -- ReserveDynamic() must be called only once");
    v6 = std::string::string(
           v16,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180044C7C(pExceptionObject, (__int64)v6, v7, (__int64)v17);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( (a5 & 0x100) == 0 )
  {
    std::string::string(v16, "Mesh::ReserveDynamic() -- dynamic mesh vertex format must include position");
    v8 = std::string::string(
           v17,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180044C7C(pExceptionObject, (__int64)v8, v9, (__int64)v16);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  a1[76] = 2;
  sub_180027C70((__int64)a1, 4, 1);
  *(_DWORD *)(v10 + 292) = a5;
  *(_DWORD *)(v10 + 296) = a5;
  *(_DWORD *)(v10 + 124) = v11;
  *(_DWORD *)(v10 + 120) = v11;
  *(_DWORD *)(v10 + 116) = v12;
  *(_DWORD *)(v10 + 112) = v12;
  *(_WORD *)(v10 + 308) = 0;
  result = sub_18004688C(v10, 0LL, v11);
  if ( (a5 & 0x80u) != 0 )
    result = sub_18004623C(a1, 0LL, a1[31]);
  if ( (a5 & 1) != 0 )
    result = sub_180046B80(a1, 0LL, a1[31]);
  if ( (a5 & 2) != 0 )
    result = sub_180046CA8(a1, 0LL, a1[31]);
  if ( (a5 & 0x10000000) != 0 )
  {
    a1[72] = 1;
    result = sub_1800464A8(a1, 0LL, a1[29]);
  }
  else if ( (a5 & 0x40) != 0 )
  {
    a1[72] = 0;
    result = sub_180046454(a1, 0LL, a1[29]);
  }
  if ( (a5 & 0x10) != 0 )
    result = sub_180046758(a1, 0LL, a1[31], 0LL);
  if ( (a5 & 0x20) != 0 )
    result = sub_1800469B8(a1, 0LL, a1[31], 0LL);
  if ( (a5 & 0x400) != 0 )
    return sub_1800465D4(a1, 0LL, 0LL, a1[31]);
  return result;
}
