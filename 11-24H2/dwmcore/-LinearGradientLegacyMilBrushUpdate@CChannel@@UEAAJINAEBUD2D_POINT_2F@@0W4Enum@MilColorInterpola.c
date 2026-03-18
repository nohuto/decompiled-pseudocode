/*
 * XREFs of ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUD2D_POINT_2F@@0W4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180211340
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F57C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18012F898 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1801302E8 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18013059C (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::LinearGradientLegacyMilBrushUpdate(
        __int64 a1,
        unsigned int a2,
        double a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        void *a9,
        unsigned int a10)
{
  __int64 v10; // rbx
  unsigned int v14; // xmm0_4
  int v15; // eax
  int v16; // r14d
  unsigned __int64 v17; // r9
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // esi
  unsigned int v22[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v10 = *(_QWORD *)(a1 + 64);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
  CChannel::CheckHandle(a1, a2, 100);
  v22[0] = 551;
  v22[1] = a2;
  *(float *)&v14 = a3;
  v22[2] = v14;
  v15 = CChannel::SendCommand((struct CCommandBatch **)a1, v22, 0xCu);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A2,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v15);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10);
    return (unsigned int)v16;
  }
  *(__m128i *)v22 = _mm_load_si128((const __m128i *)&_xmm);
  v22[1] = a2;
  *(_QWORD *)&v22[2] = *a4;
  v16 = CChannel::SendCommand((struct CCommandBatch **)a1, v22, 0x10u);
  if ( v16 < 0 )
  {
    v19 = 2217LL;
    goto LABEL_10;
  }
  *(__m128i *)v22 = _mm_load_si128((const __m128i *)&_xmm);
  v22[1] = a2;
  *(_QWORD *)&v22[2] = *a5;
  v16 = CChannel::SendCommand((struct CCommandBatch **)a1, v22, 0x10u);
  if ( v16 < 0 )
  {
    v19 = 2224LL;
    goto LABEL_10;
  }
  v22[0] = 532;
  v22[2] = a6;
  v22[1] = a2;
  v16 = CChannel::SendCommand((struct CCommandBatch **)a1, v22, 0xCu);
  if ( v16 < 0 )
  {
    v19 = 2231LL;
    goto LABEL_10;
  }
  v22[0] = 533;
  v22[2] = a7;
  v22[1] = a2;
  v16 = CChannel::SendCommand((struct CCommandBatch **)a1, v22, 0xCu);
  if ( v16 < 0 )
  {
    v19 = 2238LL;
    goto LABEL_10;
  }
  v22[0] = 534;
  v22[2] = a8;
  v22[1] = a2;
  v16 = CChannel::SendCommand((struct CCommandBatch **)a1, v22, 0xCu);
  if ( v16 < 0 )
  {
    v19 = 2245LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v16);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10);
    return (unsigned int)v16;
  }
  v22[0] = 535;
  v22[2] = 0;
  v22[1] = a2;
  v17 = 24LL * a10;
  if ( v17 <= 0xFFFFFFFF )
  {
    v22[2] = 24 * a10;
    v20 = CChannel::BeginCommand((struct CCommandBatch **)a1, v22, 0xCu, v17);
    v21 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8CC,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)(unsigned int)v20);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10);
      return v21;
    }
    else
    {
      CDataStreamWriter::AddItemData(*(CDataStreamWriter **)(a1 + 176), a9, v22[2]);
      CDataStreamWriter::EndItem(*(CDataStreamWriter **)(a1 + 176));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8CB,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070216LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10);
    return 2147942934LL;
  }
}
