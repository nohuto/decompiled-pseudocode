/*
 * XREFs of sub_18005131C @ 0x18005131C
 * Callers:
 *     sub_18005128C @ 0x18005128C (sub_18005128C.c)
 *     sub_180052038 @ 0x180052038 (sub_180052038.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18004E834 @ 0x18004E834 (sub_18004E834.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18005131C(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ecx
  __int64 v11; // r8
  unsigned int v12; // eax
  int v13; // r8d
  unsigned int v14; // eax
  int v15; // r8d
  unsigned int v17; // eax
  int v18; // r8d
  _QWORD v19[4]; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v20[4]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+88h] [rbp+Fh] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::TextureImageSetView::`vftable';
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  v6 = a2[2];
  a2[2] = 0LL;
  v7 = a2[1];
  a2[1] = 0LL;
  v8 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 24) = v8;
  *(_QWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 40) = v6;
  *(_DWORD *)(a1 + 48) = -1;
  v9 = 0;
  v10 = 0;
  v11 = *(_QWORD *)(a1 + 32);
  while ( v8 != v11 )
  {
    if ( *(_DWORD *)(v8 + 28) == v9 )
    {
      ++v9;
    }
    else
    {
      if ( *(_DWORD *)(v8 + 28) )
      {
        std::string::string(v19, "TextureImageSetView: texture image mip levels are not consecutive ascending integers");
        v14 = (unsigned int)std::string::string(
                              v20,
                              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\sour"
                              "ce\\engine\\texture.cpp");
        sub_180068668((unsigned int)pExceptionObject, v14, v15, (unsigned int)v19, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      if ( v10 )
      {
        if ( v9 != *(_DWORD *)(a1 + 48) )
        {
          std::string::string(
            v20,
            "TextureImageSetView: texture array elements must all have the same number of mip levels defined");
          v12 = (unsigned int)std::string::string(
                                v19,
                                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\so"
                                "urce\\engine\\texture.cpp");
          sub_180068668((unsigned int)pExceptionObject, v12, v13, (unsigned int)v20, 0);
          throw (Spectre::Engine::EngineException *)pExceptionObject;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 48) = v9;
      }
      ++v10;
      v9 = 1;
    }
    v8 += 32LL;
  }
  if ( v10 )
  {
    if ( v9 != *(_DWORD *)(a1 + 48) )
    {
      std::string::string(
        v19,
        "TextureImageSetView: texture array elements must all have the same number of mip levels defined");
      v17 = (unsigned int)std::string::string(
                            v20,
                            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source"
                            "\\engine\\texture.cpp");
      sub_180068668((unsigned int)pExceptionObject, v17, v18, (unsigned int)v19, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 48) = v9;
  }
  sub_18004E834((__int64)a2);
  return a1;
}
