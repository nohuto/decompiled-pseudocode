/*
 * XREFs of GetHolographicInputSession @ 0x1800D32B0
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D48A0 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800D4A50 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ @ 0x1800D5C90 (-StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800A8F60 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800B7AAC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800BDDB8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAA?A_TAEAY0CH@$$CBG$$QEAH11@Z @ 0x1800D1B00 (--$emplace_back@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessio.c)
 *     ??1TraceSessionConfig@@QEAA@XZ @ 0x1800D248C (--1TraceSessionConfig@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetHolographicInputSession(__int64 a1)
{
  const char *v2; // r9
  unsigned __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  int v10[6]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v11; // [rsp+68h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+78h] [rbp-90h]
  __int128 v13; // [rsp+88h] [rbp-80h]
  __int128 Src; // [rsp+98h] [rbp-70h] BYREF
  __m128i v15; // [rsp+A8h] [rbp-60h]
  __int128 v16; // [rsp+B8h] [rbp-50h]
  __int64 v17; // [rsp+C8h] [rbp-40h]
  __int64 v18; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v19; // [rsp+D8h] [rbp-30h]
  _WORD v20[264]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+310h] [rbp+208h]

  *(_QWORD *)v10 = a1;
  v11 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v11) = 0;
  v13 = 0LL;
  Src = 0LL;
  v15 = si128;
  LOWORD(Src) = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  std::wstring::assign((char *)&v11, L"HolographicInput", 0x10uLL);
  v13 = xmmword_1801FAD70;
  *(_QWORD *)&v16 = 64LL;
  *((_QWORD *)&v16 + 1) = 0x810000002LL;
  v17 = 0x10000000002LL;
  memset_0(v20, 0, 0x208uLL);
  if ( !(unsigned int)GetTempPath2W(260LL, v20) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x181,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      v2);
  v3 = -1LL;
  do
    ++v3;
  while ( v20[v3] );
  std::wstring::assign((char *)&Src, v20, v3);
  std::wstring::append((const void **)&Src, L"\\DiagOutputDir\\HolographicInput.etl", 0x23uLL);
  v8 = 0;
  v9[0] = 0;
  v10[0] = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    (__int64)&v18,
    L"{3317C7E7-7C40-4275-9F7B-D539C10E19BA}",
    v10,
    v9,
    &v8);
  v10[0] = 0;
  v9[0] = 0;
  v8 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    (__int64)&v18,
    L"{F903DB44-149E-4B4E-AFE1-2A1096F53DFA}",
    &v8,
    v9,
    v10);
  v10[0] = 0;
  v9[0] = 0;
  v8 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    (__int64)&v18,
    L"{6E831A67-EB0D-55CD-69C0-CFE57755346D}",
    &v8,
    v9,
    v10);
  v10[0] = 0;
  v9[0] = 0;
  v8 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    (__int64)&v18,
    L"{D27719C1-8DCF-555B-E03F-EF4E275A4799}",
    &v8,
    v9,
    v10);
  *(_OWORD *)a1 = v11;
  *(__m128i *)(a1 + 16) = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v11) = 0;
  *(_OWORD *)(a1 + 32) = v13;
  *(_OWORD *)(a1 + 48) = Src;
  *(__m128i *)(a1 + 64) = v15;
  v15 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(Src) = 0;
  *(_OWORD *)(a1 + 80) = v16;
  *(_QWORD *)(a1 + 96) = v17;
  v4 = *((_QWORD *)&v19 + 1);
  v5 = v19;
  v19 = 0uLL;
  v6 = v18;
  v18 = 0LL;
  *(_QWORD *)(a1 + 104) = v6;
  *(_QWORD *)(a1 + 112) = v5;
  *(_QWORD *)(a1 + 120) = v4;
  TraceSessionConfig::~TraceSessionConfig((TraceSessionConfig *)&v11);
  return a1;
}
