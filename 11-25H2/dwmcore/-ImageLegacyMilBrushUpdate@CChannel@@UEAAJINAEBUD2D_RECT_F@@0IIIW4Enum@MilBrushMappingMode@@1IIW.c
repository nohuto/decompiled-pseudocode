/*
 * XREFs of ?ImageLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUD2D_RECT_F@@0IIIW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@I@Z @ 0x180181E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182DE0 (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::ImageLegacyMilBrushUpdate(
        CChannel *a1,
        unsigned int a2,
        double a3,
        _OWORD *a4,
        _OWORD *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        int a10,
        unsigned int a11,
        unsigned int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        unsigned int a17)
{
  __int64 v17; // rbx
  float v20; // xmm0_4
  int v21; // eax
  int v22; // r14d
  int v23; // eax
  unsigned int v24; // edi
  __int64 v26; // rdx
  int v27; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v28[20]; // [rsp+24h] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v17 = *((_QWORD *)a1 + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 56LL))(v17);
  CChannel::CheckHandle(a1, a2, 83LL);
  CChannel::CheckOptionalHandle(a1, a6, 61LL);
  CChannel::CheckOptionalHandle(a1, a7, 172LL);
  CChannel::CheckOptionalHandle(a1, a8, 172LL);
  CChannel::CheckOptionalHandle(a1, a11, 127LL);
  CChannel::CheckOptionalHandle(a1, a12, 127LL);
  CChannel::CheckOptionalHandle(a1, a17, 84LL);
  v27 = 542;
  v20 = a3;
  *(_DWORD *)v28 = a2;
  *(float *)&v28[4] = v20;
  v21 = CChannel::SendCommand(a1, &v27, 0xCu);
  v22 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F3,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v21);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 80LL))(v17);
    return (unsigned int)v22;
  }
  v27 = 530;
  *(_OWORD *)v28 = 0LL;
  *(_DWORD *)v28 = a2;
  *(_OWORD *)&v28[4] = *a4;
  v22 = CChannel::SendCommand(a1, &v27, 0x18u);
  if ( v22 < 0 )
  {
    v26 = 2298LL;
    goto LABEL_18;
  }
  v27 = 532;
  *(_OWORD *)v28 = 0LL;
  *(_DWORD *)v28 = a2;
  *(_OWORD *)&v28[4] = *a5;
  v22 = CChannel::SendCommand(a1, &v27, 0x18u);
  if ( v22 < 0 )
  {
    v26 = 2305LL;
    goto LABEL_18;
  }
  v27 = 543;
  *(_DWORD *)&v28[4] = a6;
  *(_DWORD *)v28 = a2;
  v22 = CChannel::SendCommand(a1, &v27, 0xCu);
  if ( v22 < 0 )
  {
    v26 = 2312LL;
    goto LABEL_18;
  }
  v27 = 544;
  *(_DWORD *)v28 = a2;
  *(_DWORD *)&v28[4] = a7;
  v22 = CChannel::SendCommand(a1, &v27, 0xCu);
  if ( v22 < 0 )
  {
    v26 = 2319LL;
    goto LABEL_18;
  }
  v27 = 545;
  *(_DWORD *)v28 = a2;
  *(_DWORD *)&v28[4] = a8;
  v22 = CChannel::SendCommand(a1, &v27, 0xCu);
  if ( v22 < 0 )
  {
    v26 = 2326LL;
    goto LABEL_18;
  }
  v27 = 528;
  *(_DWORD *)&v28[4] = a9;
  *(_DWORD *)v28 = a2;
  v22 = CChannel::SendCommand(a1, &v27, 0xCu);
  if ( v22 < 0 )
  {
    v26 = 2333LL;
    goto LABEL_18;
  }
  v27 = 529;
  *(_DWORD *)&v28[4] = a10;
  *(_DWORD *)v28 = a2;
  v22 = CChannel::SendCommand(a1, &v27, 0xCu);
  if ( v22 < 0 )
  {
    v26 = 2340LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v22);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 80LL))(v17);
    return (unsigned int)v22;
  }
  v27 = 531;
  *(_DWORD *)&v28[4] = a11;
  *(_DWORD *)v28 = a2;
  v22 = CChannel::SendCommand(a1, &v27, 0xCu);
  if ( v22 < 0 )
  {
    v26 = 2347LL;
    goto LABEL_18;
  }
  v27 = 533;
  *(_DWORD *)&v28[4] = a12;
  *(_DWORD *)v28 = a2;
  v22 = CChannel::SendCommand(a1, &v27, 0xCu);
  if ( v22 < 0 )
  {
    v26 = 2354LL;
    goto LABEL_18;
  }
  v27 = 534;
  *(_DWORD *)&v28[4] = a13;
  *(_DWORD *)v28 = a2;
  v22 = CChannel::SendCommand(a1, &v27, 0xCu);
  if ( v22 < 0 )
  {
    v26 = 2361LL;
    goto LABEL_18;
  }
  v27 = 535;
  *(_DWORD *)&v28[4] = a14;
  *(_DWORD *)v28 = a2;
  v22 = CChannel::SendCommand(a1, &v27, 0xCu);
  if ( v22 < 0 )
  {
    v26 = 2368LL;
    goto LABEL_18;
  }
  v27 = 536;
  *(_DWORD *)&v28[4] = a15;
  *(_DWORD *)v28 = a2;
  v22 = CChannel::SendCommand(a1, &v27, 0xCu);
  if ( v22 < 0 )
  {
    v26 = 2375LL;
    goto LABEL_18;
  }
  v27 = 537;
  *(_DWORD *)&v28[4] = a16;
  *(_DWORD *)v28 = a2;
  v22 = CChannel::SendCommand(a1, &v27, 0xCu);
  if ( v22 < 0 )
  {
    v26 = 2382LL;
    goto LABEL_18;
  }
  v27 = 541;
  *(_DWORD *)&v28[4] = a17;
  *(_DWORD *)v28 = a2;
  v23 = CChannel::SendCommand(a1, &v27, 0xCu);
  v24 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x955,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v23);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 80LL))(v17);
    return v24;
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 80LL))(v17);
    return 0LL;
  }
}
