/*
 * XREFs of CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___ @ 0x1800408EC
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x18003F9E0 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002EFA0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180032474 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x180040FD0 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x1800424D8 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     ?IsViableChannelCount@@YA_NIPEATKSDATAFORMAT@@IPEA_N@Z @ 0x18009C224 (-IsViableChannelCount@@YA_NIPEATKSDATAFORMAT@@IPEA_N@Z.c)
 *     ?GetProposedConnectorFormatForProcessingMode@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800A2A70 (-GetProposedConnectorFormatForProcessingMode@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@W4.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___(
        struct IPropertyStore **a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        unsigned int a3,
        union KSDATAFORMAT *a4,
        struct _GUID *a5,
        __int64 a6)
{
  size_t v6; // r12
  int v9; // r15d
  char *v10; // rdi
  int ProposedConnectorFormatForProcessingMode; // eax
  void *v12; // rbx
  __int64 v13; // rsi
  struct tWAVEFORMATEX *v14; // rbx
  unsigned __int64 v15; // r14
  signed int i; // esi
  __int64 v17; // rbx
  void *v18; // rcx
  char *v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // eax
  size_t v23; // r14
  _DWORD *v24; // r10
  ULONG v25; // ebx
  union KSDATAFORMAT *v26; // rax
  char v27; // r9
  unsigned int v28; // eax
  int *m; // r13
  char *v30; // r14
  ULONG v31; // eax
  union KSDATAFORMAT *v32; // rcx
  char v33; // r10
  size_t v34; // r9
  union KSDATAFORMAT *v35; // r8
  LONGLONG v36; // rdx
  int v37; // edx
  int v38; // r8d
  LONGLONG v39; // rdx
  char *v40; // rcx
  union KSDATAFORMAT *v41; // r8
  LONGLONG v42; // rdx
  LONGLONG v43; // rdx
  LPVOID pv; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+38h] [rbp-C8h]
  unsigned int v46; // [rsp+40h] [rbp-C0h]
  unsigned int v47; // [rsp+44h] [rbp-BCh]
  union KSDATAFORMAT *v48; // [rsp+48h] [rbp-B8h]
  _DWORD *k; // [rsp+50h] [rbp-B0h]
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct tWAVEFORMATEX *v51; // [rsp+68h] [rbp-98h]
  struct _GUID v52; // [rsp+70h] [rbp-90h] BYREF
  char *v53; // [rsp+80h] [rbp-80h]
  void *Src; // [rsp+88h] [rbp-78h]
  unsigned __int64 v55; // [rsp+90h] [rbp-70h]
  __int64 j; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  __int64 v59[2]; // [rsp+B0h] [rbp-50h] BYREF
  __m256i v60; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v61; // [rsp+E0h] [rbp-20h]
  _DWORD v62[14]; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v63[2]; // [rsp+128h] [rbp+28h] BYREF
  int v64; // [rsp+148h] [rbp+48h]
  int v65; // [rsp+14Ch] [rbp+4Ch]
  _DWORD v66[2]; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  __int128 v68; // [rsp+160h] [rbp+60h]
  __int128 v69; // [rsp+170h] [rbp+70h]
  int v70; // [rsp+180h] [rbp+80h]
  __int64 v71; // [rsp+188h] [rbp+88h]
  __int128 v72; // [rsp+190h] [rbp+90h]
  int v73; // [rsp+1A0h] [rbp+A0h]
  __int64 v74; // [rsp+1A8h] [rbp+A8h]
  __int128 v75; // [rsp+1B0h] [rbp+B0h]
  int v76; // [rsp+1C0h] [rbp+C0h]
  __int64 v77; // [rsp+1C8h] [rbp+C8h]
  __int128 v78; // [rsp+1D0h] [rbp+D0h]

  v48 = a4;
  v6 = a3;
  v45 = a6;
  v57 = 0LL;
  v58 = 0LL;
  v9 = 0;
  *(_OWORD *)pvar = 0LL;
  v51 = 0LL;
  v62[0] = 8000;
  v62[1] = 11025;
  v62[2] = 16000;
  v62[3] = 22050;
  v62[4] = 24000;
  v62[5] = 32000;
  v62[6] = 44100;
  v62[7] = 48000;
  v62[8] = 88200;
  v62[9] = 96000;
  v62[10] = 176400;
  v62[11] = 192000;
  v62[12] = 352800;
  v62[13] = 384000;
  v63[0] = _mm_load_si128((const __m128i *)&_xmm);
  v63[1] = _mm_load_si128((const __m128i *)&_xmm);
  v64 = 32;
  v65 = 32;
  v66[0] = 0;
  v67 = 0LL;
  v68 = unk_1801777A0;
  v69 = unk_1801777C0;
  v70 = 0;
  v71 = 0LL;
  v72 = unk_1801777E0;
  v73 = 0;
  v74 = 0LL;
  v75 = unk_1801777B0;
  v76 = 0;
  v77 = 0LL;
  v78 = unk_1801777D0;
  v10 = 0LL;
  v53 = 0LL;
  CEndpointCharacteristics::HasHardwareAudioEngine((CEndpointCharacteristics *)a1);
  pv = 0LL;
  *(_OWORD *)v59 = *(_OWORD *)a6;
  v60 = *(__m256i *)(a6 + 16);
  v61 = *(_OWORD *)(a6 + 48);
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
    (int)a1,
    (__int64)v59,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  *(_OWORD *)v59 = *(_OWORD *)v45;
  v60 = *(__m256i *)(v45 + 16);
  v61 = *(_OWORD *)(v45 + 48);
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
    (int)a1,
    (__int64)v59,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  v52 = *a5;
  ProposedConnectorFormatForProcessingMode = GetProposedConnectorFormatForProcessingMode(
                                               g_DeviceEnumerator,
                                               a1[9],
                                               a2,
                                               &v52,
                                               (struct tWAVEFORMATEX **)&pv);
  v12 = pv;
  if ( ProposedConnectorFormatForProcessingMode >= 0
    && *((_WORD *)pv + 7)
    && *((_DWORD *)pv + 2)
    && *((_WORD *)pv + 6)
    && *((_WORD *)pv + 1) )
  {
    v13 = v45;
    if ( *((_DWORD *)pv + 1) )
    {
      v9 = lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(v45, pv, 0LL);
      if ( v9 < 0 )
      {
        v18 = v12;
        goto LABEL_15;
      }
    }
  }
  else
  {
    v13 = v45;
  }
  CoTaskMemFree(v12);
  *(_QWORD *)&v52.Data1 = 0LL;
  if ( ((int (__fastcall *)(struct IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))a1[9]->lpVtbl->GetValue)(
         a1[9],
         &PKEY_AudioEngine_DeviceFormat,
         pvar) >= 0
    && LODWORD(pvar[1]) >= 0x12
    && LOWORD(pvar[0]) == 65 )
  {
    v14 = v51;
    if ( LODWORD(pvar[1]) == v51->cbSize + 18LL )
    {
      v9 = ValidateWaveFormatEx(v51);
      if ( v9 >= 0 )
      {
        v9 = lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(v13, v14, 0LL);
        if ( v9 < 0 )
        {
          v18 = 0LL;
LABEL_15:
          CoTaskMemFree(v18);
          goto LABEL_16;
        }
      }
    }
  }
  PropVariantClear(pvar);
  CoTaskMemFree(0LL);
  v15 = (unsigned int)(3 * v6);
  *(_QWORD *)&v52.Data1 = v15;
  v10 = (char *)operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
  v53 = v10;
  if ( v10 )
  {
    for ( i = 0; (unsigned int)i < 9; ++i )
    {
      v55 = 16LL * i;
      v17 = (int)v66[v55 / 4];
      if ( (_DWORD)v17 )
      {
        memset_0(v10, 1, v15);
        if ( IsViableChannelCount(v6, v48, i, (bool *)v10) )
        {
          v20 = 0LL;
          v21 = v17;
          for ( j = v17; ; v21 = j )
          {
            pv = v20;
            if ( (__int64)v20 >= v21 )
              break;
            v22 = 0;
            for ( k = v62; ; k = v24 + 1 )
            {
              v47 = v22;
              if ( v22 >= 0xE )
                break;
              v23 = v6;
              Src = &v10[v6];
              memcpy_0(&v10[v6], v10, v6);
              v24 = k;
              v25 = *k;
              v26 = v48;
              v27 = 0;
              if ( !(_DWORD)v6 )
                goto LABEL_24;
              v40 = &v10[v6];
              do
              {
                v41 = (union KSDATAFORMAT *)((char *)v26 + v26->FormatSize);
                if ( *v40 )
                {
                  v42 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *(&v26->Alignment + 2);
                  if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *(&v26->Alignment + 2) )
                    v42 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *(&v26->Alignment + 3);
                  if ( v42 )
                    goto LABEL_51;
                  v43 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(&v26->Alignment + 4);
                  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(&v26->Alignment + 4) )
                    v43 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(&v26->Alignment + 5);
                  if ( v43 || v25 < v26[1].Reserved || v25 > v26[1].MajorFormat.Data1 )
                  {
LABEL_51:
                    *v40 = 0;
                  }
                  else
                  {
                    *v40 = 1;
                    v27 = 1;
                  }
                }
                ++v40;
                v26 = v41;
                --v23;
              }
              while ( v23 );
              if ( v27 )
              {
LABEL_24:
                v28 = 0;
                for ( m = (int *)v63 + 1; ; m += 2 )
                {
                  v46 = v28;
                  if ( v28 >= 5 )
                    break;
                  v30 = &v10[(unsigned int)(2 * v6)];
                  memcpy_0(v30, Src, v6);
                  v31 = *(m - 1);
                  v32 = v48;
                  v33 = 0;
                  if ( !(_DWORD)v6 )
                    goto LABEL_74;
                  v34 = v6;
                  do
                  {
                    v35 = (union KSDATAFORMAT *)((char *)v32 + v32->FormatSize);
                    if ( *v30 )
                    {
                      v36 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *(&v32->Alignment + 2);
                      if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *(&v32->Alignment + 2) )
                        v36 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *(&v32->Alignment + 3);
                      if ( v36 )
                        goto LABEL_32;
                      v39 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(&v32->Alignment + 4);
                      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(&v32->Alignment + 4) )
                        v39 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(&v32->Alignment + 5);
                      if ( v39 || v31 < v32[1].Flags || v31 > v32[1].SampleSize )
                      {
LABEL_32:
                        *v30 = 0;
                      }
                      else
                      {
                        *v30 = 1;
                        v33 = 1;
                      }
                    }
                    ++v30;
                    v32 = v35;
                    --v34;
                  }
                  while ( v34 );
                  if ( v33 )
                  {
LABEL_74:
                    *(_OWORD *)v59 = 0LL;
                    memset(&v60, 0, 24);
                    v37 = *(_DWORD *)(*(__int64 *)((char *)&v67 + v55) + 4LL * (_QWORD)pv);
                    v38 = *m;
                    if ( !v37 && i <= 2 )
                      v37 = 4 - (i != 1);
                    v60.m256i_i16[1] = v31;
                    v60.m256i_i32[1] = v37;
                    *(GUID *)&v60.m256i_u64[1] = GUID_00000001_0000_0010_8000_00aa00389b71;
                    LOWORD(v59[0]) = -2;
                    HIWORD(v59[1]) = v38;
                    v60.m256i_i16[0] = 22;
                    WORD1(v59[0]) = i;
                    HIDWORD(v59[0]) = v25;
                    WORD2(v59[1]) = i * ((unsigned __int16)v38 >> 3);
                    LODWORD(v59[1]) = v25 * WORD2(v59[1]);
                    v9 = lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(v45, v59, 0LL);
                    if ( v9 < 0 )
                      goto LABEL_16;
                  }
                  v28 = v46 + 1;
                }
                v24 = k;
              }
              v22 = v47 + 1;
            }
            v20 = (char *)pv + 1;
          }
          v15 = *(_QWORD *)&v52.Data1;
        }
      }
    }
  }
  else
  {
    v9 = -2147024882;
  }
LABEL_16:
  PropVariantClear(pvar);
  operator delete(v10, (const struct std::nothrow_t *)1);
  return (unsigned int)v9;
}
