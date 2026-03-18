/*
 * XREFs of SmmQueryRegistry @ 0x1403F7424
 * Callers:
 *     ?SmmLoadConfiguration@@YAXXZ @ 0x14018481C (-SmmLoadConfiguration@@YAXXZ.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1400600A8 (HviIsHypervisorMicrosoftCompatible.c)
 *     ?SmmGetIommuInterfaceVersion@@YAKXZ @ 0x140064960 (-SmmGetIommuInterfaceVersion@@YAKXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 SmmQueryRegistry()
{
  int v0; // ebx
  __int64 result; // rax
  unsigned int v2; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v3; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v4; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v5; // [rsp+3Ch] [rbp-C4h] BYREF
  int v6; // [rsp+40h] [rbp-C0h] BYREF
  int v7; // [rsp+44h] [rbp-BCh] BYREF
  int v8; // [rsp+48h] [rbp-B8h] BYREF
  int v9; // [rsp+4Ch] [rbp-B4h] BYREF
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  int v11; // [rsp+54h] [rbp-ACh] BYREF
  int v12; // [rsp+58h] [rbp-A8h] BYREF
  int v13; // [rsp+5Ch] [rbp-A4h] BYREF
  int v14; // [rsp+60h] [rbp-A0h] BYREF
  int v15; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h] BYREF
  int v17; // [rsp+78h] [rbp-88h]
  const wchar_t *v18; // [rsp+80h] [rbp-80h]
  unsigned int *v19; // [rsp+88h] [rbp-78h]
  int v20; // [rsp+90h] [rbp-70h]
  unsigned int *v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  int v24; // [rsp+B0h] [rbp-50h]
  const wchar_t *v25; // [rsp+B8h] [rbp-48h]
  int *v26; // [rsp+C0h] [rbp-40h]
  int v27; // [rsp+C8h] [rbp-38h]
  int *v28; // [rsp+D0h] [rbp-30h]
  int v29; // [rsp+D8h] [rbp-28h]
  __int64 v30; // [rsp+E0h] [rbp-20h]
  int v31; // [rsp+E8h] [rbp-18h]
  const wchar_t *v32; // [rsp+F0h] [rbp-10h]
  unsigned int *v33; // [rsp+F8h] [rbp-8h]
  int v34; // [rsp+100h] [rbp+0h]
  unsigned int *v35; // [rsp+108h] [rbp+8h]
  int v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  int v38; // [rsp+120h] [rbp+20h]
  const wchar_t *v39; // [rsp+128h] [rbp+28h]
  int *v40; // [rsp+130h] [rbp+30h]
  int v41; // [rsp+138h] [rbp+38h]
  int *v42; // [rsp+140h] [rbp+40h]
  int v43; // [rsp+148h] [rbp+48h]
  __int64 v44; // [rsp+150h] [rbp+50h]
  int v45; // [rsp+158h] [rbp+58h]
  const wchar_t *v46; // [rsp+160h] [rbp+60h]
  int *v47; // [rsp+168h] [rbp+68h]
  int v48; // [rsp+170h] [rbp+70h]
  int *v49; // [rsp+178h] [rbp+78h]
  int v50; // [rsp+180h] [rbp+80h]
  __int64 v51; // [rsp+188h] [rbp+88h]
  int v52; // [rsp+190h] [rbp+90h]
  const wchar_t *v53; // [rsp+198h] [rbp+98h]
  int *v54; // [rsp+1A0h] [rbp+A0h]
  int v55; // [rsp+1A8h] [rbp+A8h]
  int *v56; // [rsp+1B0h] [rbp+B0h]
  int v57; // [rsp+1B8h] [rbp+B8h]
  __int64 v58; // [rsp+1C0h] [rbp+C0h]
  int v59; // [rsp+1C8h] [rbp+C8h]
  const wchar_t *v60; // [rsp+1D0h] [rbp+D0h]
  int *v61; // [rsp+1D8h] [rbp+D8h]
  int v62; // [rsp+1E0h] [rbp+E0h]
  int *v63; // [rsp+1E8h] [rbp+E8h]
  int v64; // [rsp+1F0h] [rbp+F0h]
  __int128 v65; // [rsp+1F8h] [rbp+F8h]
  __int128 v66; // [rsp+208h] [rbp+108h]
  __int128 v67; // [rsp+218h] [rbp+118h]
  __int64 v68; // [rsp+228h] [rbp+128h]

  v0 = 0;
  v18 = L"ForceEnableIommu";
  v5 = 0;
  v2 = 0;
  v19 = &v2;
  v11 = 0;
  v21 = &v5;
  v25 = L"EnablePageTracking";
  v26 = &v7;
  v28 = &v11;
  v32 = L"LogicalAddressMode";
  v33 = &v3;
  v35 = &v4;
  v39 = L"PreferHighLogicalAddresses";
  v40 = &v9;
  v42 = &v12;
  v46 = L"DebugMode";
  v47 = &v10;
  v49 = &v13;
  v53 = L"IdentityMappedPassthrough";
  v54 = &v6;
  v56 = &v14;
  v7 = 0;
  v4 = 0;
  v3 = 0;
  v12 = 0;
  v9 = 0;
  v15 = 0;
  v8 = 0;
  v13 = 0;
  v10 = 0;
  v14 = 0;
  v6 = 0;
  v16 = 0LL;
  v17 = 288;
  v20 = 67108868;
  v22 = 4;
  v23 = 0LL;
  v24 = 288;
  v27 = 67108868;
  v29 = 4;
  v30 = 0LL;
  v31 = 288;
  v34 = 67108868;
  v36 = 4;
  v37 = 0LL;
  v38 = 288;
  v41 = 67108868;
  v43 = 4;
  v44 = 0LL;
  v45 = 288;
  v48 = 67108868;
  v50 = 4;
  v51 = 0LL;
  v52 = 288;
  v55 = 67108868;
  v57 = 4;
  v58 = 0LL;
  v59 = 288;
  v60 = L"ForceDmaRemapping";
  v62 = 67108868;
  v64 = 4;
  v61 = &v8;
  v63 = &v15;
  v68 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Smm", &v16, 0LL, 0LL);
  if ( v3 >= 3 )
    v3 = v4;
  if ( v2 >= 3 )
    v2 = v5;
  if ( !HviIsHypervisorMicrosoftCompatible() && (unsigned int)SmmGetIommuInterfaceVersion() >= 2 )
    v0 = v6;
  result = v0 != 0 ? 0x400 : 0;
  dword_140161610 = result | (v7 != 0 ? 4 : 0) | v2 & 3 | dword_140161610 & 0xFFFFFB00 | (unsigned __int8)(8 * (v3 & 3 | (4 * (v10 & 1 | (2 * (v9 & 1 | (2 * (v8 & 1))))))));
  return result;
}
