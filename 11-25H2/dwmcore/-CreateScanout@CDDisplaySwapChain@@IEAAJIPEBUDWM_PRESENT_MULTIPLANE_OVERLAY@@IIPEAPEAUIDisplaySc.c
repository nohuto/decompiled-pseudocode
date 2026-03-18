/*
 * XREFs of ?CreateScanout@CDDisplaySwapChain@@IEAAJIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180172B9C
 * Callers:
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1801717F4 (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4Sc.c)
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180171A70 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_.c)
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180172728 (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAU.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDisplayRotationFromDxgiRotation@CDDisplaySwapChain@@IEBA?AW4DisplayRotation@Core@Display@Devices@Windows@@W4DXGI_MODE_ROTATION@@@Z @ 0x180227AA8 (-GetDisplayRotationFromDxgiRotation@CDDisplaySwapChain@@IEBA-AW4DisplayRotation@Core@Display@Dev.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::CreateScanout(
        CDDisplaySwapChain *this,
        unsigned int a2,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a3,
        __int64 a4,
        unsigned int a5,
        struct Windows::Devices::Display::Core::IDisplayScanout **a6)
{
  int v6; // esi
  unsigned int v7; // r14d
  const struct DWM_PRESENT_MULTIPLANE_OVERLAY *v8; // rdi
  __int64 v9; // rdx
  BOOL v10; // r12d
  bool v11; // zf
  __int64 *v12; // rcx
  BOOL v13; // r15d
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  struct Windows::Devices::Display::Core::IDisplayScanout *v21; // rax
  unsigned __int64 v22; // rax
  __m128i v23; // xmm3
  __int64 v24; // rcx
  __m128i v25; // xmm4
  __m128i v26; // xmm6
  __m128i v27; // xmm5
  __m128i v28; // xmm2
  __m128i v29; // xmm0
  __int32 v30; // r10d
  __int32 v31; // ebx
  __int32 v32; // r9d
  int v33; // r15d
  __int64 (__fastcall *v34)(__int64 *, unsigned __int64, _QWORD, __int64, int, int *, int *, _DWORD *, int, BOOL, _QWORD); // r13
  int v35; // edi
  unsigned __int32 v36; // r11d
  int v37; // eax
  __m128i v38; // xmm0
  unsigned __int32 v39; // xmm1_4
  int v40; // r8d
  unsigned __int64 v41; // xmm4_8
  int v42; // eax
  __m128i v43; // xmm0
  __int32 v44; // r10d
  unsigned int v45; // edi
  __m128i v46; // xmm5
  unsigned __int64 v47; // rdx
  __int32 v48; // eax
  __int32 v49; // eax
  char v50; // si
  int v51; // eax
  int v52; // eax
  int v53; // eax
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned int DisplayRotationFromDxgiRotation; // eax
  __int64 v57; // rcx
  __int64 (__fastcall *v58)(__int64, _QWORD, _QWORD); // r10
  int v59; // eax
  int v60; // r9d
  unsigned __int32 v61; // r8d
  int v62; // r10d
  __int64 v63; // rax
  __int64 (__fastcall *v64)(__int64 *, _QWORD, int *, int *, _DWORD); // r11
  int v65; // edx
  int v66; // edx
  int v67; // eax
  int v68; // [rsp+68h] [rbp-A0h]
  __int64 *v69; // [rsp+70h] [rbp-98h] BYREF
  int v70; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v71; // [rsp+7Ch] [rbp-8Ch]
  struct Windows::Devices::Display::Core::IDisplayScanout *v72; // [rsp+80h] [rbp-88h] BYREF
  __int64 v73; // [rsp+88h] [rbp-80h] BYREF
  int v74; // [rsp+98h] [rbp-70h] BYREF
  int v75; // [rsp+9Ch] [rbp-6Ch]
  __int32 v76; // [rsp+A0h] [rbp-68h]
  int v77; // [rsp+A4h] [rbp-64h]
  int v78; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int32 v79; // [rsp+ACh] [rbp-5Ch]
  int v80; // [rsp+B0h] [rbp-58h]
  unsigned __int32 v81; // [rsp+B4h] [rbp-54h]
  unsigned int v82; // [rsp+B8h] [rbp-50h]
  BOOL v83; // [rsp+BCh] [rbp-4Ch]
  __int64 v84; // [rsp+C0h] [rbp-48h]
  _DWORD v85[4]; // [rsp+C8h] [rbp-40h] BYREF
  const struct DWM_PRESENT_MULTIPLANE_OVERLAY *v86; // [rsp+D8h] [rbp-30h]
  struct Windows::Devices::Display::Core::IDisplayScanout **v87; // [rsp+E0h] [rbp-28h]
  __m128i v88; // [rsp+E8h] [rbp-20h]
  __m128i v89; // [rsp+F8h] [rbp-10h]
  __m128i v90; // [rsp+108h] [rbp+0h]
  __m128i v91; // [rsp+118h] [rbp+10h]
  __m128i v92; // [rsp+128h] [rbp+20h]
  __m128i v93; // [rsp+138h] [rbp+30h]
  __m128i v94; // [rsp+158h] [rbp+50h]
  __m128i v95; // [rsp+168h] [rbp+60h]
  __m128i v96; // [rsp+178h] [rbp+70h]

  v6 = 1;
  v7 = a2;
  v82 = a2;
  v86 = a3;
  v8 = a3;
  v87 = a6;
  v68 = 1;
  if ( a2 == 1 )
  {
    if ( (*((_BYTE *)a3 + 16) & 4) != 0 )
      v6 = 2;
    v68 = v6;
  }
  v9 = *((_QWORD *)this + 53);
  v10 = 0;
  v11 = *((_BYTE *)this + 277) == 0;
  v12 = (__int64 *)*((_QWORD *)this + 48);
  v69 = 0LL;
  v13 = !v11;
  v73 = 0LL;
  v83 = v13;
  v14 = *v12;
  v72 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct Windows::Devices::Display::Core::IDisplayScanout **))(v14 + 48))(
          v12,
          v9,
          &v72);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v18 = (**(__int64 (__fastcall ***)(struct Windows::Devices::Display::Core::IDisplayScanout *, GUID *, __int64 **))v72)(
            v72,
            &GUID_2e5eba29_7eb8_5e77_a328_83a2ab9877d7,
            &v69);
    v16 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x5C7u, 0LL);
    }
    else
    {
      v19 = 0;
      while ( 1 )
      {
        v71 = v19;
        if ( v19 >= v7 )
          break;
        v22 = (unsigned __int64)v19 << 7;
        v70 = 0;
        v84 = 0LL;
        v23 = *(__m128i *)((char *)v8 + v22 + 16);
        v24 = *(_QWORD *)((char *)v8 + v22 + 8);
        v25 = *(__m128i *)((char *)v8 + v22 + 32);
        v94 = v23;
        v95 = v25;
        v26 = *(__m128i *)((char *)v8 + v22 + 48);
        v27 = *(__m128i *)((char *)v8 + v22);
        v96 = v26;
        v28 = *(__m128i *)((char *)v8 + v22 + 64);
        v29 = *(__m128i *)((char *)v8 + v22 + 80);
        v91 = v27;
        v88 = v23;
        v90 = v25;
        v92 = v26;
        v89 = v28;
        v93 = v29;
        if ( v24 )
        {
          v84 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 48LL))(v24, &v70);
          if ( !v84 )
          {
            v16 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x5D5u, 0LL);
            goto LABEL_4;
          }
          v28 = v89;
          v23 = v88;
          v25 = v90;
          v27 = v91;
          v26 = v92;
        }
        v11 = v19 == 0;
        v30 = v96.m128i_i32[3];
        v31 = v25.m128i_i32[0];
        if ( v11 )
          v10 = v13;
        v32 = v28.m128i_i32[0];
        v33 = _mm_cvtsi128_si32(_mm_srli_si128(v23, 4));
        v34 = *(__int64 (__fastcall **)(__int64 *, unsigned __int64, _QWORD, __int64, int, int *, int *, _DWORD *, int, BOOL, _QWORD))(*v69 + 96);
        v35 = v33;
        v36 = _mm_srli_si128(v26, 8).m128i_u32[0];
        v37 = _mm_cvtsi128_si32(_mm_srli_si128(v26, 4));
        v38 = _mm_srli_si128(v25, 4);
        v39 = _mm_srli_si128(v23, 8).m128i_u32[0];
        v40 = v33;
        if ( v6 == 1 )
          v35 = v37;
        v41 = _mm_srli_si128(v25, 8).m128i_u64[0];
        v42 = _mm_cvtsi128_si32(v38);
        if ( v6 != 1 )
          v36 = v39;
        v85[0] = v35;
        v85[1] = v36;
        v78 = v33;
        if ( v68 != 1 )
          v30 = v94.m128i_i32[3];
        v43 = _mm_srli_si128(v28, 8);
        v44 = v30 - v35;
        v79 = v39;
        v45 = _mm_cvtsi128_si32(v27);
        v46 = _mm_srli_si128(v27, 4);
        if ( v68 != 1 )
          v32 = v31;
        v85[2] = v44;
        v85[3] = v32 - v36;
        v47 = v41;
        if ( v68 == 1 )
          v40 = v42;
        v48 = v95.m128i_i32[3];
        if ( v68 != 1 )
          v48 = v94.m128i_i32[3];
        v74 = v40;
        if ( v68 != 1 )
          v47 = v39;
        v76 = v48 - v40;
        v49 = v26.m128i_i32[0];
        if ( v68 != 1 )
          v49 = v31;
        v75 = v47;
        v77 = v49 - v47;
        v80 = v94.m128i_i32[3] - v33;
        v81 = v31 - v39;
        v50 = _mm_cvtsi128_si32(v46);
        LOBYTE(v47) = v50;
        v51 = v34(v69, v47, v45, v84, v70, &v78, &v74, v85, _mm_cvtsi128_si32(v43), v10, 0LL);
        v10 = 0;
        v16 = v51;
        if ( v51 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, 0x5E8u, 0LL);
          goto LABEL_4;
        }
        if ( v50 )
        {
          v52 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(*v69 + 56))(
                  v69,
                  v45,
                  1LL,
                  0xFFFFFFFFLL);
          v16 = v52;
          if ( v52 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v52, 0x5EFu, 0LL);
            goto LABEL_4;
          }
          v53 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v69 + 128))(
                  v69,
                  v45,
                  (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v93, 12)));
          v16 = v53;
          if ( v53 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v53, 0x5F3u, 0LL);
            goto LABEL_4;
          }
          v55 = 0LL;
          if ( (v88.m128i_i8[0] & 2) != 0 )
            v55 = 2LL;
          if ( (v88.m128i_i8[0] & 1) != 0 )
            v55 = (unsigned int)v55 | 1;
          DisplayRotationFromDxgiRotation = CDDisplaySwapChain::GetDisplayRotationFromDxgiRotation(
                                              v69,
                                              (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v89, 4)),
                                              v54,
                                              v55);
          v59 = v58(v57, v45, DisplayRotationFromDxgiRotation);
          v16 = v59;
          if ( v59 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v59, 0x5F8u, 0LL);
            goto LABEL_4;
          }
        }
        v8 = v86;
        v19 = v71 + 1;
        v6 = v68;
        v7 = v82;
        v13 = v83;
      }
      if ( v6 != 2 )
        goto LABEL_15;
      v60 = *((_DWORD *)v8 + 5);
      v61 = *((_DWORD *)v8 + 10);
      v62 = *((_DWORD *)v8 + 6);
      v78 = *((_DWORD *)v8 + 9);
      v79 = v61;
      v74 = v60;
      v63 = *v69;
      v75 = v62;
      v64 = *(__int64 (__fastcall **)(__int64 *, _QWORD, int *, int *, _DWORD))(v63 + 64);
      v65 = *((_DWORD *)v8 + 7) - v60;
      v80 = *((_DWORD *)v8 + 11) - v78;
      LODWORD(v63) = *((_DWORD *)v8 + 12);
      v76 = v65;
      v66 = *((_DWORD *)v8 + 8) - v62;
      v81 = v63 - v61;
      v77 = v66;
      v67 = v64(v69, 0LL, &v74, &v78, 0);
      v16 = v67;
      if ( v67 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v67, 0x603u, 0LL);
      }
      else
      {
LABEL_15:
        if ( v73 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
        (*(void (__fastcall **)(__int64 *, GUID *, __int64 *))*v69)(
          v69,
          &GUID_489d4937_ac3c_47dd_8bcc_1e9449e841b2,
          &v73);
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v73 + 56LL))(v73);
        v16 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x60Bu, 0LL);
        }
        else
        {
          v21 = v72;
          v72 = 0LL;
          *v87 = v21;
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x5C6u, 0LL);
  }
LABEL_4:
  if ( v73 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
  if ( v69 )
    (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
  if ( v72 )
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)v72 + 16LL))(v72);
  return v16;
}
