/*
 * XREFs of ?CreateScanout@CDDisplaySwapChain@@IEAAJIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180067A4C
 * Callers:
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180066644 (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4Sc.c)
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800668C0 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_.c)
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1800675D8 (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1801C3440 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA_.c)
 *     ?GetDisplayRotationFromDxgiRotation@CDDisplaySwapChain@@IEBA?AW4DisplayRotation@Core@Display@Devices@Windows@@W4DXGI_MODE_ROTATION@@@Z @ 0x18021BFA8 (-GetDisplayRotationFromDxgiRotation@CDDisplaySwapChain@@IEBA-AW4DisplayRotation@Core@Display@Dev.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo@@@details@wil@@QEAA_NXZ @ 0x18026D328 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_AggCheckMpo_ea_18026D328.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::CreateScanout(
        CDDisplaySwapChain *this,
        unsigned int a2,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a3,
        __int64 a4,
        unsigned int a5,
        struct Windows::Devices::Display::Core::IDisplayScanout **a6)
{
  struct Windows::Devices::Display::Core::IDisplayScanout **v6; // r13
  int v7; // esi
  unsigned int v8; // r12d
  const struct DWM_PRESENT_MULTIPLANE_OVERLAY *v9; // rdi
  __int64 v10; // rdx
  unsigned int v11; // r14d
  bool v12; // zf
  __int64 *v13; // rcx
  int v14; // r15d
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  __m128i v19; // xmm9
  __int64 v20; // r13
  __m128i v21; // xmm6
  __int64 v22; // rcx
  __m128i v23; // xmm11
  __m128i v24; // xmm7
  __m128i v25; // xmm8
  __m128i v26; // xmm10
  int v27; // r15d
  unsigned __int64 v28; // rax
  __m128i v29; // xmm1
  int v30; // r10d
  __m128i v31; // xmm0
  __int64 (__fastcall *v32)(__int64 *, __int64, _QWORD, __int64, unsigned int, _DWORD *, _DWORD *, _DWORD *, int, int, _QWORD); // r11
  __int64 v33; // rdx
  unsigned int v34; // r15d
  __int64 v35; // r9
  char v36; // r13
  int v37; // eax
  int v38; // r12d
  int v39; // r10d
  __int32 v40; // edi
  __int32 v41; // r9d
  int v42; // r8d
  __int64 v43; // rax
  unsigned __int32 v44; // r11d
  unsigned __int32 v45; // xmm1_4
  __int64 (__fastcall *v46)(__int64 *, __int64, _QWORD, _QWORD, unsigned int, int *, int *, _DWORD *, int, int, _QWORD); // r13
  __m128i v47; // xmm0
  int v48; // ebx
  int v49; // eax
  unsigned __int32 v50; // xmm6_4
  __m128i v51; // xmm0
  unsigned __int32 v52; // edx
  int v53; // eax
  __int32 v54; // eax
  unsigned __int32 v55; // eax
  __int64 v56; // rdx
  int v57; // eax
  int v58; // eax
  int v59; // eax
  __int64 v60; // r8
  __int64 v61; // r9
  char v62; // al
  unsigned int DisplayRotationFromDxgiRotation; // eax
  __int64 v64; // rcx
  __int64 (__fastcall *v65)(__int64, _QWORD, _QWORD); // r10
  int v66; // eax
  int v67; // r9d
  unsigned __int32 v68; // r8d
  unsigned __int32 v69; // r10d
  __int64 v70; // rax
  __int64 (__fastcall *v71)(__int64 *, _QWORD, int *, int *, _DWORD); // r11
  int v72; // edx
  unsigned __int32 v73; // edx
  int v74; // eax
  __int64 v75; // rcx
  int v76; // eax
  struct Windows::Devices::Display::Core::IDisplayScanout *v77; // rax
  int v79; // [rsp+68h] [rbp-A0h]
  unsigned int v80; // [rsp+6Ch] [rbp-9Ch]
  int v81; // [rsp+6Ch] [rbp-9Ch]
  __int64 *v82; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v83; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v84[12]; // [rsp+7Ch] [rbp-8Ch] BYREF
  struct Windows::Devices::Display::Core::IDisplayScanout *v85; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v86; // [rsp+90h] [rbp-78h]
  const struct DWM_PRESENT_MULTIPLANE_OVERLAY *v87; // [rsp+98h] [rbp-70h]
  int v88; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int32 v89; // [rsp+ACh] [rbp-5Ch]
  int v90; // [rsp+B0h] [rbp-58h]
  unsigned __int32 v91; // [rsp+B4h] [rbp-54h]
  int v92; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int32 v93; // [rsp+BCh] [rbp-4Ch]
  int v94; // [rsp+C0h] [rbp-48h]
  unsigned __int32 v95; // [rsp+C4h] [rbp-44h]
  unsigned int v96; // [rsp+C8h] [rbp-40h]
  __int128 v97; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v98; // [rsp+E0h] [rbp-28h]
  _DWORD v99[4]; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD v100[4]; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD v101[4]; // [rsp+108h] [rbp+0h] BYREF
  _DWORD v102[4]; // [rsp+118h] [rbp+10h] BYREF
  const struct DWM_PRESENT_MULTIPLANE_OVERLAY *v103; // [rsp+128h] [rbp+20h]
  struct Windows::Devices::Display::Core::IDisplayScanout **v104; // [rsp+130h] [rbp+28h]
  _BYTE v105[64]; // [rsp+148h] [rbp+40h]
  __int128 v106; // [rsp+1B8h] [rbp+B0h] BYREF

  v6 = a6;
  v7 = 1;
  v8 = a2;
  v96 = a2;
  v103 = a3;
  v9 = a3;
  v104 = a6;
  v79 = 1;
  if ( a2 == 1 )
  {
    if ( (*((_BYTE *)a3 + 16) & 4) != 0 )
      v7 = 2;
    v79 = v7;
  }
  v10 = *((_QWORD *)this + 53);
  v11 = 0;
  v12 = *((_BYTE *)this + 277) == 0;
  v13 = (__int64 *)*((_QWORD *)this + 48);
  v82 = 0LL;
  v14 = !v12;
  *(_DWORD *)&v84[8] = 0;
  *(_QWORD *)v84 = !v12;
  v15 = *v13;
  v85 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct Windows::Devices::Display::Core::IDisplayScanout **))(v15 + 48))(
          v13,
          v10,
          &v85);
  v17 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x5C6u, 0LL);
  }
  else
  {
    v18 = (**(__int64 (__fastcall ***)(struct Windows::Devices::Display::Core::IDisplayScanout *, GUID *, __int64 *))v85)(
            v85,
            &GUID_2e5eba29_7eb8_5e77_a328_83a2ab9877d7,
            (__int64 *)&v82);
    v17 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x5C7u, 0LL);
    }
    else
    {
      v80 = 0;
      if ( v8 )
      {
        v87 = v9;
        while ( 1 )
        {
          v19 = *((__m128i *)v9 + 1);
          v83 = 0;
          v20 = 0LL;
          v21 = *((__m128i *)v9 + 2);
          v22 = *((_QWORD *)v9 + 1);
          *(__m128i *)v105 = v19;
          *(__m128i *)&v105[16] = v21;
          *(_QWORD *)&v97 = 0LL;
          v23 = *((__m128i *)v9 + 3);
          v24 = *((__m128i *)v9 + 4);
          *(__m128i *)&v105[32] = v23;
          *(__m128i *)&v105[48] = v24;
          v25 = *(__m128i *)v9;
          v26 = *((__m128i *)v9 + 5);
          if ( v22 )
          {
            *(_QWORD *)&v97 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 48LL))(v22, &v83);
            v20 = v97;
            if ( !(_QWORD)v97 )
            {
              v17 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x5D5u, 0LL);
              goto LABEL_65;
            }
          }
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DDisplay_AggCheckMpo>::GetImpl'::`2'::impl) )
          {
            v27 = *(_DWORD *)&v105[12];
            v28 = _mm_srli_si128(v19, 8).m128i_u64[0];
            v87 = (const struct DWM_PRESENT_MULTIPLANE_OVERLAY *)v28;
            if ( v7 == 1 )
            {
              v29 = *(__m128i *)&v105[20];
              v106 = *(_OWORD *)&v105[36];
              v97 = *(_OWORD *)&v105[20];
              TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v106, &v97);
              v81 = _mm_cvtsi128_si32(v29);
              v86 = _mm_srli_si128(v29, 8).m128i_u64[0];
              v98 = _mm_srli_si128(v21, 8).m128i_u64[0];
              *(_QWORD *)&v97 = v23.m128i_i64[0];
            }
            else
            {
              LODWORD(v98) = v28;
              v86 = *(unsigned int *)&v105[12];
              *(_QWORD *)&v97 = v21.m128i_u32[0];
              v106 = *(_OWORD *)&v105[4];
              v81 = *(_DWORD *)&v105[4];
            }
            v30 = 0;
            v99[0] = v106;
            v31 = _mm_srli_si128(v24, 8);
            if ( !v11 )
              v30 = *(_DWORD *)v84;
            v32 = *(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64, unsigned int, _DWORD *, _DWORD *, _DWORD *, int, int, _QWORD))(*v82 + 96);
            v99[2] = DWORD2(v106) - v106;
            v100[0] = v81;
            v100[2] = v86 - v81;
            v99[3] = HIDWORD(v106) - DWORD1(v106);
            v101[0] = *(_DWORD *)&v105[4];
            v33 = v83;
            v100[3] = v97 - v98;
            v101[1] = (_DWORD)v87;
            v101[2] = v27 - *(_DWORD *)&v105[4];
            v34 = _mm_cvtsi128_si32(v25);
            v99[1] = DWORD1(v106);
            v35 = v20;
            v36 = _mm_cvtsi128_si32(_mm_srli_si128(v25, 4));
            v100[1] = v98;
            LOBYTE(v33) = v36;
            v101[3] = v21.m128i_i32[0] - (_DWORD)v87;
            v37 = v32(v82, v33, v34, v35, v83, v101, v100, v99, _mm_cvtsi128_si32(v31), v30, 0LL);
            v17 = v37;
            if ( v37 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x5FAu, 0LL);
              goto LABEL_65;
            }
          }
          else
          {
            v38 = 0;
            v39 = *(_DWORD *)&v105[44];
            v40 = v21.m128i_i32[0];
            if ( !v11 )
              v38 = v14;
            v41 = v24.m128i_i32[0];
            v42 = *(_DWORD *)&v105[4];
            v43 = *v82;
            v44 = _mm_srli_si128(v23, 8).m128i_u32[0];
            v45 = _mm_srli_si128(v19, 8).m128i_u32[0];
            v92 = *(_DWORD *)&v105[4];
            v46 = *(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, unsigned int, int *, int *, _DWORD *, int, int, _QWORD))(v43 + 96);
            if ( v7 != 1 )
              v44 = v45;
            v102[1] = v44;
            v47 = _mm_srli_si128(v21, 4);
            v48 = *(_DWORD *)&v105[4];
            if ( v7 == 1 )
              v48 = *(_DWORD *)&v105[36];
            v49 = _mm_cvtsi128_si32(v47);
            if ( v79 != 1 )
              v39 = *(_DWORD *)&v105[12];
            v50 = _mm_srli_si128(v21, 8).m128i_u32[0];
            v51 = _mm_srli_si128(v24, 8);
            v102[0] = v48;
            v102[2] = v39 - v48;
            if ( v79 != 1 )
              v41 = v40;
            v93 = v45;
            v102[3] = v41 - v44;
            v52 = v50;
            if ( v79 == 1 )
              v42 = v49;
            v53 = *(_DWORD *)&v105[28];
            if ( v79 != 1 )
              v53 = *(_DWORD *)&v105[12];
            v88 = v42;
            if ( v79 != 1 )
              v52 = v45;
            v90 = v53 - v42;
            v54 = v23.m128i_i32[0];
            if ( v79 != 1 )
              v54 = v40;
            v89 = v52;
            v55 = v54 - v52;
            v56 = v83;
            v91 = v55;
            v34 = _mm_cvtsi128_si32(v25);
            v94 = *(_DWORD *)&v105[12] - *(_DWORD *)&v105[4];
            LODWORD(v86) = _mm_cvtsi128_si32(_mm_srli_si128(v25, 4));
            LOBYTE(v56) = v86;
            v95 = v40 - v45;
            v57 = v46(v82, v56, v34, v97, v83, &v92, &v88, v102, _mm_cvtsi128_si32(v51), v38, 0LL);
            v17 = v57;
            if ( v57 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0x609u, 0LL);
              goto LABEL_65;
            }
            v9 = v87;
            v7 = v79;
            v11 = v80;
            v8 = v96;
            v36 = v86;
          }
          if ( v36 )
          {
            v58 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(*v82 + 56))(
                    v82,
                    v34,
                    1LL,
                    0xFFFFFFFFLL);
            v17 = v58;
            if ( v58 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x611u, 0LL);
              goto LABEL_65;
            }
            v59 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v82 + 128))(
                    v82,
                    v34,
                    (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v26, 12)));
            v17 = v59;
            if ( v59 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0x615u, 0LL);
              goto LABEL_65;
            }
            v61 = 0LL;
            v62 = _mm_cvtsi128_si32(v19);
            if ( (v62 & 2) != 0 )
              v61 = 2LL;
            if ( (v62 & 1) != 0 )
              v61 = (unsigned int)v61 | 1;
            DisplayRotationFromDxgiRotation = CDDisplaySwapChain::GetDisplayRotationFromDxgiRotation(
                                                v82,
                                                (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v24, 4)),
                                                v60,
                                                v61);
            v66 = v65(v64, v34, DisplayRotationFromDxgiRotation);
            v17 = v66;
            if ( v66 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v66, 0x61Au, 0LL);
              goto LABEL_65;
            }
          }
          ++v11;
          v9 = (const struct DWM_PRESENT_MULTIPLANE_OVERLAY *)((char *)v9 + 128);
          v80 = v11;
          v87 = v9;
          if ( v11 >= v8 )
            break;
          v14 = *(_DWORD *)v84;
        }
        v9 = v103;
        v6 = v104;
      }
      if ( v7 != 2 )
        goto LABEL_58;
      v67 = *((_DWORD *)v9 + 5);
      v68 = *((_DWORD *)v9 + 10);
      v69 = *((_DWORD *)v9 + 6);
      v92 = *((_DWORD *)v9 + 9);
      v93 = v68;
      v70 = *v82;
      v88 = v67;
      v89 = v69;
      v71 = *(__int64 (__fastcall **)(__int64 *, _QWORD, int *, int *, _DWORD))(v70 + 64);
      v72 = *((_DWORD *)v9 + 7) - v67;
      v94 = *((_DWORD *)v9 + 11) - v92;
      LODWORD(v70) = *((_DWORD *)v9 + 12);
      v90 = v72;
      v73 = *((_DWORD *)v9 + 8) - v69;
      v95 = v70 - v68;
      v91 = v73;
      v74 = v71(v82, 0LL, &v88, &v92, 0);
      v17 = v74;
      if ( v74 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v74, 0x625u, 0LL);
      }
      else
      {
LABEL_58:
        v75 = *(_QWORD *)&v84[4];
        *(_QWORD *)&v84[4] = 0LL;
        if ( v75 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
        (*(void (__fastcall **)(__int64 *, GUID *, _BYTE *))*v82)(
          v82,
          &GUID_489d4937_ac3c_47dd_8bcc_1e9449e841b2,
          &v84[4]);
        v76 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v84[4] + 56LL))(*(_QWORD *)&v84[4]);
        v17 = v76;
        if ( v76 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v76, 0x62Du, 0LL);
        }
        else
        {
          v77 = v85;
          v85 = 0LL;
          *v6 = v77;
        }
      }
    }
  }
LABEL_65:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v84[4]);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v82);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v85);
  return v17;
}
