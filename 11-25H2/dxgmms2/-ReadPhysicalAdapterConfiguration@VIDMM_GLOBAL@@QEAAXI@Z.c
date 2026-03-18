/*
 * XREFs of ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400984A4
 * Callers:
 *     ?Initialize@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEBUDXGK_PHYSICALADAPTERINFO@@PEBU_DXGK_GPUMMUCAPS@@@Z @ 0x14009B888 (-Initialize@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEBUDXGK_PHYSICALADAPTERINFO@@PEBU_DXGK_GPUMMUCAPS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140038248 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x14004C01C (DpiGetPnpRegistryKeyName.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ??1?$PagedPoolArray@G$0IA@@@QEAA@XZ @ 0x140098398 (--1-$PagedPoolArray@G$0IA@@@QEAA@XZ.c)
 */

void __fastcall VIDMM_GLOBAL::ReadPhysicalAdapterConfiguration(VIDMM_GLOBAL *this, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  unsigned int v4; // edi
  _BYTE *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  char v13; // al
  char v14; // cl
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v17; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  PCUNICODE_STRING Source; // [rsp+58h] [rbp-A8h]
  struct _UNICODE_STRING Destination; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v27; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v28[256]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v29; // [rsp+178h] [rbp+78h]
  __int64 v30; // [rsp+180h] [rbp+80h] BYREF
  int v31; // [rsp+188h] [rbp+88h]
  const wchar_t *v32; // [rsp+190h] [rbp+90h]
  unsigned int *v33; // [rsp+198h] [rbp+98h]
  int v34; // [rsp+1A0h] [rbp+A0h]
  int *v35; // [rsp+1A8h] [rbp+A8h]
  int v36; // [rsp+1B0h] [rbp+B0h]
  __int64 v37; // [rsp+1B8h] [rbp+B8h]
  int v38; // [rsp+1C0h] [rbp+C0h]
  const wchar_t *v39; // [rsp+1C8h] [rbp+C8h]
  unsigned int *v40; // [rsp+1D0h] [rbp+D0h]
  int v41; // [rsp+1D8h] [rbp+D8h]
  int *v42; // [rsp+1E0h] [rbp+E0h]
  int v43; // [rsp+1E8h] [rbp+E8h]
  __int64 v44; // [rsp+1F0h] [rbp+F0h]
  int v45; // [rsp+1F8h] [rbp+F8h]
  const wchar_t *v46; // [rsp+200h] [rbp+100h]
  unsigned int *v47; // [rsp+208h] [rbp+108h]
  int v48; // [rsp+210h] [rbp+110h]
  int *v49; // [rsp+218h] [rbp+118h]
  int v50; // [rsp+220h] [rbp+120h]
  __int64 v51; // [rsp+228h] [rbp+128h]
  int v52; // [rsp+230h] [rbp+130h]
  const wchar_t *v53; // [rsp+238h] [rbp+138h]
  unsigned int *v54; // [rsp+240h] [rbp+140h]
  int v55; // [rsp+248h] [rbp+148h]
  int *v56; // [rsp+250h] [rbp+150h]
  int v57; // [rsp+258h] [rbp+158h]
  __int64 v58; // [rsp+260h] [rbp+160h]
  int v59; // [rsp+268h] [rbp+168h]
  const wchar_t *v60; // [rsp+270h] [rbp+170h]
  int *v61; // [rsp+278h] [rbp+178h]
  int v62; // [rsp+280h] [rbp+180h]
  int *v63; // [rsp+288h] [rbp+188h]
  int v64; // [rsp+290h] [rbp+190h]
  __int128 v65; // [rsp+298h] [rbp+198h]
  __int128 v66; // [rsp+2A8h] [rbp+1A8h]
  __int128 v67; // [rsp+2B8h] [rbp+1B8h]
  __int64 v68; // [rsp+2C8h] [rbp+1C8h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2);
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 2992LL) + 344LL * a2 + 8);
  Source = 0LL;
  DpiGetPnpRegistryKeyName(v3);
  v4 = (MEMORY[0] >> 1) + 16;
  v27 = 0LL;
  v29 = 0;
  if ( v4 <= 0x80 )
  {
    v5 = v28;
    v27 = v28;
    if ( MEMORY[0] >> 1 != -16 )
    {
      v7 = 0LL;
      v8 = v4;
      do
      {
        *(_WORD *)&v5[v7] = 0;
        v7 += 2LL;
        v5 = v27;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v4 < 2 )
    {
      v5 = 0LL;
      goto LABEL_12;
    }
    v6 = 2LL * v4;
    if ( !is_mul_ok(v4, 2uLL) )
      v6 = -1LL;
    v5 = (_BYTE *)operator new[](v6, 0x4B677844u, 256LL);
    v27 = v5;
  }
  v29 = v4;
  if ( v5 )
  {
    *(&Destination.MaximumLength + 2) = 0;
    *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(2 * v4);
    Destination.Buffer = (PWSTR)v5;
    Destination.Length = 0;
    RtlAppendUnicodeStringToString(&Destination, Source);
    RtlAppendUnicodeToString(&Destination, L"\\MemoryManager");
  }
LABEL_12:
  v9 = 0LL;
  v16 = 0;
  v10 = 0;
  v15 = 0;
  v22 = 900;
  v17 = 900;
  v23 = 900;
  v18 = 900;
  v20 = 0;
  v21 = 0;
  v24 = 0;
  v19 = 0;
  if ( v5 )
  {
    v30 = 0LL;
    v36 = 4;
    v31 = 288;
    v34 = 67108868;
    v38 = 288;
    v32 = L"MaxLocalSegmentSize";
    v41 = 67108868;
    v33 = &v15;
    v35 = &v20;
    v39 = L"MaxNonLocalSegmentSize";
    v40 = &v16;
    v42 = &v21;
    v46 = L"SelfRefreshVramForceEvictionTimerDC";
    v47 = &v17;
    v49 = &v22;
    v53 = L"SelfRefreshVramForceEvictionTimerAC";
    v54 = &v18;
    v56 = &v23;
    v60 = L"Supports64KBPages";
    v61 = &v19;
    v63 = &v24;
    v43 = 4;
    v45 = 288;
    v48 = 67108868;
    v50 = 4;
    v52 = 288;
    v55 = 67108868;
    v57 = 4;
    v59 = 288;
    v62 = 67108868;
    v64 = 4;
    v68 = 0LL;
    v37 = 0LL;
    v44 = 0LL;
    v51 = 0LL;
    v58 = 0LL;
    v65 = 0LL;
    v66 = 0LL;
    v67 = 0LL;
    RtlQueryRegistryValuesEx(0LL, v5, &v30, 0LL, 0LL);
    v10 = v15;
    v9 = v16;
  }
  v11 = v9 << 20;
  v12 = (unsigned __int64)v10 << 20;
  if ( v12 - 1 <= 0xFFFFFFF )
    v12 = 0x10000000LL;
  *(_QWORD *)v2 = v12;
  if ( (unsigned __int64)(v11 - 1) <= 0x1FFFFFFF )
    v11 = 0x20000000LL;
  *(_QWORD *)(v2 + 8) = v11;
  *(_QWORD *)(v2 + 16) = 10000000LL * v17;
  v13 = *(_BYTE *)(v2 + 36);
  *(_QWORD *)(v2 + 24) = 10000000LL * v18;
  v14 = v19 & 1;
  *(_DWORD *)(v2 + 32) = 0;
  *(_BYTE *)(v2 + 36) = v13 & 0xFE | v14;
  PagedPoolArray<unsigned short,128>::~PagedPoolArray<unsigned short,128>((void **)&v27);
}
