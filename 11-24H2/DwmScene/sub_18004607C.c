/*
 * XREFs of sub_18004607C @ 0x18004607C
 * Callers:
 *     sub_180045C58 @ 0x180045C58 (sub_180045C58.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_180044DDC @ 0x180044DDC (sub_180044DDC.c)
 *     sub_18004639C @ 0x18004639C (sub_18004639C.c)
 *     sub_1800465B4 @ 0x1800465B4 (sub_1800465B4.c)
 *     sub_180046608 @ 0x180046608 (sub_180046608.c)
 *     sub_180046734 @ 0x180046734 (sub_180046734.c)
 *     sub_1800468B8 @ 0x1800468B8 (sub_1800468B8.c)
 *     sub_1800469EC @ 0x1800469EC (sub_1800469EC.c)
 *     sub_180046B18 @ 0x180046B18 (sub_180046B18.c)
 *     sub_180046CE0 @ 0x180046CE0 (sub_180046CE0.c)
 *     sub_180046E08 @ 0x180046E08 (sub_180046E08.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004607C(unsigned int *a1, int a2, int a3, __int64 a4, int a5)
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
    sub_180044DDC(pExceptionObject, (__int64)v14, v15, (__int64)v16);
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
    sub_180044DDC(pExceptionObject, (__int64)v6, v7, (__int64)v17);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( (a5 & 0x100) == 0 )
  {
    std::string::string(v16, "Mesh::ReserveDynamic() -- dynamic mesh vertex format must include position");
    v8 = std::string::string(
           v17,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180044DDC(pExceptionObject, (__int64)v8, v9, (__int64)v16);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  a1[76] = 2;
  sub_180027DD0((__int64)a1, 4, 1);
  *(_DWORD *)(v10 + 292) = a5;
  *(_DWORD *)(v10 + 296) = a5;
  *(_DWORD *)(v10 + 124) = v11;
  *(_DWORD *)(v10 + 120) = v11;
  *(_DWORD *)(v10 + 116) = v12;
  *(_DWORD *)(v10 + 112) = v12;
  *(_WORD *)(v10 + 308) = 0;
  result = sub_1800469EC(v10, 0LL, v11);
  if ( (a5 & 0x80u) != 0 )
    result = sub_18004639C(a1, 0LL, a1[31]);
  if ( (a5 & 1) != 0 )
    result = sub_180046CE0(a1, 0LL, a1[31]);
  if ( (a5 & 2) != 0 )
    result = sub_180046E08(a1, 0LL, a1[31]);
  if ( (a5 & 0x10000000) != 0 )
  {
    a1[72] = 1;
    result = sub_180046608(a1, 0LL, a1[29]);
  }
  else if ( (a5 & 0x40) != 0 )
  {
    a1[72] = 0;
    result = sub_1800465B4(a1, 0LL, a1[29]);
  }
  if ( (a5 & 0x10) != 0 )
    result = sub_1800468B8(a1, 0LL, a1[31], 0LL);
  if ( (a5 & 0x20) != 0 )
    result = sub_180046B18(a1, 0LL, a1[31], 0LL);
  if ( (a5 & 0x400) != 0 )
    return sub_180046734(a1, 0LL, 0LL, a1[31]);
  return result;
}
