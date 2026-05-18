/*
 * XREFs of sub_1800CCFE0 @ 0x1800CCFE0
 * Callers:
 *     sub_1800B9D90 @ 0x1800B9D90 (sub_1800B9D90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180059E20 @ 0x180059E20 (sub_180059E20.c)
 *     sub_1800B608C @ 0x1800B608C (sub_1800B608C.c)
 *     sub_1800B60DC @ 0x1800B60DC (sub_1800B60DC.c)
 *     sub_1800C8154 @ 0x1800C8154 (sub_1800C8154.c)
 *     sub_1800CC9D0 @ 0x1800CC9D0 (sub_1800CC9D0.c)
 *     sub_1800CCA20 @ 0x1800CCA20 (sub_1800CCA20.c)
 *     sub_1800CCA70 @ 0x1800CCA70 (sub_1800CCA70.c)
 *     sub_1800CCB44 @ 0x1800CCB44 (sub_1800CCB44.c)
 *     sub_1800CCC14 @ 0x1800CCC14 (sub_1800CCC14.c)
 *     sub_1800CCD2C @ 0x1800CCD2C (sub_1800CCD2C.c)
 *     sub_1800CCE18 @ 0x1800CCE18 (sub_1800CCE18.c)
 *     sub_1800CD800 @ 0x1800CD800 (sub_1800CD800.c)
 *     sub_1800CD9A0 @ 0x1800CD9A0 (sub_1800CD9A0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800CCFE0(
        ID3D11DeviceContext *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int a5,
        char a6,
        int a7,
        D3D_FEATURE_LEVEL a8,
        D3D_FEATURE_LEVEL a9,
        char a10)
{
  D3D_FEATURE_LEVEL *v13; // r13
  int v14; // ecx
  int DXGIFactory1; // esi
  D3D_FEATURE_LEVEL *v16; // r14
  char v18; // di
  char *v19; // rbx
  D3D_FEATURE_LEVEL *v20; // r15
  D3D_FEATURE_LEVEL v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  ID3D11DeviceContext *v25; // rbx
  unsigned int i; // r14d
  ID3D11DeviceContext v27; // rdi
  unsigned int (__fastcall *v28)(struct ID3D11DeviceContextVtbl *, _QWORD, __int64 *); // rbx
  __int64 v29; // r8
  _OWORD *v30; // rcx
  _OWORD *v31; // rax
  __int64 v32; // rdx
  int v33; // r8d
  float v34; // xmm0_4
  _QWORD *v35; // rbx
  __int64 *v36; // rdi
  __int64 *v37; // rbx
  __int64 **v38; // rax
  __int64 j; // rax
  __int64 *k; // rcx
  __int64 *v41; // rcx
  D3D_FEATURE_LEVEL *v42; // rax
  D3D_FEATURE_LEVEL *v43; // rdx
  ID3D11Device *v44; // rbx
  HRESULT (__stdcall *CreateShaderResourceView)(ID3D11Device *, ID3D11Resource *, const D3D11_SHADER_RESOURCE_VIEW_DESC *, ID3D11ShaderResourceView **); // rdi
  int v46; // [rsp+30h] [rbp-D0h]
  ID3D11DeviceContext *v47; // [rsp+50h] [rbp-B0h] BYREF
  D3D_FEATURE_LEVEL v48[2]; // [rsp+58h] [rbp-A8h] BYREF
  ID3D11Device *v49; // [rsp+60h] [rbp-A0h] BYREF
  D3D_FEATURE_LEVEL v50; // [rsp+68h] [rbp-98h] BYREF
  ID3D11Device *v51[2]; // [rsp+70h] [rbp-90h] BYREF
  int v52; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v53; // [rsp+88h] [rbp-78h]
  D3D_FEATURE_LEVEL *v54[2]; // [rsp+90h] [rbp-70h] BYREF
  D3D_FEATURE_LEVEL *v55; // [rsp+A0h] [rbp-60h]
  __int64 *v56; // [rsp+A8h] [rbp-58h]
  __int128 v57; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v58[320]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v59[40]; // [rsp+200h] [rbp+100h] BYREF
  _OWORD v60[2]; // [rsp+340h] [rbp+240h] BYREF
  int v61; // [rsp+360h] [rbp+260h]
  char v62; // [rsp+364h] [rbp+264h] BYREF
  int v63; // [rsp+3E8h] [rbp+2E8h]

  v53 = a4;
  v56 = a3;
  v47 = a1;
  v57 = 0LL;
  *(_QWORD *)&v57 = sub_180059E20();
  memset(v59, 0, 0x138uLL);
  sub_18000E854(a2);
  sub_18000E854(a3);
  sub_18000E854(a4);
  *(_OWORD *)v54 = 0LL;
  v13 = 0LL;
  v55 = 0LL;
  v50 = a10 & 1;
  if ( (_BYTE)v50 || (a10 & 2) != 0 )
  {
    v14 = a8;
    if ( a8 < D3D_FEATURE_LEVEL_10_0 )
    {
LABEL_4:
      DXGIFactory1 = -2147024809;
LABEL_5:
      v16 = v54[0];
      goto LABEL_6;
    }
  }
  else
  {
    v14 = a8;
  }
  if ( (a6 & 4) != 0 )
  {
    v18 = 1;
    if ( v14 < 45312 )
      goto LABEL_4;
  }
  else
  {
    v18 = 0;
  }
  v60[0] = _mm_load_si128((const __m128i *)&xmmword_18018C4E0);
  v60[1] = _mm_load_si128((const __m128i *)&xmmword_18018C4D0);
  v61 = 37120;
  v19 = (char *)v60;
  v20 = v54[1];
  do
  {
    v21 = *(_DWORD *)v19;
    v52 = v21;
    if ( v21 >= v14 && v21 <= a9 )
    {
      if ( v20 == v13 )
      {
        sub_1800CCD2C(v54, v20, &v52);
        v13 = v55;
        v20 = v54[1];
        v14 = a8;
      }
      else
      {
        *v20++ = v21;
        v54[1] = v20;
      }
    }
    v19 += 4;
  }
  while ( v19 != &v62 );
  v22 = (2 * (a6 & 1) + 32) | 0x40;
  if ( (a6 & 2) == 0 )
    v22 = 2 * (a6 & 1) + 32;
  v23 = v22 | 0x100;
  if ( !v18 )
    v23 = v22;
  LODWORD(v49) = a6 & 8;
  v24 = v23 | 0x800;
  if ( (a6 & 0x10) == 0 )
    v24 = v23;
  v52 = v24;
  v63 = a6 & 0x20;
  v25 = v47 + 1;
  v47 = v25;
  sub_18000E854((__int64 *)v25);
  DXGIFactory1 = CreateDXGIFactory1(&stru_18018A450, (void **)&v25->lpVtbl);
  if ( DXGIFactory1 < 0 )
    goto LABEL_5;
  if ( a5 )
  {
    v16 = v54[0];
    if ( a5 == 1 )
      goto LABEL_86;
    goto LABEL_31;
  }
  for ( i = 0; ; ++i )
  {
    v27.lpVtbl = v25->lpVtbl;
    v28 = (unsigned int (__fastcall *)(struct ID3D11DeviceContextVtbl *, _QWORD, __int64 *))*((_QWORD *)v25->lpVtbl->QueryInterface
                                                                                            + 12);
    sub_18000E854(a2);
    if ( v28(v27.lpVtbl, i, a2) == -2005270526 )
      break;
    DXGIFactory1 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)*a2 + 80LL))(*a2, v59);
    if ( DXGIFactory1 < 0 )
      goto LABEL_5;
    v29 = v59[38] & 2;
    if ( !v63 || (v59[38] & 2) == 0 )
    {
      v30 = v58;
      v31 = v59;
      v32 = 2LL;
      do
      {
        *v30 = *v31;
        v30[1] = v31[1];
        v30[2] = v31[2];
        v30[3] = v31[3];
        v30[4] = v31[4];
        v30[5] = v31[5];
        v30[6] = v31[6];
        v30 += 8;
        *(v30 - 1) = v31[7];
        v31 += 8;
        --v32;
      }
      while ( v32 );
      *v30 = *v31;
      v30[1] = v31[1];
      v30[2] = v31[2];
      *((_QWORD *)v30 + 6) = *((_QWORD *)v31 + 6);
      if ( !(unsigned __int8)sub_1800CD9A0(v58, 0LL, v29, 128LL) )
      {
        if ( v59[34] < 0LL )
          v34 = (float)(int)(v59[34] & 1 | (v59[34] >> 1)) + (float)(int)(v59[34] & 1 | (v59[34] >> 1));
        else
          v34 = (float)SLODWORD(v59[34]);
        v48[0] = SLODWORD(v34);
        if ( (_DWORD)v49 )
          *(float *)v48 = v34 * -1.0;
        if ( v33 )
          v48[0] = -8388609;
        sub_1800CCC14(&v57, (__int64)v51, (__int64)v48, (__int64)a2);
      }
    }
    v25 = v47;
  }
  sub_18000E854(a2);
  v35 = *(_QWORD **)v57;
  v16 = v54[0];
  v36 = v56;
  while ( 1 )
  {
    if ( v35 == (_QWORD *)v57 )
    {
      v37 = v53;
      goto LABEL_74;
    }
    sub_1800C8154(a2, v35 + 5);
    DXGIFactory1 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)*a2 + 80LL))(*a2, v59);
    if ( DXGIFactory1 < 0 )
      goto LABEL_6;
    sub_18000E854(v36);
    sub_18000E854(v53);
    v51[0] = 0LL;
    v48[0] = 0;
    v47 = 0LL;
    sub_18000E854((__int64 *)&v47);
    sub_18000E854((__int64 *)v51);
    DXGIFactory1 = sub_1800CD800((IDXGIAdapter *)*a2, D3D_DRIVER_TYPE_UNKNOWN, v16, v20 - v16, v46, v51, v48, &v47);
    if ( DXGIFactory1 >= 0 )
      break;
    sub_18000E854(a2);
    sub_18000E854(v36);
    sub_18000E854(v53);
LABEL_62:
    sub_18000E854((__int64 *)&v47);
    sub_18000E854((__int64 *)v51);
    v38 = (__int64 **)v35[2];
    if ( *((_BYTE *)v38 + 25) )
    {
      for ( j = v35[1]; !*(_BYTE *)(j + 25) && v35 == *(_QWORD **)(j + 16); j = *(_QWORD *)(j + 8) )
        v35 = (_QWORD *)j;
      v35 = (_QWORD *)j;
    }
    else
    {
      v35 = (_QWORD *)v35[2];
      for ( k = *v38; !*((_BYTE *)k + 25); k = (__int64 *)*k )
        v35 = k;
    }
  }
  if ( v48[0] < a8 )
    goto LABEL_62;
  if ( (_BYTE)v50 )
  {
    if ( v48[0] < D3D_FEATURE_LEVEL_11_0 )
    {
      LODWORD(v49) = 0;
      if ( ((int (__fastcall *)(ID3D11Device *, __int64, ID3D11Device **))v51[0]->lpVtbl->CheckFeatureSupport)(
             v51[0],
             4LL,
             &v49) < 0
        || !(_DWORD)v49 )
      {
        goto LABEL_62;
      }
    }
  }
  DXGIFactory1 = sub_1800B608C((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v51, v36);
  if ( DXGIFactory1 < 0
    || (v37 = v53,
        DXGIFactory1 = sub_1800CC9D0((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v47, v53),
        DXGIFactory1 < 0) )
  {
    sub_18000E854((__int64 *)&v47);
    v41 = (__int64 *)v51;
    goto LABEL_72;
  }
  sub_18000E854((__int64 *)&v47);
  sub_18000E854((__int64 *)v51);
LABEL_74:
  if ( v63 || *a2 && *v36 && *v37 )
    goto LABEL_97;
  v42 = v20;
  if ( v16 != v20 )
    v42 = v16;
  v54[1] = v42;
  v43 = v16;
  if ( v16 == v20 )
    v43 = v20;
  v50 = D3D_FEATURE_LEVEL_10_0;
  if ( v43 == v13 )
  {
    sub_1800CCD2C(v54, v43, &v50);
    v13 = v55;
    v20 = v54[1];
    v16 = v54[0];
  }
  else
  {
    *v43 = D3D_FEATURE_LEVEL_10_0;
    v20 = v43 + 1;
    v54[1] = v43 + 1;
  }
  sub_18000E854(a2);
  sub_18000E854(v36);
  sub_18000E854(v37);
LABEL_86:
  v49 = 0LL;
  v50 = 0;
  *(_QWORD *)v48 = 0LL;
  sub_18000E854((__int64 *)v48);
  sub_18000E854((__int64 *)&v49);
  DXGIFactory1 = sub_1800CD800(0LL, D3D_DRIVER_TYPE_WARP, v16, v20 - v16, v46, &v49, &v50, (ID3D11DeviceContext **)v48);
  if ( DXGIFactory1 >= 0 )
  {
    v51[0] = 0LL;
    DXGIFactory1 = sub_1800CCA20((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v49, (__int64 *)v51);
    if ( DXGIFactory1 < 0 )
    {
LABEL_89:
      sub_18000E854((__int64 *)v51);
      goto LABEL_87;
    }
    v47 = 0LL;
    v44 = v51[0];
    CreateShaderResourceView = v51[0]->lpVtbl->CreateShaderResourceView;
    sub_18000E854((__int64 *)&v47);
    DXGIFactory1 = ((__int64 (__fastcall *)(ID3D11Device *, ID3D11DeviceContext **))CreateShaderResourceView)(v44, &v47);
    if ( DXGIFactory1 < 0
      || (DXGIFactory1 = sub_1800B60DC((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v47, a2), DXGIFactory1 < 0)
      || (v36 = v56,
          DXGIFactory1 = sub_1800B608C((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v49, v56),
          DXGIFactory1 < 0)
      || (v37 = v53,
          DXGIFactory1 = sub_1800CC9D0((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v48, v53),
          DXGIFactory1 < 0)
      || (DXGIFactory1 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)*a2 + 80LL))(*a2, v59),
          DXGIFactory1 < 0) )
    {
      sub_18000E854((__int64 *)&v47);
      goto LABEL_89;
    }
    sub_18000E854((__int64 *)&v47);
    sub_18000E854((__int64 *)v51);
    sub_18000E854((__int64 *)v48);
    sub_18000E854((__int64 *)&v49);
LABEL_97:
    if ( *a2 && *v36 && *v37 )
    {
      sub_1800CCB44(*a2);
      sub_1800CCA70(*v36);
      if ( DXGIFactory1 < 0 )
        goto LABEL_6;
      goto LABEL_7;
    }
LABEL_31:
    DXGIFactory1 = -2147467259;
    goto LABEL_6;
  }
LABEL_87:
  sub_18000E854((__int64 *)v48);
  v41 = (__int64 *)&v49;
LABEL_72:
  sub_18000E854(v41);
LABEL_6:
  sub_18000E854(a2);
  sub_18000E854(v56);
  sub_18000E854(v53);
LABEL_7:
  if ( v16 )
    sub_180010134(v16, 4 * (v13 - v16));
  sub_1800CCE18((void **)&v57, (__int64)&v57);
  return (unsigned int)DXGIFactory1;
}
