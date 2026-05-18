/*
 * XREFs of sub_18007A544 @ 0x18007A544
 * Callers:
 *     sub_18007965C @ 0x18007965C (sub_18007965C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001A9C0 @ 0x18001A9C0 (sub_18001A9C0.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_180078CA4 @ 0x180078CA4 (sub_180078CA4.c)
 *     sub_1800790A4 @ 0x1800790A4 (sub_1800790A4.c)
 *     sub_180079F68 @ 0x180079F68 (sub_180079F68.c)
 *     sub_18007A7FC @ 0x18007A7FC (sub_18007A7FC.c)
 *     sub_18007A830 @ 0x18007A830 (sub_18007A830.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18007A544(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  char v6; // r14
  __int64 *v7; // rax
  int v8; // ebx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  _QWORD *v17; // rax
  __int64 v18; // r8
  __int128 v19; // xmm9
  int v20; // xmm8_4
  int v21; // xmm7_4
  int v22; // xmm6_4
  _DWORD *v23; // rax
  int v24; // xmm7_4
  int v25; // xmm6_4
  _DWORD *v26; // rax
  int v27; // xmm6_4
  int v28; // ebx
  _QWORD v30[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v31[3]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v32[3]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v33[3]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v34[4]; // [rsp+90h] [rbp-78h] BYREF
  _OWORD pExceptionObject[4]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v36[4]; // [rsp+F0h] [rbp-18h] BYREF

  v6 = 0;
  LODWORD(v30[1]) = 0;
  if ( *(_QWORD *)(a3 + 40) == *(_QWORD *)(a3 + 48) )
  {
    v7 = sub_180079F68(v32, *(_DWORD *)(a3 + 32), a3);
    v8 = 2;
  }
  else
  {
    v7 = sub_180078CA4(v33, a3 + 40);
    v8 = 1;
  }
  LODWORD(v30[1]) = v8;
  sub_180078CA4(v31, (__int64)v7);
  if ( (v8 & 2) != 0 )
  {
    LOBYTE(v8) = v8 & 0xFD;
    sub_18001A9C0((__int64)v32);
  }
  if ( (v8 & 1) != 0 )
    sub_18001A9C0((__int64)v33);
  v9 = *(_DWORD *)(a3 + 32);
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                v16 = v15 - 1;
                if ( v16 )
                {
                  if ( v16 != 1 )
                  {
                    std::string::string(v36, "ShaderPropertyLayout::AddProperties() -- unsupported property type");
                    v17 = std::string::string(
                            v34,
                            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source"
                            "\\engine\\shaderpropertylayout.cpp");
                    sub_180038A58(pExceptionObject, (__int64)v17, v18, (__int64)v36, 0);
                    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
                  }
                }
                else
                {
                  pExceptionObject[0] = *(_OWORD *)v31[0];
                  pExceptionObject[1] = *(_OWORD *)(v31[0] + 16);
                  pExceptionObject[2] = *(_OWORD *)(v31[0] + 32);
                  pExceptionObject[3] = *(_OWORD *)(v31[0] + 48);
                  sub_18007A7FC(a1, a2, pExceptionObject);
                }
              }
              else
              {
                v19 = *(_OWORD *)v31[0];
                *(_OWORD *)sub_1800790A4(a1, a2) = v19;
              }
            }
            else
            {
              *(_OWORD *)&v30[1] = *(_OWORD *)v31[0];
              sub_18007A830(a1, a2, &v30[1]);
            }
          }
          else
          {
            v20 = *(_DWORD *)v31[0];
            v21 = *(_DWORD *)(v31[0] + 4);
            v22 = *(_DWORD *)(v31[0] + 8);
            v23 = (_DWORD *)sub_1800790A4(a1, a2);
            *v23 = v20;
            v23[1] = v21;
            v23[2] = v22;
          }
        }
        else
        {
          v24 = *(_DWORD *)v31[0];
          v25 = *(_DWORD *)(v31[0] + 4);
          v26 = (_DWORD *)sub_1800790A4(a1, a2);
          *v26 = v24;
          v26[1] = v25;
        }
      }
      else
      {
        v27 = *(_DWORD *)v31[0];
        *(_DWORD *)sub_1800790A4(a1, a2) = v27;
      }
    }
    else
    {
      v28 = (int)*(float *)v31[0];
      *(_DWORD *)sub_1800790A4(a1, a2) = v28;
    }
  }
  else
  {
    if ( *(float *)v31[0] != 0.0 )
      v6 = 1;
    *(_DWORD *)sub_1800790A4(a1, a2) = -(v6 != 0);
  }
  return sub_18001A9C0((__int64)v31);
}
