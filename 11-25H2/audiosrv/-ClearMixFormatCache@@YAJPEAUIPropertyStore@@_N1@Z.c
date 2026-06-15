/*
 * XREFs of ?ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z @ 0x180041234
 * Callers:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180040B34 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180040B98 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ClearMixFormatCache(struct IPropertyStore *a1, char a2, char a3)
{
  __int64 v6; // rdx
  unsigned int i; // esi
  unsigned int j; // ecx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int k; // eax
  __int64 v13; // rcx
  unsigned int m; // ecx
  __int64 v15; // rax
  int v16; // eax
  unsigned int n; // eax
  __int64 v18; // rcx
  unsigned int ii; // edi
  unsigned int jj; // ecx
  __int64 v21; // rax
  int v22; // eax
  unsigned int kk; // ecx
  __int64 v24; // rax
  int v25; // eax
  unsigned int mm; // edi
  unsigned int nn; // ecx
  __int64 v28; // rax
  int v29; // eax
  unsigned int i1; // ecx
  __int64 v31; // rax
  int v32; // eax
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37[2]; // [rsp+20h] [rbp-99h] BYREF
  __int128 v38; // [rsp+30h] [rbp-89h]
  __int128 v39; // [rsp+40h] [rbp-79h] BYREF
  __int64 v40; // [rsp+50h] [rbp-69h]
  __int128 v41; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v42; // [rsp+68h] [rbp-51h]
  __int128 v43; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v44; // [rsp+80h] [rbp-39h]
  __int128 v45; // [rsp+88h] [rbp-31h] BYREF
  unsigned int v46; // [rsp+98h] [rbp-21h]
  __int128 v47; // [rsp+A0h] [rbp-19h] BYREF
  unsigned int v48; // [rsp+B0h] [rbp-9h]
  __int128 v49; // [rsp+B8h] [rbp-1h] BYREF
  unsigned int v50; // [rsp+C8h] [rbp+Fh]
  __int128 v51; // [rsp+D0h] [rbp+17h] BYREF
  unsigned int v52; // [rsp+E0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v39 = 0LL;
  v40 = 0LL;
  v37[0] = 0LL;
  ((void (__fastcall *)(struct IPropertyStore *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
    a1,
    &GUID_95b0d208_7331_44a7_82d7_98408a20c299,
    v37);
  if ( a2 )
  {
    if ( v37[0] )
      v34 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, __int128 *))(*(_QWORD *)v37[0] + 64LL))(
              v37[0],
              &PKEY_AudioEngine_HWMixFormat,
              &v39);
    else
      v34 = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, __int128 *))a1->lpVtbl->SetValue)(
              a1,
              &PKEY_AudioEngine_HWMixFormat,
              &v39);
    v11 = v34;
    if ( v34 < 0 )
    {
      v36 = 200LL;
    }
    else
    {
      if ( v37[0] )
        v35 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, __int128 *))(*(_QWORD *)v37[0] + 64LL))(
                v37[0],
                &PKEY_AudioEngine_MixFormat,
                &v39);
      else
        v35 = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, __int128 *))a1->lpVtbl->SetValue)(
                a1,
                &PKEY_AudioEngine_MixFormat,
                &v39);
      v11 = v35;
      if ( v35 >= 0 )
        goto LABEL_2;
      v36 = 204LL;
    }
LABEL_112:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
      (const char *)v11);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v37);
    return v11;
  }
LABEL_2:
  for ( i = 0; i < 0xA; ++i )
  {
    if ( a2 )
    {
      v41 = 0LL;
      v42 = 0;
      v38 = xmmword_180186BA0[i];
      for ( j = 0; ; ++j )
      {
        if ( j >= 0xA )
        {
          v11 = -2147023728;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xD5,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
            (const char *)0x80070490LL);
          if ( v37[0] )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v37[0] + 16LL))(v37[0]);
          return v11;
        }
        v9 = *(_QWORD *)&xmmword_180186BA0[j] - v38;
        if ( !v9 )
          v9 = *((_QWORD *)&xmmword_180186BA0[j] + 1) - *((_QWORD *)&v38 + 1);
        if ( !v9 )
          break;
      }
      v41 = PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
      v42 = j + 2;
      if ( v37[0] )
        v10 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v37[0] + 64LL))(
                v37[0],
                &v41,
                &v39);
      else
        v10 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *))a1->lpVtbl->SetValue)(
                a1,
                &v41,
                &v39);
      v11 = v10;
      if ( v10 < 0 )
      {
        v36 = 216LL;
        goto LABEL_112;
      }
      v38 = xmmword_180186BA0[i];
      for ( k = 0; k < 0xA; ++k )
      {
        v6 = 2LL * k;
        v13 = *(_QWORD *)&xmmword_180186BA0[k] - v38;
        if ( !v13 )
          v13 = *((_QWORD *)&xmmword_180186BA0[k] + 1) - *((_QWORD *)&v38 + 1);
        if ( !v13 )
        {
          v41 = PKEY_AudioEngine_SignalProcessingMode_Specific_OverridingMixFormat;
          v42 = k + 2;
          if ( v37[0] )
            (*(void (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v37[0] + 64LL))(v37[0], &v41, &v39);
          else
            ((void (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *))a1->lpVtbl->SetValue)(a1, &v41, &v39);
          break;
        }
      }
    }
    if ( a3 )
    {
      v43 = 0LL;
      v44 = 0;
      v38 = xmmword_180186BA0[i];
      for ( m = 0; ; ++m )
      {
        if ( m >= 0xA )
        {
          v36 = 228LL;
          goto LABEL_111;
        }
        v15 = *(_QWORD *)&xmmword_180186BA0[m] - v38;
        if ( !v15 )
          v15 = *((_QWORD *)&xmmword_180186BA0[m] + 1) - *((_QWORD *)&v38 + 1);
        if ( !v15 )
          break;
      }
      v43 = PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
      v44 = m + 602;
      if ( v37[0] )
        v16 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v37[0] + 64LL))(
                v37[0],
                &v43,
                &v39);
      else
        v16 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *))a1->lpVtbl->SetValue)(
                a1,
                &v43,
                &v39);
      v11 = v16;
      if ( v16 < 0 )
      {
        v36 = 231LL;
        goto LABEL_112;
      }
      v38 = xmmword_180186BA0[i];
      for ( n = 0; n < 0xA; ++n )
      {
        v6 = 2LL * n;
        v18 = *(_QWORD *)&xmmword_180186BA0[n] - v38;
        if ( !v18 )
          v18 = *((_QWORD *)&xmmword_180186BA0[n] + 1) - *((_QWORD *)&v38 + 1);
        if ( !v18 )
        {
          v43 = PKEY_AudioEngine_SignalProcessingMode_Specific_OverridingMixFormat;
          v44 = n + 602;
          if ( v37[0] )
            (*(void (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v37[0] + 64LL))(v37[0], &v43, &v39);
          else
            ((void (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *))a1->lpVtbl->SetValue)(a1, &v43, &v39);
          break;
        }
      }
    }
  }
  for ( ii = 0; ii < 0xA; ++ii )
  {
    if ( a2 )
    {
      v45 = 0LL;
      v46 = 0;
      v38 = xmmword_180186BA0[ii];
      for ( jj = 0; ; ++jj )
      {
        if ( jj >= 0xA )
        {
          v36 = 247LL;
          goto LABEL_111;
        }
        v21 = *(_QWORD *)&xmmword_180186BA0[jj] - v38;
        if ( !v21 )
          v21 = *((_QWORD *)&xmmword_180186BA0[jj] + 1) - *((_QWORD *)&v38 + 1);
        if ( !v21 )
          break;
      }
      v45 = PKEY_AudioEngine_SignalProcessingMode_Specific_DevicePipeFormat;
      v46 = jj + 2;
      v22 = v37[0]
          ? (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v37[0] + 64LL))(v37[0], &v45, &v39)
          : ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *))a1->lpVtbl->SetValue)(
              a1,
              &v45,
              &v39);
      v11 = v22;
      if ( v22 < 0 )
      {
        v36 = 250LL;
        goto LABEL_112;
      }
    }
    if ( a3 )
    {
      v47 = 0LL;
      v48 = 0;
      v38 = xmmword_180186BA0[ii];
      for ( kk = 0; ; ++kk )
      {
        if ( kk >= 0xA )
        {
          v36 = 256LL;
          goto LABEL_111;
        }
        v24 = *(_QWORD *)&xmmword_180186BA0[kk] - v38;
        if ( !v24 )
          v24 = *((_QWORD *)&xmmword_180186BA0[kk] + 1) - *((_QWORD *)&v38 + 1);
        if ( !v24 )
          break;
      }
      v47 = PKEY_AudioEngine_SignalProcessingMode_Specific_DevicePipeFormat;
      v48 = kk + 602;
      v25 = v37[0]
          ? (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v37[0] + 64LL))(v37[0], &v47, &v39)
          : ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *))a1->lpVtbl->SetValue)(
              a1,
              &v47,
              &v39);
      v11 = v25;
      if ( v25 < 0 )
      {
        v36 = 259LL;
        goto LABEL_112;
      }
    }
  }
  for ( mm = 0; mm < 0xA; ++mm )
  {
    if ( a2 )
    {
      v49 = 0LL;
      v50 = 0;
      v38 = xmmword_180186BA0[mm];
      for ( nn = 0; ; ++nn )
      {
        if ( nn >= 0xA )
        {
          v36 = 269LL;
LABEL_111:
          v11 = -2147023728;
          goto LABEL_112;
        }
        v28 = *(_QWORD *)&xmmword_180186BA0[nn] - v38;
        if ( !v28 )
          v28 = *((_QWORD *)&xmmword_180186BA0[nn] + 1) - *((_QWORD *)&v38 + 1);
        if ( !v28 )
          break;
      }
      v49 = PKEY_AudioEngine_SignalProcessingMode_Specific_StreamGroupFormat;
      v50 = nn + 2;
      if ( v37[0] )
        v29 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v37[0] + 64LL))(
                v37[0],
                &v49,
                &v39);
      else
        v29 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *))a1->lpVtbl->SetValue)(
                a1,
                &v49,
                &v39);
      v11 = v29;
      if ( v29 < 0 )
      {
        v36 = 272LL;
        goto LABEL_112;
      }
    }
    if ( a3 )
    {
      v51 = 0LL;
      v52 = 0;
      v38 = xmmword_180186BA0[mm];
      for ( i1 = 0; ; ++i1 )
      {
        if ( i1 >= 0xA )
        {
          v36 = 278LL;
          goto LABEL_111;
        }
        v31 = *(_QWORD *)&xmmword_180186BA0[i1] - v38;
        if ( !v31 )
          v31 = *((_QWORD *)&xmmword_180186BA0[i1] + 1) - *((_QWORD *)&v38 + 1);
        if ( !v31 )
          break;
      }
      v51 = PKEY_AudioEngine_SignalProcessingMode_Specific_StreamGroupFormat;
      v52 = i1 + 602;
      v32 = v37[0]
          ? (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v37[0] + 64LL))(v37[0], &v51, &v39)
          : ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, __int128 *))a1->lpVtbl->SetValue)(
              a1,
              &v51,
              &v39);
      v11 = v32;
      if ( v32 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x119,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)(unsigned int)v32);
        if ( v37[0] )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v37[0] + 16LL))(v37[0]);
        return v11;
      }
    }
  }
  if ( v37[0] )
    (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v37[0] + 16LL))(v37[0], v6, xmmword_180186BA0);
  return 0LL;
}
