/*
 * XREFs of ?CreatePROPVARIANTFromPropertyValue@MPCConstantManagerClient@@CAJPEAUIPropertyValue@Foundation@Windows@@PEAUtagPROPVARIANT@@@Z @ 0x18016D828
 * Callers:
 *     ?SetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAUIPropertyValue@Foundation@6@PEAPEAUIAsyncAction@96@@Z @ 0x1801712B0 (-SetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitPropVariantFromString@@YAJPEBGPEAUtagPROPVARIANT@@@Z @ 0x18016FBD0 (-InitPropVariantFromString@@YAJPEBGPEAUtagPROPVARIANT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCConstantManagerClient::CreatePROPVARIANTFromPropertyValue(
        struct Windows::Foundation::IPropertyValue *a1,
        struct tagPROPVARIANT *a2)
{
  __int64 v3; // rax
  int v4; // ebx
  int v6; // eax
  __int64 v8; // rax
  int v9; // eax
  const unsigned __int16 *StringRawBuffer; // rax
  int inited; // eax
  __int64 v12; // rax
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rax
  int v16; // eax
  double v17; // xmm0_8
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  HSTRING string; // [rsp+20h] [rbp-20h] BYREF
  double v23; // [rsp+28h] [rbp-18h] BYREF
  LARGE_INTEGER v24[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v26; // [rsp+60h] [rbp+20h] BYREF
  int v27; // [rsp+70h] [rbp+30h] BYREF
  float v28; // [rsp+78h] [rbp+38h] BYREF

  *(_OWORD *)&a2->vt = 0LL;
  a2->bstrblobVal.pData = 0LL;
  v3 = *(_QWORD *)a1;
  v4 = 0;
  v27 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, int *))(v3 + 48))(a1, &v27);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x18A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v6,
      (int)string);
  switch ( v27 )
  {
    case 7:
      v20 = *(_QWORD *)a1;
      v24[0].QuadPart = 0LL;
      v21 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, LARGE_INTEGER *))(v20 + 112))(
              a1,
              v24);
      if ( v21 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x190,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v21,
          (int)string);
      a2->hVal = v24[0];
      a2->vt = 21;
      return 0LL;
    case 8:
      v18 = *(_QWORD *)a1;
      v28 = 0.0;
      v19 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, float *))(v18 + 120))(a1, &v28);
      if ( v19 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x19A,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v19,
          (int)string);
      v17 = v28;
      goto LABEL_22;
    case 9:
      v15 = *(_QWORD *)a1;
      v23 = 0.0;
      v16 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, double *))(v15 + 128))(a1, &v23);
      if ( v16 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x19F,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v16,
          (int)string);
      v17 = v23;
LABEL_22:
      a2->dblVal = v17;
      a2->vt = 5;
      return 0LL;
    case 11:
      v12 = *(_QWORD *)a1;
      v26 = 0;
      v13 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, char *))(v12 + 144))(a1, &v26);
      if ( v13 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x195,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v13,
          (int)string);
      v14 = v26 == 0;
      a2->vt = 11;
      LOBYTE(v4) = !v14;
      a2->iVal = -(v4 != 0);
      break;
    case 12:
      v8 = *(_QWORD *)a1;
      string = 0LL;
      v9 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, HSTRING *))(v8 + 152))(a1, &string);
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1A4,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v9,
          (int)string);
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      inited = InitPropVariantFromString(StringRawBuffer, a2);
      if ( inited < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1A5,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)inited,
          (int)string);
      break;
    default:
      return 2147942487LL;
  }
  return 0LL;
}
