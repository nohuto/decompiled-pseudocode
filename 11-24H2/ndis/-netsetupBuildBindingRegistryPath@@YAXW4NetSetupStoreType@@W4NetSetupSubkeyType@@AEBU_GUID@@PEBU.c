/*
 * XREFs of ?netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU3@33PEA_W@Z @ 0x14014F4F4
 * Callers:
 *     ndisIsLwfBindingEnabled @ 0x1401462D8 (ndisIsLwfBindingEnabled.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x14014637C (ndisIsLwfBindingEnabled_0.c)
 *     ndisIsProtocolBindingEnabled @ 0x14014640C (ndisIsProtocolBindingEnabled.c)
 * Callees:
 *     ??$swprintf_s@$0CI@@@YAHAEAY0CI@_WPEB_WZZ @ 0x1400E6F24 (--$swprintf_s@$0CI@@@YAHAEAY0CI@_WPEB_WZZ.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

void __fastcall netsetupBuildBindingRegistryPath(
        int a1,
        __int64 a2,
        unsigned int *a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int *a6,
        wchar_t *a7)
{
  _DWORD *v8; // rdx
  const wchar_t *v9; // rcx
  unsigned int v10; // r15d
  unsigned int v11; // r9d
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // r8d
  unsigned int v16; // r15d
  int v17; // r9d
  __int64 v18; // [rsp+20h] [rbp-130h]
  __int64 v19; // [rsp+28h] [rbp-128h]
  __int64 v20; // [rsp+30h] [rbp-120h]
  __int64 v21; // [rsp+38h] [rbp-118h]
  __int64 v22; // [rsp+40h] [rbp-110h]
  __int64 v23; // [rsp+48h] [rbp-108h]
  __int64 v24; // [rsp+50h] [rbp-100h]
  __int64 v25; // [rsp+58h] [rbp-F8h]
  __int64 v26; // [rsp+60h] [rbp-F0h]
  unsigned int v27; // [rsp+80h] [rbp-D0h]
  unsigned int v28; // [rsp+88h] [rbp-C8h]
  unsigned int v29; // [rsp+90h] [rbp-C0h]
  unsigned int v30; // [rsp+98h] [rbp-B8h]
  unsigned int v31; // [rsp+A0h] [rbp-B0h]
  unsigned int v32; // [rsp+A8h] [rbp-A8h]
  int v33; // [rsp+110h] [rbp-40h]
  wchar_t Src[40]; // [rsp+120h] [rbp-30h] BYREF

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v8 = a4;
      if ( !a4 )
        v8 = a5;
      v9 = L"Protocols";
      if ( !a4 )
        v9 = L"Filters";
      v27 = *((unsigned __int16 *)v8 + 2);
      v28 = *((unsigned __int16 *)v8 + 3);
      v29 = *((unsigned __int8 *)v8 + 8);
      v30 = *((unsigned __int8 *)v8 + 9);
      v31 = *((unsigned __int8 *)v8 + 10);
      v32 = *((unsigned __int8 *)v8 + 11);
      swprintf_s(
        a7,
        0x100uLL,
        L"\\Registry\\Machine\\DEVICES\\Networking\\NetAdapters\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\Bindi"
         "ngs\\%ws\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        *a3,
        *((unsigned __int16 *)a3 + 2),
        *((unsigned __int16 *)a3 + 3),
        *((unsigned __int8 *)a3 + 8),
        *((unsigned __int8 *)a3 + 9),
        *((unsigned __int8 *)a3 + 10),
        *((unsigned __int8 *)a3 + 11),
        *((unsigned __int8 *)a3 + 12),
        *((unsigned __int8 *)a3 + 13),
        *((unsigned __int8 *)a3 + 14),
        *((unsigned __int8 *)a3 + 15),
        v9,
        *v8,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        *((unsigned __int8 *)v8 + 12),
        *((unsigned __int8 *)v8 + 13),
        *((unsigned __int8 *)v8 + 14),
        *((unsigned __int8 *)v8 + 15),
        __PAIR64__(v31, v32),
        __PAIR64__(v29, v30),
        __PAIR64__(v27, v28));
      if ( a6 )
      {
        LODWORD(v26) = *((unsigned __int8 *)a6 + 15);
        LODWORD(v25) = *((unsigned __int8 *)a6 + 14);
        LODWORD(v24) = *((unsigned __int8 *)a6 + 13);
        LODWORD(v23) = *((unsigned __int8 *)a6 + 12);
        LODWORD(v22) = *((unsigned __int8 *)a6 + 11);
        LODWORD(v21) = *((unsigned __int8 *)a6 + 10);
        LODWORD(v20) = *((unsigned __int8 *)a6 + 9);
        LODWORD(v19) = *((unsigned __int8 *)a6 + 8);
        LODWORD(v18) = *((unsigned __int16 *)a6 + 3);
        swprintf_s<40>(
          Src,
          L"-{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
          *a6,
          *((unsigned __int16 *)a6 + 2),
          v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        wcscat_s(a7, 0x100uLL, Src);
      }
    }
  }
  else
  {
    v10 = *a3;
    v11 = a3[1];
    v12 = a3[3] ^ *a3;
    v13 = v11;
    v14 = a3[2];
    v15 = v12;
    v33 = v14;
    if ( a4 )
    {
      v16 = v11;
      v17 = v14;
      v10 = *a4 ^ v16;
      v14 = a4[2] ^ v12;
      v11 = a4[1] ^ v17;
      v12 = a4[3] ^ v10;
      v13 = v11;
      v15 = v12;
      v33 = v14;
    }
    if ( a5 )
    {
      v10 = *a5 ^ v13;
      v11 = a5[1] ^ v14;
      v14 = a5[2] ^ v15;
      v13 = v11;
      v12 = a5[3] ^ v10;
      v15 = v12;
      v33 = v14;
    }
    if ( a6 )
    {
      v10 = *a6 ^ v13;
      v11 = a6[1] ^ v14;
      v12 = a6[3] ^ v10;
      v33 = a6[2] ^ v15;
    }
    swprintf_s(
      a7,
      0x100uLL,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\BindPaths\\{%08x-%04x-%04x-%02x%02x-%02x%0"
       "2x%02x%02x%02x%02x}\\Properties",
      v10,
      (unsigned __int16)v11,
      HIWORD(v11),
      v33 & 0x1F | 0xC0,
      BYTE1(v33),
      BYTE2(v33),
      HIBYTE(v33),
      (unsigned __int8)v12,
      BYTE1(v12),
      BYTE2(v12),
      HIBYTE(v12));
  }
}
